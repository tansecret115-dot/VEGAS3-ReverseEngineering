/* Module: encn3260.dll
   Function: FUN_664bcfe0
   Address: 664bcfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664bcfe0(void *this,byte param_1)

{
  FUN_664bd010(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


