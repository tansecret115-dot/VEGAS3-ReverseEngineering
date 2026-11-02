/* Module: pngu3266.dll
   Function: DrawRoundedRectangle
   Address: 605fadd2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawRoundedRectangle(long,long,long,long,long) */

void __thiscall
CPNDC::DrawRoundedRectangle
          (CPNDC *this,long param_1,long param_2,long param_3,long param_4,long param_5)

{
                    /* 0xadd2  1010  ?DrawRoundedRectangle@CPNDC@@UAEXJJJJJ@Z */
  RoundRect(*(HDC *)(this + 0x1cf),param_1,param_2,param_3 + param_1,param_4 + param_2,param_5 * 2,
            param_5 * 2);
  return;
}


