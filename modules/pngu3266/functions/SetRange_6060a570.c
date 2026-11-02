/* Module: pngu3266.dll
   Function: SetRange
   Address: 6060a570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNScrollHelper::SetRange(long,long) */

void __thiscall CPNScrollHelper::SetRange(CPNScrollHelper *this,long param_1,long param_2)

{
                    /* 0x1a570  1972  ?SetRange@CPNScrollHelper@@QAEXJJ@Z */
  *(long *)(this + 0xc) = param_1;
  *(long *)(this + 0x10) = param_2;
  return;
}


