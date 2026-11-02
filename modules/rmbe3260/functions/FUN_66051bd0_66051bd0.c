/* Module: rmbe3260.dll
   Function: FUN_66051bd0
   Address: 66051bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66051bd0(void *this,byte param_1)

{
  FUN_66051c00(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


