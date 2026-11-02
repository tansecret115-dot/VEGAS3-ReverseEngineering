/* Module: rmme3260.dll
   Function: FUN_66267870
   Address: 66267870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66267870(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_6626d538;
  FUN_662657f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


