/* Module: sftrans1.dll
   Function: FUN_004a2dc0
   Address: 004a2dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004a2dc0(byte *param_1,int *param_2,int param_3,byte *param_4,int *param_5,int param_6,
            uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int local_54;
  uint local_4c;
  uint local_48;
  int local_30;
  uint local_18;
  int local_14;
  uint local_10;
  byte *local_8;
  
  pbVar10 = param_1;
  iVar6 = (param_5[2] - *param_5) + 1;
  iVar1 = (param_7 - 1 | 0x3fff) + 1;
  if ((param_2[2] - *param_2) + 1 < ((int)((iVar1 >> 0x1f & 0x3fffU) + iVar1) >> 0xe) + iVar6) {
    return 0x80004005;
  }
  iVar1 = param_2[3];
  iVar3 = param_2[1];
  if (param_5[3] - param_5[1] < iVar1 - iVar3) {
    return 0x80004005;
  }
  uVar2 = param_7 / (uint)(param_5[3] - param_5[1]);
  local_10 = 0;
  if (uVar2 == 0) {
    if (iVar3 <= iVar1) {
      do {
        pbVar10 = param_4;
        pbVar13 = param_1;
        for (uVar2 = (param_5[2] - *param_5) * 4 + 4U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
          pbVar10 = pbVar10 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pbVar13 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar13 = pbVar13 + 1;
        }
        param_4 = param_4 + param_6 * 4;
        param_1 = param_1 + param_3 * 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= param_2[3]);
      return 0;
    }
  }
  else {
    local_18 = 0;
    pbVar13 = param_1 + iVar1 * param_3 * 4;
    local_8 = pbVar13 + 1;
    do {
      uVar4 = (uint)(((longlong)(int)(local_18 << 0xe) * 0x4000) / (longlong)(int)uVar2);
      uVar8 = param_5[3];
      uVar7 = uVar4 >> 0xe;
      uVar5 = uVar7;
      if ((int)uVar8 <= (int)uVar7) {
        uVar5 = uVar8;
      }
      uVar11 = uVar5 + 1;
      if ((int)uVar8 <= (int)(uVar5 + 1)) {
        uVar11 = uVar8;
      }
      local_14 = uVar8 - uVar7;
      if (local_14 < 1) {
        local_14 = 0;
LAB_004a2f32:
        local_30 = 0;
      }
      else {
        if (local_14 == 0) goto LAB_004a2f32;
        local_30 = local_14 + -1;
      }
      uVar8 = (uVar4 & 0x3fff) * 0xff >> 0xe;
      pbVar9 = param_4 + uVar5 * param_6 * 4;
      pbVar12 = param_4 + uVar11 * param_6 * 4;
      iVar1 = ((uint)pbVar12[2] - (uint)pbVar9[2]) * uVar8;
      local_8[1] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar9[2];
      iVar1 = ((uint)pbVar12[1] - (uint)pbVar9[1]) * uVar8;
      *local_8 = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar9[1];
      iVar1 = ((uint)*pbVar12 - (uint)*pbVar9) * uVar8;
      local_8[-1] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + *pbVar9;
      local_4c = (uint)pbVar9[3];
      iVar1 = (pbVar12[3] - local_4c) * uVar8;
      local_8[2] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar9[3];
      local_14 = local_14 * param_6;
      local_30 = local_30 * param_6;
      local_48 = (uint)param_4[(local_14 + param_5[2]) * 4 + 2];
      iVar1 = (param_4[(local_30 + param_5[2]) * 4 + 2] - local_48) * uVar8;
      param_1[(param_2[2] - local_18) * 4 + 2] =
           (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + param_4[(local_14 + param_5[2]) * 4 + 2];
      iVar1 = ((uint)param_4[(local_30 + param_5[2]) * 4 + 1] -
              (uint)param_4[(local_14 + param_5[2]) * 4 + 1]) * uVar8;
      param_1[(param_2[2] - local_18) * 4 + 1] =
           (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + param_4[(local_14 + param_5[2]) * 4 + 1];
      iVar1 = ((uint)param_4[(local_30 + param_5[2]) * 4] -
              (uint)param_4[(local_14 + param_5[2]) * 4]) * uVar8;
      param_1[(param_2[2] - local_18) * 4] =
           (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + param_4[(local_14 + param_5[2]) * 4];
      iVar1 = ((uint)param_4[(local_30 + param_5[2]) * 4 + 3] -
              (uint)param_4[(local_14 + param_5[2]) * 4 + 3]) * uVar8;
      iVar3 = param_2[2] - local_18;
      local_18 = local_18 + 1;
      param_1[iVar3 * 4 + 3] =
           (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + param_4[(local_14 + param_5[2]) * 4 + 3];
      local_8 = local_8 + 4;
    } while (local_18 <= param_7 >> 0xe);
    local_54 = param_2[1];
    pbVar9 = param_4;
    if (local_54 <= param_2[3]) {
      do {
        uVar4 = (local_10 & 0x3fff) * 0xff >> 0xe;
        uVar5 = local_10 >> 0xe;
        uVar8 = uVar5;
        pbVar12 = pbVar13;
        pbVar14 = param_1;
        if (param_1 != pbVar13) {
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
            pbVar12 = pbVar12 + 4;
            pbVar14 = pbVar14 + 4;
          }
        }
        iVar1 = ((uint)pbVar13[uVar5 * 4 + 2] - (uint)pbVar9[2]) * uVar4;
        param_1[uVar5 * 4 + 2] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar9[2];
        iVar1 = ((uint)pbVar13[uVar5 * 4 + 1] - (uint)pbVar9[1]) * uVar4;
        param_1[uVar5 * 4 + 1] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar9[1];
        iVar1 = ((uint)pbVar13[uVar5 * 4] - (uint)*pbVar9) * uVar4;
        param_1[uVar5 * 4] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + *pbVar9;
        iVar1 = ((uint)pbVar13[uVar5 * 4 + 3] - (uint)pbVar9[3]) * uVar4;
        param_1[uVar5 * 4 + 3] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar9[3];
        uVar8 = iVar6 + uVar5;
        if (uVar5 + 1 < uVar8) {
          param_4 = param_1 + uVar5 * 4 + 5;
          local_14 = uVar8 - (uVar5 + 1);
          pbVar12 = pbVar9 + 2;
          do {
            iVar1 = ((uint)*pbVar12 - (uint)pbVar12[4]) * uVar4;
            param_4[1] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar12[4];
            iVar1 = ((uint)pbVar12[-1] - (uint)pbVar12[3]) * uVar4;
            *param_4 = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar12[3];
            iVar1 = ((uint)pbVar12[-2] - (uint)pbVar12[2]) * uVar4;
            param_4[-1] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar12[2];
            iVar1 = ((uint)pbVar12[1] - (uint)pbVar12[5]) * uVar4;
            param_4[2] = (char)((iVar1 >> 0x1f & 0xffU) + iVar1 >> 8) + pbVar12[5];
            param_4 = param_4 + 4;
            local_14 = local_14 + -1;
            pbVar12 = pbVar12 + 4;
          } while (local_14 != 0);
        }
        iVar1 = ((uint)pbVar9[param_5[2] * 4 + 2] - (uint)pbVar10[uVar8 * 4 + 2]) * uVar4;
        param_1[uVar8 * 4 + 2] =
             (char)((iVar1 >> 0x1f & 0xffU) + iVar1 >> 8) + pbVar10[uVar8 * 4 + 2];
        iVar1 = ((uint)pbVar9[param_5[2] * 4 + 1] - (uint)pbVar10[uVar8 * 4 + 1]) * uVar4;
        param_1[uVar8 * 4 + 1] =
             (char)((iVar1 >> 0x1f & 0xffU) + iVar1 >> 8) + pbVar10[uVar8 * 4 + 1];
        iVar1 = ((uint)pbVar9[param_5[2] * 4] - (uint)pbVar10[uVar8 * 4]) * uVar4;
        param_1[uVar8 * 4] = (char)((iVar1 >> 0x1f & 0xffU) + iVar1 >> 8) + pbVar10[uVar8 * 4];
        iVar1 = ((uint)pbVar9[param_5[2] * 4 + 3] - (uint)pbVar10[uVar8 * 4 + 3]) * uVar4;
        param_1[uVar8 * 4 + 3] =
             (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar10[uVar8 * 4 + 3];
        if (param_1 != pbVar10) {
          iVar1 = uVar5 + 1 + iVar6;
          pbVar12 = pbVar10 + iVar1 * 4;
          pbVar14 = param_1 + iVar1 * 4;
          for (uVar8 = param_7 - local_10 >> 0xe; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
            pbVar12 = pbVar12 + 4;
            pbVar14 = pbVar14 + 4;
          }
          for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pbVar14 = *pbVar12;
            pbVar12 = pbVar12 + 1;
            pbVar14 = pbVar14 + 1;
          }
        }
        param_1 = param_1 + param_3 * 4;
        local_10 = local_10 + uVar2;
        pbVar9 = pbVar9 + param_6 * 4;
        local_54 = local_54 + 1;
      } while (local_54 <= param_2[3]);
    }
  }
  return 0;
}


