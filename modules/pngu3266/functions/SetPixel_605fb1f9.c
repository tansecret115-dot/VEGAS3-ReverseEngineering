/* Module: pngu3266.dll
   Function: SetPixel
   Address: 605fb1f9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetPixel(long,long,class CPNColor const &) */

void __thiscall CPNDC::SetPixel(CPNDC *this,long param_1,long param_2,CPNColor *param_3)

{
                    /* 0xb1f9  1962  ?SetPixel@CPNDC@@UAEXJJABVCPNColor@@@Z */
  ::SetPixel(*(HDC *)(this + 0x1cf),param_1,param_2,*(COLORREF *)(param_3 + 8));
  return;
}


