/* Module: pngu3266.dll
   Function: SetupDefFont
   Address: 605fbaf6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefFont(class CPNFont *) */

void __thiscall CPNDC::SetupDefFont(CPNDC *this,CPNFont *param_1)

{
  HFONT__ *pHVar1;
  
                    /* 0xbaf6  2052  ?SetupDefFont@CPNDC@@UAEXPAVCPNFont@@@Z */
  pHVar1 = GetCurrentObject(*(HDC *)(this + 0x1cf),6);
  CPNFont::Attach(param_1,pHVar1);
  return;
}


