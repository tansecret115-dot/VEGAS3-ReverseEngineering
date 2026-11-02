/* Module: encn3260.dll
   Function: FUN_6648b9f0
   Address: 6648b9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6648b9f0(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int local_10 [3];
  
  pvVar4 = param_2;
  piVar1 = FUN_6648c780(*(undefined4 *)((int)param_2 + 0xc),&DAT_664e2538);
  FUN_6648c8f0(param_1,piVar1,(char *)0x0,(char *)0x0);
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  param_2 = (void *)0x0;
  iVar2 = FUN_664bd670(pvVar4,s_Location_664e2548);
  if (iVar2 != 0) {
    iVar3 = FUN_664bd670(pvVar4,s_Range_664e2470);
    if ((iVar3 != 0) && (iVar3 = FUN_664be4b0(iVar3), iVar3 != 0)) {
      param_2 = *(void **)(iVar3 + 0x20);
    }
    pvVar4 = (void *)FUN_664be4b0(iVar2);
    if (pvVar4 != (void *)0x0) {
      FUN_664be390(pvVar4,local_10);
      if (0 < *(int *)(local_10[0] + -8)) {
        uVar5 = (**(code **)(**(int **)((int)param_1 + 0x68) + 0x44))
                          (*(int **)((int)param_1 + 0x68),local_10[0],param_2);
        FUN_664bb3e0(local_10);
        return uVar5;
      }
      FUN_664bb3e0(local_10);
    }
  }
  uVar5 = (**(code **)(**(int **)((int)param_1 + 0x68) + 0x44))(*(int **)((int)param_1 + 0x68),0,0);
  return uVar5;
}


