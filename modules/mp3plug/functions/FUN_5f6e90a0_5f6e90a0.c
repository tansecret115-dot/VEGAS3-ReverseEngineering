/* Module: mp3plug.dll
   Function: FUN_5f6e90a0
   Address: 5f6e90a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6e90a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int local_80;
  uint local_64;
  uint uStack_60;
  uint local_54;
  uint uStack_50;
  uint local_44;
  uint uStack_40;
  
  if ((DAT_5f7529a4 != 0) && ((*(uint *)(param_2 + 0x10) & 0xf) == 0)) {
    FUN_5f6e944c(param_3,param_2);
    return;
  }
  fVar8 = _DAT_5f75d7c4 + _DAT_5f75d7c0;
  uVar9 = _control87(0,0);
  _control87(0x100,0x300);
  iVar11 = 0;
  if (0 < param_1) {
    do {
      iVar15 = iVar11 + 1;
      iVar14 = iVar11 * 0x20;
      uVar10 = *(uint *)(param_2 + 4 + iVar14);
      if (iVar15 < param_1) {
        iVar12 = iVar15 * 0x20;
        do {
          if (*(int *)(param_4 + iVar11 * 4) != *(int *)(param_4 + iVar15 * 4)) break;
          uVar10 = uVar10 + *(int *)(param_2 + 4 + iVar12);
          iVar15 = iVar15 + 1;
          iVar12 = iVar12 + 0x20;
        } while (iVar15 < param_1);
      }
      iVar11 = param_3 - *(int *)(param_4 + iVar11 * 4);
      if (iVar11 < 0) {
        fVar7 = *(float *)(&DAT_5f7411c0 + (iVar11 * -3 & 0xfU) * 4) *
                *(float *)(&DAT_5f741120 + (iVar11 * -3 >> 4) * 4);
      }
      else {
        fVar7 = *(float *)(&DAT_5f7410e0 + (iVar11 * 3 & 0xfU) * 4) *
                *(float *)(&DAT_5f741040 + (iVar11 * 3 >> 4) * 4);
      }
      pfVar6 = *(float **)(param_2 + 0x10 + iVar14);
      puVar1 = (uint *)(param_5 + *(int *)(param_2 + iVar14) * 4);
      local_80 = 0;
      if ((uVar10 & 1) != 0) {
        dVar5 = (double)(fVar7 * *pfVar6 + fVar8);
        uStack_60 = (uint)((ulonglong)dVar5 >> 0x20);
        local_64 = SUB84(dVar5,0);
        uVar13 = uStack_60 >> 0x14 & 0x7ff;
        if (uVar13 < 0x3ff) {
          uVar13 = 0;
        }
        else {
          uVar13 = (uStack_60 << 0xb | local_64 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar13 & 0x1f);
          if ((longlong)dVar5 < 0) {
            uVar13 = -uVar13;
          }
        }
        *puVar1 = uVar13;
        local_80 = 1;
      }
      if ((uVar10 & 2) != 0) {
        dVar5 = (double)(fVar7 * pfVar6[local_80] + fVar8);
        uStack_50 = (uint)((ulonglong)dVar5 >> 0x20);
        local_54 = SUB84(dVar5,0);
        uVar13 = uStack_50 >> 0x14 & 0x7ff;
        if (uVar13 < 0x3ff) {
          uVar13 = 0;
        }
        else {
          uVar13 = (uStack_50 << 0xb | local_54 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar13 & 0x1f);
          if ((longlong)dVar5 < 0) {
            uVar13 = -uVar13;
          }
        }
        dVar5 = (double)(fVar7 * pfVar6[local_80 + 1] + fVar8);
        uStack_40 = (uint)((ulonglong)dVar5 >> 0x20);
        puVar1[local_80] = uVar13;
        local_44 = SUB84(dVar5,0);
        uVar13 = uStack_40 >> 0x14 & 0x7ff;
        if (uVar13 < 0x3ff) {
          uVar13 = 0;
        }
        else {
          uVar13 = (uStack_40 << 0xb | local_44 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar13 & 0x1f);
          if ((longlong)dVar5 < 0) {
            uVar13 = -uVar13;
          }
        }
        puVar1[local_80 + 1] = uVar13;
        local_80 = local_80 + 2;
      }
      for (iVar11 = uVar10 - local_80; iVar11 != 0; iVar11 = iVar11 + -4) {
        fVar2 = pfVar6[local_80 + 1];
        fVar3 = pfVar6[local_80 + 2];
        fVar4 = pfVar6[local_80 + 3];
        puVar1[local_80] = (int)ROUND(pfVar6[local_80] * fVar7 + fVar8);
        puVar1[local_80 + 1] = (int)ROUND(fVar2 * fVar7 + fVar8);
        puVar1[local_80 + 2] = (int)ROUND(fVar3 * fVar7 + fVar8);
        puVar1[local_80 + 3] = (int)ROUND(fVar4 * fVar7 + fVar8);
        local_80 = local_80 + 4;
      }
      iVar11 = iVar15;
    } while (iVar15 < param_1);
  }
  _controlfp((int)(short)uVar9,0x300);
  return;
}


