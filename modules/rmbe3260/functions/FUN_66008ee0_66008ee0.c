/* Module: rmbe3260.dll
   Function: FUN_66008ee0
   Address: 66008ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66008ee0(void *this,byte param_1)

{
  FUN_66008f10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


