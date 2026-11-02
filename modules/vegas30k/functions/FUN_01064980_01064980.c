/* Module: vegas30k.dll
   Function: FUN_01064980
   Address: 01064980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01064980(int *param_1,undefined1 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
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
  uint local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar9 = param_3;
  iVar8 = *param_1;
  iVar3 = *(int *)(iVar8 + 100);
  local_38 = *(uint *)(iVar8 + 0x68);
  piVar1 = (int *)(param_3 + 0x244 + *(int *)(iVar8 + 0x5c) * 0x18);
  iVar8 = param_3 + 0x544;
  *(int *)(param_3 + 0x5b8) = -piVar1[1];
  if (iVar3 < 0x4001) {
    iVar3 = param_1[0x1c];
    uVar5 = *(int *)(*param_1 + 100) / 2 + 0x2000 + param_1[0x1b];
    uVar4 = uVar5 & 0x80003fff;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffc000) + 1;
    }
    iVar2 = piVar1[4];
    local_34 = &DAT_0129efdc + ((int)uVar4 >> 2) * 4;
    local_14 = (int *)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x3fffU)) >> 0xe);
    iVar9 = (int)local_14 + -2;
    if (iVar9 < 0) {
      local_60 = 0;
    }
    else {
      local_60 = iVar2 + -1;
      if (iVar9 <= iVar2 + -1) {
        local_60 = iVar9;
      }
    }
    iVar9 = (int)local_14 + -1;
    if (iVar9 < 0) {
      local_5c = 0;
    }
    else {
      local_5c = iVar2 + -1;
      if (iVar9 <= iVar2 + -1) {
        local_5c = iVar9;
      }
    }
    if ((int)local_14 < 0) {
      local_58 = 0;
    }
    else {
      local_58 = iVar2 + -1;
      if ((int)local_14 <= iVar2 + -1) {
        local_58 = (int)local_14;
      }
    }
    local_54 = (int)local_14 + 1;
    if (local_54 < 0) {
      local_54 = 0;
    }
    else if (iVar2 + -1 < local_54) {
      local_54 = iVar2 + -1;
    }
    if ((int)local_14 < 0) {
      iVar2 = 0;
LAB_01064ff3:
      local_14 = (int *)iVar2;
    }
    else {
      iVar2 = iVar2 + -1;
      if (iVar2 < (int)local_14) goto LAB_01064ff3;
    }
    local_60 = local_60 - (int)local_14;
    local_5c = local_5c - (int)local_14;
    local_58 = local_58 - (int)local_14;
    local_54 = local_54 - (int)local_14;
    if (iVar3 < 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)iVar3;
      if (piVar1[5] * 0x4000 < iVar3) {
        param_1 = (int *)(piVar1[5] * 0x4000);
      }
    }
    uVar5 = (int)local_38 / 2 + (int)param_1;
    uVar4 = (int)param_1 - (int)local_38 / 2;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (piVar1[5] * 0x4000 < (int)uVar4) {
      uVar4 = piVar1[5] * 0x4000;
    }
    if ((int)uVar5 < 0) {
      uVar6 = 0;
LAB_0106506b:
      uVar5 = uVar6;
    }
    else {
      uVar6 = piVar1[5] * 0x4000;
      if ((int)uVar6 < (int)uVar5) goto LAB_0106506b;
    }
    local_c = (int)((uVar4 & 0xffffc000) + ((int)uVar4 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar3 = (uVar5 - 1 | 0x3fff) + 1;
    local_40 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
    if (local_40 - local_c < 2) {
      local_20 = uVar5 - uVar4;
    }
    else {
      local_20 = (local_c + 1) * 0x4000 - uVar4;
    }
    iVar9 = 0;
    iVar3 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_18 = 0;
    local_8 = local_c;
    if (local_c < local_40) {
      do {
        local_70 = 0;
        local_6c = 0;
        local_68 = 0;
        local_64 = 0;
        if (local_c == local_8) {
          param_1 = (int *)local_20;
        }
        else if ((local_c == local_40 + -1) && ((uVar5 & 0x3fff) != 0)) {
          param_1 = (int *)(uVar5 + local_40 * -0x4000 + 0x4000);
        }
        else {
          param_1 = (int *)0x4000;
        }
        local_38 = (int)&local_60 - (int)local_34;
        local_1c = 4;
        piVar7 = local_34;
        do {
          local_2c = *(int *)(local_38 + (int)piVar7) + (int)local_14;
          *(int *)(param_3 + 0x5a0) =
               ((piVar1[5] - local_c) + -1) * piVar1[1] +
               ((int)(piVar1[3] * local_2c + ((int)(piVar1[3] * local_2c) >> 0x1f & 7U)) >> 3) +
               *piVar1;
          uVar4 = piVar1[3] * local_2c & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          *(uint *)(param_3 + 0x5a4) = uVar4;
          (**(code **)(param_3 + 0x550))(iVar8);
          iVar3 = *piVar7;
          local_70 = local_70 + (uint)*(byte *)(param_3 + 0x580) * iVar3;
          piVar7 = piVar7 + 1;
          local_6c = local_6c + (uint)*(byte *)(param_3 + 0x581) * iVar3;
          local_68 = local_68 + (uint)*(byte *)(param_3 + 0x582) * iVar3;
          local_64 = local_64 + (uint)*(byte *)(param_3 + 0x583) * iVar3;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
        local_28 = (uint)((longlong)local_70 * (longlong)(int)param_1) >> 0xe |
                   (int)((ulonglong)((longlong)local_70 * (longlong)(int)param_1) >> 0x20) << 0x12;
        iVar3 = local_50 + local_28;
        local_24 = (uint)((longlong)local_6c * (longlong)(int)param_1) >> 0xe |
                   (int)((ulonglong)((longlong)local_6c * (longlong)(int)param_1) >> 0x20) << 0x12;
        local_4c = local_4c + local_24;
        local_10 = (uint)((longlong)local_68 * (longlong)(int)param_1) >> 0xe |
                   (int)((ulonglong)((longlong)local_68 * (longlong)(int)param_1) >> 0x20) << 0x12;
        local_48 = local_48 + local_10;
        local_3c = (uint)((longlong)local_64 * (longlong)(int)param_1) >> 0xe |
                   (int)((ulonglong)((longlong)local_64 * (longlong)(int)param_1) >> 0x20) << 0x12;
        local_44 = local_44 + local_3c;
        iVar9 = local_18 + (int)param_1;
        local_c = local_c + 1;
        local_50 = iVar3;
        local_18 = iVar9;
      } while (local_c < local_40);
      if (iVar9 < 0x4000) goto LAB_0106528a;
      iVar3 = (iVar3 + 0x2000) / iVar9;
      local_4c = (local_4c + 0x2000) / iVar9;
      local_48 = (local_48 + 0x2000) / iVar9;
      local_44 = local_44 + 0x2000;
    }
    else {
LAB_0106528a:
      iVar9 = iVar9 + 1;
      iVar8 = iVar9;
      if (iVar9 < 2) {
        iVar8 = 1;
      }
      iVar3 = iVar3 / iVar8;
      iVar8 = iVar9;
      if (iVar9 < 2) {
        iVar8 = 1;
      }
      local_4c = local_4c / iVar8;
      iVar8 = iVar9;
      if (iVar9 < 2) {
        iVar8 = 1;
      }
      local_48 = local_48 / iVar8;
      if (iVar9 < 2) {
        iVar9 = 1;
      }
    }
    local_44 = local_44 / iVar9;
    if (iVar3 < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0xff;
      if (iVar3 < 0x100) {
        iVar8 = iVar3;
      }
    }
    *param_2 = (char)iVar8;
    if (local_4c < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0xff;
      if (local_4c < 0x100) {
        iVar8 = local_4c;
      }
    }
    param_2[1] = (char)iVar8;
    if (local_48 < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0xff;
      if (local_48 < 0x100) {
        iVar8 = local_48;
      }
    }
    param_2[2] = (char)iVar8;
    if (local_44 < 0) {
      param_2[3] = 0;
      return;
    }
    if (0xff < local_44) {
      local_44 = 0xff;
    }
    goto LAB_01065344;
  }
  uVar5 = *(int *)(*param_1 + 0x68) / 2 + 0x2000 + param_1[0x1c];
  uVar4 = uVar5 & 0x80003fff;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffc000) + 1;
  }
  local_14 = &DAT_0129efdc + ((int)uVar4 >> 2) * 4;
  local_c = (int)(uVar5 + ((int)uVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar2 = local_c + -2;
  if (iVar2 < 0) {
    local_60 = 0;
  }
  else {
    local_60 = piVar1[5] + -1;
    if (iVar2 <= piVar1[5] + -1) {
      local_60 = iVar2;
    }
  }
  iVar2 = local_c + -1;
  if (iVar2 < 0) {
    local_5c = 0;
  }
  else {
    local_5c = piVar1[5] + -1;
    if (iVar2 <= piVar1[5] + -1) {
      local_5c = iVar2;
    }
  }
  if (local_c < 0) {
    local_58 = 0;
  }
  else {
    local_58 = piVar1[5] + -1;
    if (local_c <= piVar1[5] + -1) {
      local_58 = local_c;
    }
  }
  local_54 = local_c + 1;
  if (local_54 < 0) {
    local_54 = 0;
  }
  else if (piVar1[5] + -1 < local_54) {
    local_54 = piVar1[5] + -1;
  }
  if (local_c < 0) {
    iVar2 = 0;
LAB_01064a86:
    local_c = iVar2;
  }
  else {
    iVar2 = piVar1[5] + -1;
    if (iVar2 < local_c) goto LAB_01064a86;
  }
  iVar2 = param_1[0x1b];
  local_60 = local_60 - local_c;
  local_54 = local_54 - local_c;
  local_5c = local_5c - local_c;
  local_58 = local_58 - local_c;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (piVar1[4] * 0x4000 < iVar2) {
    iVar2 = piVar1[4] * 0x4000;
  }
  iVar3 = iVar3 / 2;
  uVar5 = iVar2 - iVar3;
  param_3 = iVar3 + iVar2;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (piVar1[4] * 0x4000 < (int)uVar5) {
    uVar5 = piVar1[4] * 0x4000;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  else if (piVar1[4] * 0x4000 < (int)param_3) {
    param_3 = piVar1[4] * 0x4000;
  }
  local_18 = (int)((uVar5 & 0xffffc000) + ((int)uVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar3 = (param_3 - 1 | 0x3fff) + 1;
  local_10 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar4 = param_3;
  if (1 < (int)(local_10 - local_18)) {
    uVar4 = (local_18 + 1) * 0x4000;
  }
  local_1c = uVar4 - uVar5;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_24 = (int)&local_60 - (int)local_14;
  local_20 = 4;
  do {
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    param_1 = (int *)0x0;
    local_8 = local_18;
    if (local_18 < (int)local_10) {
      local_28 = *(int *)(local_24 + (int)local_14);
      do {
        iVar3 = local_1c;
        if (local_8 != local_18) {
          if ((local_8 == local_10 + -1) && ((param_3 & 0x3fff) != 0)) {
            iVar3 = param_3 + local_10 * -0x4000 + 0x4000;
          }
          else {
            iVar3 = 0x4000;
          }
        }
        *(uint *)(iVar9 + 0x5a0) =
             (((piVar1[5] - local_28) - local_c) + -1) * piVar1[1] +
             ((int)(piVar1[3] * local_8 + (piVar1[3] * local_8 >> 0x1f & 7U)) >> 3) + *piVar1;
        uVar5 = piVar1[3] * local_8 & 0x80000007;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(iVar9 + 0x5a4) = uVar5;
        (**(code **)(iVar9 + 0x550))(iVar8);
        local_50 = local_50 + (uint)*(byte *)(iVar9 + 0x580) * iVar3;
        local_4c = local_4c + (uint)*(byte *)(iVar9 + 0x581) * iVar3;
        local_48 = local_48 + (uint)*(byte *)(iVar9 + 0x582) * iVar3;
        local_44 = local_44 + (uint)*(byte *)(iVar9 + 0x583) * iVar3;
        param_1 = (int *)((int)param_1 + iVar3);
        local_8 = local_8 + 1;
      } while (local_8 < (int)local_10);
      if ((int)param_1 < 0x4000) goto LAB_01064d0a;
      local_50 = (int)(((longlong)(local_50 + 0x2000) * 0x4000) / (longlong)(int)param_1);
      local_4c = (int)(((longlong)(local_4c + 0x2000) * 0x4000) / (longlong)(int)param_1);
      local_48 = (int)(((longlong)(local_48 + 0x2000) * 0x4000) / (longlong)(int)param_1);
      iVar3 = (int)(((longlong)(local_44 + 0x2000) * 0x4000) / (longlong)(int)param_1);
    }
    else {
LAB_01064d0a:
      iVar3 = (int)param_1 + 1;
      local_8 = iVar3;
      if (iVar3 < 2) {
        local_8 = 1;
      }
      local_50 = (int)(((longlong)local_50 * 0x4000) / (longlong)local_8);
      local_8 = iVar3;
      if (iVar3 < 2) {
        local_8 = 1;
      }
      local_4c = (int)(((longlong)local_4c * 0x4000) / (longlong)local_8);
      local_8 = iVar3;
      if (iVar3 < 2) {
        local_8 = 1;
      }
      local_48 = (int)(((longlong)local_48 * 0x4000) / (longlong)local_8);
      local_8 = iVar3;
      if (iVar3 < 2) {
        local_8 = 1;
      }
      iVar3 = (int)(((longlong)local_44 * 0x4000) / (longlong)local_8);
    }
    local_2c = (uint)((longlong)local_50 * (longlong)*local_14) >> 0xe |
               (int)((ulonglong)((longlong)local_50 * (longlong)*local_14) >> 0x20) << 0x12;
    local_70 = local_70 + local_2c;
    local_30 = (uint)((longlong)local_4c * (longlong)*local_14) >> 0xe |
               (int)((ulonglong)((longlong)local_4c * (longlong)*local_14) >> 0x20) << 0x12;
    local_6c = local_6c + local_30;
    local_34 = (int *)((uint)((longlong)local_48 * (longlong)*local_14) >> 0xe |
                      (int)((ulonglong)((longlong)local_48 * (longlong)*local_14) >> 0x20) << 0x12);
    local_68 = local_68 + (int)local_34;
    local_38 = (uint)((longlong)iVar3 * (longlong)*local_14) >> 0xe |
               (int)((ulonglong)((longlong)iVar3 * (longlong)*local_14) >> 0x20) << 0x12;
    local_64 = local_64 + local_38;
    local_14 = local_14 + 1;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  iVar8 = (int)(local_70 + 0x2000 + (local_70 + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar3 = (int)(local_6c + 0x2000 + (local_6c + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (int)(local_68 + 0x2000 + (local_68 + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_44 = (int)(local_64 + 0x2000 + (local_64 + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (0xff < iVar8) {
    iVar8 = 0xff;
  }
  *param_2 = (char)iVar8;
  if (iVar3 < 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0xff;
    if (iVar3 < 0x100) {
      iVar8 = iVar3;
    }
  }
  param_2[1] = (char)iVar8;
  if (iVar9 < 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0xff;
    if (iVar9 < 0x100) {
      iVar8 = iVar9;
    }
  }
  param_2[2] = (char)iVar8;
  if (local_44 < 0) {
    param_2[3] = 0;
    return;
  }
  if (0xff < local_44) {
    param_2[3] = 0xff;
    return;
  }
LAB_01065344:
  param_2[3] = (char)local_44;
  return;
}


