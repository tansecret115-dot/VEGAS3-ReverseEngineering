/* Module: vidcap30.exe
   Function: FUN_0055a7e0
   Address: 0055a7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a7e0(float *param_1,short *param_2,int param_3,float param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  uint uVar7;
  short *psVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  undefined2 uVar14;
  unkbyte10 in_ST1;
  undefined2 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  int local_c;
  uint local_8;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar7 = (uint)param_1 >> 2 & 3;
  if (uVar7 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 4 - uVar7;
  }
  if (iVar9 < param_3) {
    local_8 = (int)((param_3 - iVar9) + (param_3 - iVar9 >> 0x1f & 3U)) >> 2;
    local_c = (param_3 + local_8 * -4) - iVar9;
  }
  else {
    local_c = 0;
    local_8 = 0;
    iVar9 = param_3;
  }
  param_4 = param_4 * _DAT_0059fdbc;
  iVar11 = iVar9;
  psVar8 = param_2;
  pfVar10 = param_1;
  if (0 < iVar9) {
    do {
      iVar11 = iVar11 + -1;
      *pfVar10 = (float)(int)*psVar8 * param_4;
      psVar8 = psVar8 + 1;
      pfVar10 = pfVar10 + 1;
    } while (iVar11 != 0);
  }
  if (local_8 != 0) {
    uVar12 = local_8 & 3;
    pfVar10 = param_1 + iVar9;
    pauVar13 = (undefined1 (*) [16])(param_2 + iVar9);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      auVar2 = *pauVar13;
      auVar3 = pauVar13[1];
      auVar18._0_12_ = auVar2._0_12_;
      auVar18._12_2_ = auVar2._6_2_;
      auVar18._14_2_ = auVar2._6_2_;
      auVar17._12_4_ = auVar18._12_4_;
      auVar17._0_10_ = auVar2._0_10_;
      auVar17._10_2_ = auVar2._4_2_;
      auVar16._10_6_ = auVar17._10_6_;
      auVar16._0_8_ = auVar2._0_8_;
      auVar16._8_2_ = auVar2._4_2_;
      auVar5._4_8_ = auVar16._8_8_;
      auVar5._2_2_ = auVar2._2_2_;
      auVar5._0_2_ = auVar2._2_2_;
      auVar21._0_12_ = auVar3._0_12_;
      auVar21._12_2_ = auVar3._6_2_;
      auVar21._14_2_ = auVar3._6_2_;
      auVar20._12_4_ = auVar21._12_4_;
      auVar20._0_10_ = auVar3._0_10_;
      auVar20._10_2_ = auVar3._4_2_;
      auVar19._10_6_ = auVar20._10_6_;
      auVar19._0_8_ = auVar3._0_8_;
      auVar19._8_2_ = auVar3._4_2_;
      auVar6._4_8_ = auVar19._8_8_;
      auVar6._2_2_ = auVar3._2_2_;
      auVar6._0_2_ = auVar3._2_2_;
      *pfVar10 = (float)(int)auVar2._0_2_ * param_4;
      pfVar10[1] = (float)(auVar5._0_4_ >> 0x10) * param_4;
      pfVar10[2] = (float)(auVar16._8_4_ >> 0x10) * param_4;
      pfVar10[3] = (float)(auVar17._12_4_ >> 0x10) * param_4;
      pfVar10[4] = (float)(int)auVar2._8_2_ * param_4;
      pfVar10[5] = (float)(int)auVar2._10_2_ * param_4;
      pfVar10[6] = (float)(int)auVar2._12_2_ * param_4;
      pfVar10[7] = (float)(int)auVar2._14_2_ * param_4;
      pfVar10[8] = (float)(int)auVar3._0_2_ * param_4;
      pfVar10[9] = (float)(auVar6._0_4_ >> 0x10) * param_4;
      pfVar10[10] = (float)(auVar19._8_4_ >> 0x10) * param_4;
      pfVar10[0xb] = (float)(auVar20._12_4_ >> 0x10) * param_4;
      pfVar10[0xc] = (float)(int)auVar3._8_2_ * param_4;
      pfVar10[0xd] = (float)(int)auVar3._10_2_ * param_4;
      pfVar10[0xe] = (float)(int)auVar3._12_2_ * param_4;
      pfVar10[0xf] = (float)(int)auVar3._14_2_ * param_4;
      pfVar10 = pfVar10 + 0x10;
      pauVar13 = pauVar13 + 2;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      uVar1 = *(undefined8 *)*pauVar13;
      uVar15 = (undefined2)((unkuint10)in_ST1 >> 0x40);
      uVar14 = (undefined2)((ulonglong)uVar1 >> 0x10);
      iVar11 = (int)CONCAT42(CONCAT22(uVar15,uVar14),uVar14) >> 0x10;
      in_ST1 = CONCAT28(uVar15,CONCAT44(iVar11,(int)(short)uVar1));
      *pfVar10 = (float)(int)(short)uVar1 * param_4;
      pfVar10[1] = (float)iVar11 * param_4;
      pfVar10[2] = (float)(int)(short)((ulonglong)uVar1 >> 0x20) * param_4;
      pfVar10[3] = (float)(int)(short)((ulonglong)uVar1 >> 0x30) * param_4;
      pfVar10 = pfVar10 + 4;
      pauVar13 = (undefined1 (*) [16])(*pauVar13 + 8);
    }
  }
  pfVar10 = param_1 + iVar9 + local_8 * 4;
  psVar8 = (short *)(*(undefined1 (*) [16])(param_2 + iVar9) + local_8 * 8);
  if (0 < local_c) {
    do {
      sVar4 = *psVar8;
      psVar8 = psVar8 + 1;
      local_c = local_c + -1;
      *pfVar10 = (float)(int)sVar4 * param_4;
      pfVar10 = pfVar10 + 1;
    } while (local_c != 0);
  }
  return;
}


