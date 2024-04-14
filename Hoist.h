#ifndef HOIST_H
#define HOIST_H


using namespace std;

class Hoist {
public:

    int         HoistNO;
    string      HoistSalesDescription;
    float       Tons;	
    float       meters;	
    string      FEM;	
    string      SERIE; 
    string	    ROLLZ; 
    int	        RopeD; 
    string	    TYPE; 
    float	    LSp;	
    float       LSp2; 
    float       CtSp;
    float       CtSp2;	
    int         CTpcs;	
    string      OVR;	
    string      LMModel;	
    string	    LType;
    float       LNomI;
    float       L1stkW;
    float       L2ndkW;	
    float       LVoltage;
    string      LSPEED;
    string      LIP;
    string      LMODEL2;
    string      LBRAKE;
    string      LFR;
    string      L1stPole;
    string      L2ndPole;
    string      CMModel;
    string	    CType;
    float       CNomI;
    float       C1stkW;
    float       C2ndkW;
    float       CVoltage;
    string      CSPEED;
    string      CIP;
    string      CMODEL2;
    string      CBRAKE;
    string      CFR;
    string      C1stPole;
    string      C2ndPole;
     


    Hoist();

    Hoist(
        int         _HoistNO,
        string      _HoistSalesDescription,
        float       _Tons,
        float       _meters,
        string      _FEM,
        string      _SERIE,
        string	    _ROLLZ,
        int	        _RopeD,
        string	    _TYPE,
        float	    _LSp,
        float       _LSp2,
        float       _CtSp,
        float       _CtSp2,
        int         _CTpcs,
        string      _OVR,
        string      _LMModel,
        string	    _LType,
        float       _LNomI,
        float       _L1stkW,
        float       _L2ndkW,
        float       _LVoltage,
        string      _LSPEED,
        string      _LIP,
        string      _LMODEL2,
        string      _LBRAKE,
        string      _LFR,
        string      _L1stPole,
        string      _L2ndPole,
        string      _CMModel,
        string	    _CType,
        float       _CNomI,
        float       _C1stkW,
        float       _C2ndkW,
        float       _CVoltage,
        string      _CSPEED,
        string      _CIP,
        string      _CMODEL2,
        string      _CBRAKE,
        string      _CFR,
        string      _C1stPole,
        string      _C2ndPole) 
    {
        HoistNO = _HoistNO;
        HoistSalesDescription = _HoistSalesDescription;
        Tons =      _Tons;
        meters =    _meters;
        FEM =       _FEM;
        SERIE =     _SERIE;
        ROLLZ =     _ROLLZ;
        RopeD =     _RopeD;
        TYPE =      _TYPE;
        LSp =       _LSp;
        LSp2 =      _LSp2;
        CtSp =      _CtSp;   
        CtSp2 =     _CtSp2;
        CTpcs =     _CTpcs;
        OVR =       _OVR;
        LMModel =   _LMModel;
        LType =     _LType;
        LNomI =     _LNomI;
        L1stkW =    _L1stkW;
        L2ndkW =    _L2ndkW;
        LVoltage =  _LVoltage;
        LSPEED =    _LSPEED;
        LIP =       _LIP;
        LMODEL2 =   _LMODEL2;
        LBRAKE =    _LBRAKE;
        LFR =       _LFR;
        L1stPole =  _L1stPole;
        L2ndPole =  _L2ndPole;
        CMModel =   _CMModel;
        CType =     _CType;
        CNomI =     _CNomI;
        C1stkW =    _C1stkW;
        C2ndkW =    _C2ndkW;
        CVoltage =  _CVoltage;
        CSPEED =    _CSPEED;
        CIP =       _CIP;
        CMODEL2 =   _CMODEL2;
        CBRAKE =    _CBRAKE;
        CFR =       _CFR;
        C1stPole =  _C1stPole;
        C2ndPole =  _C2ndPole;
    }
    ;

    ~Hoist() {};


};
}


#endif // HOIST_H
