/* Module: pngu3266.dll
   Function: SelectNewFont
   Address: 605fb25d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNDC::SelectNewFont(class CPNFont *) */

int __thiscall CPNDC::SelectNewFont(CPNDC *this,CPNFont *param_1)

{
  HGDIOBJ pvVar1;
  
                    /* 0xb25d  1804  ?SelectNewFont@CPNDC@@UAEHPAVCPNFont@@@Z */
  pvVar1 = SelectObject(*(HDC *)(this + 0x1cf),*(HGDIOBJ *)(param_1 + 0x2c));
  return (uint)(pvVar1 != (HGDIOBJ)0x0);
}


