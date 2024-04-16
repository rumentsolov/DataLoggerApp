#ifndef READH_H
#define READH_H

#include <iomanip>
#include <sstream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <windows.h>

#include "Hoist.h"
#include "ComInit.h"
#include "Processment.h"

using namespace System;
using namespace System::Windows::Forms;





void operateHoistFile() { // Since sometimes provides me errors when working with csv file I anyway have to create raw text file by requirements and I use that file to analyze the data


    int counter = 0; // counts the rows readed from the input file

    std::ifstream hoistTxtFile;
    hoistTxtFile.open(hoistFile);
    std::string line;
    int startUpCurrent = 0; // this will indicate if the current is the Startup -> every first record after 0.00 in current is startup

    float line1tmp, line2tmp, line3tmp;

    line1tmp = line2tmp = line3tmp = 15.00;

    while (getline(hoistTxtFile, line)) // its easy and better to read  and process with my own txt file 
    {
        counter++;
        if (counter > 2) { // skipping first 2 rows from file

            for (size_t i = 0; i < line.size(); i++) if (line[i] == ',') line[i] = ' ';

            int         HoistNO;
            std::string      HoistSalesDescription;
            float       Tons;
            float       Meters;
            std::string      FEM;
            std::string      SERIE;
            std::string	    ROLLZ;
            int	        RopeD;
            std::string	    TYPE;
            float	    LSp;
            float       LSp2;
            float       CtSp;
            float       CtSp2;
            int         CTpcs;
            std::string      OVR;
            std::string      LMModel;
            std::string	    LType;
            float       LNomI;
            float       L1stkW;
            float       L2ndkW;
            float       LVoltage;
            std::string      LSPEED;
            std::string      LIP;
            std::string      LMODEL2;
            std::string      LBRAKE;
            std::string      LFR;
            std::string      L1stPole;
            std::string      L2ndPole;
            std::string      CMModel;
            std::string	    CType;
            float       CNomI;
            float       C1stkW;
            float       C2ndkW;
            float       CVoltage;
            std::string      CSPEED;
            std::string      CIP;
            std::string      CMODEL2;
            std::string      CBRAKE;
            std::string      CFR;
            std::string      C1stPole;
            std::string      C2ndPole;


            // skipping id & controllerId
            sStr >> id >> controllerId >> dateDtmp;

            for (size_t i = 0; i < dateDtmp.size(); i++) if (dateDtmp[i] == '/') dateDtmp[i] = ' ';
            std::stringstream sStrDate(dateDtmp);

            sStrDate >> day >> month >> year;

            sStr >> timeDtmp;

            for (size_t i = 0; i < timeDtmp.size(); i++) if (timeDtmp[i] == ':') timeDtmp[i] = ' ';
            std::stringstream sStrTime(timeDtmp);

            sStrTime >> hour >> minute >> second;

            sStr.precision(2);

            sStr >> voltageLine12 >> voltageLine23 >> voltageLine31 >> currentLine1 >> currentLine2 >> currentLine3 >> combinatedPower >> activePower >> reactivePower >> apparentPower;
            //sStr >> calculatedPowtmp;

            size_t i = newRecords.size();

            if (i == 1) {
                line1tmp = currentLine1;
                line2tmp = currentLine2;
                line3tmp = currentLine3;
            }

            if (
                line1tmp * startupCurrentFactor > currentLine1 &&
                line2tmp * startupCurrentFactor > currentLine2 &&
                line3tmp * startupCurrentFactor > currentLine3 &&

                line1tmp / startupCurrentFactor < currentLine1 &&
                line2tmp / startupCurrentFactor < currentLine2 &&
                line3tmp / startupCurrentFactor < currentLine3
                )
            {

                if (currentLine1 != 0.00 && currentLine2 != 0.00 && currentLine3 != 0.00 && startUpCurrent >= 1)
                {
                    Record curRecord(id, controllerId, year, month, day, hour, minute, second, voltageLine12, voltageLine23, voltageLine31, currentLine1, currentLine2, currentLine3, combinatedPower, activePower, reactivePower, apparentPower, 0);
                    startUpCurrent++;
                    newRecords.push_back(curRecord);
                }
                else if (currentLine1 == 0.00 && currentLine2 == 0.00 && currentLine3 == 0.00)
                    startUpCurrent = 0;
                else if (currentLine1 != 0.00 && currentLine2 != 0.00 && currentLine3 != 0.00 && startUpCurrent == 0)
                    startUpCurrent++;


                voltageLine12AVG += voltageLine12;
                voltageLine23AVG += voltageLine23;
                voltageLine31AVG += voltageLine31;

                currentLine1AVG += currentLine1;
                currentLine2AVG += currentLine2;
                currentLine3AVG += currentLine3;

                line1tmp = currentLine1;
                line2tmp = currentLine2;
                line3tmp = currentLine3;


                combinatedPowerAVG += combinatedPower;
                activePowerAVG += activePower;
                reactivePowerAVG += reactivePower;
                apparentPowerAVG += apparentPower;
            }


        }
    }



int ReadH()
{




    // OPERATING WITH INFO FROM CSV FILE AND CREATE RAW TXT FILE TO PROCESSING WITH
    
    std::ofstream hoistFileStream(hoistFile, std::ofstream::binary); // op Stream for raw file
   
   

   // ComInit init2;
    CComPtr<IStream> hStreamH; // use CComPtr so you don't have to manually call Release()

    HRESULT hrH = URLOpenBlockingStreamW(nullptr, L"https://rumentsolov.com/gallery/hoist.csv", &hStreamH, 0, nullptr);// Open the HTTP request
    if (FAILED(hrH))
    {
        MessageBox::Show("ERROR: Could not connect. HRESULT: 0x");
        return 1;
    }

    // Download the response and write it to file. Since I don't know how exactly the ComInit splits the stream (Google helped me here) , I write it to txt file and then I work with my file 
    char bufferH[128];
    do
    {
        DWORD bytesRead = 0;
        //hStream->Read(buffer, sizeof(buffer), &bytesRead);
        //hr = hStream;
        hrH = hStreamH->Read(bufferH, sizeof(bufferH), &bytesRead);
        if (bytesRead > 0){
            //char endL[3] = "||";
            //strcat(bufferH, endL);
            hoistFileStream.write(bufferH, bytesRead /* + 2*/);
        }

    } while (SUCCEEDED(hrH) && hrH != S_FALSE);

    if (FAILED(hrH))
    {
        MessageBox::Show("ERROR: Download failed. HRESULT: 0x");
        return 2;
    }
  
    return 0;
}

#endif 