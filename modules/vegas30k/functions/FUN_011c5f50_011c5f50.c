/* Module: vegas30k.dll
   Function: FUN_011c5f50
   Address: 011c5f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c5f50(undefined4 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  int local_20;
  ushort local_1c;
  ushort uStack_1a;
  undefined2 local_18;
  ushort local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar5 = DAT_0120645c;
  uVar4 = DAT_01206458;
  uVar3 = DAT_01206454;
  uVar2 = DAT_01206450;
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  local_16 = *(ushort *)((int)param_1 + 0xe);
  if (local_16 == 0x18) {
    uVar6 = *(short *)((int)param_1 + 2) * 3;
    *(ushort *)(param_1 + 3) = uVar6;
    param_1[2] = (uint)uVar6 * param_1[1];
    *(undefined2 *)param_1 = 0xfffe;
    *(undefined2 *)((int)param_1 + 0xe) = 0x18;
    param_1[6] = uVar2;
    *(undefined2 *)(param_1 + 4) = 0x16;
    *(undefined2 *)((int)param_1 + 0x12) = 0x18;
    param_1[7] = uVar3;
    param_1[5] = 0;
    param_1[8] = uVar4;
    param_1[9] = uVar5;
    iVar7 = FUN_011c5f30(param_1);
    if (-1 < iVar7) {
      return iVar7;
    }
    uVar6 = *(short *)((int)param_1 + 2) * 3;
    *(ushort *)(param_1 + 3) = uVar6;
    *(undefined2 *)param_1 = 1;
    *(undefined2 *)((int)param_1 + 0xe) = 0x18;
    param_1[2] = (uint)uVar6 * param_1[1];
    *(undefined2 *)(param_1 + 4) = 0;
    iVar7 = FUN_011c5f30(param_1);
    if (-1 < iVar7) {
      return iVar7;
    }
    *(undefined2 *)param_1 = 1;
    uVar6 = *(short *)((int)param_1 + 2) << 2;
    *(ushort *)(param_1 + 3) = uVar6;
    *(undefined2 *)((int)param_1 + 0xe) = 0x20;
    param_1[2] = (uint)uVar6 * param_1[1];
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else if (2 < *(ushort *)((int)param_1 + 2)) {
    local_28._2_2_ = *(short *)((int)param_1 + 2);
    local_20 = param_1[1];
    uStack_24 = (undefined2)local_20;
    uStack_22 = (undefined2)((uint)local_20 >> 0x10);
    uVar6 = (local_16 >> 3) * (short)*(undefined4 *)((int)param_1 + 2);
    _local_1c = CONCAT22(local_16,uVar6);
    local_20 = (uint)uVar6 * local_20;
    local_28._0_2_ = 0xfffe;
    local_18 = 0x16;
    local_14 = 0x80000000;
    local_10 = DAT_01206450;
    local_c = DAT_01206454;
    local_8 = DAT_01206458;
    local_4 = DAT_0120645c;
    iVar7 = FUN_011c5f30(&local_28);
    if (iVar7 < 0) {
      sVar1 = *(short *)((int)param_1 + 2);
      puVar9 = &local_28;
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_20 = param_1[1];
      uStack_24 = (undefined2)local_20;
      uStack_22 = (undefined2)((uint)local_20 >> 0x10);
      uVar6 = (*(ushort *)((int)param_1 + 0xe) >> 3) * sVar1;
      _local_1c = CONCAT22(*(ushort *)((int)param_1 + 0xe),uVar6);
      local_28._0_2_ = 1;
      local_20 = (uint)uVar6 * local_20;
      local_18 = 0;
      local_28._2_2_ = sVar1;
      iVar7 = FUN_011c5f30(&local_28);
    }
    puVar9 = &local_28;
    for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *param_1 = *puVar9;
      puVar9 = puVar9 + 1;
      param_1 = param_1 + 1;
    }
    return iVar7;
  }
  iVar7 = FUN_011c5f30(param_1);
  return iVar7;
}


