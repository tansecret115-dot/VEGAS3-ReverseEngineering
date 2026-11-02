/* Module: mp3plug.dll
   Function: FUN_5f6e8a5c
   Address: 5f6e8a5c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6e8a5c(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float in_EAX;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float *in_stack_00000010;
  float local_8c;
  float local_88;
  float fStack_58;
  float fStack_54;
  
  fVar11 = DAT_5f75d780;
  iVar14 = *(int *)(param_2 + 0xc);
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  auVar19 = ZEXT816(0);
  pfVar15 = (float *)0x0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  if (0 < (int)in_EAX) {
    iVar16 = 0;
    iVar13 = 0;
    pfVar15 = in_stack_00000010;
    do {
      fVar25 = 0.0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      uVar5 = *(uint *)(iVar16 + 0x20 + param_2);
      iVar17 = iVar13 + 8;
      while (iVar17 <= (int)uVar5) {
        pfVar3 = (float *)(iVar14 + iVar13 * 4);
        pfVar1 = (float *)(iVar14 + 0x10 + iVar13 * 4);
        pfVar12 = (float *)(param_1 + iVar13 * 4);
        pfVar2 = (float *)(param_1 + 0x10 + iVar13 * 4);
        fVar24 = fVar24 + (*pfVar3 - *pfVar12) * (*pfVar3 - *pfVar12);
        fVar25 = fVar25 + (pfVar3[1] - pfVar12[1]) * (pfVar3[1] - pfVar12[1]);
        fStack_58 = fStack_58 + (pfVar3[2] - pfVar12[2]) * (pfVar3[2] - pfVar12[2]);
        fStack_54 = fStack_54 + (pfVar3[3] - pfVar12[3]) * (pfVar3[3] - pfVar12[3]);
        fVar26 = fVar26 + (*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2);
        fVar27 = fVar27 + (pfVar1[1] - pfVar2[1]) * (pfVar1[1] - pfVar2[1]);
        fVar28 = fVar28 + (pfVar1[2] - pfVar2[2]) * (pfVar1[2] - pfVar2[2]);
        fVar29 = fVar29 + (pfVar1[3] - pfVar2[3]) * (pfVar1[3] - pfVar2[3]);
        iVar17 = iVar13 + 0x10;
        iVar13 = iVar13 + 8;
      }
      fVar24 = fVar24 + fVar26;
      fVar25 = fVar25 + fVar27;
      fVar28 = fStack_58 + fVar28;
      fVar29 = fStack_54 + fVar29;
      if (iVar13 + 4 <= (int)uVar5) {
        pfVar1 = (float *)(iVar14 + iVar13 * 4);
        pfVar12 = (float *)(param_1 + iVar13 * 4);
        fVar24 = (*pfVar1 - *pfVar12) * (*pfVar1 - *pfVar12) + fVar24;
        fVar25 = (pfVar1[1] - pfVar12[1]) * (pfVar1[1] - pfVar12[1]) + fVar25;
        fVar28 = (pfVar1[2] - pfVar12[2]) * (pfVar1[2] - pfVar12[2]) + fVar28;
        fVar29 = (pfVar1[3] - pfVar12[3]) * (pfVar1[3] - pfVar12[3]) + fVar29;
        iVar13 = iVar13 + 4;
      }
      if ((uVar5 & 3) == 0) {
        fStack_58 = 0.0;
        fStack_54 = 0.0;
        *pfVar15 = fVar29 + fVar25 + fVar28 + fVar24;
      }
      else {
        pfVar1 = (float *)(iVar14 + iVar13 * 4);
        pfVar12 = (float *)(param_1 + iVar13 * 4);
        iVar13 = iVar13 + 4;
        fStack_58 = (pfVar1[2] - pfVar12[2]) * (pfVar1[2] - pfVar12[2]);
        fStack_54 = (pfVar1[3] - pfVar12[3]) * (pfVar1[3] - pfVar12[3]);
        *pfVar15 = fVar29 + 0.0 + fVar25 + (pfVar1[1] - pfVar12[1]) * (pfVar1[1] - pfVar12[1]) +
                   fVar28 + 0.0 + fVar24 + (*pfVar1 - *pfVar12) * (*pfVar1 - *pfVar12);
      }
      pfVar15 = pfVar15 + 1;
      iVar16 = iVar16 + 0x20;
    } while ((int)pfVar15 < (int)(in_stack_00000010 + (int)in_EAX));
  }
  fVar24 = 0.0;
  if (0 < (int)in_EAX) {
    pfVar15 = in_stack_00000010 + (int)in_EAX;
    fVar24 = 0.0;
    pfVar12 = in_stack_00000010;
    do {
      pfVar12[0x27] = *pfVar12 * *(float *)(param_2 + 0x18);
      if (*(float *)(param_2 + 0x14) < *(float *)(param_2 + 0x1c)) {
        fVar24 = (float)((int)fVar24 + 1);
      }
      pfVar12 = pfVar12 + 1;
      param_2 = param_2 + 0x20;
    } while ((int)pfVar12 < (int)pfVar15);
  }
  fVar32 = 0.0;
  fVar33 = 0.0;
  iVar13 = 0;
  fVar25 = 0.0;
  in_stack_00000010[0x50] = fVar24;
  iVar14 = iVar13;
  fVar24 = in_EAX;
  fVar26 = fVar30;
  fVar27 = fVar31;
  fVar28 = fVar32;
  fVar29 = fVar33;
  if (7 < (int)in_EAX) {
    do {
      auVar34 = *(undefined1 (*) [16])(in_stack_00000010 + iVar13 + 0x27);
      fVar7 = auVar34._12_4_;
      auVar4 = *(undefined1 (*) [16])(in_stack_00000010 + iVar13 + 0x2b);
      fVar6 = auVar4._0_4_;
      fVar21 = auVar4._4_4_;
      fVar23 = auVar4._8_4_;
      fVar8 = auVar4._12_4_;
      fVar18 = auVar34._0_4_;
      fVar20 = auVar34._4_4_;
      fVar22 = auVar34._8_4_;
      iVar14 = iVar13 + 8;
      auVar9._4_4_ = -(uint)(fVar11 < fVar20);
      auVar9._0_4_ = -(uint)(fVar11 < fVar18);
      auVar9._8_4_ = -(uint)(fVar11 < fVar22);
      auVar9._12_4_ = -(uint)(fVar11 < fVar7);
      iVar16 = movmskps(pfVar15,auVar9);
      pfVar15 = (float *)(iVar13 + 0x10);
      auVar10._4_4_ = -(uint)(fVar11 < fVar21);
      auVar10._0_4_ = -(uint)(fVar11 < fVar6);
      auVar10._8_4_ = -(uint)(fVar11 < fVar23);
      auVar10._12_4_ = -(uint)(fVar11 < fVar8);
      fVar24 = (float)movmskps(fVar24,auVar10);
      fVar25 = (float)((int)fVar25 + *(int *)(&DAT_5f741000 + iVar16 * 4) +
                      *(int *)(&DAT_5f741000 + (int)fVar24 * 4));
      fVar26 = fVar26 + (float)(-(uint)(fVar11 < fVar18) & (uint)fVar18) +
               (float)(-(uint)(fVar11 < fVar6) & (uint)fVar6);
      fVar27 = fVar27 + (float)(-(uint)(fVar11 < fVar20) & (uint)fVar20) +
               (float)(-(uint)(fVar11 < fVar21) & (uint)fVar21);
      fVar28 = fVar28 + (float)(-(uint)(fVar11 < fVar22) & (uint)fVar22) +
               (float)(-(uint)(fVar11 < fVar23) & (uint)fVar23);
      fVar29 = fVar29 + (float)(-(uint)(fVar11 < fVar7) & (uint)fVar7) +
               (float)(-(uint)(fVar11 < fVar8) & (uint)fVar8);
      fVar30 = fVar30 + fVar18 + fVar6;
      fVar31 = fVar31 + fVar20 + fVar21;
      fVar32 = fVar32 + fVar22 + fVar23;
      fVar33 = fVar33 + fVar7 + fVar8;
      auVar19 = maxps(auVar34,auVar19);
      auVar19 = maxps(auVar4,auVar19);
      iVar13 = iVar14;
    } while ((int)pfVar15 <= (int)in_EAX);
  }
  iVar13 = iVar14 + 4;
  if (iVar13 <= (int)in_EAX) {
    auVar34 = *(undefined1 (*) [16])(in_stack_00000010 + iVar14 + 0x27);
    fVar24 = auVar34._0_4_;
    fVar6 = auVar34._12_4_;
    fVar21 = auVar34._4_4_;
    fVar23 = auVar34._8_4_;
    fVar30 = fVar30 + fVar24;
    fVar31 = fVar31 + fVar21;
    fVar32 = fVar32 + fVar23;
    fVar33 = fVar33 + fVar6;
    auVar4._4_4_ = -(uint)(fVar11 < fVar21);
    auVar4._0_4_ = -(uint)(fVar11 < fVar24);
    auVar4._8_4_ = -(uint)(fVar11 < fVar23);
    auVar4._12_4_ = -(uint)(fVar11 < fVar6);
    iVar14 = movmskps(iVar13,auVar4);
    fVar25 = (float)((int)fVar25 + *(int *)(&DAT_5f741000 + iVar14 * 4));
    fVar26 = fVar26 + (float)(-(uint)(fVar11 < fVar24) & (uint)fVar24);
    fVar27 = fVar27 + (float)(-(uint)(fVar11 < fVar21) & (uint)fVar21);
    fVar28 = fVar28 + (float)(-(uint)(fVar11 < fVar23) & (uint)fVar23);
    fVar29 = fVar29 + (float)(-(uint)(fVar11 < fVar6) & (uint)fVar6);
    auVar19 = maxps(auVar34,auVar19);
    iVar14 = iVar13;
  }
  fVar30 = fVar33 + fVar31 + fVar32 + fVar30;
  local_8c = fVar29 + fVar27 + fVar28 + fVar26;
  auVar34._0_8_ = auVar19._8_8_;
  auVar34._8_4_ = auVar19._0_4_;
  auVar34._12_4_ = auVar19._4_4_;
  auVar19 = maxps(auVar34,auVar19);
  local_88 = auVar19._4_4_;
  if (auVar19._4_4_ <= auVar19._0_4_) {
    local_88 = auVar19._0_4_;
  }
  for (; iVar14 < (int)in_EAX; iVar14 = iVar14 + 1) {
    fVar30 = in_stack_00000010[iVar14 + 0x27] + fVar30;
    fVar31 = in_stack_00000010[iVar14 + 0x27];
    if (local_88 < in_stack_00000010[iVar14 + 0x27]) {
      fVar31 = in_stack_00000010[iVar14 + 0x27];
      local_88 = in_stack_00000010[iVar14 + 0x27];
    }
    if (_DAT_5f75d784 < fVar31) {
      local_8c = local_8c + fVar31;
      fVar25 = (float)((int)fVar25 + 1);
    }
  }
  in_stack_00000010[0x51] = fVar25;
  in_stack_00000010[0x4f] = in_EAX;
  in_stack_00000010[0x4e] = local_88;
  in_stack_00000010[0x52] = fVar30;
  in_stack_00000010[0x53] = local_8c;
  if (0 < (int)in_EAX) {
    in_stack_00000010[0x52] = in_stack_00000010[0x52] / (float)(int)in_EAX;
  }
  if (0 < (int)in_stack_00000010[0x51]) {
    in_stack_00000010[0x53] = in_stack_00000010[0x53] / (float)(int)in_stack_00000010[0x51];
  }
  in_stack_00000010[0x54] = in_stack_00000010[0x4e];
  return;
}


