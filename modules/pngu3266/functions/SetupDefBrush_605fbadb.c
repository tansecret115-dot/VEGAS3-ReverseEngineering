/* Module: pngu3266.dll
   Function: SetupDefBrush
   Address: 605fbadb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefBrush(class CPNBrush *) */

void __thiscall CPNDC::SetupDefBrush(CPNDC *this,CPNBrush *param_1)

{
  HBRUSH__ *pHVar1;
  
                    /* 0xbadb  2050  ?SetupDefBrush@CPNDC@@UAEXPAVCPNBrush@@@Z */
  pHVar1 = GetCurrentObject(*(HDC *)(this + 0x1cf),2);
  CPNBrush::Attach(param_1,pHVar1);
  return;
}


