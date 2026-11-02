/* Module: rmbe3260.dll
   Function: FUN_66056960
   Address: 66056960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66056960(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66068a98;
  FUN_66051c00(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


