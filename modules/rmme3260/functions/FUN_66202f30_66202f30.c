/* Module: rmme3260.dll
   Function: FUN_66202f30
   Address: 66202f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66202f30(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_6626b290;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


