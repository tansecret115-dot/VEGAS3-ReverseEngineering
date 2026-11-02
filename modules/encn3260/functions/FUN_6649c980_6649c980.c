/* Module: encn3260.dll
   Function: FUN_6649c980
   Address: 6649c980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6649c980(void *this,byte param_1)

{
  FUN_6649c9b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


