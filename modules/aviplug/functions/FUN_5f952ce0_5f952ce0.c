/* Module: aviplug.dll
   Function: FUN_5f952ce0
   Address: 5f952ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f952ce0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int local_84;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_50;
  undefined4 local_4c;
  uint local_48 [4];
  uint local_38 [6];
  int local_20;
  
  iVar5 = 0;
  if ((((param_2 == (uint *)0x0) || (param_3 < 0x18)) || (param_2[1] == 0)) || (param_2[3] == 0)) {
    return -6;
  }
  if ((*param_2 & 0x80000000) != 0) {
    return 0;
  }
  puVar6 = param_1 + 4;
  local_84 = -6;
  puVar7 = local_48;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  bVar3 = false;
  if (param_1[10] == 0) {
LAB_5f952dc2:
    if (param_1[10] == 0) goto LAB_5f952dca;
  }
  else {
    uVar1 = param_1[8];
    uVar2 = param_1[9];
    if (((((*(int *)(param_2[1] + 4) == *(int *)(uVar1 + 0x34)) &&
          (*(int *)(param_2[1] + 8) == *(int *)(uVar1 + 0x38))) &&
         ((*(int *)(param_2[1] + 0x14) == *(int *)(uVar1 + 0x44) &&
          ((*(int *)(param_2[1] + 0x10) == *(int *)(uVar1 + 0x40) &&
           (uVar1 = param_2[3], *(int *)(uVar1 + 4) == *(int *)(uVar2 + 0x34))))))) &&
        (*(int *)(uVar1 + 8) == *(int *)(uVar2 + 0x38))) &&
       ((*(int *)(uVar1 + 0x14) == *(int *)(uVar2 + 0x44) &&
        (*(int *)(uVar1 + 0x10) == *(int *)(uVar2 + 0x40))))) goto LAB_5f952dc2;
LAB_5f952dca:
    local_48[1] = param_1[1];
    local_48[0] = *param_1;
    local_48[3] = param_1[3];
    local_84 = FUN_5f9529c0(local_48,param_2[1],param_2[3]);
    if (local_84 != 0) goto LAB_5f952e87;
    puVar6 = local_38;
  }
  bVar3 = true;
  puVar8 = local_78;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_4c = *(undefined4 *)(param_2[1] + 0x14);
  local_78[0] = *(undefined4 *)(param_2[1] + 0x14);
  local_50 = param_2[2];
  local_68 = 0;
  local_64 = 0;
  local_78[2] = 0x111;
  local_60 = *(undefined4 *)(puVar6[5] + 0x28);
  local_5c = *(undefined4 *)(puVar6[5] + 0x2c);
  iVar5 = (**(code **)(*(int *)puVar6[3] + 0x24))
                    ((int *)puVar6[3],param_2[4],*(undefined4 *)(param_2[3] + 0x14));
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*(int *)puVar6[2] + 0x54))((int *)puVar6[2],local_78);
    (**(code **)(*(int *)puVar6[3] + 0x24))((int *)puVar6[3],0,0);
  }
LAB_5f952e87:
  if (local_20 != 0) {
    FUN_5f9529a0((int)local_48);
  }
  if (bVar3) {
    local_84 = FUN_5f951a50(iVar5);
  }
  return local_84;
}


