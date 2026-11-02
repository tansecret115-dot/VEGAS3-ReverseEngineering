/* Module: rmbe3260.dll
   Function: FUN_6603f550
   Address: 6603f550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603f550(void *this,byte param_1)

{
  FUN_6603f580(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


