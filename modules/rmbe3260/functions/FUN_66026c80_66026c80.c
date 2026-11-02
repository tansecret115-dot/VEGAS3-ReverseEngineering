/* Module: rmbe3260.dll
   Function: FUN_66026c80
   Address: 66026c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66026c80(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66063e30;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


