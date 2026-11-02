/* Module: pngu3266.dll
   Function: FUN_6061e7c0
   Address: 6061e7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061e7c0(void *this,byte param_1)

{
  FUN_6061e7f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


