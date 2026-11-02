/* Module: pngu3266.dll
   Function: SetupDefTextFgColor
   Address: 605fbb81
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefTextFgColor(class CPNColor *) */

void __thiscall CPNDC::SetupDefTextFgColor(CPNDC *this,CPNColor *param_1)

{
  COLORREF CVar1;
  
                    /* 0xbb81  2056  ?SetupDefTextFgColor@CPNDC@@UAEXPAVCPNColor@@@Z */
  CVar1 = GetTextColor(*(HDC *)(this + 0x1cf));
  CPNColor::Set(param_1,(uchar)CVar1,(uchar)(CVar1 >> 8),(uchar)(CVar1 >> 0x10));
  return;
}


