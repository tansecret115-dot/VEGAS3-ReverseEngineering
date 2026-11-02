/* Module: encn3260.dll
   Function: FUN_664d7b80
   Address: 664d7b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d7b80(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_664e00a8;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


