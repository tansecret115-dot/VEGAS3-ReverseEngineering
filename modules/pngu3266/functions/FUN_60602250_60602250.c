/* Module: pngu3266.dll
   Function: FUN_60602250
   Address: 60602250
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_60602250(void *this,byte param_1)

{
  FUN_60602270(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (CPNTimer *)((int)this + -4);
}


