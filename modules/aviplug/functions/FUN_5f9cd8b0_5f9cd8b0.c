/* Module: aviplug.dll
   Function: FUN_5f9cd8b0
   Address: 5f9cd8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9cd8b0(float *param_1,short *param_2,uint param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  float fVar6;
  uint uVar7;
  short *psVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
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
  
  uVar10 = param_3;
  uVar7 = (uint)param_1 >> 2 & 3;
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 4 - uVar7;
  }
  if ((int)uVar7 < (int)param_3) {
    uVar10 = (int)((param_3 - uVar7) + ((int)(param_3 - uVar7) >> 0x1f & 3U)) >> 2;
    local_8 = (param_3 + uVar10 * -4) - uVar7;
    param_3 = uVar10;
  }
  else {
    local_8 = 0;
    param_3 = 0;
    uVar7 = uVar10;
  }
  fVar6 = param_4 * _DAT_5f9ee7b0;
  uVar10 = uVar7;
  psVar8 = param_2;
  pfVar9 = param_1;
  if (0 < (int)uVar7) {
    do {
      uVar10 = uVar10 - 1;
      *pfVar9 = (float)(int)*psVar8 * (float)_DAT_5f9ec2f8 * param_4;
      psVar8 = psVar8 + 1;
      pfVar9 = pfVar9 + 1;
      in_ST6 = in_ST5;
    } while (uVar10 != 0);
  }
  if (param_3 != 0) {
    uVar11 = param_3 & 3;
    pfVar9 = param_1 + uVar7;
    psVar8 = param_2 + uVar7;
    for (uVar10 = param_3 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
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
      iVar12 = (int)(short)((ulonglong)uVar2 >> 0x20);
      iVar14 = (int)(short)((ulonglong)uVar2 >> 0x30);
      in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),CONCAT44(iVar14,iVar12));
      iVar16 = (int)CONCAT42(CONCAT22(uVar15,uVar13),uVar13) >> 0x10;
      in_ST4 = CONCAT28(uVar15,CONCAT44(iVar16,(int)(short)uVar1));
      iVar18 = (int)CONCAT42(CONCAT22(uVar19,uVar17),uVar17) >> 0x10;
      in_ST5 = CONCAT28(uVar19,CONCAT44(iVar18,(int)(short)uVar2));
      iVar21 = (int)CONCAT42(CONCAT22(uVar22,uVar20),uVar20) >> 0x10;
      in_ST6 = CONCAT28(uVar22,CONCAT44(iVar21,(int)(short)uVar3));
      *pfVar9 = (float)(int)(short)uVar1 * fVar6;
      pfVar9[1] = (float)iVar16 * fVar6;
      pfVar9[2] = (float)(int)(short)((ulonglong)uVar1 >> 0x20) * fVar6;
      pfVar9[3] = (float)(int)(short)((ulonglong)uVar1 >> 0x30) * fVar6;
      pfVar9[4] = (float)(int)(short)uVar2 * fVar6;
      pfVar9[5] = (float)iVar18 * fVar6;
      pfVar9[6] = (float)iVar12 * fVar6;
      pfVar9[7] = (float)iVar14 * fVar6;
      pfVar9[8] = (float)(int)(short)uVar3 * fVar6;
      pfVar9[9] = (float)iVar21 * fVar6;
      pfVar9[10] = (float)(int)(short)((ulonglong)uVar3 >> 0x20) * fVar6;
      pfVar9[0xb] = (float)(int)(short)((ulonglong)uVar3 >> 0x30) * fVar6;
      pfVar9[0xc] = (float)(int)(short)uVar4 * fVar6;
      pfVar9[0xd] = (float)(int)(short)((ulonglong)uVar4 >> 0x10) * fVar6;
      pfVar9[0xe] = (float)(int)(short)((ulonglong)uVar4 >> 0x20) * fVar6;
      pfVar9[0xf] = (float)(int)(short)((ulonglong)uVar4 >> 0x30) * fVar6;
      pfVar9 = pfVar9 + 0x10;
      psVar8 = psVar8 + 0x10;
    }
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      uVar1 = *(undefined8 *)psVar8;
      uVar15 = (undefined2)((unkuint10)in_ST1 >> 0x40);
      uVar13 = (undefined2)((ulonglong)uVar1 >> 0x10);
      iVar12 = (int)CONCAT42(CONCAT22(uVar15,uVar13),uVar13) >> 0x10;
      in_ST1 = CONCAT28(uVar15,CONCAT44(iVar12,(int)(short)uVar1));
      *pfVar9 = (float)(int)(short)uVar1 * fVar6;
      pfVar9[1] = (float)iVar12 * fVar6;
      pfVar9[2] = (float)(int)(short)((ulonglong)uVar1 >> 0x20) * fVar6;
      pfVar9[3] = (float)(int)(short)((ulonglong)uVar1 >> 0x30) * fVar6;
      pfVar9 = pfVar9 + 4;
      psVar8 = psVar8 + 4;
    }
  }
  pfVar9 = param_1 + uVar7 + param_3 * 4;
  psVar8 = param_2 + uVar7 + param_3 * 4;
  if (0 < local_8) {
    do {
      sVar5 = *psVar8;
      psVar8 = psVar8 + 1;
      local_8 = local_8 + -1;
      *pfVar9 = (float)(int)sVar5 * (float)_DAT_5f9ec2f8 * param_4;
      pfVar9 = pfVar9 + 1;
    } while (local_8 != 0);
  }
  return;
}


