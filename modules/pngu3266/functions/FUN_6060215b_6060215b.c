/* Module: pngu3266.dll
   Function: FUN_6060215b
   Address: 6060215b
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_6060215b(void *this,byte param_1)

{
  FUN_6060217b(this);
  if ((param_1 & 1) != 0) {
    operator_delete((void *)((int)this + -4));
  }
  return (CPNTimer *)((int)this + -4);
}


