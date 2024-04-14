#ifndef READH_H
#define READH_H

#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "Hoist.h"
#include "ComInit.h"
#include "Processment.h"

using namespace System;
using namespace System::Windows::Forms;

int ReadH()
{

    // OPERATING WITH INFO FROM CSV FILE AND CREATE RAW TXT FILE TO PROCESSING WITH

    std::ofstream hoistFileStream(hoistFile, std::ofstream::binary); // op Stream for raw file

   // ComInit init2;
    CComPtr<IStream> hStream; // use CComPtr so you don't have to manually call Release()
    HRESULT hr = URLOpenBlockingStreamW(nullptr, L"https://rumentsolov.com/gallery/hoist.csv", &hStream, 0, nullptr);// Open the HTTP request
    if (FAILED(hr))
    {
        MessageBox::Show("ERROR: Could not connect. HRESULT: 0x");
        return 1;
    }

    // Download the response and write it to file. Since I don't know how exactly the ComInit splits the stream (Google helped me here) , I write it to txt file and then I work with my file 
    char buffer[128];
    do
    {
        DWORD bytesRead = 0;
        hr = hStream->Read(buffer, sizeof(buffer), &bytesRead);
        if (bytesRead > 0){
            hoistFileStream.write(buffer, bytesRead);
            std::cout << buffer << " " << std::endl;
            //MessageBox::Show("buffer");
    }

    } while (SUCCEEDED(hr) && hr != S_FALSE);

    if (FAILED(hr))
    {
        MessageBox::Show("ERROR: Download failed. HRESULT: 0x");
        return 2;
    }

    ActionSave(recordHoistString);



    return 0;
}

#endif 