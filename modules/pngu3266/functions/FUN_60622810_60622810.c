/* Module: pngu3266.dll
   Function: FUN_60622810
   Address: 60622810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_60622810(void *this,byte param_1)

{
  FUN_60622800(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


