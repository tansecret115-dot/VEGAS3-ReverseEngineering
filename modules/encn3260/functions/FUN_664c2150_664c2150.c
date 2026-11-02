/* Module: encn3260.dll
   Function: FUN_664c2150
   Address: 664c2150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664c2150(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_664df878;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


