/* Module: aviplug.dll
   Function: FUN_5f952580
   Address: 5f952580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f952580(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_84;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48 [11];
  uint local_1c [6];
  int local_4;
  
  iVar6 = 0;
  if ((((param_2 == 0) || (param_3 < 0x18)) || (*(int *)(param_2 + 0xc) == 0)) ||
     (*(int *)(param_2 + 4) == 0)) {
    return -6;
  }
  puVar5 = local_48;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = param_1 + 0xb;
  local_84 = -6;
  bVar3 = false;
  if (*(undefined4 **)(param_2 + 0x18) != (undefined4 *)0x0) {
    **(undefined4 **)(param_2 + 0x18) = 0x10;
  }
  if (param_1[0x11] == 0) {
LAB_5f952660:
    if (param_1[0x11] == 0) goto LAB_5f952671;
  }
  else {
    uVar1 = param_1[0xf];
    iVar4 = *(int *)(param_2 + 0xc);
    uVar2 = param_1[0x10];
    if (((((*(int *)(iVar4 + 4) == *(int *)(uVar1 + 0x34)) &&
          (*(int *)(iVar4 + 8) == *(int *)(uVar1 + 0x38))) &&
         ((*(int *)(iVar4 + 0x14) == *(int *)(uVar1 + 0x44) &&
          ((*(int *)(iVar4 + 0x10) == *(int *)(uVar1 + 0x40) &&
           (iVar4 = *(int *)(param_2 + 4), *(int *)(iVar4 + 4) == *(int *)(uVar2 + 0x34))))))) &&
        (*(int *)(iVar4 + 8) == *(int *)(uVar2 + 0x38))) &&
       ((*(int *)(iVar4 + 0x14) == *(int *)(uVar2 + 0x44) &&
        (*(int *)(iVar4 + 0x10) == *(int *)(uVar2 + 0x40))))) goto LAB_5f952660;
LAB_5f952671:
    local_48[0] = *param_1;
    local_48[1] = param_1[1];
    local_48[3] = param_1[3];
    local_84 = FUN_5f952250(local_48,*(int *)(param_2 + 0xc),*(int *)(param_2 + 4));
    if (local_84 != 0) goto LAB_5f952759;
    puVar5 = local_1c;
  }
  bVar3 = true;
  puVar7 = local_78;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_4c = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x14);
  local_78[0] = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x14);
  local_50 = *(undefined4 *)(param_2 + 0x10);
  local_68 = 0;
  local_64 = 0;
  local_78[2] = 0x111;
  local_60 = *(undefined4 *)(puVar5[5] + 0x28);
  local_5c = *(undefined4 *)(puVar5[5] + 0x2c);
  iVar6 = (**(code **)(*(int *)puVar5[3] + 0x24))
                    ((int *)puVar5[3],*(undefined4 *)(param_2 + 8),
                     *(undefined4 *)(*(int *)(param_2 + 4) + 0x14));
  if (-1 < iVar6) {
    iVar6 = (**(code **)(*(int *)puVar5[2] + 0x54))((int *)puVar5[2],local_78);
    (**(code **)(*(int *)puVar5[3] + 0x24))((int *)puVar5[3],0,0);
    if (-1 < iVar6) {
      if (param_1[3] != 0) {
        FUN_5f951d30(*(uint *)(param_2 + 8));
      }
      if (param_1[2] != 0) {
        FUN_5f951e20(*(uint *)(param_2 + 8));
      }
    }
  }
LAB_5f952759:
  if (local_4 != 0) {
    FUN_5f952230((int)local_48);
  }
  if (bVar3) {
    local_84 = FUN_5f951a50(iVar6);
  }
  return local_84;
}


