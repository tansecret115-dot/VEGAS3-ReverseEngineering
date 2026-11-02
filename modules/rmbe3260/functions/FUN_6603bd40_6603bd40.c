/* Module: rmbe3260.dll
   Function: FUN_6603bd40
   Address: 6603bd40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603bd40(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66067ec8;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


