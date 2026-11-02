/* Module: pngu3266.dll
   Function: FUN_60622980
   Address: 60622980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_60622980(void *this,byte param_1)

{
  FUN_606229b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


