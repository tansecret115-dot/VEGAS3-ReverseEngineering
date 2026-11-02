/* Module: encn3260.dll
   Function: FUN_6648ee50
   Address: 6648ee50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648ee50(void *this,byte param_1)

{
  FUN_6648ee80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


