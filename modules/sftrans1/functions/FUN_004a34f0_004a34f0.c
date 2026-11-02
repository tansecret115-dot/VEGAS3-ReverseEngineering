/* Module: sftrans1.dll
   Function: FUN_004a34f0
   Address: 004a34f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004a34f0(byte *param_1,int *param_2,int param_3,byte *param_4,int *param_5,int param_6,
            byte *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_60;
  int local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_40;
  uint local_28;
  uint local_1c;
  int local_14;
  byte *local_c;
  uint local_8;
  
  pbVar11 = param_4;
  iVar5 = (param_5[3] - param_5[1]) + 1;
  iVar1 = ((int)param_7 - 1U | 0x3fff) + 1;
  if ((param_2[3] - param_2[1]) + 1 < ((int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe) + iVar5) {
    return 0x80004005;
  }
  if (param_5[2] - *param_5 < param_2[2] - *param_2) {
    return 0x80004005;
  }
  uVar2 = (uint)param_7 / (uint)(param_5[2] - *param_5);
  local_1c = 0;
  if (uVar2 == 0) {
    iVar1 = param_2[1];
    if (iVar1 <= param_2[3]) {
      do {
        pbVar11 = param_4;
        pbVar12 = param_1;
        for (uVar2 = (param_2[2] - *param_2) * 4 + 4U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar12 = pbVar12 + 4;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pbVar12 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar12 = pbVar12 + 1;
        }
        param_1 = param_1 + param_3 * 4;
        param_4 = param_4 + param_6 * 4;
        iVar1 = iVar1 + 1;
      } while (iVar1 <= param_2[3]);
      return 0;
    }
  }
  else {
    pbVar12 = param_1 + param_2[2] * 4;
    local_c = pbVar12 + 1;
    local_8 = 0;
    do {
      uVar3 = (uint)(((longlong)(int)(local_8 << 0xe) * 0x4000) / (longlong)(int)uVar2);
      uVar8 = param_5[2];
      uVar6 = uVar3 >> 0xe;
      uVar7 = uVar6;
      if ((int)uVar8 <= (int)uVar6) {
        uVar7 = uVar8;
      }
      local_28 = uVar7 + 1;
      if ((int)uVar8 <= (int)(uVar7 + 1)) {
        local_28 = uVar8;
      }
      local_14 = uVar8 - uVar6;
      if (local_14 == 0) {
        local_14 = 0;
LAB_004a3664:
        param_4 = (byte *)0x0;
      }
      else {
        if (local_14 == 0) goto LAB_004a3664;
        param_4 = (byte *)(local_14 + -1);
      }
      uVar8 = (uVar3 & 0x3fff) * 0xff >> 0xe;
      iVar1 = ((uint)pbVar11[(param_6 * param_5[3] + (int)param_4) * 4 + 2] -
              (uint)pbVar11[(local_14 + param_6 * param_5[3]) * 4 + 2]) * uVar8;
      param_1[(param_2[3] - local_8) * param_3 * 4 + 2] =
           (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) +
           pbVar11[(local_14 + param_6 * param_5[3]) * 4 + 2];
      local_54 = (uint)pbVar11[(local_14 + param_6 * param_5[3]) * 4 + 1];
      iVar1 = (pbVar11[(param_6 * param_5[3] + (int)param_4) * 4 + 1] - local_54) * uVar8;
      param_1[(param_2[3] - local_8) * param_3 * 4 + 1] =
           (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) +
           pbVar11[(local_14 + param_6 * param_5[3]) * 4 + 1];
      local_50 = (uint)pbVar11[(local_14 + param_6 * param_5[3]) * 4];
      iVar1 = (pbVar11[(param_6 * param_5[3] + (int)param_4) * 4] - local_50) * uVar8;
      param_1[(param_2[3] - local_8) * param_3 * 4] =
           (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) +
           pbVar11[(local_14 + param_6 * param_5[3]) * 4];
      local_4c = (uint)pbVar11[(local_14 + param_6 * param_5[3]) * 4 + 3];
      iVar1 = (pbVar11[(param_6 * param_5[3] + (int)param_4) * 4 + 3] - local_4c) * uVar8;
      param_1[(param_2[3] - local_8) * param_3 * 4 + 3] =
           (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) +
           pbVar11[(local_14 + param_6 * param_5[3]) * 4 + 3];
      iVar1 = ((uint)pbVar11[local_28 * 4 + 2] - (uint)pbVar11[uVar7 * 4 + 2]) * uVar8;
      local_c[1] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar11[uVar7 * 4 + 2];
      iVar1 = ((uint)pbVar11[local_28 * 4 + 1] - (uint)pbVar11[uVar7 * 4 + 1]) * uVar8;
      *local_c = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar11[uVar7 * 4 + 1];
      iVar1 = ((uint)pbVar11[local_28 * 4] - (uint)pbVar11[uVar7 * 4]) * uVar8;
      local_c[-1] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar11[uVar7 * 4];
      iVar1 = ((uint)pbVar11[local_28 * 4 + 3] - (uint)pbVar11[uVar7 * 4 + 3]) * uVar8;
      local_8 = local_8 + 1;
      local_c[2] = (char)(iVar1 + (iVar1 >> 0x1f & 0xffU) >> 8) + pbVar11[uVar7 * 4 + 3];
      local_c = local_c + param_3 * 4;
    } while (local_8 <= (uint)param_7 >> 0xe);
    local_5c = *param_2;
    if (local_5c <= param_2[2]) {
      local_8 = 0;
      local_c = (byte *)((int)pbVar12 - (int)param_1);
      pbVar13 = param_1;
      do {
        uVar8 = local_1c & 0x80003fff;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffc000) + 1;
        }
        iVar1 = (int)(local_1c + ((int)local_1c >> 0x1f & 0x3fffU)) >> 0xe;
        local_60 = uVar8 * 0xff >> 0xe & 0xff;
        if ((pbVar13 != pbVar12) && (pbVar10 = pbVar13, param_4 = (byte *)iVar1, 0 < iVar1)) {
          do {
            *(undefined4 *)pbVar10 = *(undefined4 *)(pbVar10 + (int)local_c);
            param_4 = (byte *)((int)param_4 + -1);
            pbVar10 = pbVar10 + param_3 * 4;
          } while (param_4 != (byte *)0x0);
        }
        iVar9 = iVar1 * param_3;
        iVar4 = ((uint)pbVar12[iVar9 * 4 + 2] - (uint)pbVar11[2]) * local_60;
        pbVar13[iVar9 * 4 + 2] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar11[2];
        iVar4 = ((uint)pbVar12[iVar9 * 4 + 1] - (uint)pbVar11[1]) * local_60;
        pbVar13[iVar9 * 4 + 1] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar11[1];
        iVar4 = ((uint)pbVar12[iVar9 * 4] - (uint)*pbVar11) * local_60;
        pbVar13[iVar9 * 4] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *pbVar11;
        iVar4 = ((uint)pbVar12[iVar9 * 4 + 3] - (uint)pbVar11[3]) * local_60;
        pbVar13[iVar9 * 4 + 3] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar11[3];
        iVar4 = iVar1 + 1;
        iVar9 = iVar1 + iVar5;
        if (iVar4 < iVar9) {
          local_40 = iVar9 - iVar4;
          param_7 = pbVar13 + iVar4 * param_3 * 4 + 1;
          param_4 = pbVar11 + 1;
          pbVar10 = pbVar11 + param_6 * 4 + 1;
          do {
            iVar4 = ((uint)param_4[1] - (uint)pbVar10[1]) * local_60;
            param_7[1] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar10[1];
            iVar4 = ((uint)*param_4 - (uint)*pbVar10) * local_60;
            *param_7 = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *pbVar10;
            iVar4 = ((uint)param_4[-1] - (uint)pbVar10[-1]) * local_60;
            param_7[-1] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar10[-1];
            iVar4 = ((uint)param_4[2] - (uint)pbVar10[2]) * local_60;
            param_7[2] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar10[2];
            param_4 = param_4 + param_6 * 4;
            pbVar10 = pbVar10 + param_6 * 4;
            param_7 = param_7 + param_3 * 4;
            local_40 = local_40 + -1;
          } while (local_40 != 0);
        }
        iVar9 = iVar9 * param_3;
        iVar4 = ((uint)pbVar11[param_6 * param_5[3] * 4 + 2] - (uint)param_1[iVar9 * 4 + 2]) *
                local_60;
        pbVar13[iVar9 * 4 + 2] =
             (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + param_1[iVar9 * 4 + 2];
        iVar4 = ((uint)pbVar11[param_6 * param_5[3] * 4 + 1] - (uint)param_1[iVar9 * 4 + 1]) *
                local_60;
        pbVar13[iVar9 * 4 + 1] =
             (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + param_1[iVar9 * 4 + 1];
        iVar4 = ((uint)pbVar11[param_6 * param_5[3] * 4] - (uint)param_1[iVar9 * 4]) * local_60;
        pbVar13[iVar9 * 4] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + param_1[iVar9 * 4];
        iVar4 = ((uint)pbVar11[param_6 * param_5[3] * 4 + 3] - (uint)param_1[iVar9 * 4 + 3]) *
                local_60;
        pbVar13[iVar9 * 4 + 3] =
             (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + param_1[iVar9 * 4 + 3];
        if (pbVar13 != param_1) {
          iVar1 = iVar1 + 1 + iVar5;
          if (iVar1 <= param_2[3]) {
            pbVar10 = pbVar13 + iVar1 * param_3 * 4;
            do {
              *(undefined4 *)pbVar10 = *(undefined4 *)(pbVar10 + local_8);
              pbVar10 = pbVar10 + param_3 * 4;
              iVar1 = iVar1 + 1;
            } while (iVar1 <= param_2[3]);
          }
        }
        local_8 = local_8 + -4;
        pbVar13 = pbVar13 + 4;
        local_c = (byte *)((int)local_c + -4);
        pbVar11 = pbVar11 + 4;
        local_1c = local_1c + uVar2;
        local_5c = local_5c + 1;
      } while (local_5c <= param_2[2]);
    }
  }
  return 0;
}


