/* Module: rmbe3260.dll
   Function: FUN_6603dfd0
   Address: 6603dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6603dfd0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = FUN_6603e0c0(param_1,&local_8,&local_c);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*(int **)((int)this + 0x20) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x1c))(local_c,local_8);
    }
    if (*(int **)((int)this + 0x18) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0x1c))(local_c,local_8);
    }
    if (iVar1 == 0) {
      FUN_6605ed40((void *)((int)this + 0x48),(uint)param_1,local_8);
      return 0;
    }
    iVar1 = 0xfff2;
  }
  return iVar1;
}


