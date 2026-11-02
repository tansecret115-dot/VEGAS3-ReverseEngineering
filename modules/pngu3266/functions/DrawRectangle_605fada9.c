/* Module: pngu3266.dll
   Function: DrawRectangle
   Address: 605fada9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawRectangle(long,long,long,long) */

void __thiscall
CPNDC::DrawRectangle(CPNDC *this,long param_1,long param_2,long param_3,long param_4)

{
                    /* 0xada9  1009  ?DrawRectangle@CPNDC@@UAEXJJJJ@Z */
  Rectangle(*(HDC *)(this + 0x1cf),param_1,param_2,param_3 + param_1,param_4 + param_2);
  return;
}


