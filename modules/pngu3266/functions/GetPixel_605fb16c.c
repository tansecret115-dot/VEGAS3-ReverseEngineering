/* Module: pngu3266.dll
   Function: GetPixel
   Address: 605fb16c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::GetPixel(long,long,class CPNColor &) */

void __thiscall CPNDC::GetPixel(CPNDC *this,long param_1,long param_2,CPNColor *param_3)

{
  COLORREF CVar1;
  
                    /* 0xb16c  1296  ?GetPixel@CPNDC@@UAEXJJAAVCPNColor@@@Z */
  CVar1 = ::GetPixel(*(HDC *)(this + 0x1cf),param_1,param_2);
  CPNColor::Set(param_3,(uchar)CVar1,(uchar)(CVar1 >> 8),(uchar)(CVar1 >> 0x10));
  return;
}


