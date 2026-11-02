/* Module: pngu3266.dll
   Function: SetRect
   Address: 605f117e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxRect::SetRect(long,long,long,long) */

void __thiscall
CPNxRect::SetRect(CPNxRect *this,long param_1,long param_2,long param_3,long param_4)

{
                    /* 0x117e  1974  ?SetRect@CPNxRect@@QAEXJJJJ@Z */
  *(long *)this = param_1;
  *(long *)(this + 4) = param_2;
  *(long *)(this + 8) = param_3;
  *(long *)(this + 0xc) = param_4;
  return;
}


