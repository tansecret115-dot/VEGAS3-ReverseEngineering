/* Module: encn3260.dll
   Function: FUN_6648e280
   Address: 6648e280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648e280(void *this,byte param_1)

{
  FUN_6648e2b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


