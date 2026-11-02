/* Module: pngu3266.dll
   Function: DrawLine
   Address: 605facae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawLine(long,long,long,long) */

void __thiscall CPNDC::DrawLine(CPNDC *this,long param_1,long param_2,long param_3,long param_4)

{
                    /* 0xacae  999  ?DrawLine@CPNDC@@UAEXJJJJ@Z */
  if (param_3 == param_1) {
    if (param_4 < param_2) {
      param_4 = param_4 + -1;
    }
    else {
      param_4 = param_4 + 1;
    }
  }
  else if (param_4 == param_2) {
    if (param_3 < param_1) {
      param_3 = param_3 + -1;
    }
    else {
      param_3 = param_3 + 1;
    }
  }
  MoveToEx(*(HDC *)(this + 0x1cf),param_1,param_2,(LPPOINT)0x0);
  LineTo(*(HDC *)(this + 0x1cf),param_3,param_4);
  return;
}


