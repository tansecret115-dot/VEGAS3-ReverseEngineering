/* Module: encn3260.dll
   Function: FUN_664d83e0
   Address: 664d83e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d83e0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_664e00d8;
  FUN_664d5490(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


