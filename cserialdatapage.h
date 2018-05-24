#ifndef CSERIALDATAPAGE_H
#define CSERIALDATAPAGE_H

#include "cpage.h"

#define IDBUTTON_REVDATA      0x2101
#define IDBUTTON_SENDDATA     0x2102
#define IDLABEL_232_NUM       0x2103

#define LABEL_ID_DEBUG_CURRENT_STATION_CODE 0x2104
#define LABEL_ID_DEBUG_NEXT_STATION_CODE 0x2105
#define LABEL_ID_DEBUG_TRAIN_PRERUN 0x2106
#define LABEL_ID_DEBUG_TRAIN_RUN 0x2107
#define LABEL_ID_DEBUG_TRAIN_PREARRIVE 0x2108
#define LABEL_ID_DEBUG_TRAIN_ARRIVE 0x2109

#define LABEL_ID_DEBUG_MILEAGUE 0x210A
#define LABEL_ID_DEBUG_CURRENT_LINE 0x210B

class CSerialDataPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CSerialDataPage)
public:
    CSerialDataPage();

private:
    bool m_bStopRevData;
    bool m_bStopSendData;
    void DrawSerialData();

protected:
    void OnInitPage();
    void OnUpdatePage();
    void OnRevButtonDown();
    void OnSendButtonDown();
};

#endif // CSERIALDATAPAGE_H
