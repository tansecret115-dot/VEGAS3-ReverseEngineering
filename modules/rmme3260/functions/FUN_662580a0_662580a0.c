/* Module: rmme3260.dll
   Function: FUN_662580a0
   Address: 662580a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662580a0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_6626cf08;
  FUN_6625bbf0((int)this);
  FUN_66258110(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


