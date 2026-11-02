/* Module: encn3260.dll
   Function: FUN_6648ec40
   Address: 6648ec40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648ec40(void *this,byte param_1)

{
  FUN_6648ec70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


