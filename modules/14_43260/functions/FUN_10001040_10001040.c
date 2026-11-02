/* Module: 14_43260.dll
   Function: FUN_10001040
   Address: 10001040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10001040(void *this,byte param_1)

{
  FUN_10001760(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


