/* Module: rv103260.dll
   Function: FUN_636a3550
   Address: 636a3550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_636a3550(void *this,int param_1)

{
  undefined4 uVar1;
  
  *(float *)((int)this + 0xec) = (float)*(uint *)(param_1 + 0xc) * _DAT_636a7240;
  if (*(code **)((int)this + 0x7c) != (code *)0x0) {
    (**(code **)((int)this + 0x7c))(param_1);
    if (*(code **)((int)this + 0x5c) != (code *)0x0) {
      uVar1 = (**(code **)((int)this + 0x5c))
                        (param_1,(int)this + 0x90,*(int *)((int)this + 0x8c) + 0x194);
      return uVar1;
    }
  }
  return 0x6f;
}


