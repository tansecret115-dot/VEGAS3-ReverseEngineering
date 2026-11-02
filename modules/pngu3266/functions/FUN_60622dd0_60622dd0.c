/* Module: pngu3266.dll
   Function: FUN_60622dd0
   Address: 60622dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_60622dd0(void *this,byte param_1)

{
  FUN_60622e00(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


