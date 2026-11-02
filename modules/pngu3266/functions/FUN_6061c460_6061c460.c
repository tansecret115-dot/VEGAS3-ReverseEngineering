/* Module: pngu3266.dll
   Function: FUN_6061c460
   Address: 6061c460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061c460(void *this,byte param_1)

{
  FUN_6061c490(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


