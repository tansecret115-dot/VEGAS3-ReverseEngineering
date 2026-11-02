/* Module: encn3260.dll
   Function: FUN_664d1f00
   Address: 664d1f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d1f00(void *this,byte param_1)

{
  FUN_664d1f30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


