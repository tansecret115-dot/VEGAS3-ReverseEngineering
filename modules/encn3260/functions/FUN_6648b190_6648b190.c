/* Module: encn3260.dll
   Function: FUN_6648b190
   Address: 6648b190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648b190(void *this,byte param_1)

{
  FUN_664be7c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


