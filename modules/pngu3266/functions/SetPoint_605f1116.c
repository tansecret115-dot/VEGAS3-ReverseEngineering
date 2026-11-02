/* Module: pngu3266.dll
   Function: SetPoint
   Address: 605f1116
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxPoint::SetPoint(long,long) */

void __thiscall CPNxPoint::SetPoint(CPNxPoint *this,long param_1,long param_2)

{
                    /* 0x1116  1965  ?SetPoint@CPNxPoint@@QAEXJJ@Z
                       0x1116  2003  ?SetSize@CPNxSize@@QAEXJJ@Z */
  *(long *)this = param_1;
  *(long *)(this + 4) = param_2;
  return;
}


