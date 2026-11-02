/* Module: mpgvout.004
   Function: FUN_10003724
   Address: 10003724
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10003724(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  short in_MM4_Wa;
  short sVar8;
  short local_30;
  short local_2c;
  int local_28;
  int local_24;
  
  puVar6 = (undefined8 *)(param_4 + *param_3 + *(int *)(param_1 + 0x568) * param_5);
  iVar1 = FUN_10003418(puVar6,*(int *)(param_1 + 0x568));
  DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
  local_30 = in_MM4_Wa;
  iVar2 = FUN_10003418(puVar6 + 1,*(int *)(param_1 + 0x568));
  local_2c = in_MM4_Wa + local_30;
  DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
  iVar7 = iVar1;
  local_24 = iVar2;
  if ((iVar1 <= iVar2) && (local_24 = iVar1, iVar1 < iVar2)) {
    iVar7 = iVar2;
  }
  iVar3 = FUN_10003418(puVar6 + *(int *)(param_1 + 0x568),*(int *)(param_1 + 0x568));
  DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
  iVar4 = iVar3;
  if ((local_24 <= iVar3) && (iVar4 = local_24, iVar7 < iVar3)) {
    iVar7 = iVar3;
  }
  local_24 = iVar4;
  sVar8 = local_30;
  iVar4 = FUN_10003418(puVar6 + *(int *)(param_1 + 0x568) + 1,*(int *)(param_1 + 0x568));
  local_28 = iVar2 + iVar1 + iVar3 + iVar4;
  local_30 = local_30 + sVar8;
  DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
  iVar1 = iVar4;
  if ((local_24 <= iVar4) && (iVar1 = local_24, iVar7 < iVar4)) {
    iVar7 = iVar4;
  }
  local_24 = iVar1;
  *(undefined1 *)(param_2 + 3) = 0;
  if ((*(int *)(param_1 + 0x5c4) == 0) && (*(int *)(param_1 + 0x590) == 3)) {
    iVar4 = FUN_10003418(puVar6,*(int *)(param_1 + 0x550) * 2);
    DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
    local_30 = sVar8;
    iVar3 = FUN_10003418(puVar6 + 1,*(int *)(param_1 + 0x550) * 2);
    iVar1 = iVar3 + iVar4;
    local_2c = sVar8 + local_30;
    DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
    iVar2 = iVar3;
    if ((iVar4 <= iVar3) && (iVar2 = iVar4, iVar4 < iVar3)) {
      iVar4 = iVar3;
    }
    iVar5 = FUN_10003418((undefined8 *)(*(int *)(param_1 + 0x550) + (int)puVar6),
                         *(int *)(param_1 + 0x550) * 2);
    DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
    iVar3 = iVar5;
    if ((iVar2 <= iVar5) && (iVar3 = iVar2, iVar4 < iVar5)) {
      iVar4 = iVar5;
    }
    sVar8 = local_30;
    iVar2 = FUN_10003418((undefined8 *)(*(int *)(param_1 + 0x550) + 8 + (int)puVar6),
                         *(int *)(param_1 + 0x550) * 2);
    iVar5 = iVar1 + iVar5 + iVar2;
    local_30 = local_30 + sVar8;
    DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
    iVar1 = iVar2;
    if ((iVar3 <= iVar2) && (iVar1 = iVar3, iVar4 < iVar2)) {
      iVar4 = iVar2;
    }
    if (iVar5 * 4 < local_28 * 5) {
      *(undefined1 *)(param_2 + 3) = 1;
      iVar7 = iVar4;
      local_28 = iVar5;
      local_24 = iVar1;
    }
  }
  iVar1 = local_28 + 2 >> 2;
  iVar2 = iVar1 + 7 >> 4;
  *(int *)(param_2 + 0x34) = iVar2;
  if (*(int *)(param_1 + 0x28) < 2) {
    iVar4 = FUN_10003418((undefined8 *)
                         ((param_4 >> 1) + param_3[1] + *(int *)(param_1 + 0x574) * (param_5 >> 1)),
                         *(int *)(param_1 + 0x574));
    iVar2 = iVar4;
    if ((local_24 <= iVar4) && (iVar2 = local_24, iVar7 < iVar4)) {
      iVar7 = iVar4;
    }
    local_24 = iVar2;
    iVar3 = FUN_10003418((undefined8 *)
                         ((param_5 >> 1) * *(int *)(param_1 + 0x574) + (param_4 >> 1) + param_3[2]),
                         *(int *)(param_1 + 0x574));
    iVar2 = iVar3;
    if ((local_24 <= iVar3) && (iVar2 = local_24, iVar7 < iVar3)) {
      iVar7 = iVar3;
    }
    local_24 = iVar2;
    iVar1 = iVar4 + iVar3 + iVar1;
    *(int *)(param_2 + 0x30) = (iVar1 >> 1) + 7 + iVar1 >> 5;
  }
  else {
    *(int *)(param_2 + 0x30) = iVar2;
  }
  *(int *)(param_2 + 0x28) = local_24 + 7 >> 4;
  *(int *)(param_2 + 0x2c) = iVar7 + 7 >> 4;
  *(short *)(param_2 + 0x38) = local_2c;
  *(short *)(param_2 + 0x3a) = local_30;
  DAT_1003f8f0 = DAT_1003f8f0 + 0x20;
  return *(undefined4 *)(param_2 + 0x34);
}


