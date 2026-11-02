/* Module: sdpp3260.dll
   Function: FUN_10005970
   Address: 10005970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10005970(void *this,byte param_1)

{
  FUN_100059a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


