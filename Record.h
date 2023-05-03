#pragma once

#include "ActionLogger.h"
#include "GlobalVariables.h"

class Record {
public:

    std::string id;             // id inside the table controller record
    int controllerId;           // serial number of the record inside the controller
    int year;                   // year record is created
    std::string month;          // month record is created
    std::string day;            // day record is created
    std::string hour;           // hour record is created
    std::string minute;         // minute record is created
    std::string second;         // second record is created
    float voltageLine12;       // voltage between line 1 and 2
    float voltageLine23;       // voltage between line 2 and 3
    float voltageLine31;       // voltage between line 3 and 1
    float currentLine1;        // current in line 1
    float currentLine2;        // current in line 2
    float currentLine3;        // current in line 3
    float combinatedPower;     // combinated power factor for line 1+2+3
    float activePower;         // active power for line 1+2+3
    float reactivePower;       // reactive power for line 1+2+3
    float apparentPower;       // apparent power for line 1+2+3
    float calculatedPower;     // calculated power for line 1+2+3

    Record();

    Record(std::string id, int controllerId, int year, std::string month, std::string day, std::string hour, std::string minute, std::string second, float voltageLine12, float voltageLine23, float voltageLine31, float currentLine1, float currentLine2, float currentLine3, float combinatedPower, float activePower, float reactivePower, float apparentPower, float calculatedPower);

    ~Record() {};

    void valuesSendToStream(std::ostringstream& oStr);

};

Record::Record(std::string id, int controllerId, int year, std::string month, std::string day, std::string hour, std::string minute, std::string second, float voltageLine12, float voltageLine23, float voltageLine31, float currentLine1, float currentLine2, float currentLine3, float combinatedPower, float activePower, float reactivePower, float apparentPower, float calculatedPower) {

    if (id.size() == 3)
        this->id = id;
    else if (id.size() == 2)
        this->id = " " + id;
    else if (id.size() == 1)
        this->id = "  " + id;
    this->controllerId = controllerId; 
    this->year = year;
    this->month = month;
    this->day = day;
    this->hour = hour;
    this->minute = minute;
    this->second = second;

    this->voltageLine12 = voltageLine12;
    this->voltageLine23 = voltageLine23;
    this->voltageLine31 = voltageLine31;
    this->currentLine1 = currentLine1;
    this->currentLine2 = currentLine2;
    this->currentLine3 = currentLine3;
    this->combinatedPower = combinatedPower;
    this->activePower = activePower;
    this->reactivePower = reactivePower;
    this->apparentPower = apparentPower;
    this->calculatedPower = calculatedPower;

}


void Record::valuesSendToStream(std::ostringstream& oStr)

{
    oStr <<
        this->id << ' ' <<
        this->controllerId << ' ' <<
        this->day << '/' <<
        this->month << '/' <<
        (this->year - 2000) << ' ' <<
        this->hour << ':' <<
        this->minute << ':' <<
        this->second << ' ';

    oStr << std::fixed;
    oStr << std::setprecision(2);

    oStr <<
        this->voltageLine12 << 'V' << ' ' <<
        this->voltageLine23 << 'V' << ' ' <<
        this->voltageLine31 << 'V' << ' ' <<
        this->currentLine1 << 'A' << ' ' <<
        this->currentLine2 << 'A' << ' ' <<
        this->currentLine3 << 'A' << ' ' <<
        this->combinatedPower << 'W' << ' ' <<
        this->activePower << 'W' << ' ' <<
        this->reactivePower << 'W' <<
        std::endl;
}
