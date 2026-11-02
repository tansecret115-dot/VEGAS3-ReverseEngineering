/* Module: oggplug.dll
   Function: FUN_00441860
   Address: 00441860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00441860(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  size_t _Size;
  int iVar10;
  uint uVar11;
  undefined4 extraout_EDX;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *local_2c;
  uint local_28;
  int local_24;
  
  iVar13 = 0;
  iVar1 = *param_2;
  local_2c = (undefined4 *)param_2[2];
  local_28 = param_2[3];
  uVar2 = FUN_00440df0(param_2);
  bVar3 = FUN_00440e00(param_2);
  bVar4 = FUN_00440e10(param_2);
  local_24 = CONCAT31(extraout_var_01,bVar4);
  bVar4 = FUN_00440e20(param_2);
  uVar5 = FUN_00440e30(param_2);
  iVar6 = FUN_00440f10(param_2);
  iVar7 = FUN_00440f40(param_2);
  uVar9 = (uint)*(byte *)(iVar1 + 0x1a);
  iVar12 = param_1[3];
  iVar10 = param_1[9];
  if (iVar12 != 0) {
    _Size = param_1[2] - iVar12;
    param_1[2] = _Size;
    if (_Size != 0) {
      memmove((void *)*param_1,(void *)(*param_1 + iVar12),_Size);
    }
    param_1[3] = 0;
  }
  if (iVar10 != 0) {
    if (param_1[7] != iVar10) {
      memmove((void *)param_1[4],(void *)(param_1[4] + iVar10 * 4),
              (iVar10 * 0x3fffffff + param_1[7]) * 4);
      memmove((void *)param_1[5],(void *)(param_1[5] + iVar10 * 8),
              (iVar10 * 0x1fffffff + param_1[7]) * 8);
    }
    param_1[7] = param_1[7] - iVar10;
    param_1[8] = param_1[8] - iVar10;
    param_1[9] = 0;
  }
  if (iVar6 != param_1[0x54]) {
    return 0xffffffff;
  }
  if (0 < CONCAT31(extraout_var,uVar2)) {
    return 0xffffffff;
  }
  FUN_00441280((int)param_1,uVar9 + 1);
  if (iVar7 != param_1[0x55]) {
    iVar12 = param_1[8];
    if (iVar12 < param_1[7]) {
      iVar10 = param_1[7] - iVar12;
      puVar8 = (uint *)(param_1[4] + iVar12 * 4);
      do {
        uVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        param_1[2] = param_1[2] - (uVar11 & 0xff);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    param_1[7] = iVar12;
    if (param_1[0x55] != -1) {
      *(undefined4 *)(param_1[4] + iVar12 * 4) = 0x400;
      param_1[7] = param_1[7] + 1;
      param_1[8] = param_1[8] + 1;
    }
    if ((CONCAT31(extraout_var_00,bVar3) != 0) && (local_24 = 0, uVar9 != 0)) {
      do {
        uVar11 = (uint)*(byte *)(iVar1 + 0x1b + iVar13);
        local_2c = (undefined4 *)((int)local_2c + uVar11);
        local_28 = local_28 - uVar11;
        if (uVar11 < 0xff) {
          iVar13 = iVar13 + 1;
          break;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)uVar9);
    }
  }
  if (local_28 != 0) {
    FUN_00441250(param_1,local_28);
    puVar14 = (undefined4 *)(param_1[2] + *param_1);
    for (uVar11 = local_28 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar14 = *local_2c;
      local_2c = local_2c + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar11 = local_28 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)local_2c;
      local_2c = (undefined4 *)((int)local_2c + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    param_1[2] = param_1[2] + local_28;
  }
  iVar12 = -1;
  if (iVar13 < (int)uVar9) {
    do {
      uVar11 = (uint)*(byte *)(iVar1 + 0x1b + iVar13);
      *(uint *)(param_1[4] + param_1[7] * 4) = uVar11;
      iVar10 = param_1[7];
      iVar6 = param_1[5];
      *(undefined4 *)(iVar6 + iVar10 * 8) = 0xffffffff;
      *(undefined4 *)(iVar6 + 4 + iVar10 * 8) = 0xffffffff;
      if (local_24 != 0) {
        local_24 = 0;
        puVar8 = (uint *)(param_1[4] + param_1[7] * 4);
        *puVar8 = *puVar8 | 0x100;
      }
      if (uVar11 < 0xff) {
        iVar12 = param_1[7];
      }
      iVar10 = param_1[7];
      iVar13 = iVar13 + 1;
      param_1[7] = iVar10 + 1;
      if (uVar11 < 0xff) {
        param_1[8] = iVar10 + 1;
      }
    } while (iVar13 < (int)uVar9);
    if (iVar12 != -1) {
      iVar1 = param_1[5];
      *(uint *)(iVar1 + iVar12 * 8) = uVar5;
      *(undefined4 *)(iVar1 + 4 + iVar12 * 8) = extraout_EDX;
    }
  }
  if (CONCAT31(extraout_var_02,bVar4) != 0) {
    iVar1 = param_1[7];
    param_1[0x52] = 1;
    if (0 < iVar1) {
      *(uint *)(param_1[4] + -4 + iVar1 * 4) = *(uint *)(param_1[4] + -4 + iVar1 * 4) | 0x200;
    }
  }
  param_1[0x55] = iVar7 + 1;
  return 0;
}


