/* Module: pngu3266.dll
   Function: SetupDefTextBgColor
   Address: 605fbba5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefTextBgColor(class CPNColor *) */

void __thiscall CPNDC::SetupDefTextBgColor(CPNDC *this,CPNColor *param_1)

{
  COLORREF CVar1;
  
                    /* 0xbba5  2055  ?SetupDefTextBgColor@CPNDC@@UAEXPAVCPNColor@@@Z */
  CVar1 = GetBkColor(*(HDC *)(this + 0x1cf));
  CPNColor::Set(param_1,(uchar)CVar1,(uchar)(CVar1 >> 8),(uchar)(CVar1 >> 0x10));
  return;
}


