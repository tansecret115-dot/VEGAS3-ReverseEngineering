/* Module: encn3260.dll
   Function: FUN_66486d10
   Address: 66486d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66486d10(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int local_10 [3];
  
  pvVar4 = param_1;
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  piVar1 = FUN_6648c780(*(undefined4 *)((int)param_1 + 0xc),&DAT_664e2538);
  FUN_6648c8f0(this,piVar1,(char *)0x0,(char *)0x0);
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  param_1 = (void *)0x0;
  iVar2 = FUN_664bd670(pvVar4,s_Location_664e2548);
  if (iVar2 != 0) {
    iVar3 = FUN_664bd670(pvVar4,s_Range_664e2470);
    if ((iVar3 != 0) && (iVar3 = FUN_664be4b0(iVar3), iVar3 != 0)) {
      param_1 = *(void **)(iVar3 + 0x20);
    }
    pvVar4 = (void *)FUN_664be4b0(iVar2);
    if (pvVar4 != (void *)0x0) {
      FUN_664be390(pvVar4,local_10);
      if (0 < *(int *)(local_10[0] + -8)) {
        uVar5 = (**(code **)(**(int **)((int)this + 0x68) + 0x44))
                          (*(int **)((int)this + 0x68),local_10[0],param_1);
        FUN_664bb3e0(local_10);
        goto LAB_66486ddd;
      }
      FUN_664bb3e0(local_10);
    }
  }
  uVar5 = (**(code **)(**(int **)((int)this + 0x68) + 0x44))(*(int **)((int)this + 0x68),0,0);
LAB_66486ddd:
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return uVar5;
}


