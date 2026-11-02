/* Module: rmme3260.dll
   Function: FUN_66224770
   Address: 66224770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66224770(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_6626bcf8;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


