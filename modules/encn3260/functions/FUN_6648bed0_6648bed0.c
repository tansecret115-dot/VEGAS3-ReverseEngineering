/* Module: encn3260.dll
   Function: FUN_6648bed0
   Address: 6648bed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648bed0(void *this,undefined4 param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = this;
  (**(code **)(**(int **)((int)this + 0x6e) + 4))();
  local_8 = (int *)0x0;
  (**(code **)(**(int **)((int)this + 0x38) + 0xc))(*(int **)((int)this + 0x38),&local_8);
  if (local_8 == (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x6e) + 8))();
    return -0x7ff8fff2;
  }
  iVar1 = (**(code **)(*local_8 + 0xc))(local_8,this);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x6a) = param_1;
    *(int **)((int)this + 0x3c) = local_8;
    iVar1 = (**(code **)(*local_8 + 0x18))
                      (local_8,*(undefined4 *)((int)this + 0x16),*(undefined2 *)((int)this + 0x1a));
  }
  (**(code **)(**(int **)((int)this + 0x6e) + 8))();
  return iVar1;
}


