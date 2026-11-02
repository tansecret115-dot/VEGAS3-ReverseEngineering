/* Module: vidcap30.exe
   Function: FUN_0055a5f0
   Address: 0055a5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a5f0(float *param_1,short *param_2,uint param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  float fVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  undefined2 uVar13;
  int iVar14;
  unkbyte10 in_ST1;
  undefined2 uVar15;
  int iVar16;
  unkbyte10 in_ST4;
  undefined2 uVar17;
  int iVar18;
  unkbyte10 in_ST5;
  undefined2 uVar19;
  undefined2 uVar20;
  int iVar21;
  unkbyte10 in_ST6;
  undefined2 uVar22;
  int local_8;
  
  iVar11 = param_3;
  uVar7 = (uint)param_1 >> 2 & 3;
  if (uVar7 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 4 - uVar7;
  }
  if (iVar9 < (int)param_3) {
    uVar7 = (int)((param_3 - iVar9) + ((int)(param_3 - iVar9) >> 0x1f & 3U)) >> 2;
    local_8 = (param_3 + uVar7 * -4) - iVar9;
    param_3 = uVar7;
  }
  else {
    local_8 = 0;
    param_3 = 0;
    iVar9 = iVar11;
  }
  fVar6 = param_4 * _DAT_0059fdbc;
  iVar11 = iVar9;
  psVar8 = param_2;
  pfVar10 = param_1;
  if (0 < iVar9) {
    do {
      iVar11 = iVar11 + -1;
      *pfVar10 = (float)(int)*psVar8 * (float)_DAT_0059a1a0 * param_4;
      psVar8 = psVar8 + 1;
      pfVar10 = pfVar10 + 1;
      in_ST6 = in_ST5;
    } while (iVar11 != 0);
  }
  if (param_3 != 0) {
    uVar12 = param_3 & 3;
    pfVar10 = param_1 + iVar9;
    psVar8 = param_2 + iVar9;
    for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar1 = *(undefined8 *)psVar8;
      uVar2 = *(undefined8 *)(psVar8 + 4);
      uVar3 = *(undefined8 *)(psVar8 + 8);
      uVar4 = *(undefined8 *)(psVar8 + 0xc);
      uVar15 = (undefined2)((unkuint10)in_ST4 >> 0x40);
      uVar19 = (undefined2)((unkuint10)in_ST5 >> 0x40);
      uVar22 = (undefined2)((unkuint10)in_ST6 >> 0x40);
      uVar13 = (undefined2)((ulonglong)uVar1 >> 0x10);
      uVar17 = (undefined2)((ulonglong)uVar2 >> 0x10);
      uVar20 = (undefined2)((ulonglong)uVar3 >> 0x10);
      iVar11 = (int)(short)((ulonglong)uVar2 >> 0x20);
      iVar14 = (int)(short)((ulonglong)uVar2 >> 0x30);
      in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),CONCAT44(iVar14,iVar11));
      iVar16 = (int)CONCAT42(CONCAT22(uVar15,uVar13),uVar13) >> 0x10;
      in_ST4 = CONCAT28(uVar15,CONCAT44(iVar16,(int)(short)uVar1));
      iVar18 = (int)CONCAT42(CONCAT22(uVar19,uVar17),uVar17) >> 0x10;
      in_ST5 = CONCAT28(uVar19,CONCAT44(iVar18,(int)(short)uVar2));
      iVar21 = (int)CONCAT42(CONCAT22(uVar22,uVar20),uVar20) >> 0x10;
      in_ST6 = CONCAT28(uVar22,CONCAT44(iVar21,(int)(short)uVar3));
      *pfVar10 = (float)(int)(short)uVar1 * fVar6;
      pfVar10[1] = (float)iVar16 * fVar6;
      pfVar10[2] = (float)(int)(short)((ulonglong)uVar1 >> 0x20) * fVar6;
      pfVar10[3] = (float)(int)(short)((ulonglong)uVar1 >> 0x30) * fVar6;
      pfVar10[4] = (float)(int)(short)uVar2 * fVar6;
      pfVar10[5] = (float)iVar18 * fVar6;
      pfVar10[6] = (float)iVar11 * fVar6;
      pfVar10[7] = (float)iVar14 * fVar6;
      pfVar10[8] = (float)(int)(short)uVar3 * fVar6;
      pfVar10[9] = (float)iVar21 * fVar6;
      pfVar10[10] = (float)(int)(short)((ulonglong)uVar3 >> 0x20) * fVar6;
      pfVar10[0xb] = (float)(int)(short)((ulonglong)uVar3 >> 0x30) * fVar6;
      pfVar10[0xc] = (float)(int)(short)uVar4 * fVar6;
      pfVar10[0xd] = (float)(int)(short)((ulonglong)uVar4 >> 0x10) * fVar6;
      pfVar10[0xe] = (float)(int)(short)((ulonglong)uVar4 >> 0x20) * fVar6;
      pfVar10[0xf] = (float)(int)(short)((ulonglong)uVar4 >> 0x30) * fVar6;
      pfVar10 = pfVar10 + 0x10;
      psVar8 = psVar8 + 0x10;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      uVar1 = *(undefined8 *)psVar8;
      uVar15 = (undefined2)((unkuint10)in_ST1 >> 0x40);
      uVar13 = (undefined2)((ulonglong)uVar1 >> 0x10);
      iVar11 = (int)CONCAT42(CONCAT22(uVar15,uVar13),uVar13) >> 0x10;
      in_ST1 = CONCAT28(uVar15,CONCAT44(iVar11,(int)(short)uVar1));
      *pfVar10 = (float)(int)(short)uVar1 * fVar6;
      pfVar10[1] = (float)iVar11 * fVar6;
      pfVar10[2] = (float)(int)(short)((ulonglong)uVar1 >> 0x20) * fVar6;
      pfVar10[3] = (float)(int)(short)((ulonglong)uVar1 >> 0x30) * fVar6;
      pfVar10 = pfVar10 + 4;
      psVar8 = psVar8 + 4;
    }
  }
  pfVar10 = param_1 + iVar9 + param_3 * 4;
  psVar8 = param_2 + iVar9 + param_3 * 4;
  if (0 < local_8) {
    do {
      sVar5 = *psVar8;
      psVar8 = psVar8 + 1;
      local_8 = local_8 + -1;
      *pfVar10 = (float)(int)sVar5 * (float)_DAT_0059a1a0 * param_4;
      pfVar10 = pfVar10 + 1;
    } while (local_8 != 0);
  }
  return;
}


