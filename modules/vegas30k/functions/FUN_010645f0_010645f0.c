/* Module: vegas30k.dll
   Function: FUN_010645f0
   Address: 010645f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010645f0(int *param_1,undefined1 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_40;
  int local_38;
  int local_34;
  int local_24;
  int local_14;
  int local_10;
  
  iVar3 = param_3;
  iVar5 = *param_1;
  iVar8 = param_1[0x1b];
  param_1 = (int *)param_1[0x1c];
  piVar1 = (int *)(param_3 + 0x244 + *(int *)(iVar5 + 0x5c) * 0x18);
  iVar14 = param_3 + 0x544;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (piVar1[4] * 0x4000 < iVar8) {
    iVar8 = piVar1[4] * 0x4000;
  }
  if ((int)param_1 < 0) {
    param_1 = (int *)0x0;
  }
  else if (piVar1[5] * 0x4000 < (int)param_1) {
    param_1 = (int *)(piVar1[5] * 0x4000);
  }
  iVar4 = *(int *)(iVar5 + 100) / 2;
  uVar12 = iVar8 - iVar4;
  param_3 = iVar4 + iVar8;
  iVar5 = *(int *)(iVar5 + 0x68) / 2;
  uVar10 = (int)param_1 - iVar5;
  param_1 = (int *)(iVar5 + (int)param_1);
  if ((int)uVar12 < 0) {
    uVar12 = 0;
  }
  else if (piVar1[4] * 0x4000 < (int)uVar12) {
    uVar12 = piVar1[4] * 0x4000;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  else if (piVar1[4] * 0x4000 < (int)param_3) {
    param_3 = piVar1[4] * 0x4000;
  }
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  else if (piVar1[5] * 0x4000 < (int)uVar10) {
    uVar10 = piVar1[5] * 0x4000;
  }
  if ((int)param_1 < 0) {
    param_1 = (int *)0x0;
  }
  else if (piVar1[5] * 0x4000 < (int)param_1) {
    param_1 = (int *)(piVar1[5] * 0x4000);
  }
  local_24 = (int)param_1 - uVar10;
  iVar6 = param_3 - uVar12;
  uVar7 = (uint)((longlong)iVar6 * (longlong)local_24) >> 0xe |
          (int)((ulonglong)((longlong)iVar6 * (longlong)local_24) >> 0x20) << 0x12;
  iVar5 = (int)((uVar12 & 0xffffc000) + ((int)uVar12 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (param_3 - 1 | 0x3fff) + 1;
  iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (int)((uVar10 & 0xffffc000) + ((int)uVar10 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = ((int)param_1 - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
  if (1 < iVar8 - iVar5) {
    iVar6 = (iVar5 + 1) * 0x4000 - uVar12;
  }
  if (1 < iVar9 - iVar4) {
    local_24 = (iVar4 + 1) * 0x4000 - uVar10;
  }
  iVar13 = 0;
  *(int *)(iVar3 + 0x5b8) = -piVar1[1];
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  for (iVar11 = iVar4; iVar11 < iVar9; iVar11 = iVar11 + 1) {
    iVar2 = iVar5;
    if (iVar11 == iVar4) {
      local_10 = local_24;
    }
    else if ((iVar11 == iVar9 + -1) && (((uint)param_1 & 0x3fff) != 0)) {
      local_10 = (int)param_1 + iVar9 * -0x4000 + 0x4000;
    }
    else {
      local_10 = 0x4000;
    }
    for (; iVar2 < iVar8; iVar2 = iVar2 + 1) {
      local_14 = iVar6;
      if (iVar2 != iVar5) {
        if ((iVar2 == iVar8 + -1) && ((param_3 & 0x3fff) != 0)) {
          local_14 = param_3 + iVar8 * -0x4000 + 0x4000;
        }
        else {
          local_14 = 0x4000;
        }
      }
      uVar10 = (uint)((longlong)local_14 * (longlong)local_10) >> 0xe |
               (int)((ulonglong)((longlong)local_14 * (longlong)local_10) >> 0x20) << 0x12;
      *(int *)(iVar3 + 0x5a0) =
           ((piVar1[5] - iVar11) + -1) * piVar1[1] +
           ((int)(piVar1[3] * iVar2 + (piVar1[3] * iVar2 >> 0x1f & 7U)) >> 3) + *piVar1;
      uVar12 = piVar1[3] * iVar2 & 0x80000007;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
      }
      *(uint *)(iVar3 + 0x5a4) = uVar12;
      (**(code **)(iVar3 + 0x550))(iVar14);
      local_40 = local_40 + *(byte *)(iVar3 + 0x580) * uVar10;
      iVar13 = iVar13 + *(byte *)(iVar3 + 0x581) * uVar10;
      local_38 = local_38 + *(byte *)(iVar3 + 0x582) * uVar10;
      local_34 = local_34 + *(byte *)(iVar3 + 0x583) * uVar10;
    }
  }
  if ((int)uVar7 < 0x4000) {
    if (0 < (int)uVar7) {
      iVar5 = uVar7 + 1;
      *param_2 = (char)(local_40 / iVar5);
      param_2[1] = (char)(iVar13 / iVar5);
      param_2[2] = (char)(local_38 / iVar5);
      param_2[3] = (char)(local_34 / iVar5);
    }
    return;
  }
  *param_2 = (char)((local_40 + 0x2000) / (int)uVar7);
  param_2[1] = (char)((iVar13 + 0x2000) / (int)uVar7);
  param_2[2] = (char)((local_38 + 0x2000) / (int)uVar7);
  param_2[3] = (char)((local_34 + 0x2000) / (int)uVar7);
  return;
}


