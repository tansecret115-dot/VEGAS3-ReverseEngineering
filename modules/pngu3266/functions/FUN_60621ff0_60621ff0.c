/* Module: pngu3266.dll
   Function: FUN_60621ff0
   Address: 60621ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_60621ff0(void *this,byte param_1)

{
  FUN_60622020(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


