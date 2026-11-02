/* Module: pngu3266.dll
   Function: DrawEllipse
   Address: 605fae02
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawEllipse(long,long,long,long) */

void __thiscall CPNDC::DrawEllipse(CPNDC *this,long param_1,long param_2,long param_3,long param_4)

{
                    /* 0xae02  994  ?DrawEllipse@CPNDC@@UAEXJJJJ@Z */
  Ellipse(*(HDC *)(this + 0x1cf),param_1,param_2,param_3 + param_1,param_4 + param_2);
  return;
}


