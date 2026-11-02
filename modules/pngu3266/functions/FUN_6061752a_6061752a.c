/* Module: pngu3266.dll
   Function: FUN_6061752a
   Address: 6061752a
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_6061752a(void *this,byte param_1)

{
  FUN_6061754a(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (CPNTimer *)((int)this + -4);
}


