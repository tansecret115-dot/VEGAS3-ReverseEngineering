/* Module: wavplug.dll
   Function: FUN_5f3b0410
   Address: 5f3b0410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f3b0410(float *param_1,short *param_2,int param_3,float param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  float fVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  uint uVar8;
  short *psVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  undefined2 uVar15;
  unkbyte10 in_ST1;
  undefined2 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  int local_c;
  uint local_8;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar8 = (uint)param_1 >> 2 & 3;
  if (uVar8 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 4 - uVar8;
  }
  if (iVar10 < param_3) {
    local_8 = (int)((param_3 - iVar10) + (param_3 - iVar10 >> 0x1f & 3U)) >> 2;
    local_c = (param_3 + local_8 * -4) - iVar10;
  }
  else {
    local_c = 0;
    local_8 = 0;
    iVar10 = param_3;
  }
  fVar5 = param_4 * _DAT_5f3d0748;
  iVar12 = iVar10;
  psVar9 = param_2;
  pfVar11 = param_1;
  if (0 < iVar10) {
    do {
      iVar12 = iVar12 + -1;
      *pfVar11 = (float)(int)*psVar9 * fVar5;
      psVar9 = psVar9 + 1;
      pfVar11 = pfVar11 + 1;
    } while (iVar12 != 0);
  }
  if (local_8 != 0) {
    uVar13 = local_8 & 3;
    pfVar11 = param_1 + iVar10;
    pauVar14 = (undefined1 (*) [16])(param_2 + iVar10);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      auVar2 = *pauVar14;
      auVar3 = pauVar14[1];
      auVar19._0_12_ = auVar2._0_12_;
      auVar19._12_2_ = auVar2._6_2_;
      auVar19._14_2_ = auVar2._6_2_;
      auVar18._12_4_ = auVar19._12_4_;
      auVar18._0_10_ = auVar2._0_10_;
      auVar18._10_2_ = auVar2._4_2_;
      auVar17._10_6_ = auVar18._10_6_;
      auVar17._0_8_ = auVar2._0_8_;
      auVar17._8_2_ = auVar2._4_2_;
      auVar6._4_8_ = auVar17._8_8_;
      auVar6._2_2_ = auVar2._2_2_;
      auVar6._0_2_ = auVar2._2_2_;
      auVar22._0_12_ = auVar3._0_12_;
      auVar22._12_2_ = auVar3._6_2_;
      auVar22._14_2_ = auVar3._6_2_;
      auVar21._12_4_ = auVar22._12_4_;
      auVar21._0_10_ = auVar3._0_10_;
      auVar21._10_2_ = auVar3._4_2_;
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._0_8_ = auVar3._0_8_;
      auVar20._8_2_ = auVar3._4_2_;
      auVar7._4_8_ = auVar20._8_8_;
      auVar7._2_2_ = auVar3._2_2_;
      auVar7._0_2_ = auVar3._2_2_;
      *pfVar11 = (float)(int)auVar2._0_2_ * fVar5;
      pfVar11[1] = (float)(auVar6._0_4_ >> 0x10) * fVar5;
      pfVar11[2] = (float)(auVar17._8_4_ >> 0x10) * fVar5;
      pfVar11[3] = (float)(auVar18._12_4_ >> 0x10) * fVar5;
      pfVar11[4] = (float)(int)auVar2._8_2_ * fVar5;
      pfVar11[5] = (float)(int)auVar2._10_2_ * fVar5;
      pfVar11[6] = (float)(int)auVar2._12_2_ * fVar5;
      pfVar11[7] = (float)(int)auVar2._14_2_ * fVar5;
      pfVar11[8] = (float)(int)auVar3._0_2_ * fVar5;
      pfVar11[9] = (float)(auVar7._0_4_ >> 0x10) * fVar5;
      pfVar11[10] = (float)(auVar20._8_4_ >> 0x10) * fVar5;
      pfVar11[0xb] = (float)(auVar21._12_4_ >> 0x10) * fVar5;
      pfVar11[0xc] = (float)(int)auVar3._8_2_ * fVar5;
      pfVar11[0xd] = (float)(int)auVar3._10_2_ * fVar5;
      pfVar11[0xe] = (float)(int)auVar3._12_2_ * fVar5;
      pfVar11[0xf] = (float)(int)auVar3._14_2_ * fVar5;
      pfVar11 = pfVar11 + 0x10;
      pauVar14 = pauVar14 + 2;
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      uVar1 = *(undefined8 *)*pauVar14;
      uVar16 = (undefined2)((unkuint10)in_ST1 >> 0x40);
      uVar15 = (undefined2)((ulonglong)uVar1 >> 0x10);
      iVar12 = (int)CONCAT42(CONCAT22(uVar16,uVar15),uVar15) >> 0x10;
      in_ST1 = CONCAT28(uVar16,CONCAT44(iVar12,(int)(short)uVar1));
      *pfVar11 = (float)(int)(short)uVar1 * fVar5;
      pfVar11[1] = (float)iVar12 * fVar5;
      pfVar11[2] = (float)(int)(short)((ulonglong)uVar1 >> 0x20) * fVar5;
      pfVar11[3] = (float)(int)(short)((ulonglong)uVar1 >> 0x30) * fVar5;
      pfVar11 = pfVar11 + 4;
      pauVar14 = (undefined1 (*) [16])(*pauVar14 + 8);
    }
  }
  pfVar11 = param_1 + iVar10 + local_8 * 4;
  psVar9 = (short *)(*(undefined1 (*) [16])(param_2 + iVar10) + local_8 * 8);
  if (0 < local_c) {
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
      local_c = local_c + -1;
      *pfVar11 = (float)(int)sVar4 * fVar5;
      pfVar11 = pfVar11 + 1;
    } while (local_c != 0);
  }
  return;
}


