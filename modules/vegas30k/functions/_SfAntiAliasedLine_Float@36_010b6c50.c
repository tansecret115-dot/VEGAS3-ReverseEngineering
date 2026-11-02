/* Module: vegas30k.dll
   Function: _SfAntiAliasedLine_Float@36
   Address: 010b6c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
_SfAntiAliasedLine_Float_36
          (int param_1,int *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
          float param_8,byte *param_9)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  int local_64;
  int local_60;
  int local_48;
  
                    /* 0xb6c50  717  _SfAntiAliasedLine_Float@36 */
  pbVar7 = param_9;
  if ((param_1 == 0) || (param_9 == (byte *)0x0)) {
    return &DAT_80070057;
  }
  iVar2 = *param_2;
  iVar3 = param_2[1];
  fVar5 = param_8 * _DAT_011e21e4 + _DAT_011dad68;
  if (param_6 < param_4) {
    param_9 = (byte *)param_7;
    iVar11 = param_4;
  }
  else {
    param_9 = (byte *)param_5;
    iVar11 = param_6;
    param_5 = param_7;
    param_6 = param_4;
  }
  uVar14 = param_3 >> 2;
  param_8 = (float)(iVar11 - param_6);
  pbVar15 = (byte *)(param_1 + (uVar14 * (int)param_9 + param_6) * 4);
  iVar11 = param_5 - (int)param_9;
  bVar17 = iVar11 < 0;
  if (bVar17) {
    iVar11 = -iVar11;
  }
  if ((int)param_8 < iVar11) {
    param_3 = 0;
    if (bVar17) {
      local_64 = -1;
      local_60 = -1;
    }
    else {
      local_64 = 1;
      local_60 = 1;
    }
    param_5 = 1;
    param_7 = 0;
    param_1 = (int)param_8;
    param_8 = (float)iVar11;
  }
  else {
    param_1 = iVar11;
    if (bVar17) {
      param_3 = 1;
      local_64 = 0;
      local_60 = -1;
      param_5 = 0;
      param_7 = -1;
    }
    else {
      local_64 = 0;
      param_3 = 1;
      local_60 = 1;
      param_5 = 0;
      param_7 = 1;
    }
  }
  iVar11 = param_7 * uVar14 + param_5;
  if (param_8 != 0.0) {
    iVar4 = param_1 * 2;
    iVar12 = param_1 - (int)param_8;
    fVar18 = (float10)param_1 / (float10)(int)param_8;
    local_48 = iVar4 - (int)param_8;
    fVar19 = SQRT((float10)_DAT_011dad68 / (fVar18 * fVar18 + (float10)_DAT_011dad68));
    fVar1 = (float)fVar19;
    fVar19 = fVar19 * fVar18;
    fVar20 = fVar19 - (float10)fVar1;
    fVar18 = (float10)_DAT_011dd160;
    param_1 = param_6;
    do {
      if ((((-1 < param_1) && (param_1 < iVar2)) && (-1 < (int)param_9)) && ((int)param_9 < iVar3))
      {
        fVar19 = fVar20;
        bVar8 = ftol();
        fVar20 = fVar18;
        uVar6 = (uint)bVar8;
        iVar9 = ((uint)*pbVar7 - (uint)*pbVar15) * uVar6;
        *pbVar15 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + *pbVar15;
        iVar9 = ((uint)pbVar7[1] - (uint)pbVar15[1]) * uVar6;
        pbVar15[1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar15[1];
        iVar9 = ((uint)pbVar7[2] - (uint)pbVar15[2]) * uVar6;
        pbVar15[2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar15[2];
        iVar9 = ((uint)pbVar7[3] - (uint)pbVar15[3]) * uVar6;
        pbVar15[3] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar15[3];
        fVar18 = extraout_ST1;
      }
      fVar21 = (float10)fVar1 - fVar18;
      iVar9 = (int)param_9;
      pbVar16 = pbVar15;
      iVar13 = param_1;
      if (fVar21 < (float10)fVar5) {
        do {
          iVar13 = iVar13 + param_5;
          pbVar16 = pbVar16 + iVar11 * 4;
          iVar9 = iVar9 + param_7;
          if (((-1 < iVar13) && (iVar13 < iVar2)) && ((-1 < iVar9 && (iVar9 < iVar3)))) {
            fVar19 = fVar20;
            bVar8 = ftol();
            fVar20 = fVar18;
            fVar18 = fVar21;
            uVar6 = (uint)bVar8;
            iVar10 = ((uint)*pbVar7 - (uint)*pbVar16) * uVar6;
            *pbVar16 = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + *pbVar16;
            iVar10 = ((uint)pbVar7[1] - (uint)pbVar16[1]) * uVar6;
            pbVar16[1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + pbVar16[1];
            iVar10 = ((uint)pbVar7[2] - (uint)pbVar16[2]) * uVar6;
            pbVar16[2] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + pbVar16[2];
            iVar10 = ((uint)pbVar7[3] - (uint)pbVar16[3]) * uVar6;
            pbVar16[3] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + pbVar16[3];
            fVar21 = extraout_ST1_00;
          }
          fVar21 = fVar21 + (float10)fVar1;
        } while (fVar21 < (float10)fVar5);
      }
      fVar21 = fVar18 + (float10)fVar1;
      iVar13 = param_1 - param_5;
      iVar9 = (int)param_9 - param_7;
      pbVar16 = pbVar15 + iVar11 * -4;
      if (fVar21 < (float10)fVar5) {
        do {
          if (((-1 < iVar13) && (iVar13 < iVar2)) && ((-1 < iVar9 && (iVar9 < iVar3)))) {
            fVar19 = fVar20;
            bVar8 = ftol();
            fVar20 = fVar18;
            fVar18 = fVar21;
            uVar6 = (uint)bVar8;
            iVar10 = ((uint)*pbVar7 - (uint)*pbVar16) * uVar6;
            *pbVar16 = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + *pbVar16;
            iVar10 = ((uint)pbVar7[1] - (uint)pbVar16[1]) * uVar6;
            pbVar16[1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + pbVar16[1];
            iVar10 = ((uint)pbVar7[2] - (uint)pbVar16[2]) * uVar6;
            pbVar16[2] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + pbVar16[2];
            iVar10 = ((uint)pbVar7[3] - (uint)pbVar16[3]) * uVar6;
            pbVar16[3] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + pbVar16[3];
            fVar21 = extraout_ST1_01;
          }
          fVar21 = fVar21 + (float10)fVar1;
          pbVar16 = pbVar16 + iVar11 * -4;
          iVar13 = iVar13 - param_5;
          iVar9 = iVar9 - param_7;
        } while (fVar21 < (float10)fVar5);
      }
      if (local_48 < 0) {
        param_1 = param_1 + param_3;
        iVar10 = local_64;
        fVar21 = fVar19;
        iVar9 = local_64 * uVar14 + param_3;
        iVar13 = iVar4;
      }
      else {
        param_1 = param_1 + 1;
        iVar10 = local_60;
        fVar21 = fVar20;
        iVar9 = local_60 * uVar14 + 1;
        iVar13 = iVar12 * 2;
      }
      local_48 = local_48 + iVar13;
      pbVar15 = pbVar15 + iVar9 * 4;
      fVar18 = fVar18 + fVar21;
      param_9 = (byte *)((int)param_9 + iVar10);
      param_8 = (float)((int)param_8 + -1);
    } while (-1 < (int)param_8);
    return (undefined1 *)0x0;
  }
  return (undefined1 *)0x0;
}


