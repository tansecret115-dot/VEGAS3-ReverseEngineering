/* Module: pngu3266.dll
   Function: FUN_60622d20
   Address: 60622d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_60622d20(void *this,byte param_1)

{
  FUN_60622d50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


