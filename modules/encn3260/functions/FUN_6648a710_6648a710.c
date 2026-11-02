/* Module: encn3260.dll
   Function: FUN_6648a710
   Address: 6648a710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648a710(void *this,int param_1)

{
  undefined4 uVar1;
  
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  *(undefined4 *)(*(int *)((int)this + 0x70) + 0x1c) = 0;
  if (param_1 != 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x54))(*(int **)((int)this + 0x68),param_1);
    (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
    return uVar1;
  }
  if (*(int **)((int)this + 0x18) == (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
    return 0x80004005;
  }
  uVar1 = FUN_6648cc70(this,*(int **)((int)this + 0x18));
  (**(code **)(**(int **)((int)this + 0x18) + 8))(*(int **)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x18) = 0;
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return uVar1;
}


