/* Module: rmbe3260.dll
   Function: FUN_6602d940
   Address: 6602d940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6602d940(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66067978;
  FUN_6605b770((int *)((int)this + 0x20));
  *(undefined ***)this = &PTR_FUN_66067970;
  FUN_6605b770((int *)((int)this + 0x14));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


