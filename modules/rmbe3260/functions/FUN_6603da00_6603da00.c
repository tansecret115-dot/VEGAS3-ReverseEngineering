/* Module: rmbe3260.dll
   Function: FUN_6603da00
   Address: 6603da00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603da00(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66067fc8;
  FUN_6605c430((int *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


