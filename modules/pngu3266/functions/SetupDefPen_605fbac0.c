/* Module: pngu3266.dll
   Function: SetupDefPen
   Address: 605fbac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefPen(class CPNPen *) */

void __thiscall CPNDC::SetupDefPen(CPNDC *this,CPNPen *param_1)

{
  HPEN__ *pHVar1;
  
                    /* 0xbac0  2053  ?SetupDefPen@CPNDC@@UAEXPAVCPNPen@@@Z */
  pHVar1 = GetCurrentObject(*(HDC *)(this + 0x1cf),1);
  CPNPen::Attach(param_1,pHVar1);
  return;
}


