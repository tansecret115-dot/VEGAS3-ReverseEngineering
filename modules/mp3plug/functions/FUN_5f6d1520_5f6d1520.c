/* Module: mp3plug.dll
   Function: FUN_5f6d1520
   Address: 5f6d1520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_5f6d1520(int param_1,int *param_2,int *param_3)

{
  double dVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_2c;
  uint uStack_28;
  
  iVar10 = *param_2 * 0x16c;
  if (param_3 == (int *)0x0) {
    param_3 = &DAT_5f73f9e0;
  }
  iVar11 = param_2[2];
  if (iVar11 < 8000) {
    ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x3c9,
                           (undefined *)0x0,s_bitrates_<_8000_not_supported_by_5f75c490);
    return ppuVar5;
  }
  if (320000 < iVar11) {
    ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x3cc,
                           (undefined *)0x0,s_bitrates_>_320000_not_supported_b_5f75c4d0);
    return ppuVar5;
  }
  iVar6 = 0;
  iVar7 = iVar6;
  if (*(int *)(&DAT_5f73f924 + iVar10) < 0x4e201) {
    iVar8 = *(int *)(&DAT_5f73f924 + iVar10);
    iVar4 = 1;
    while (iVar7 = iVar6, iVar8 <= iVar11) {
      iVar6 = iVar4 + 1;
      iVar8 = *(int *)(iVar10 + 0x5f73f908 + iVar6 * 0x1c);
      iVar7 = iVar4;
      if ((320000 < iVar8) || (iVar11 < iVar8)) break;
      iVar4 = iVar4 + 2;
      iVar8 = *(int *)(iVar10 + 0x5f73f908 + iVar4 * 0x1c);
      iVar7 = iVar6;
      if (320000 < iVar8) break;
    }
  }
  iVar10 = iVar7 * 0x1c + iVar10 + -0x16c;
  bVar2 = _DAT_5f75c150 == *(float *)(iVar10 + 0x5f73fa7c);
  param_2[1] = *(int *)(iVar10 + 0x5f73fa7c);
  if (bVar2) {
    ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x3dd,
                           (undefined *)0x0,s_bitrate_invalid_for_this_mode_5f75c510);
    return ppuVar5;
  }
  if (*param_3 < 7) {
    iVar11 = 1;
    do {
      dVar1 = (double)(*(float *)(param_1 + 4) / (float)iVar11);
      uStack_28 = (uint)((ulonglong)dVar1 >> 0x20);
      local_2c = SUB84(dVar1,0);
      uVar9 = uStack_28 >> 0x14 & 0x7ff;
      if (uVar9 < 0x3ff) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uStack_28 << 0xb | local_2c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar9 & 0x1f);
        if ((longlong)dVar1 < 0) {
          uVar9 = -uVar9;
        }
      }
      fVar3 = (float)(int)uVar9;
      if ((((fVar3 <= *(float *)(&DAT_5f73fa80 + iVar10)) &&
           (*(float *)(&DAT_5f73fa78 + iVar10) <= fVar3)) &&
          ((float)(int)(iVar11 * uVar9) == *(float *)(param_1 + 4))) &&
         (((((uVar9 == 8000 || (uVar9 == 0x2b11)) ||
            ((uVar9 == 12000 || ((uVar9 == 16000 || (uVar9 == 0x5622)))))) || (uVar9 == 24000)) ||
          (((uVar9 == 32000 || (uVar9 == 0xac44)) || (uVar9 == 48000)))))) {
        param_2[1] = (int)fVar3;
        break;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 7);
  }
  if ((*(int *)(iVar10 + 0x5f73fa84) == 0) || (param_3[1] != 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 2;
  }
  param_2[4] = uVar9 | *(int *)(iVar10 + 0x5f73fa88) != 0;
  if (*param_3 < 3) {
    param_2[6] = 0;
  }
  else if (*param_3 < 8) {
    param_2[6] = *(int *)(iVar10 + 0x5f73fa8c);
  }
  else {
    param_2[6] = 1;
  }
  return (undefined **)0x0;
}


