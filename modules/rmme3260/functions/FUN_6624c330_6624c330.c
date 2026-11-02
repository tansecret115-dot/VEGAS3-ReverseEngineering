/* Module: rmme3260.dll
   Function: FUN_6624c330
   Address: 6624c330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624c330(int *param_1,void *param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  char *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = (void *)0x0;
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  local_44 = param_4[1];
  local_48 = *param_4;
  local_3c = param_4[3];
  local_40 = param_4[2];
  local_38 = *param_5;
  local_34 = param_5[1];
  local_30 = (int *)param_5[2];
  local_2c = (int *)param_5[3];
  param_5 = (int *)((int)local_2c - local_34);
  iVar6 = param_3[4];
  param_4 = (int *)((int)local_30 - local_38);
  local_28 = param_5;
  local_14 = param_4;
  if (iVar6 == 0x59555632) {
    local_18 = param_3[1];
    iVar6 = param_3[2] * local_18;
    local_10 = (void *)((int)param_2 + iVar6);
    iVar7 = local_34 * local_18;
    iVar8 = local_38 / 2 + ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2);
    local_24 = (char *)((int)param_2 + iVar7 + local_38);
    local_20 = iVar8 + (int)local_10;
    local_1c = ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) + iVar8 + (int)local_10;
    param_2 = (void *)(local_38 - (int)local_30);
    uVar1 = FUN_6624cbd0(param_1[0x11]);
    iVar6 = ((int)local_2c - local_34) * ((int)local_30 - local_38);
    piVar2 = (int *)(local_40 - local_48);
    if (((int *)(((int)local_30 - local_38) * 2) == piVar2) &&
       (((int)local_2c - local_34) * 2 == local_3c - local_44)) {
      local_8 = 1;
    }
    else {
      local_8 = 0;
    }
    if (local_8 != 0) {
      param_5 = (int *)(local_3c - local_44);
      iVar6 = (int)param_5 * (int)piVar2;
      param_2 = (void *)(local_48 - local_40);
      param_4 = piVar2;
    }
    uVar1 = iVar6 * (uVar1 & 0xffff) + 0x1f >> 3 & 0x1ffffffc;
    puVar3 = operator_new(0x34);
    local_c = puVar3;
    local_10 = operator_new(uVar1);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_6624c960(param_1,local_24,local_20,local_1c,local_18,local_10,(int)local_30 - local_38,
                 (int)local_2c - local_34,param_2,param_1[0x11],local_8);
    param_3 = local_c;
    local_c[1] = param_4;
    local_c[2] = param_5;
    local_c[5] = uVar1;
    FUN_6624cc10((int)local_c,param_1[0x11]);
    local_30 = param_4;
    local_2c = param_5;
    local_38 = 0;
    local_34 = 0;
    param_2 = local_10;
  }
  else if ((((iVar6 == 0x52474233) || (iVar6 == 0x52474235)) || (iVar6 == 0x52474236)) ||
          (iVar6 == 0x20524742)) {
    puVar4 = operator_new(0x34);
    puVar3 = puVar4;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    local_c = puVar4;
    FUN_6624cc10((int)puVar4,puVar4[4]);
    param_3 = puVar4;
  }
  piVar2 = local_14;
  if (local_8 != 0) {
    local_30 = (int *)((int)param_4 + local_38);
    local_2c = (int *)((int)param_5 + local_34);
  }
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,&local_48,&local_38);
  if (local_8 != 0) {
    local_30 = (int *)((int)piVar2 + local_38);
    local_2c = (int *)((int)local_28 + local_34);
  }
  if (local_10 != (void *)0x0) {
    operator_delete(local_10);
  }
  if (local_c != (undefined4 *)0x0) {
    operator_delete(local_c);
  }
  return uVar5;
}


