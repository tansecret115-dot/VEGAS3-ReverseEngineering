/* Module: rmbe3260.dll
   Function: FUN_6603ebd0
   Address: 6603ebd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603ebd0(void *this,byte param_1)

{
  FUN_6603ec00(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


