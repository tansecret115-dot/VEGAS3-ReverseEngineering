/* Module: sdpp3260.dll
   Function: FUN_10005b00
   Address: 10005b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10005b00(void *this,byte param_1)

{
  FUN_10005b30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


