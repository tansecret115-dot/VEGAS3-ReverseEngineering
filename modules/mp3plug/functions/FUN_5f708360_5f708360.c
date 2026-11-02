/* Module: mp3plug.dll
   Function: FUN_5f708360
   Address: 5f708360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f708360(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int in_EAX;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 auVar47 [16];
  int in_stack_00000010;
  int in_stack_00000018;
  undefined1 local_80 [16];
  int local_70;
  int local_6c;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  local_60 = DAT_5f76084c;
  fVar17 = DAT_5f760848;
  local_70 = param_1;
  iVar19 = 0;
  if (0 < in_stack_00000010) {
    do {
      pfVar2 = (float *)(param_2 + iVar19 * 8);
      fVar26 = *pfVar2;
      fVar27 = pfVar2[1];
      fVar28 = pfVar2[2];
      fVar29 = pfVar2[3];
      pfVar2 = (float *)(param_2 + 0x10 + iVar19 * 8);
      fVar30 = *pfVar2;
      fVar31 = pfVar2[1];
      fVar32 = pfVar2[2];
      fVar33 = pfVar2[3];
      pfVar2 = (float *)(in_EAX + iVar19 * 8);
      fVar5 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      pfVar2 = (float *)(in_EAX + 0x10 + iVar19 * 8);
      fVar9 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      iVar1 = iVar19 + 4;
      auVar21._0_4_ = fVar26 * fVar26 + fVar27 * fVar27;
      auVar21._4_4_ = fVar28 * fVar28 + fVar29 * fVar29;
      auVar21._8_4_ = fVar30 * fVar30 + fVar31 * fVar31;
      auVar21._12_4_ = fVar32 * fVar32 + fVar33 * fVar33;
      auVar22 = rcpps(auVar21,auVar21);
      fStack_5c = local_60;
      fStack_58 = local_60;
      fStack_54 = local_60;
      fVar34 = (fVar5 * fVar26 + fVar6 * fVar27) * auVar22._0_4_ * fVar17;
      fVar36 = (fVar7 * fVar28 + fVar8 * fVar29) * auVar22._4_4_ * fVar17;
      fVar38 = (fVar9 * fVar30 + fVar10 * fVar31) * auVar22._8_4_ * fVar17;
      fVar40 = (fVar11 * fVar32 + fVar12 * fVar33) * auVar22._12_4_ * fVar17;
      pfVar2 = (float *)(param_1 + iVar19 * 8);
      fVar13 = *pfVar2;
      local_50 = pfVar2[1];
      fVar14 = pfVar2[2];
      fStack_4c = pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x10 + iVar19 * 8);
      fVar15 = *pfVar2;
      fStack_48 = pfVar2[1];
      fVar16 = pfVar2[2];
      fStack_44 = pfVar2[3];
      auVar43._0_4_ = (fVar5 * fVar5 + fVar6 * fVar6) * auVar22._0_4_;
      auVar43._4_4_ = (fVar7 * fVar7 + fVar8 * fVar8) * auVar22._4_4_;
      auVar43._8_4_ = (fVar9 * fVar9 + fVar10 * fVar10) * auVar22._8_4_;
      auVar43._12_4_ = (fVar11 * fVar11 + fVar12 * fVar12) * auVar22._12_4_;
      auVar22 = rsqrtps(auVar43,auVar43);
      auVar23._0_4_ = local_50 * local_50;
      auVar23._4_4_ = fStack_4c * fStack_4c;
      auVar23._8_4_ = fStack_48 * fStack_48;
      auVar23._12_4_ = fStack_44 * fStack_44;
      fVar35 = fVar13 * fVar13 + auVar23._0_4_;
      fVar37 = fVar14 * fVar14 + auVar23._4_4_;
      fVar39 = fVar15 * fVar15 + auVar23._8_4_;
      fVar41 = fVar16 * fVar16 + auVar23._12_4_;
      auVar24._4_4_ = fVar37;
      auVar24._0_4_ = fVar35;
      auVar24._8_4_ = fVar39;
      auVar24._12_4_ = fVar41;
      auVar24 = rsqrtps(auVar23,auVar24);
      fVar42 = auVar22._0_4_ * fVar17 + local_60;
      fVar44 = auVar22._4_4_ * fVar17 + local_60;
      fVar45 = auVar22._8_4_ * fVar17 + local_60;
      fVar46 = auVar22._12_4_ * fVar17 + local_60;
      fVar26 = (fVar26 * fVar34 - fVar5) * fVar42;
      fVar28 = (fVar28 * fVar36 - fVar7) * fVar44;
      fVar30 = (fVar30 * fVar38 - fVar9) * fVar45;
      fVar32 = (fVar32 * fVar40 - fVar11) * fVar46;
      fVar42 = (fVar27 * fVar34 - fVar6) * fVar42;
      fVar44 = (fVar29 * fVar36 - fVar8) * fVar44;
      fVar45 = (fVar31 * fVar38 - fVar10) * fVar45;
      fVar46 = (fVar33 * fVar40 - fVar12) * fVar46;
      auVar47._0_4_ = fVar42 * fVar42;
      auVar47._4_4_ = fVar44 * fVar44;
      auVar47._8_4_ = fVar45 * fVar45;
      auVar47._12_4_ = fVar46 * fVar46;
      fVar27 = fVar26 * fVar26 + auVar47._0_4_;
      fVar29 = fVar28 * fVar28 + auVar47._4_4_;
      fVar31 = fVar30 * fVar30 + auVar47._8_4_;
      fVar33 = fVar32 * fVar32 + auVar47._12_4_;
      auVar22._4_4_ = fVar29;
      auVar22._0_4_ = fVar27;
      auVar22._8_4_ = fVar31;
      auVar22._12_4_ = fVar33;
      auVar22 = rsqrtps(auVar47,auVar22);
      auVar25._0_4_ = auVar24._0_4_ * auVar22._0_4_;
      auVar25._4_4_ = auVar24._4_4_ * auVar22._4_4_;
      auVar25._8_4_ = auVar24._8_4_ * auVar22._8_4_;
      auVar25._12_4_ = auVar24._12_4_ * auVar22._12_4_;
      auVar22 = rcpps(auVar25,auVar25);
      auVar20._0_4_ =
           (fVar13 - fVar26) * (fVar13 - fVar26) + (local_50 - fVar42) * (local_50 - fVar42);
      auVar20._4_4_ =
           (fVar14 - fVar28) * (fVar14 - fVar28) + (fStack_4c - fVar44) * (fStack_4c - fVar44);
      auVar20._8_4_ =
           (fVar15 - fVar30) * (fVar15 - fVar30) + (fStack_48 - fVar45) * (fStack_48 - fVar45);
      auVar20._12_4_ =
           (fVar16 - fVar32) * (fVar16 - fVar32) + (fStack_44 - fVar46) * (fStack_44 - fVar46);
      auVar4._4_4_ = fVar37 + auVar22._4_4_ * fVar17 + fVar29;
      auVar4._0_4_ = fVar35 + auVar22._0_4_ * fVar17 + fVar27;
      auVar4._8_4_ = fVar39 + auVar22._8_4_ * fVar17 + fVar31;
      auVar4._12_4_ = fVar41 + auVar22._12_4_ * fVar17 + fVar33;
      auVar22 = divps(auVar20,auVar4);
      local_80 = sqrtps(auVar22,auVar22);
      if (in_stack_00000010 < iVar1) {
        if (iVar19 < in_stack_00000010) {
          local_6c = param_2;
          iVar18 = iVar19;
          do {
            *(undefined4 *)(in_stack_00000018 + iVar18 * 4) =
                 *(undefined4 *)(local_80 + (iVar18 - iVar19) * 4);
            iVar18 = iVar18 + 1;
          } while (iVar18 < in_stack_00000010);
        }
      }
      else {
        puVar3 = (undefined4 *)
                 (((int)(iVar19 + ((uint)(iVar19 >> 1) >> 0x1e)) >> 2) * 0x10 + in_stack_00000018);
        *puVar3 = local_80._0_4_;
        puVar3[1] = local_80._4_4_;
        puVar3[2] = local_80._8_4_;
        puVar3[3] = local_80._12_4_;
      }
      iVar19 = iVar1;
    } while (iVar1 < in_stack_00000010);
  }
  return;
}


