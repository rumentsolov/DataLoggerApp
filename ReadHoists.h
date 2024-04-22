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

    

    int counter = 1; // counts the rows readed from the input file

    std::ifstream hoistTxtFile;
    hoistTxtFile.open(hoistFile);
    std::string line;
    int startUpCurrent = 0; // this will indicate if the current is the Startup -> every first record after 0.00 in current is startup

    while (getline(hoistTxtFile, line)) // its easy and better to read  and process with my own txt file 
    {
        counter++;
        if (counter > 2) 
        {
            for (size_t i = 0; i < line.size(); i++) if (line[i] == ',') line[i] = ' ';

            //std::cout << line << std::endl;
            std::stringstream sStr(line);

            std::string         HoistNO;
            std::string      HoistSalesDescription;
            std::string        Tons;
            std::string        Meters;
            std::string      FEM;
            std::string      SERIE;
            std::string	    ROLLZ;
            std::string 	        RopeD;
            std::string	    TYPE;
            std::string 	    LSp;
            std::string        LSp2;
            std::string        CtSp;
            std::string        CtSp2;
            std::string          CTpcs;
            std::string      OVR;
            std::string      LMModel;
            std::string	    LType;
            std::string        LNomI;
            std::string        L1stkW;
            std::string        L2ndkW;
            std::string        LVoltage;
            std::string      LSPEED;
            std::string      LIP;
            std::string      LMODEL2;
            std::string      LBRAKE;
            std::string      LFR;
            std::string      L1stPole;
            std::string      L2ndPole;
            std::string      CMModel;
            std::string	    CType;
            std::string        CNomI;
            std::string        C1stkW;
            std::string        C2ndkW;
            std::string        CVoltage;
            std::string      CSPEED;
            std::string      CIP;
            std::string      CMODEL2;
            std::string      CBRAKE;
            std::string      CFR;
            std::string      C1stPole;
            std::string      C2ndPole;

            sStr >>
                HoistNO >>
                HoistSalesDescription >>
                Tons >>
                Meters >>
                FEM >>
                SERIE >>
                ROLLZ >>
                RopeD >>
                TYPE >>
                LSp >>
                LSp2 >>
                CtSp >>
                CtSp2 >>
                CTpcs >>
                OVR >>
                LMModel >>
                LType >>
                LNomI >>
                L1stkW >>
                L2ndkW >>
                LVoltage >>
                LSPEED >>
                LIP >>
                LMODEL2 >>
                LBRAKE >>
                LFR >>
                L1stPole >>
                L2ndPole >>
                CMModel >>
                CType >>
                CNomI >>
                C1stkW >>
                C2ndkW >>
                CVoltage >>
                CSPEED >>
                CIP >>
                CMODEL2 >>
                CBRAKE >>
                CFR >>
                C1stPole >>
                C2ndPole;


            Hoist Buff(
                HoistNO,
                HoistSalesDescription,
                Tons,
                Meters,
                FEM,
                SERIE,
                ROLLZ,
                RopeD,
                TYPE,
                LSp,
                LSp2,
                CtSp,
                CtSp2,
                CTpcs,
                OVR,
                LMModel,
                LType,
                LNomI,
                L1stkW,
                L2ndkW,
                LVoltage,
                LSPEED,
                LIP,
                LMODEL2,
                LBRAKE,
                LFR,
                L1stPole,
                L2ndPole,
                CMModel,
                CType,
                CNomI,
                C1stkW,
                C2ndkW,
                CVoltage,
                CSPEED,
                CIP,
                CMODEL2,
                CBRAKE,
                CFR,
                C1stPole,
                C2ndPole
            );
            std::cout << "----------------" << std::endl;
            std::cout << Buff.HoistSalesDescription << std::endl;
            std::cout << "----------------"  << std::endl;
            Hoists.push_back(Buff);
        }
    }
}

int ReadH()
{




    // OPERATING WITH INFO FROM CSV FILE AND CREATE RAW TXT FILE TO PROCESSING WITH
    
    std::ofstream hoistFileStream(hoistFile, std::ofstream::binary); // op Stream for raw file
   
   

   // ComInit init2;
    CComPtr<IStream> hStreamH; // use CComPtr so you don't have to manually call Release()

    HRESULT hrH = URLOpenBlockingStreamW(nullptr, L"https://rumentsolov.com//hoist.csv", &hStreamH, 0, nullptr);// Open the HTTP request
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
    
    operateHoistFile();
    return 0;
}

#endif 