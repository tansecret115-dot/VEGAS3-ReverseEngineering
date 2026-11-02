/* Module: vegas30k.dll
   Function: _SfDibFadeToColor@32
   Address: 01051f40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfDibFadeToColor_32
          (int *param_1,int *param_2,int *param_3,int param_4,float *param_5,undefined4 param_6,
          undefined4 param_7,uint param_8)

{
  ushort uVar1;
  float *pfVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  undefined1 *puVar26;
  uint local_4a0;
  uint local_480;
  uint local_478;
  RECT local_474;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  float local_454;
  float local_450;
  float local_44c;
  float local_448;
  int local_444;
  uint local_440;
  float local_43c;
  float local_438;
  uint local_434;
  float local_430;
  int local_42c;
  float local_428;
  tagRECT local_424;
  RECT local_414;
  undefined1 local_404 [4];
  byte abStack_400 [256];
  byte abStack_300 [256];
  byte abStack_200 [256];
  byte abStack_100 [256];
  
                    /* 0x51f40  848  _SfDibFadeToColor@32 */
  puVar26 = local_404;
  uVar8 = _SfGetPixelType_4(param_1);
  iVar9 = _SfGetPixelBitsPerChannel_8(uVar8,puVar26);
  local_444 = _SfGetPixelType_4(param_1);
  if (((local_444 != 0x1d) && (local_444 != 0x1c)) && (local_444 != 0x20)) {
    return 0x80004001;
  }
  local_414.right = param_1[1] << 0xe;
  local_414.bottom = param_1[2] << 0xe;
  local_414.left = 0;
  local_414.top = 0;
  if ((param_8 & 0x1000000) == 0) {
    if (param_3 == (int *)0x0) goto LAB_01051fd8;
    local_474.left = *param_3 << 0xe;
    local_474.top = param_3[1] << 0xe;
    local_474.right = param_3[2] << 0xe;
    local_474.bottom = param_3[3] << 0xe;
  }
  else if (param_3 == (int *)0x0) {
LAB_01051fd8:
    local_474.left = 0;
    local_474.top = 0;
    local_474.right = local_414.right;
    local_474.bottom = local_414.bottom;
  }
  else {
    local_474.left = *param_3;
    local_474.top = param_3[1];
    local_474.right = param_3[2];
    local_474.bottom = param_3[3];
  }
  IntersectRect(&local_424,&local_474,&local_414);
  if (local_424.right - local_424.left == 0) {
    return 0;
  }
  if (local_424.bottom - local_424.top == 0) {
    return 0;
  }
  iVar10 = (int)((local_424.left & 0xffffc000U) + (local_424.left >> 0x1f & 0x3fffU)) >> 0xe;
  iVar11 = (int)((local_424.top & 0xffffc000U) + (local_424.top >> 0x1f & 0x3fffU)) >> 0xe;
  iVar12 = (local_424.right - 1U | 0x3fff) + 1;
  iVar19 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar12 = (local_424.bottom - 1U | 0x3fff) + 1;
  iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
  if (param_4 == 0) {
    uVar13 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar13 & 0xffffffe0) + ((int)uVar13 >> 0x1f & 7U)) >> 3;
  }
  local_478 = local_424.left & 0x80003fff;
  if ((int)local_478 < 0) {
    local_478 = (local_478 - 1 | 0xffffc000) + 1;
  }
  if (local_478 == 0) {
    local_478 = 0x4000;
  }
  else {
    local_478 = 0x4000 - local_478;
  }
  local_460 = local_424.right & 0x80003fff;
  if ((int)local_460 < 0) {
    local_460 = (local_460 - 1 | 0xffffc000) + 1;
  }
  if (local_460 == 0) {
    local_460 = 0x4000;
  }
  local_480 = local_424.top & 0x80003fff;
  if ((int)local_480 < 0) {
    local_480 = (local_480 - 1 | 0xffffc000) + 1;
  }
  if (local_480 == 0) {
    local_480 = 0x4000;
  }
  else {
    local_480 = 0x4000 - local_480;
  }
  local_464 = local_424.bottom & 0x80003fff;
  if ((int)local_464 < 0) {
    local_464 = (local_464 - 1 | 0xffffc000) + 1;
  }
  if (local_464 == 0) {
    local_464 = 0x4000;
  }
  if (iVar19 - iVar10 == 1) {
    local_478 = local_424.right - local_424.left;
  }
  if (iVar12 - iVar11 == 1) {
    local_480 = local_424.bottom - local_424.top;
  }
  local_438 = (float)(int)local_478 * _DAT_011dd9a8;
  local_430 = (float)(int)local_480 * _DAT_011dd9a8;
  local_428 = (float)(int)local_460 * _DAT_011dd9a8;
  local_43c = (float)(int)local_464 * _DAT_011dd9a8;
  if (param_2 != (int *)0x0) goto LAB_01052247;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0105223f;
    iVar14 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_01052247;
    }
LAB_0105223f:
    iVar14 = param_1[8];
  }
  param_2 = (int *)((int)param_1 + *param_1 + iVar14 * 4);
LAB_01052247:
  uVar13 = (int)param_2 +
           ((int)(iVar10 * iVar9 + (iVar10 * iVar9 >> 0x1f & 7U)) >> 3) +
           ((param_1[2] - iVar11) + -1) * param_4;
  local_42c = -param_4;
  local_458 = uVar13;
  iVar9 = ftol();
  local_454 = *param_5;
  local_450 = param_5[1];
  local_44c = param_5[2];
  local_448 = param_5[3];
  uVar3 = ftol();
  uVar4 = ftol();
  uVar5 = ftol();
  bVar6 = ftol();
  fVar23 = extraout_ST0;
  if (local_444 != 0x20) {
    bVar7 = ftol();
    local_4a0 = (uint)bVar7;
    uVar16 = 0;
    do {
      iVar21 = -(uVar16 & 0xff);
      iVar14 = ((CONCAT12(uVar5,CONCAT11(uVar4,uVar3)) & 0xff) + iVar21) * local_4a0;
      cVar15 = (char)uVar16;
      abStack_400[uVar16] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + cVar15;
      iVar14 = (iVar21 + (CONCAT12(bVar6,CONCAT11(uVar5,uVar4)) & 0xff)) * local_4a0;
      abStack_200[uVar16] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + cVar15;
      iVar14 = ((CONCAT11(bVar6,uVar5) & 0xff) + iVar21) * local_4a0;
      abStack_300[uVar16] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + cVar15;
      iVar14 = ((uint)bVar6 + iVar21) * local_4a0;
      abStack_100[uVar16] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + cVar15;
      uVar16 = uVar16 + 1;
      uVar13 = local_458;
      fVar23 = extraout_ST0_00;
    } while ((int)uVar16 < 0x100);
  }
  if (iVar11 < iVar12) {
    pfVar22 = (float *)(uVar13 + 8);
    iVar14 = iVar11;
    do {
      if (local_444 == 0x20) {
        iVar21 = iVar10;
        pfVar2 = pfVar22;
        if (iVar14 == iVar11) {
          fVar24 = fVar23 * (float10)local_430;
        }
        else {
          fVar24 = fVar23;
          if (iVar14 == iVar12 + -1) {
            fVar24 = fVar23 * (float10)local_43c;
          }
        }
        for (; iVar21 < iVar19; iVar21 = iVar21 + 1) {
          if (iVar21 == iVar10) {
            fVar25 = fVar24 * (float10)local_438;
          }
          else {
            fVar25 = fVar24;
            if (iVar21 == iVar19 + -1) {
              fVar25 = fVar24 * (float10)local_428;
            }
          }
          pfVar2[-2] = (float)(fVar25 * ((float10)local_454 - (float10)pfVar2[-2]) +
                              (float10)pfVar2[-2]);
          pfVar2[-1] = (float)(fVar25 * ((float10)local_450 - (float10)pfVar2[-1]) +
                              (float10)pfVar2[-1]);
          *pfVar2 = (float)(fVar25 * ((float10)local_44c - (float10)*pfVar2) + (float10)*pfVar2);
          pfVar2[1] = (float)(fVar25 * ((float10)local_448 - (float10)pfVar2[1]) +
                             (float10)pfVar2[1]);
          pfVar2 = pfVar2 + 4;
        }
      }
      else {
        uVar13 = local_480;
        if ((iVar14 == iVar11) || (iVar21 = iVar9, uVar13 = local_464, iVar14 == iVar12 + -1)) {
          iVar21 = (int)(iVar9 * uVar13 + ((int)(iVar9 * uVar13) >> 0x1f & 0x3fffU)) >> 0xe;
        }
        if (iVar10 < iVar19) {
          pbVar17 = (byte *)((int)pfVar22 + -6);
          iVar20 = iVar10;
          do {
            uVar13 = local_478;
            if ((iVar20 == iVar10) || (iVar18 = iVar21, uVar13 = local_460, iVar20 == iVar19 + -1))
            {
              iVar18 = (int)(((int)(iVar21 * uVar13) >> 0x1f & 0x3fffU) + iVar21 * uVar13) >> 0xe;
            }
            if (iVar18 == iVar9) {
              pbVar17[-2] = abStack_400[pbVar17[-2]];
              pbVar17[-1] = abStack_200[pbVar17[-1]];
              *pbVar17 = abStack_300[*pbVar17];
              bVar7 = abStack_100[pbVar17[1]];
            }
            else {
              local_458 = (uint)pbVar17[-2];
              uVar13 = (int)(iVar18 * 0xff + (iVar18 * 0xff >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
              iVar18 = ((CONCAT12(uVar5,CONCAT11(uVar4,uVar3)) & 0xff) - local_458) * uVar13;
              local_45c = (uint)pbVar17[-1];
              pbVar17[-2] = (char)(iVar18 + (iVar18 >> 0x1f & 0xffU) >> 8) + pbVar17[-2];
              iVar18 = ((CONCAT12(bVar6,CONCAT11(uVar5,uVar4)) & 0xff) - local_45c) * uVar13;
              local_434 = (uint)*pbVar17;
              pbVar17[-1] = (char)(iVar18 + (iVar18 >> 0x1f & 0xffU) >> 8) + pbVar17[-1];
              iVar18 = ((CONCAT11(bVar6,uVar5) & 0xff) - local_434) * uVar13;
              local_440 = (uint)pbVar17[1];
              *pbVar17 = (char)(iVar18 + (iVar18 >> 0x1f & 0xffU) >> 8) + *pbVar17;
              iVar18 = (bVar6 - local_440) * uVar13;
              bVar7 = (char)(iVar18 + (iVar18 >> 0x1f & 0xffU) >> 8) + pbVar17[1];
            }
            pbVar17[1] = bVar7;
            pbVar17 = pbVar17 + 4;
            iVar20 = iVar20 + 1;
          } while (iVar20 < iVar19);
        }
      }
      pfVar22 = (float *)((int)pfVar22 + local_42c);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar12);
  }
  return 0;
}


