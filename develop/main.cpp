#include <iostream>
#include <string>
#include "handle_ini.h"
using namespace std;

int main()
{
    string iniFile="d:\\CPP\\Handle_ini\\test.ini";
    Handle_ini cfg(iniFile);
    if(!cfg.IsLoaded) { cout << "Can't find file " << iniFile << endl; return -1; };
    cfg.SetSection("General");
    if(cfg.CurrentSection=="") { cout << "Can't find [General] section in " << iniFile << endl; return -1; };
    int Count = cfg.GetIntValue("RunCount");
    Count++;
    cfg.SetIntValue("RunCount", Count);
    cfg.WriteFile(iniFile) ;
    return 0;
}
