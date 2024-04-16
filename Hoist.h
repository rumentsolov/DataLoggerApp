#ifndef HOIST_H
#define HOIST_H


class Hoist {

public:

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


    Hoist();

    Hoist(
        int HoistNO, std::string      HoistSalesDescription,  float  Tons,        float       Meters,        std::string      FEM,        std::string      SERIE,        std::string	    ROLLZ, int	        RopeD,        std::string	    TYPE,
        float	    LSp,        float       LSp2,        float       CtSp,        float       CtSp2,        int         CTpcs,        std::string      OVR,        std::string      LMModel,        std::string	    LType,        float       LNomI,        float       L1stkW,        float       L2ndkW,        float       LVoltage,        std::string      LSPEED,        std::string      LIP,        std::string      LMODEL2,        std::string      LBRAKE,        std::string      LFR,        std::string      L1stPole,        std::string      L2ndPole,        std::string      CMModel,        std::string	    CType,        float       CNomI,        float       C1stkW,        float       C2ndkW,        float       CVoltage,        std::string      CSPEED,        std::string      CIP,        std::string      CMODEL2,        std::string      CBRAKE,        std::string      CFR,        std::string      C1stPole,        std::string      C2ndPole
    );

    ~Hoist() {};


};

Hoist::Hoist(
    int         _HoistNO,    std::string      _HoistSalesDescription,    float       _Tons,    float       _Meters,    std::string      _FEM,    std::string      _SERIE,    std::string	    _ROLLZ,    int	        _RopeD,    std::string	    _TYPE,    float	    _LSp,    float       _LSp2,    float       _CtSp,    float       _CtSp2,    int         _CTpcs,    std::string      _OVR,    std::string      _LMModel,    std::string	    _LType,    float       _LNomI,    float       _L1stkW,    float       _L2ndkW,    float       _LVoltage,    std::string      _LSPEED,    std::string      _LIP,    std::string      _LMODEL2,    std::string      _LBRAKE,    std::string      _LFR,    std::string      _L1stPole,    std::string      _L2ndPole,    std::string      _CMModel,    std::string	    _CType,    float       _CNomI,    float       _C1stkW,    float       _C2ndkW,    float       _CVoltage,    std::string      _CSPEED,    std::string      _CIP,
    std::string      _CMODEL2,    std::string      _CBRAKE,    std::string      _CFR,    std::string      _C1stPole,    std::string      _C2ndPole)
{
    this->HoistNO = _HoistNO;
    this->HoistSalesDescription = _HoistSalesDescription;
    this->Tons = _Tons;
    this->Meters = _Meters;
    this->FEM = _FEM;
    this->SERIE = _SERIE;
    this->ROLLZ = _ROLLZ;
    this->RopeD = _RopeD;
    this->TYPE = _TYPE;
    this->LSp = _LSp;
    this->LSp2 = _LSp2;
    this->CtSp = _CtSp;
    this->CtSp2 = _CtSp2;
    this->CTpcs = _CTpcs;
    this->OVR = _OVR;
    this->LMModel = _LMModel;
    this->LType = _LType;
    this->LNomI = _LNomI;
    this->L1stkW = _L1stkW;
    this->L2ndkW = _L2ndkW;
    this->LVoltage = _LVoltage;
    this->LSPEED = _LSPEED;
    this->LIP = _LIP;
    this->LMODEL2 = _LMODEL2;
    this->LBRAKE = _LBRAKE;
    this->LFR = _LFR;
    this->L1stPole = _L1stPole;
    this->L2ndPole = _L2ndPole;
    this->CMModel = _CMModel;
    this->CType = _CType;
    this->CNomI = _CNomI;
    this->C1stkW = _C1stkW;
    this->C2ndkW = _C2ndkW;
    this->CVoltage = _CVoltage;
    this->CSPEED = _CSPEED;
    this->CIP = _CIP;
    this->CMODEL2 = _CMODEL2;
    this->CBRAKE = _CBRAKE;
    this->CFR = _CFR;
    this->C1stPole = _C1stPole;
    this->C2ndPole = _C2ndPole;
}



#endif // HOIST_H
