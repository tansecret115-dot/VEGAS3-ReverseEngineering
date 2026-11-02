/* Module: pngu3266.dll
   Function: FloodFill
   Address: 605fb0fa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::FloodFill(long,long,class CPNColor *,long) */

void __thiscall
CPNDC::FloodFill(CPNDC *this,long param_1,long param_2,CPNColor *param_3,long param_4)

{
                    /* 0xb0fa  1056  ?FloodFill@CPNDC@@UAEXJJPAVCPNColor@@J@Z */
  ExtFloodFill(*(HDC *)(this + 0x1cf),param_1,param_2,*(COLORREF *)(param_3 + 8),
               (uint)(param_4 == 2));
  return;
}


