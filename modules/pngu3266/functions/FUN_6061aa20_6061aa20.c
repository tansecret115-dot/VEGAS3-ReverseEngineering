/* Module: pngu3266.dll
   Function: FUN_6061aa20
   Address: 6061aa20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061aa20(void *this,byte param_1)

{
  FUN_6061aa50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


