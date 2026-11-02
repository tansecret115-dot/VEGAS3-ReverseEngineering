/* Module: pngu3266.dll
   Function: Offset
   Address: 605f14d3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxRect::Offset(long,long) */

void __thiscall CPNxRect::Offset(CPNxRect *this,long param_1,long param_2)

{
                    /* 0x14d3  1587  ?Offset@CPNxRect@@QAEXJJ@Z */
  *(int *)this = *(int *)this + param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + param_2;
  *(int *)(this + 8) = *(int *)(this + 8) + param_1;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
  return;
}


