/* Module: rmbe3260.dll
   Function: FUN_6602d870
   Address: 6602d870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6602d870(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66067970;
  FUN_6605b770((int *)((int)this + 0x14));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


