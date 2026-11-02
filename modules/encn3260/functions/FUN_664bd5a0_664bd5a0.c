/* Module: encn3260.dll
   Function: FUN_664bd5a0
   Address: 664bd5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664bd5a0(void *this,byte param_1)

{
  FUN_664bd5d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


