/* Module: encn3260.dll
   Function: FUN_664c8740
   Address: 664c8740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664c8740(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = -0x7ffbfff7;
  if (*(int *)((int)this + 0x36) != 0) {
    (**(code **)(**(int **)((int)this + 0x44) + 4))();
    iVar1 = (**(code **)(**(int **)((int)this + 0x36) + 0x10))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      if (*(short *)((int)this + 0x3a) == 2) {
        *(undefined4 *)((int)this + 0x8c) = 1;
      }
      *(undefined4 *)((int)this + 0xa4) = 1;
    }
    (**(code **)(**(int **)((int)this + 0x48) + 4))();
    (**(code **)(**(int **)((int)this + 0x44) + 8))();
  }
  return iVar1;
}


