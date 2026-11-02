/* Module: pngu3266.dll
   Function: Offset
   Address: 605f1281
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxPoint::Offset(long,long) */

void __thiscall CPNxPoint::Offset(CPNxPoint *this,long param_1,long param_2)

{
                    /* 0x1281  1585  ?Offset@CPNxPoint@@QAEXJJ@Z */
  *(int *)this = *(int *)this + param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + param_2;
  return;
}


