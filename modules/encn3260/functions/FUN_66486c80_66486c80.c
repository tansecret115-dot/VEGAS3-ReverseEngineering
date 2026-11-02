/* Module: encn3260.dll
   Function: FUN_66486c80
   Address: 66486c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66486c80(void *this,void *param_1)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  int local_10 [3];
  
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  iVar1 = FUN_664bd670(param_1,s_Location_664e2548);
  if (iVar1 != 0) {
    this_00 = (void *)FUN_664be4b0(iVar1);
    if (this_00 != (void *)0x0) {
      FUN_664be390(this_00,local_10);
      if (0 < *(int *)(local_10[0] + -8)) {
        uVar2 = (**(code **)(**(int **)((int)this + 0x68) + 0x48))
                          (*(int **)((int)this + 0x68),local_10[0]);
        FUN_664bb3e0(local_10);
        goto LAB_66486cf1;
      }
      FUN_664bb3e0(local_10);
    }
  }
  uVar2 = (**(code **)(**(int **)((int)this + 0x68) + 0x48))(*(int **)((int)this + 0x68),0);
LAB_66486cf1:
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return uVar2;
}


