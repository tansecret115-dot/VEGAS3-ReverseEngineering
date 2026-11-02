/* Module: sdpp3260.dll
   Function: FUN_10002590
   Address: 10002590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10002590(void *this,byte param_1)

{
  FUN_100025c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


