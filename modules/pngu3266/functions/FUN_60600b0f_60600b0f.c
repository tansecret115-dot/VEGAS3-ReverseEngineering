/* Module: pngu3266.dll
   Function: FUN_60600b0f
   Address: 60600b0f
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNDialog * __thiscall FUN_60600b0f(void *this,byte param_1)

{
  FUN_60600b2b(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


