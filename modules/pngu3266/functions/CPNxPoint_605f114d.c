/* Module: pngu3266.dll
   Function: CPNxPoint
   Address: 605f114d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNxPoint::CPNxPoint(long,long) */

void __thiscall CPNxPoint::CPNxPoint(CPNxPoint *this,long param_1,long param_2)

{
                    /* 0x114d  165  ??0CPNxPoint@@QAE@JJ@Z
                       0x114d  173  ??0CPNxSize@@QAE@JJ@Z */
  *(long *)this = param_1;
  *(long *)(this + 4) = param_2;
  return;
}


