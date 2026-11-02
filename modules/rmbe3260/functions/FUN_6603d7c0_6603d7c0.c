/* Module: rmbe3260.dll
   Function: FUN_6603d7c0
   Address: 6603d7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603d7c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66067fb0;
  FUN_6605b770((int *)((int)this + 0x28));
  FUN_6605b770((int *)((int)this + 0x1c));
  FUN_6605b770((int *)((int)this + 0x10));
  FUN_6605b770((int *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


