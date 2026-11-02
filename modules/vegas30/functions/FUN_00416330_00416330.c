/* Module: vegas30.exe
   Function: FUN_00416330
   Address: 00416330
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00416330(int param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint local_48 [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_20;
  undefined4 local_18;
  
  puVar3 = local_48;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28 = 0xe;
  local_20 = param_3;
  local_18 = 1;
  local_48[0] = *param_2;
  local_48[1] = param_2[1];
  local_48[2] = param_2[2];
  local_38 = *param_2;
  local_48[3] = param_2[3];
  local_34 = param_2[1];
  local_30 = param_2[2];
  uVar2 = *(uint *)(param_3 + 0x10);
  local_2c = param_2[3];
  if (((byte)uVar2 & 3) == 1) {
    piVar1 = *(int **)(param_1 + 0x8c);
    uVar5 = uVar2 >> 8 & 0xf;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if ((((int)uVar5 <= iVar4 + -1) && (piVar1[1] * uVar5 + piVar1[2] != 0)) &&
       ((uVar2 & 0x10) != 0)) {
      FUN_00416290(param_1,param_3,uVar5);
      return uVar5;
    }
  }
  uVar2 = FUN_00415ef0(param_1,local_48[0],local_48[1]);
  if ((-1 < (int)uVar2) &&
     (puVar3 = (uint *)(*(int *)(*(int *)(param_1 + 0x8c) + 4) * uVar2 +
                       *(int *)(*(int *)(param_1 + 0x8c) + 8)), puVar3 != (uint *)0x0)) {
    local_48[0] = *puVar3;
    local_48[1] = puVar3[1];
    local_48[2] = puVar3[2];
    local_48[3] = puVar3[3];
    if (puVar3[0xc] == 0) {
      puVar3[10] = param_3;
      puVar3[0xc] = 1;
      return uVar2;
    }
    local_38 = *(uint *)(param_3 + 0x10) >> 0x10;
    local_34 = local_48[1];
    local_30 = local_48[2];
    local_2c = local_48[3];
    if (local_38 == *puVar3) {
      local_38 = local_48[0];
      FUN_00416290(param_1,param_3,uVar2);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    if (((int)local_38 < (int)*puVar3) || ((int)puVar3[2] < (int)local_38)) {
      local_38 = (puVar3[2] - param_2[2]) + *param_2;
    }
    puVar3[2] = local_38;
    local_48[0] = local_38;
  }
  uVar2 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x8c),uVar2,local_48,1);
  return uVar2;
}


