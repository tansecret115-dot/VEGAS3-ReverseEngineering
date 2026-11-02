/* Module: mpgvout.003
   Function: FUN_1001dd00
   Address: 1001dd00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1001dd00(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  short in_MM4_Wa;
  short sVar8;
  short local_24;
  short local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar7 = (undefined8 *)(param_4 + *param_3 + *(int *)(param_1 + 0x568) * param_5);
  iVar1 = FUN_10003410(puVar7,*(int *)(param_1 + 0x568));
  local_24 = in_MM4_Wa;
  iVar2 = FUN_10003410(puVar7 + 1,*(int *)(param_1 + 0x568));
  local_20 = in_MM4_Wa + local_24;
  local_1c = iVar1;
  local_14 = iVar2;
  if ((iVar1 <= iVar2) && (local_14 = iVar1, iVar1 < iVar2)) {
    local_1c = iVar2;
  }
  iVar3 = FUN_10003410(puVar7 + *(int *)(param_1 + 0x568),*(int *)(param_1 + 0x568));
  iVar4 = iVar3;
  if ((local_14 <= iVar3) && (iVar4 = local_14, local_1c < iVar3)) {
    local_1c = iVar3;
  }
  local_14 = iVar4;
  sVar8 = local_24;
  iVar4 = FUN_10003410(puVar7 + *(int *)(param_1 + 0x568) + 1,*(int *)(param_1 + 0x568));
  local_18 = iVar1 + iVar2 + iVar3 + iVar4;
  local_24 = local_24 + sVar8;
  iVar1 = iVar4;
  if ((local_14 <= iVar4) && (iVar1 = local_14, local_1c < iVar4)) {
    local_1c = iVar4;
  }
  local_14 = iVar1;
  *(undefined1 *)(param_2 + 3) = 0;
  if ((*(int *)(param_1 + 0x5c4) == 0) && (*(int *)(param_1 + 0x590) == 3)) {
    iVar2 = FUN_10003410(puVar7,*(int *)(param_1 + 0x550) * 2);
    local_24 = sVar8;
    iVar4 = FUN_10003410(puVar7 + 1,*(int *)(param_1 + 0x550) * 2);
    iVar3 = iVar2 + iVar4;
    local_20 = sVar8 + local_24;
    iVar1 = iVar4;
    if ((iVar2 <= iVar4) && (iVar1 = iVar2, iVar2 < iVar4)) {
      iVar2 = iVar4;
    }
    iVar5 = FUN_10003410((undefined8 *)(*(int *)(param_1 + 0x550) + (int)puVar7),
                         *(int *)(param_1 + 0x550) * 2);
    iVar4 = iVar5;
    if ((iVar1 <= iVar5) && (iVar4 = iVar1, iVar2 < iVar5)) {
      iVar2 = iVar5;
    }
    sVar8 = local_24;
    iVar6 = FUN_10003410((undefined8 *)(*(int *)(param_1 + 0x550) + 8 + (int)puVar7),
                         *(int *)(param_1 + 0x550) * 2);
    iVar3 = iVar3 + iVar5 + iVar6;
    local_24 = local_24 + sVar8;
    iVar1 = iVar6;
    if ((iVar4 <= iVar6) && (iVar1 = iVar4, iVar2 < iVar6)) {
      iVar2 = iVar6;
    }
    if (iVar3 * 4 < local_18 * 5) {
      *(undefined1 *)(param_2 + 3) = 1;
      local_1c = iVar2;
      local_18 = iVar3;
      local_14 = iVar1;
    }
  }
  iVar1 = local_18 + 2 >> 2;
  iVar2 = iVar1 + 7 >> 4;
  *(int *)(param_2 + 0x34) = iVar2;
  if (*(int *)(param_1 + 0x28) < 2) {
    iVar4 = FUN_10003410((undefined8 *)
                         ((param_4 >> 1) + param_3[1] + *(int *)(param_1 + 0x574) * (param_5 >> 1)),
                         *(int *)(param_1 + 0x574));
    iVar2 = iVar4;
    if ((local_14 <= iVar4) && (iVar2 = local_14, local_1c < iVar4)) {
      local_1c = iVar4;
    }
    local_14 = iVar2;
    iVar3 = FUN_10003410((undefined8 *)
                         ((param_5 >> 1) * *(int *)(param_1 + 0x574) + (param_4 >> 1) + param_3[2]),
                         *(int *)(param_1 + 0x574));
    iVar2 = iVar3;
    if ((local_14 <= iVar3) && (iVar2 = local_14, local_1c < iVar3)) {
      local_1c = iVar3;
    }
    local_14 = iVar2;
    iVar1 = iVar4 + iVar3 + iVar1;
    *(int *)(param_2 + 0x30) = (iVar1 >> 1) + 7 + iVar1 >> 5;
  }
  else {
    *(int *)(param_2 + 0x30) = iVar2;
  }
  *(int *)(param_2 + 0x28) = local_14 + 7 >> 4;
  *(int *)(param_2 + 0x2c) = local_1c + 7 >> 4;
  *(short *)(param_2 + 0x38) = local_20;
  *(short *)(param_2 + 0x3a) = local_24;
  return *(undefined4 *)(param_2 + 0x34);
}


