/* Module: pngu3266.dll
   Function: FUN_6060cfd0
   Address: 6060cfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_6060cfd0(void *this,byte param_1)

{
  FUN_6060cff0(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (CPNTimer *)((int)this + -4);
}


