#include "recorderthread.h"
//#include <QDebug>
RecorderThread::RecorderThread()
{
    delOldFilesFlag = false;
    lastSecond = -1;
}

RecorderThread::~RecorderThread()
{
    mutex.lock();
    abort = true;
    condition.wakeOne();
    mutex.unlock();
}

void RecorderThread::render()
{
    if( !isRunning() ) {
        start();
    }else{
        restart = true;
        condition.wakeOne();
    } //end
}

void RecorderThread::run()
{
    forever
    {
        if(!delOldFilesFlag)
        {
            delOldRecorder();
            delOldFilesFlag = true;
        }
        writeRecorder();
        msleep(200);
    } // end
    mutex.lock();
    if( !restart )
        condition.wait( &mutex );
    restart = false;
    mutex.unlock();
}

void RecorderThread::writeRecorder()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    if( lastSecond!=currentDateTime.time().second() )
    {
        lastSecond = currentDateTime.time().second();

        // check screen update function work
        if(screenUpdateCntBack != screenUpdateCnt)
        {
            screenUpdateCntBack = screenUpdateCnt;
        }
        else
        {
            emit restartScreenUptateSignal();
        }

        if ( !(MAIN_EMGCBRAKESTATE_BOOL) )
        {
            gearLevel = 8;
        }
        else if( !(MAIN_BRAKESTATE_BOOL) )
        {// brake
            if( MAIN_BRAKECODE1_BOOL && MAIN_BRAKECODE2_BOOL && MAIN_BRAKECODE3_BOOL ) // 111
            {
                gearLevel = 7;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL) && MAIN_BRAKECODE2_BOOL && MAIN_BRAKECODE3_BOOL ) // 011
            {
                gearLevel = 6;
            }
            else if ( MAIN_BRAKECODE1_BOOL && !(MAIN_BRAKECODE2_BOOL) && MAIN_BRAKECODE3_BOOL ) // 101
            {
                gearLevel = 5;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL ) && !(MAIN_BRAKECODE2_BOOL) && MAIN_BRAKECODE3_BOOL ) // 001
            {
                gearLevel = 4;
            }
            else if ( MAIN_BRAKECODE1_BOOL && MAIN_BRAKECODE2_BOOL && !(MAIN_BRAKECODE3_BOOL) ) // 110
            {
                gearLevel = 3;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL )&& MAIN_BRAKECODE2_BOOL && !(MAIN_BRAKECODE3_BOOL )) // 010
            {
                gearLevel = 2;
            }
            else if ( MAIN_BRAKECODE1_BOOL && !(MAIN_BRAKECODE2_BOOL) && !(MAIN_BRAKECODE3_BOOL )) // 100
            {
                gearLevel = 1;
            }
            else
            {
                gearLevel = 0;
            }
        }
        else if ( MAIN_TRACTIONSTATE_BOOL )
        {
            if ( MAIN_TRACTIONCODE1_BOOL && !(MAIN_TRACTIONCODE2_BOOL) && !(MAIN_TRACTIONCODE3_BOOL) && !(MAIN_TRACTIONCODE4_BOOL )) // 1000
            {
                gearLevel = 11;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && !(MAIN_TRACTIONCODE3_BOOL) && !(MAIN_TRACTIONCODE4_BOOL )) // 1100
            {
                gearLevel = 12;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && MAIN_TRACTIONCODE3_BOOL && !(MAIN_TRACTIONCODE4_BOOL )) // 1110
            {
                gearLevel = 13;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && MAIN_TRACTIONCODE3_BOOL && MAIN_TRACTIONCODE4_BOOL ) // 1111
            {
                gearLevel = 14;
            }
            else
            {
                gearLevel = 0;
            }
        }
        else
        {
            gearLevel = 0;
        }

        //create csvFile

//         QString fileNameRunData = "./data/rundata" + currentDateTime.date().toString("yyyy_MM_dd") + ".csv";
//         QFile csvFileRunData( fileNameRunData );
//        //if(!(csvFileRunData.exists()))
//        {
//            if( !csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
//            {
//                return;
//            }
//            QTextStream inoutRunData( &csvFileRunData );
//            inoutRunData.setCodec("GB2312");
//        }

         QString fileNameRunData = "./data/rundata" + currentDateTime.date().toString("yyyy_MM_dd") + ".csv";
         QFile csvFileRunData( fileNameRunData );

         //if(csvFileRunData.exists())


             if( !csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
             {
                 return;
             }
             QTextStream inoutRunData( &csvFileRunData );
             inoutRunData.setCodec("GB2312");


        QString dateTimeStr = currentDateTime.toString("yyyy_MM_dd,HH:mm:ss");

        QString newLine = dateTimeStr;
        QString str;
        BYTE tmpByte;
        int lineDataLen = 35;
        quint32 lineData[lineDataLen];
        for(int i=0;i<lineDataLen;i++)
            lineData[i] = 0;

        // bool
        lineData[0] = receiveData[3]*256*256*256+receiveData[2]*256*256+receiveData[1]*256+receiveData[0];

        lineData[1] = receiveData[7]*256*256*256+receiveData[6]*256*256+receiveData[5]*256+receiveData[4];

        lineData[2] = receiveData[15]*256*256*256+receiveData[14]*256*256+receiveData[13]*256+receiveData[8];

        lineData[3] = receiveData[26]*256*256*256+receiveData[25]*256*256+receiveData[24]*256+receiveData[16];

        lineData[4] = receiveData[30]*256*256*256+receiveData[29]*256*256+receiveData[28]*256+receiveData[27];

        lineData[5] = receiveData[38]*256*256*256+receiveData[37]*256*256+receiveData[32]*256+receiveData[31];

        lineData[6] = (receiveData[62]>>4+receiveData[68]&0xf0)*256*256*256+receiveData[48]*256*256+receiveData[40]*256+receiveData[39];

        tmpByte = bitToByte( receiveData[150]&bit0, 0 ) + bitToByte( receiveData[150]&bit1, 1 ) +
                   bitToByte( receiveData[159]&bit0, 2 ) + bitToByte( receiveData[159]&bit1, 3 ) +
                   bitToByte( receiveData[172]&bit0, 4 ) + bitToByte( receiveData[172]&bit1, 5 ) +
                   bitToByte( receiveData[181]&bit0, 6 ) + bitToByte( receiveData[181]&bit1, 7 );
        lineData[7] += ( (quint32)tmpByte*256*256*256 );
        lineData[7] =(receiveData[98]>>4+receiveData[104]&0xf0)*256*256+(receiveData[92]>>4+receiveData[86]&0xf0)*256+(receiveData[74]>>4+receiveData[80]&0xf0);

        lineData[8] = receiveData[214]*256*256*256+receiveData[206]*256*256+receiveData[197]*256+receiveData[196];

        lineData[9] = receiveData[233]*256*256*256+receiveData[232]*256*256+receiveData[224]*256+receiveData[215];

        lineData[10] = receiveData[260]*256*256*256+receiveData[251]*256*256+receiveData[250]*256+receiveData[242];

        lineData[11] = receiveData[365]*256*256*256+receiveData[364]*256*256+receiveData[363]*256+receiveData[362];

        lineData[12] = receiveData[369]*256*256*256+receiveData[368]*256*256+receiveData[367]*256+receiveData[366];

        lineData[13] = receiveData[381]*256*256*256+receiveData[380]*256*256+receiveData[379]*256+receiveData[378];

        lineData[14] = receiveData[385]*256*256*256+receiveData[384]*256*256+receiveData[383]*256+receiveData[382];

        lineData[15] = receiveData[389]*256*256*256+receiveData[388]*256*256+receiveData[387]*256+receiveData[386];

        lineData[16] = 0;

        lineData[17] = receiveData[33]*256*256*256+receiveData[11]*256*256+receiveData[10]*256+receiveData[9];

        lineData[18] = receiveData[60]*256*256*256+receiveData[49]*256*256+receiveData[35]*256+receiveData[34];

        lineData[19] = receiveData[157]*256*256*256+receiveData[156]*256*256+receiveData[140]*256+receiveData[61];

        lineData[20] = receiveData[190]*256*256*256+receiveData[180]*256*256+receiveData[179]*256+receiveData[178];

        lineData[21] = receiveData[209]*256*256*256+receiveData[208]*256*256+receiveData[207]*256+receiveData[191];

        lineData[22] = receiveData[243]*256*256*256+receiveData[227]*256*256+receiveData[226]*256+receiveData[225];

        lineData[23] = receiveData[352]*256*256*256+receiveData[261]*256*256+receiveData[245]*256+receiveData[244];

        lineData[24] = receiveData[360]*256*256*256+receiveData[359]*256*256+receiveData[358]*256+receiveData[353];

        lineData[25] = 0;


        lineData[26] = receiveData[149]*256*256*256+receiveData[148]*256*256+receiveData[147]*256+receiveData[146];

        lineData[27] = receiveData[169]*256*256*256+receiveData[168]*256*256+receiveData[161]*256+receiveData[160];

        lineData[28] = receiveData[183]*256*256*256+receiveData[182]*256*256+receiveData[171]*256+receiveData[170];

        lineData[29] = receiveData[195]*256*256*256+receiveData[194]*256*256+receiveData[193]*256+receiveData[192];

        lineData[30] = receiveData[213]*256*256*256+receiveData[212]*256*256+receiveData[211]*256+receiveData[210];

        lineData[31] = receiveData[231]*256*256*256+receiveData[230]*256*256+receiveData[229]*256+receiveData[228];

        lineData[32] = receiveData[249]*256*256*256+receiveData[248]*256*256+receiveData[247]*256+receiveData[246];

        lineData[33] = receiveData[377]*256*256*256+receiveData[376]*256*256+receiveData[351]*256+receiveData[350];

        lineData[34] = receiveData[357]*256*256*256+receiveData[356]*256*256+receiveData[355]*256+receiveData[354];




        for(int i=0;i<lineDataLen;i++)
        {
            str.clear();
            newLine += ",";
            newLine += str.setNum(lineData[i],16);
        }

        inoutRunData << newLine << "\n";

        inoutRunData.flush();//clear

        csvFileRunData.close();
    }
}
BYTE RecorderThread::bitToByte( bool bit, quint8 offset )
{
    BYTE result = 0;
    switch( offset )
    {
    case 0:
        result = BYTE(bit);
        break;
    case 1:
        result = BYTE(bit)*2;
        break;
    case 2:
        result = BYTE(bit)*4;
        break;
    case 3:
        result = BYTE(bit)*8;
        break;
    case 4:
        result = BYTE(bit)*16;
        break;
    case 5:
        result = BYTE(bit)*32;
        break;
    case 6:
        result = BYTE(bit)*64;
        break;
    case 7:
        result = BYTE(bit)*128;
        break;
    default:
        break;
    }
    return result;
}
void RecorderThread::delOldRecorder()
{
    QDir dir("./data");
    QStringList fileList;
    if(!dir.exists())
        return;

    dir.setFilter(QDir::Files);
    dir.setSorting(QDir::Name |QDir::Reversed);

    fileList = dir.entryList(QDir::NoDotAndDotDot | QDir::Files);

//    qDebug() << fileList.size();
    if(fileList.size()>7) // file number more than 7
    {
        for(int i=7; i<fileList.size(); i++)
        {
//            qDebug() << fileList.at(i);
            dir.remove(fileList.at(i));
        }
    }
//    qDebug() << "\n";
}
