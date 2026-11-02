/* Module: pngu3266.dll
   Function: FUN_60616b95
   Address: 60616b95
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_60616b95(void *this,byte param_1)

{
  FUN_60616bb5(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (CPNTimer *)((int)this + -4);
}


