/* Module: encn3260.dll
   Function: FUN_664bd070
   Address: 664bd070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664bd070(void *this,byte param_1)

{
  FUN_664bd0a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


