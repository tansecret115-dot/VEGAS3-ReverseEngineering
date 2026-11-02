/* Module: rmbe3260.dll
   Function: FUN_6603d280
   Address: 6603d280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603d280(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66067fa8;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


