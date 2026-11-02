/* Module: pngu3266.dll
   Function: FUN_6060c48e
   Address: 6060c48e
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_6060c48e(void *this,byte param_1)

{
  FUN_6060c4ae(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (CPNTimer *)((int)this + -4);
}


