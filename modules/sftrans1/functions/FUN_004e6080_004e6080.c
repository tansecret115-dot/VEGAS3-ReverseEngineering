/* Module: sftrans1.dll
   Function: FUN_004e6080
   Address: 004e6080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e6080(int *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar7 = param_3;
  iVar8 = *param_1;
  uVar4 = *(int *)(iVar8 + 100) / 2 + 0x2000 + param_1[0x1b];
  uVar1 = *(int *)(iVar8 + 0x68) / 2 + 0x2000 + param_1[0x1c];
  iVar3 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  piVar2 = (int *)(param_3 + 0x244 + *(int *)(iVar8 + 0x5c) * 0x18);
  iVar8 = param_3 + 0x544;
  uVar4 = uVar4 & 0x80003fff;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffc000) + 1;
  }
  local_1c = &DAT_0060c6d0 + ((int)uVar4 >> 2) * 4;
  uVar4 = uVar1 & 0x80003fff;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffc000) + 1;
  }
  local_8 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = local_8 + -2;
  if (iVar10 < 0) {
    local_50 = 0;
  }
  else {
    local_50 = piVar2[5] + -1;
    if (iVar10 <= piVar2[5] + -1) {
      local_50 = iVar10;
    }
  }
  iVar10 = local_8 + -1;
  if (iVar10 < 0) {
    local_4c = 0;
  }
  else {
    local_4c = piVar2[5] + -1;
    if (iVar10 <= piVar2[5] + -1) {
      local_4c = iVar10;
    }
  }
  if (local_8 < 0) {
    local_48 = 0;
  }
  else {
    local_48 = piVar2[5] + -1;
    if (local_8 <= piVar2[5] + -1) {
      local_48 = local_8;
    }
  }
  iVar10 = local_8 + 1;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (piVar2[5] + -1 < iVar10) {
    iVar10 = piVar2[5] + -1;
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  else if (piVar2[5] + -1 < local_8) {
    local_8 = piVar2[5] + -1;
  }
  local_44 = iVar10 - local_8;
  local_50 = local_50 - local_8;
  local_4c = local_4c - local_8;
  local_48 = local_48 - local_8;
  iVar10 = iVar3 + -2;
  if (iVar10 < 0) {
    local_40 = 0;
  }
  else {
    local_40 = piVar2[4] + -1;
    if (iVar10 <= piVar2[4] + -1) {
      local_40 = iVar10;
    }
  }
  iVar10 = iVar3 + -1;
  if (iVar10 < 0) {
    local_3c = 0;
  }
  else {
    local_3c = piVar2[4] + -1;
    if (iVar10 <= piVar2[4] + -1) {
      local_3c = iVar10;
    }
  }
  if (iVar3 < 0) {
    local_38 = 0;
  }
  else {
    local_38 = piVar2[4] + -1;
    if (iVar3 <= piVar2[4] + -1) {
      local_38 = iVar3;
    }
  }
  iVar10 = iVar3 + 1;
  if (iVar10 < 0) {
    local_34 = 0;
  }
  else {
    local_34 = piVar2[4] + -1;
    if (iVar10 <= piVar2[4] + -1) {
      local_34 = iVar10;
    }
  }
  if (iVar3 < 0) {
    param_3 = 0;
  }
  else {
    param_3 = iVar3;
    if (piVar2[4] + -1 < iVar3) {
      param_3 = piVar2[4] + -1;
    }
  }
  local_c = &DAT_0060c6d0 + ((int)uVar4 >> 2) * 4;
  local_40 = local_40 - param_3;
  local_14 = 4;
  local_3c = local_3c - param_3;
  local_38 = local_38 - param_3;
  *(int *)(iVar7 + 0x5b8) = -piVar2[1];
  local_34 = local_34 - param_3;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_18 = (int)&local_50 - (int)(&DAT_0060c6d0 + ((int)uVar4 >> 2) * 4);
  do {
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    param_1 = local_1c;
    local_10 = 4;
    iVar9 = (piVar2[5] - *(int *)(local_18 + (int)local_c)) - local_8;
    iVar3 = *piVar2;
    iVar10 = piVar2[1];
    local_20 = (int)&local_40 - (int)local_1c;
    do {
      iVar6 = param_3 + *(int *)(local_20 + (int)param_1);
      iVar5 = iVar6 * piVar2[3];
      *(int *)(iVar7 + 0x5a0) =
           ((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + (iVar9 + -1) * iVar10 + iVar3;
      uVar4 = iVar6 * piVar2[3] & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      *(uint *)(iVar7 + 0x5a4) = uVar4;
      (**(code **)(iVar7 + 0x550))(iVar8);
      iVar5 = *param_1;
      local_60 = local_60 + (uint)*(byte *)(iVar7 + 0x580) * iVar5;
      local_5c = local_5c + (uint)*(byte *)(iVar7 + 0x581) * iVar5;
      local_58 = local_58 + (uint)*(byte *)(iVar7 + 0x582) * iVar5;
      param_1 = param_1 + 1;
      local_54 = local_54 + (uint)*(byte *)(iVar7 + 0x583) * iVar5;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    local_24 = (uint)((longlong)local_60 * (longlong)*local_c) >> 0xe |
               (int)((ulonglong)((longlong)local_60 * (longlong)*local_c) >> 0x20) << 0x12;
    local_70 = local_70 + local_24;
    local_28 = (uint)((longlong)local_5c * (longlong)*local_c) >> 0xe |
               (int)((ulonglong)((longlong)local_5c * (longlong)*local_c) >> 0x20) << 0x12;
    local_6c = local_6c + local_28;
    local_2c = (uint)((longlong)local_58 * (longlong)*local_c) >> 0xe |
               (int)((ulonglong)((longlong)local_58 * (longlong)*local_c) >> 0x20) << 0x12;
    local_68 = local_68 + local_2c;
    local_30 = (uint)((longlong)local_54 * (longlong)*local_c) >> 0xe |
               (int)((ulonglong)((longlong)local_54 * (longlong)*local_c) >> 0x20) << 0x12;
    local_64 = local_64 + local_30;
    local_14 = local_14 + -1;
    local_c = local_c + 1;
  } while (local_14 != 0);
  iVar7 = (int)(local_70 + 0x2000 + (local_70 + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar3 = (int)(local_6c + 0x2000 + (local_6c + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (int)(local_68 + 0x2000 + (local_68 + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (int)(local_64 + 0x2000 + (local_64 + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  *param_2 = (char)iVar7;
  if (iVar3 < 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0xff;
    if (iVar3 < 0x100) {
      iVar7 = iVar3;
    }
  }
  param_2[1] = (char)iVar7;
  if (iVar10 < 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0xff;
    if (iVar10 < 0x100) {
      iVar7 = iVar10;
    }
  }
  param_2[2] = (char)iVar7;
  if (-1 < iVar8) {
    if (0xff < iVar8) {
      iVar8 = 0xff;
    }
    param_2[3] = (char)iVar8;
    return;
  }
  param_2[3] = 0;
  return;
}


