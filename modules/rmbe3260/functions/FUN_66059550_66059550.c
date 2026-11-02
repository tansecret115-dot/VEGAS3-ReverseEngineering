/* Module: rmbe3260.dll
   Function: FUN_66059550
   Address: 66059550
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66059550(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined1 local_14 [8];
  int local_c [2];
  
  piVar1 = param_1 + 0xc;
  if ((void *)param_1[0xc] != (void *)0x0) {
    FUN_66059c60((void *)param_1[0xc]);
    *piVar1 = 0;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  iVar2 = FUN_66059a90(param_1[6],param_1[7],param_1[0xe]);
  if (param_1[0x11] == 0) {
    uVar6 = (uint)*(ushort *)((int)param_1 + 0x22);
  }
  else {
    uVar6 = 1;
  }
  iVar3 = FUN_66059b10(param_1[6],(uint)*(ushort *)(param_1 + 8),param_1[7],uVar6,iVar2,piVar1);
  if ((iVar3 < 1) || (*piVar1 == 0)) {
    iVar3 = -0x7ffbfdbc;
  }
  else {
    iVar3 = FUN_66059a20(iVar3,CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x22)));
    param_1[0xf] = iVar3;
    iVar3 = FUN_6605a520(param_1[0xe],*piVar1);
    param_1[0xd] = iVar3;
    pvVar4 = operator_new(0x6d);
    if (pvVar4 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_660562e0(pvVar4,0,0);
    }
    param_1[0x12] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    iVar3 = (**(code **)*puVar5)(3,param_1 + 0x13);
    if (-1 < iVar3) {
      local_c[0] = param_1[0xf];
      local_c[1] = 0x32;
      iVar3 = (**(code **)(*(int *)param_1[0x13] + 0x10))(local_c,local_14);
      if ((-1 < iVar3) && ((short)param_1[9] == 8)) {
        uVar6 = FUN_66059a20(iVar2,CONCAT22(extraout_var_00,(short)param_1[8]));
        pvVar4 = operator_new(uVar6);
        param_1[0x16] = (int)pvVar4;
        return iVar3;
      }
    }
  }
  return iVar3;
}


