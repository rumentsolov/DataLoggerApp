#ifndef GLOBALVAR_H
#define GLOBALVAR_H

#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "GetDesktopPath.h"
#include "Hoist.h"


std::vector<Hoist> Hoists;

bool isFound;

std::string  internalPath = "C:\\Users\\rtsol\\source\\repos\\DataLoggerApp\\";
std::string  imagesFolder = "Images\\";
std::string  txtFolder = "txt\\";
std::string  deskTopPath = GetDTPath();
std::string  pathStr = deskTopPath.c_str();
std::string  rawName = "rawfile.txt";
std::string  recordName = "record.txt";
std::string  hoistsName = "hoists.txt";
std::string  loginName = "LoginActions.txt";

std::string rawFileString = pathStr + rawName;
std::string recordFileString = pathStr + recordName;
std::string recordHoistString = internalPath + txtFolder + hoistsName;
std::string loginString = internalPath + txtFolder + loginName;

const char* rawFile = rawFileString.c_str();
const char* hoistFile = recordHoistString.c_str();
const char* recordFile = recordFileString.c_str();
const char* loginFile = loginString.c_str();
//const char* inputFile = "C:\\Users\\rtsol\\OneDrive\\Desktop\\Data.Logger\\trend.csv";

const int startupCurrentFactor = 2;

float voltageLine12AVG;       // Average voltage between line 1 and 2
float voltageLine23AVG;       // Average voltage between line 2 and 3
float voltageLine31AVG;       // Average voltage between line 3 and 1
float currentLine1AVG;        // Average current in line 1
float currentLine2AVG;        // Average current in line 2
float currentLine3AVG;        // Average current in line 3
float combinatedPowerAVG;     // Average combinated power factor for line 1+2+3
float activePowerAVG;         // Average combinated active power for line 1+2+3
float reactivePowerAVG;       // Average combinated reactive power for line 1+2+3
float apparentPowerAVG;       // Average combinated apparent power for line 1+2+3
float calculatedPowerAVG;     // Average combinated calculated power for line 1+2+3



//std::vector<Hoist> Hoists;

#endif #pragma once
