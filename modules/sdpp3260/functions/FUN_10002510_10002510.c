/* Module: sdpp3260.dll
   Function: FUN_10002510
   Address: 10002510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10002510(void *this,byte param_1)

{
  FUN_10002540(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


