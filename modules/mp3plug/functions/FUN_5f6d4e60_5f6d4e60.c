/* Module: mp3plug.dll
   Function: FUN_5f6d4e60
   Address: 5f6d4e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d4e60(float *param_1,float *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  float fVar18;
  undefined1 auVar13 [16];
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  float fVar24;
  
  if ((DAT_5f7529a4 == 0) || ((((uint)param_2 | (uint)param_3 | (uint)param_1) & 0xf) != 0)) {
    bVar9 = (param_4 & 1) != 0;
    if (bVar9) {
      *param_3 = *param_1 / *param_2;
    }
    uVar8 = (uint)bVar9;
    if ((int)uVar8 < (int)param_4) {
      while( true ) {
        fVar4 = param_1[uVar8 + 1];
        fVar5 = param_2[uVar8 + 1];
        if ((int)param_4 <= (int)(uVar8 + 2)) break;
        param_3[uVar8] = param_1[uVar8] / param_2[uVar8];
        param_3[uVar8 + 1] = fVar4 / fVar5;
        uVar8 = uVar8 + 2;
      }
      param_3[uVar8] = param_1[uVar8] / param_2[uVar8];
      param_3[uVar8 + 1] = fVar4 / fVar5;
    }
  }
  else {
    iVar7 = 0;
    if (0 < (int)(param_4 & 0xfffffff8)) {
      do {
        auVar3 = *(undefined1 (*) [16])(param_2 + iVar7);
        auVar12 = rcpps(in_XMM1,auVar3);
        auVar13 = *(undefined1 (*) [16])(param_2 + iVar7 + 4);
        auVar21 = rcpps(in_XMM3,auVar13);
        fVar10 = auVar12._0_4_;
        fVar14 = auVar12._4_4_;
        fVar16 = auVar12._8_4_;
        fVar18 = auVar12._12_4_;
        in_XMM1._0_4_ = fVar10 * fVar10;
        in_XMM1._4_4_ = fVar14 * fVar14;
        in_XMM1._8_4_ = fVar16 * fVar16;
        in_XMM1._12_4_ = fVar18 * fVar18;
        pfVar1 = param_1 + iVar7;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        fVar20 = auVar21._0_4_;
        fVar22 = auVar21._4_4_;
        fVar23 = auVar21._8_4_;
        fVar24 = auVar21._12_4_;
        in_XMM3._0_4_ = fVar20 * fVar20;
        in_XMM3._4_4_ = fVar22 * fVar22;
        in_XMM3._8_4_ = fVar23 * fVar23;
        in_XMM3._12_4_ = fVar24 * fVar24;
        pfVar2 = param_1 + iVar7 + 4;
        fVar11 = *pfVar2;
        fVar15 = pfVar2[1];
        fVar17 = pfVar2[2];
        fVar19 = pfVar2[3];
        pfVar2 = param_3 + iVar7;
        *pfVar2 = ((fVar10 + fVar10) - auVar3._0_4_ * in_XMM1._0_4_) * *pfVar1;
        pfVar2[1] = ((fVar14 + fVar14) - auVar3._4_4_ * in_XMM1._4_4_) * fVar4;
        pfVar2[2] = ((fVar16 + fVar16) - auVar3._8_4_ * in_XMM1._8_4_) * fVar5;
        pfVar2[3] = ((fVar18 + fVar18) - auVar3._12_4_ * in_XMM1._12_4_) * fVar6;
        pfVar1 = param_3 + iVar7 + 4;
        *pfVar1 = ((fVar20 + fVar20) - auVar13._0_4_ * in_XMM3._0_4_) * fVar11;
        pfVar1[1] = ((fVar22 + fVar22) - auVar13._4_4_ * in_XMM3._4_4_) * fVar15;
        pfVar1[2] = ((fVar23 + fVar23) - auVar13._8_4_ * in_XMM3._8_4_) * fVar17;
        pfVar1[3] = ((fVar24 + fVar24) - auVar13._12_4_ * in_XMM3._12_4_) * fVar19;
        iVar7 = iVar7 + 8;
      } while (iVar7 < (int)(param_4 & 0xfffffff8));
    }
    if (iVar7 + 4 <= (int)param_4) {
      auVar3 = *(undefined1 (*) [16])(param_2 + iVar7);
      auVar13 = rcpps(in_XMM1,auVar3);
      fVar11 = auVar13._0_4_;
      fVar15 = auVar13._4_4_;
      fVar17 = auVar13._8_4_;
      fVar19 = auVar13._12_4_;
      pfVar1 = param_1 + iVar7;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = param_3 + iVar7;
      *pfVar2 = ((fVar11 + fVar11) - auVar3._0_4_ * fVar11 * fVar11) * *pfVar1;
      pfVar2[1] = ((fVar15 + fVar15) - auVar3._4_4_ * fVar15 * fVar15) * fVar4;
      pfVar2[2] = ((fVar17 + fVar17) - auVar3._8_4_ * fVar17 * fVar17) * fVar5;
      pfVar2[3] = ((fVar19 + fVar19) - auVar3._12_4_ * fVar19 * fVar19) * fVar6;
      iVar7 = iVar7 + 4;
    }
    for (; iVar7 < (int)param_4; iVar7 = iVar7 + 1) {
      param_3[iVar7] = param_1[iVar7] / param_2[iVar7];
    }
  }
  return;
}


