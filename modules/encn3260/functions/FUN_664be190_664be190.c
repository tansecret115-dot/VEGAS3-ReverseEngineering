/* Module: encn3260.dll
   Function: FUN_664be190
   Address: 664be190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664be190(void *this,byte param_1)

{
  FUN_664be1f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


