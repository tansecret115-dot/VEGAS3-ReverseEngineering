/* Module: rmbe3260.dll
   Function: FUN_6604fbf0
   Address: 6604fbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604fbf0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66068758;
  FUN_66050e20((int)this);
  FUN_6604fc60(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


