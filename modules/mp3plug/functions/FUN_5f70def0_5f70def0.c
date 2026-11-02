/* Module: mp3plug.dll
   Function: FUN_5f70def0
   Address: 5f70def0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5f70def0(uint param_1,int param_2)

{
  uint *puVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  int in_EAX;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  float10 fVar35;
  uint in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  double dStack_724;
  undefined8 local_71c;
  double adStack_66c [23];
  uint auStack_5b0 [11];
  uint auStack_584 [209];
  float afStack_240 [23];
  float afStack_1e4 [24];
  uint local_184;
  uint local_170;
  int local_16c;
  double local_164;
  double local_15c;
  int local_154;
  int local_150;
  int local_14c;
  uint local_148;
  double local_144;
  double local_13c;
  double local_134;
  double local_12c;
  double local_124;
  double local_11c;
  double local_114;
  double local_10c;
  double local_104;
  double local_fc;
  double local_f4;
  double local_ec;
  uint local_e4;
  int local_e0;
  double local_dc;
  double local_d4;
  int local_cc;
  undefined1 *local_c8;
  undefined1 *local_c4;
  double local_bc;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  undefined8 local_94;
  int local_8c;
  uint local_84;
  int local_80;
  uint local_7c;
  undefined8 local_74;
  int local_6c;
  uint local_68;
  int local_64;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  
  local_e0 = param_2;
  local_7c = param_1;
  local_148 = 0;
  local_134 = _DAT_5f7640b0;
  local_144 = _DAT_5f7640b8;
  local_12c = _DAT_5f7640c0;
  local_13c = _DAT_5f7640c8;
  local_a4 = _DAT_5f7640d0;
  local_f4 = _DAT_5f7640d8;
  local_74 = _DAT_5f7640e0;
  if (1 < (int)in_stack_00000010) {
    local_154 = in_stack_00000018;
    if (in_stack_00000018 < 0) {
      local_f4 = _DAT_5f7640e8;
      local_a4 = _DAT_5f7640f0;
      local_74 = _DAT_5f7640f8;
      local_154 = -in_stack_00000018;
    }
    local_84 = in_stack_00000014 * local_154;
    local_e4 = local_84;
    local_170 = (int)local_84 / (int)in_stack_00000010;
    local_184 = local_170;
    local_bc = local_74 + local_74;
    local_16c = param_1 * local_154;
    local_ac = (double)(int)local_170 * local_74;
    local_14c = param_1 * local_154 - local_154;
    iVar25 = 0;
    local_cc = 0;
    uVar20 = in_stack_00000010;
    local_80 = in_EAX;
    if (in_stack_00000010 ==
        (((uint)((int)in_stack_00000010 >> 3) >> 0x1c) + in_stack_00000010 & 0xfffffff0)) {
      do {
        iVar25 = iVar25 + 1;
        auStack_5b0[iVar25] = 4;
        iVar26 = uVar20 + ((uint)((int)uVar20 >> 3) >> 0x1c);
        uVar20 = iVar26 >> 4;
      } while (uVar20 == (((uint)(iVar26 >> 7) >> 0x1c) + uVar20 & 0xfffffff0));
    }
    iVar26 = 9;
    uVar27 = 3;
    dVar9 = local_74;
    do {
      for (; (int)uVar20 % iVar26 == 0; uVar20 = (int)uVar20 / iVar26) {
        local_74 = dVar9;
        auStack_5b0[iVar25 + 1] = uVar27;
        iVar25 = iVar25 + 1;
        dVar9 = local_74;
      }
      local_74._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
      uVar27 = uVar27 + 2;
      iVar26 = uVar27 * uVar27;
    } while (iVar26 - uVar20 == 0 || iVar26 < (int)uVar20);
    if ((int)uVar20 < 5) {
      local_74 = (double)CONCAT44(local_74._4_4_,iVar25);
      auStack_5b0[iVar25 + 1] = uVar20;
      if (uVar20 != 1) {
        iVar25 = iVar25 + 1;
      }
    }
    else {
      uVar27 = (int)(((uint)((int)uVar20 >> 1) >> 0x1e) + uVar20) >> 2;
      if (uVar20 == uVar27 * 4) {
        auStack_5b0[iVar25 + 1] = 2;
        iVar25 = iVar25 + 1;
        uVar20 = uVar27;
      }
      local_74 = (double)CONCAT44(local_74._4_4_,iVar25);
      uVar27 = 2;
      do {
        if ((int)uVar20 % (int)uVar27 == 0) {
          auStack_5b0[iVar25 + 1] = uVar27;
          iVar25 = iVar25 + 1;
          uVar20 = (int)uVar20 / (int)uVar27;
        }
        uVar27 = (uVar27 + 1 + (uint)(0x7fffffff < uVar27 + 1) & 0xfffffffe) + 1;
      } while ((int)uVar27 <= (int)uVar20);
    }
    uVar20 = local_e4;
    iVar29 = local_80;
    for (iVar26 = (int)local_74; local_80 = iVar29, iVar26 != 0; iVar26 = iVar26 + -1) {
      iVar25 = iVar25 + 1;
      local_e4 = uVar20;
      auStack_5b0[iVar25] = auStack_5b0[iVar26];
      uVar20 = local_e4;
      iVar29 = local_80;
    }
    if (0xb < iVar25) {
      return 0;
    }
    local_6c = iVar25;
    local_c8 = (undefined1 *)((int)&local_71c + iVar25 * 4);
    local_c4 = (undefined1 *)&local_71c;
    do {
      while( true ) {
        while( true ) {
          local_184 = uVar20;
          local_94 = (double)((float10)local_ac / (float10)(int)uVar20);
          fVar30 = (float10)fsin((float10)local_ac / (float10)(int)uVar20);
          local_15c = (double)((fVar30 + fVar30) * fVar30);
          fVar30 = (float10)fsin((float10)local_94 + (float10)local_94);
          iVar25 = 1;
          local_164 = (double)fVar30;
          iVar26 = *(int *)(local_c4 + 0x170);
          local_dc = (double)CONCAT44(local_dc._4_4_,iVar26);
          local_c4 = local_c4 + 4;
          if (iVar26 != 2) break;
          uVar20 = (int)(uVar20 + (0x7fffffff < uVar20)) >> 1;
          iVar26 = uVar20 + 2;
          local_94._4_4_ = (undefined4)((ulonglong)local_94 >> 0x20);
          local_94 = (double)CONCAT44(local_94._4_4_,iVar26);
          do {
            do {
              iVar21 = uVar20 + iVar25;
              fVar4 = *(float *)(iVar29 + -4 + iVar21 * 4);
              fVar5 = *(float *)(local_e0 + -4 + iVar21 * 4);
              fVar6 = *(float *)(local_e0 + -4 + iVar21 * 4);
              *(float *)(iVar29 + -4 + iVar21 * 4) =
                   *(float *)(iVar29 + -4 + iVar25 * 4) - *(float *)(iVar29 + -4 + iVar21 * 4);
              iVar28 = uVar20 + iVar21;
              *(float *)(local_e0 + -4 + iVar21 * 4) =
                   *(float *)(local_e0 + -4 + iVar25 * 4) - fVar5;
              *(float *)(iVar29 + -4 + iVar25 * 4) = fVar4 + *(float *)(iVar29 + -4 + iVar25 * 4);
              *(float *)(local_e0 + -4 + iVar25 * 4) =
                   fVar6 + *(float *)(local_e0 + -4 + iVar25 * 4);
              iVar25 = iVar28;
            } while (iVar28 <= local_14c);
            iVar25 = iVar28 - local_14c;
          } while (iVar25 <= (int)local_170);
          if ((int)uVar20 < iVar25) {
            goto LAB_5f70eaa5;
          }
          fVar30 = (float10)_DAT_5f764108;
          local_150 = local_170 * 2;
          do {
            fVar34 = (float10)local_164;
            fVar33 = fVar30 - (float10)local_15c;
            do {
              do {
                do {
                  iVar21 = uVar20 + iVar25;
                  fVar31 = (float10)*(float *)(iVar29 + -4 + iVar25 * 4) -
                           (float10)*(float *)(iVar29 + -4 + iVar21 * 4);
                  fVar32 = (float10)*(float *)(local_e0 + -4 + iVar25 * 4) -
                           (float10)*(float *)(local_e0 + -4 + iVar21 * 4);
                  *(float *)(iVar29 + -4 + iVar25 * 4) =
                       *(float *)(iVar29 + -4 + iVar21 * 4) + *(float *)(iVar29 + -4 + iVar25 * 4);
                  *(float *)(local_e0 + -4 + iVar25 * 4) =
                       *(float *)(local_e0 + -4 + iVar21 * 4) +
                       *(float *)(local_e0 + -4 + iVar25 * 4);
                  iVar25 = uVar20 + iVar21;
                  *(float *)(iVar29 + -4 + iVar21 * 4) = (float)(fVar33 * fVar31 - fVar34 * fVar32);
                  *(float *)(local_e0 + -4 + iVar21 * 4) =
                       (float)(fVar32 * fVar33 + fVar31 * fVar34);
                } while (iVar25 < local_16c);
                fVar33 = -fVar33;
                iVar21 = iVar25 - local_16c;
                iVar25 = iVar26 - iVar21;
              } while (iVar21 < iVar25);
              fVar31 = ((float10)local_164 * fVar33 - (float10)local_15c * fVar34) + fVar34;
              fVar33 = fVar33 - (fVar34 * (float10)local_164 + (float10)local_15c * fVar33);
              iVar25 = iVar25 + local_170;
              fVar32 = (float10)_DAT_5f764110 - (fVar33 * fVar33 + fVar31 * fVar31);
              fVar34 = fVar31 * fVar32;
              fVar33 = fVar32 * fVar33;
            } while (iVar25 < iVar21);
            iVar26 = iVar26 + local_154 * 2;
            iVar25 = local_170 +
                     ((int)((iVar26 - uVar20) + (uint)(0x7fffffff < iVar26 - uVar20)) >> 1);
          } while (iVar25 <= (int)(local_170 * 2));
        }
        if (iVar26 == 4) break;
        local_fc = (double)CONCAT44(local_fc._4_4_,uVar20);
        local_d4 = (double)CONCAT44(local_d4._4_4_,iVar26);
        uVar20 = (int)uVar20 / iVar26;
        if (iVar26 == 3) {
          do {
            do {
              iVar26 = uVar20 + iVar25;
              iVar21 = uVar20 + iVar26;
              fVar7 = *(float *)(iVar29 + -4 + iVar26 * 4) + *(float *)(iVar29 + -4 + iVar21 * 4);
              fVar12 = *(float *)(local_e0 + -4 + iVar21 * 4) +
                       *(float *)(local_e0 + -4 + iVar26 * 4);
              fVar4 = *(float *)(iVar29 + -4 + iVar25 * 4);
              fVar5 = *(float *)(local_e0 + -4 + iVar25 * 4);
              fVar6 = *(float *)(local_e0 + -4 + iVar25 * 4);
              *(float *)(iVar29 + -4 + iVar25 * 4) = *(float *)(iVar29 + -4 + iVar25 * 4) + fVar7;
              *(float *)(local_e0 + -4 + iVar25 * 4) = fVar5 + fVar12;
              fVar5 = (*(float *)(local_e0 + -4 + iVar26 * 4) -
                      *(float *)(local_e0 + -4 + iVar21 * 4)) * (float)local_a4;
              fVar8 = (*(float *)(iVar29 + -4 + iVar26 * 4) - *(float *)(iVar29 + -4 + iVar21 * 4))
                      * (float)local_a4;
              iVar25 = uVar20 + iVar21;
              fVar4 = fVar4 - fVar7 * _DAT_5f764138;
              fVar6 = fVar6 - fVar12 * _DAT_5f76413c;
              *(float *)(iVar29 + -4 + iVar26 * 4) = fVar4 - fVar5;
              *(float *)(iVar29 + -4 + iVar21 * 4) = fVar4 + fVar5;
              *(float *)(local_e0 + -4 + iVar26 * 4) = fVar8 + fVar6;
              *(float *)(local_e0 + -4 + iVar21 * 4) = fVar6 - fVar8;
            } while (iVar25 < local_14c);
            iVar25 = iVar25 - local_14c;
          } while (iVar25 <= (int)uVar20);
        }
        else if (iVar26 == 5) {
          fVar30 = (float10)local_f4 * (float10)_DAT_5f764158;
          local_ec = _DAT_5f764150 - local_f4 * local_f4;
          do {
            do {
              iVar26 = uVar20 + iVar25;
              local_64 = uVar20 + iVar26;
              local_68 = local_14c;
              local_148 = uVar20 + local_64;
              fVar14 = *(float *)(iVar29 + -4 + local_64 * 4) -
                       *(float *)(iVar29 + -4 + local_148 * 4);
              fVar17 = *(float *)(iVar29 + -4 + local_64 * 4) +
                       *(float *)(iVar29 + -4 + local_148 * 4);
              fVar34 = (float10)*(float *)(local_e0 + -4 + local_64 * 4) +
                       (float10)*(float *)(local_e0 + -4 + local_148 * 4);
              fVar12 = *(float *)(local_e0 + -4 + local_64 * 4) -
                       *(float *)(local_e0 + -4 + local_148 * 4);
              iVar21 = uVar20 + local_148;
              fVar16 = *(float *)(iVar29 + -4 + iVar26 * 4) + *(float *)(iVar29 + -4 + iVar21 * 4);
              fVar13 = *(float *)(iVar29 + -4 + iVar26 * 4) - *(float *)(iVar29 + -4 + iVar21 * 4);
              local_5c = (double)fVar14;
              fVar31 = (float10)*(float *)(local_e0 + -4 + iVar21 * 4) +
                       (float10)*(float *)(local_e0 + -4 + iVar26 * 4);
              local_54 = (double)fVar13;
              fVar15 = *(float *)(local_e0 + -4 + iVar26 * 4) -
                       *(float *)(local_e0 + -4 + iVar21 * 4);
              local_4c = (double)fVar12;
              fVar4 = *(float *)(local_e0 + -4 + iVar25 * 4);
              local_44 = (double)fVar4;
              fVar5 = *(float *)(local_e0 + -4 + iVar25 * 4);
              local_3c = (double)fVar5;
              fVar6 = *(float *)(iVar29 + -4 + iVar25 * 4);
              local_34 = (double)fVar6;
              fVar7 = *(float *)(iVar29 + -4 + iVar25 * 4);
              local_2c = (double)fVar30;
              fVar8 = *(float *)(local_e0 + -4 + iVar25 * 4);
              *(float *)(iVar29 + -4 + iVar25 * 4) =
                   *(float *)(iVar29 + -4 + iVar25 * 4) + fVar17 + fVar16;
              fVar18 = (float)_DAT_5f764160;
              *(float *)(local_e0 + -4 + iVar25 * 4) = (float)((float10)fVar8 + fVar34 + fVar31);
              fVar7 = fVar7 + (float)local_ec * fVar17 + fVar18 * fVar16;
              fVar8 = (float)fVar30 * fVar12 + (float)local_f4 * fVar15;
              iVar25 = uVar20 + iVar21;
              fVar32 = (float10)_DAT_5f764168 * fVar31 + (float10)local_ec * fVar34 + (float10)fVar5
              ;
              fVar6 = fVar17 * (float)_DAT_5f764170 + fVar16 * (float)local_ec + fVar6;
              fVar33 = (float10)_DAT_5f764178;
              fVar35 = (float10)local_2c * (float10)fVar14 + (float10)local_f4 * (float10)fVar13;
              *(float *)(iVar29 + -4 + iVar26 * 4) = fVar7 - fVar8;
              *(float *)(iVar29 + -4 + iVar21 * 4) = fVar7 + fVar8;
              fVar5 = fVar15 * (float)fVar30 - fVar12 * (float)local_f4;
              *(float *)(local_e0 + -4 + iVar26 * 4) = (float)(fVar35 + fVar32);
              fVar33 = fVar34 * fVar33 + fVar31 * (float10)local_ec + (float10)fVar4;
              *(float *)(local_e0 + -4 + iVar21 * 4) = (float)(fVar32 - fVar35);
              fVar30 = (float10)local_2c;
              fVar34 = (float10)fVar13 * fVar30 - (float10)fVar14 * (float10)local_f4;
              *(float *)(iVar29 + -4 + local_64 * 4) = fVar6 - fVar5;
              *(float *)(iVar29 + -4 + local_148 * 4) = fVar6 + fVar5;
              *(float *)(local_e0 + -4 + local_64 * 4) = (float)(fVar34 + fVar33);
              *(float *)(local_e0 + -4 + local_148 * 4) = (float)(fVar33 - fVar34);
            } while (iVar25 < local_14c);
            iVar25 = iVar25 - local_14c;
          } while (iVar25 <= (int)uVar20);
        }
        else {
          local_e4 = uVar20;
          if (iVar26 != local_cc) {
            local_184 = iVar26;
            local_cc = iVar26;
            local_b4 = (double)((float10)local_bc / (float10)iVar26);
            fVar30 = (float10)fcos((float10)local_bc / (float10)iVar26);
            local_9c = (double)fVar30;
            fVar30 = (float10)fsin((float10)local_b4);
            if (0x17 < iVar26) {
              return 0;
            }
            local_10c = (double)CONCAT44(local_10c._4_4_,1);
            adStack_66c[iVar26] = _DAT_5f764190;
            (&dStack_724)[iVar26] = _DAT_5f764188;
            iVar25 = 1;
            do {
              fVar33 = (float10)(&dStack_724)[local_d4._0_4_] * (float10)local_9c +
                       (float10)adStack_66c[local_d4._0_4_] * fVar30;
              dVar9 = adStack_66c[local_d4._0_4_];
              (&dStack_724)[iVar25] = (double)fVar33;
              fVar34 = (float10)(&dStack_724)[local_d4._0_4_] * fVar30 -
                       (float10)dVar9 * (float10)local_9c;
              local_d4._0_4_ = local_d4._0_4_ + -1;
              (&dStack_724)[local_d4._0_4_] = (double)fVar33;
              adStack_66c[iVar25] = (double)fVar34;
              iVar25 = iVar25 + 1;
              adStack_66c[local_d4._0_4_] = (double)-fVar34;
            } while (iVar25 < local_d4._0_4_);
            iVar25 = local_10c._0_4_;
          }
          do {
            iVar26 = local_e0;
            uVar20 = local_e4;
            fVar4 = *(float *)(local_e0 + -4 + iVar25 * 4);
            fVar5 = *(float *)(iVar29 + -4 + iVar25 * 4);
            local_d4 = (double)fVar4;
            iVar28 = local_fc._0_4_ + iVar25;
            local_dc = (double)fVar5;
            iVar21 = local_e4 + iVar25;
            local_10c = (double)CONCAT44(local_10c._4_4_,iVar25);
            iVar25 = 1;
            local_ec._0_4_ = iVar28;
            do {
              iVar28 = iVar28 - local_e4;
              fVar6 = *(float *)(iVar29 + -4 + iVar28 * 4) + *(float *)(iVar29 + -4 + iVar21 * 4);
              fVar5 = fVar5 + fVar6;
              afStack_240[iVar25 + 1] = fVar6;
              fVar6 = *(float *)(local_e0 + -4 + iVar28 * 4) +
                      *(float *)(local_e0 + -4 + iVar21 * 4);
              fVar4 = fVar4 + fVar6;
              afStack_1e4[iVar25 + 1] = fVar6;
              afStack_240[iVar25 + 2] =
                   *(float *)(iVar29 + -4 + iVar21 * 4) - *(float *)(iVar29 + -4 + iVar28 * 4);
              iVar22 = iVar21 * 4;
              iVar21 = iVar21 + local_e4;
              afStack_1e4[iVar25 + 2] =
                   *(float *)(local_e0 + -4 + iVar22) - *(float *)(local_e0 + -4 + iVar28 * 4);
              iVar25 = iVar25 + 2;
            } while (iVar21 < iVar28);
            *(float *)(iVar29 + -4 + local_10c._0_4_ * 4) = fVar5;
            *(float *)(iVar26 + -4 + local_10c._0_4_ * 4) = fVar4;
            iVar25 = 1;
            iVar21 = local_ec._0_4_;
            iVar28 = local_10c._0_4_;
            do {
              fVar7 = (float)local_dc;
              iVar28 = iVar28 + uVar20;
              iVar21 = iVar21 - uVar20;
              fVar5 = (float)local_d4;
              iVar24 = 1;
              iVar22 = iVar25;
              fVar4 = _DAT_5f764198;
              fVar6 = _DAT_5f76419c;
              do {
                pdVar2 = adStack_66c + iVar22;
                pdVar3 = adStack_66c + iVar22;
                fVar7 = (float)(&dStack_724)[iVar22] * afStack_240[iVar24 + 1] + fVar7;
                fVar5 = (float)(&dStack_724)[iVar22] * afStack_1e4[iVar24 + 1] + fVar5;
                iVar22 = iVar22 + iVar25;
                fVar6 = (float)*pdVar3 * afStack_1e4[iVar24 + 2] + fVar6;
                fVar4 = (float)*pdVar2 * afStack_240[iVar24 + 2] + fVar4;
                iVar24 = iVar24 + 2;
                if (local_cc < iVar22) {
                  iVar22 = iVar22 - local_cc;
                }
              } while (iVar24 < local_cc);
              *(float *)(iVar29 + -4 + iVar28 * 4) = fVar7 - fVar6;
              *(float *)(iVar26 + -4 + iVar28 * 4) = fVar4 + fVar5;
              *(float *)(iVar29 + -4 + iVar21 * 4) = fVar7 + fVar6;
              *(float *)(iVar26 + -4 + iVar21 * 4) = fVar5 - fVar4;
              iVar22 = iVar25 + 1;
              iVar24 = local_cc - iVar25;
              iVar25 = iVar22;
            } while (iVar22 < iVar24);
            iVar25 = local_ec._0_4_;
          } while ((local_ec._0_4_ <= local_14c) ||
                  (iVar25 = local_ec._0_4_ - local_14c, local_ec._0_4_ - local_14c <= (int)uVar20));
        }
        if (local_c4 == local_c8) {
          goto LAB_5f70eaa5;
        }
        iVar25 = local_170 + 1;
        dVar9 = _DAT_5f764140 - local_15c;
        do {
          fVar30 = (float10)local_164;
          local_134 = dVar9;
          do {
            fVar31 = (float10)local_134;
            iVar25 = uVar20 + iVar25;
            fVar33 = fVar30;
            fVar34 = fVar31;
            do {
              do {
                fVar4 = *(float *)(iVar29 + -4 + iVar25 * 4);
                *(float *)(iVar29 + -4 + iVar25 * 4) =
                     (float)((float10)*(float *)(iVar29 + -4 + iVar25 * 4) * fVar34 -
                            (float10)*(float *)(local_e0 + -4 + iVar25 * 4) * fVar33);
                iVar26 = iVar25 + local_fc._0_4_;
                *(float *)(local_e0 + -4 + iVar25 * 4) =
                     (float)((float10)*(float *)(local_e0 + -4 + iVar25 * 4) * fVar34 +
                            (float10)fVar4 * fVar33);
                iVar25 = iVar26;
              } while (iVar26 <= local_16c);
              iVar25 = (iVar26 - local_16c) + uVar20;
              fVar32 = fVar30 * fVar34 + fVar31 * fVar33;
              fVar34 = fVar34 * fVar31 - fVar33 * fVar30;
              fVar33 = fVar32;
            } while (iVar25 <= local_fc._0_4_);
            local_12c = (double)fVar32;
            fVar33 = ((float10)local_164 * fVar31 - (float10)local_15c * fVar30) + fVar30;
            fVar31 = fVar31 - (fVar30 * (float10)local_164 + (float10)local_15c * fVar31);
            iVar25 = local_170 + (iVar25 - local_fc._0_4_);
            fVar34 = (float10)_DAT_5f764148 - (fVar31 * fVar31 + fVar33 * fVar33);
            fVar30 = fVar34 * fVar33;
            local_134 = (double)(fVar31 * fVar34);
          } while (iVar25 <= (int)uVar20);
          iVar25 = (iVar25 - uVar20) + local_170 + local_154;
        } while (iVar25 <= (int)(local_170 * 2));
      }
      uVar20 = (int)(uVar20 + ((uint)((int)uVar20 >> 1) >> 0x1e)) >> 2;
      do {
        local_104 = _DAT_5f764118;
        local_fc = _DAT_5f764120;
        do {
          do {
            local_68 = uVar20 + iVar25;
            iVar26 = uVar20 + local_68;
            fVar8 = *(float *)(iVar29 + -4 + iVar26 * 4) + *(float *)(iVar29 + -4 + iVar25 * 4);
            fVar7 = *(float *)(local_e0 + -4 + iVar26 * 4) + *(float *)(local_e0 + -4 + iVar25 * 4);
            fVar12 = *(float *)(local_e0 + -4 + iVar25 * 4) - *(float *)(local_e0 + -4 + iVar26 * 4)
            ;
            fVar13 = *(float *)(iVar29 + -4 + iVar25 * 4) - *(float *)(iVar29 + -4 + iVar26 * 4);
            local_148 = uVar20 + iVar26;
            fVar14 = *(float *)(local_e0 + -4 + local_68 * 4) -
                     *(float *)(local_e0 + -4 + local_148 * 4);
            fVar4 = *(float *)(iVar29 + -4 + local_68 * 4) + *(float *)(iVar29 + -4 + local_148 * 4)
            ;
            fVar6 = *(float *)(local_e0 + -4 + local_68 * 4) +
                    *(float *)(local_e0 + -4 + local_148 * 4);
            fVar15 = *(float *)(iVar29 + -4 + local_68 * 4) -
                     *(float *)(iVar29 + -4 + local_148 * 4);
            local_5c = (double)fVar12;
            fVar5 = fVar8 - fVar4;
            *(float *)(iVar29 + -4 + iVar25 * 4) = fVar4 + fVar8;
            fVar4 = fVar7 - fVar6;
            *(float *)(local_e0 + -4 + iVar25 * 4) = fVar6 + fVar7;
            if (in_stack_00000018 < 0) {
              local_124 = (double)(fVar14 + fVar13);
              local_114 = (double)(fVar13 - fVar14);
              local_10c = (double)(fVar12 + fVar15);
              local_11c = (double)(fVar12 - fVar15);
            }
            else {
              local_124 = (double)(fVar13 - fVar14);
              local_11c = (double)(fVar12 + fVar15);
              local_10c = (double)(fVar12 - fVar15);
              local_114 = (double)(fVar13 + fVar14);
            }
            if (local_fc == _DAT_5f764128) {
              *(float *)(iVar29 + -4 + local_68 * 4) = (float)local_124;
              *(float *)(iVar29 + -4 + iVar26 * 4) = fVar5;
              *(float *)(iVar29 + -4 + local_148 * 4) = (float)local_114;
              *(float *)(local_e0 + -4 + local_68 * 4) = (float)local_11c;
              *(float *)(local_e0 + -4 + iVar26 * 4) = fVar4;
              *(float *)(local_e0 + -4 + local_148 * 4) = (float)local_10c;
            }
            else {
              *(float *)(iVar29 + -4 + local_68 * 4) =
                   (float)((float10)local_104 * (float10)local_124 -
                          (float10)local_fc * (float10)local_11c);
              *(float *)(iVar29 + -4 + iVar26 * 4) =
                   (float)local_134 * fVar5 - (float)local_12c * fVar4;
              *(float *)(iVar29 + -4 + local_148 * 4) =
                   (float)((float10)local_144 * (float10)local_114 -
                          (float10)local_13c * (float10)local_10c);
              *(float *)(local_e0 + -4 + local_68 * 4) =
                   (float)((float10)local_124 * (float10)local_fc +
                          (float10)local_11c * (float10)local_104);
              *(float *)(local_e0 + -4 + iVar26 * 4) =
                   fVar4 * (float)local_134 + fVar5 * (float)local_12c;
              *(float *)(local_e0 + -4 + local_148 * 4) =
                   (float)((float10)local_114 * (float10)local_13c +
                          (float10)local_10c * (float10)local_144);
            }
            iVar25 = local_148 + uVar20;
          } while (iVar25 <= local_16c);
          dVar9 = (local_104 * local_164 - local_fc * local_15c) + local_fc;
          local_104 = local_104 - (local_fc * local_164 + local_15c * local_104);
          dVar19 = _DAT_5f764130 - (local_104 * local_104 + dVar9 * dVar9);
          local_104 = local_104 * dVar19;
          local_fc = dVar19 * dVar9;
          local_134 = local_104 * local_104 - local_fc * local_fc;
          local_12c = (local_104 + local_104) * local_fc;
          iVar25 = (iVar25 - local_16c) + local_170;
          local_144 = local_104 * local_134 - local_12c * local_fc;
          local_13c = local_104 * local_12c + local_134 * local_fc;
        } while (iVar25 <= (int)uVar20);
        iVar25 = (iVar25 - uVar20) + local_154;
      } while (iVar25 <= (int)local_170);
    } while (uVar20 != local_170);
LAB_5f70eaa5:
    auStack_584[1] = local_84;
    if ((int)local_74 != 0) {
      iVar25 = (int)local_74 * 2 + 1;
      if (local_6c < iVar25) {
        iVar25 = (int)local_74 * 2;
      }
      iVar26 = 1;
      auStack_584[iVar25 + 1] = local_170;
      do {
        iVar29 = iVar25;
        uVar20 = auStack_5b0[iVar26];
        auStack_584[iVar26 + 1] = (int)auStack_584[iVar26] / (int)uVar20;
        iVar26 = iVar26 + 1;
        auStack_584[iVar29] = uVar20 * auStack_584[iVar29 + 1];
        iVar25 = iVar29 + -1;
      } while (iVar26 < iVar29 + -1);
      local_148 = auStack_584[iVar29];
      iVar25 = auStack_584[2] + 1;
      iVar26 = local_170 + 1;
      if (in_stack_00000010 == local_7c) {
LAB_5f70eb6a:
        do {
          uVar10 = *(undefined4 *)(local_80 + -4 + iVar26 * 4);
          *(undefined4 *)(local_80 + -4 + iVar26 * 4) = *(undefined4 *)(local_80 + -4 + iVar25 * 4);
          *(undefined4 *)(local_80 + -4 + iVar25 * 4) = uVar10;
          uVar10 = *(undefined4 *)(local_e0 + -4 + iVar26 * 4);
          *(undefined4 *)(local_e0 + -4 + iVar26 * 4) = *(undefined4 *)(local_e0 + -4 + iVar25 * 4);
          *(undefined4 *)(local_e0 + -4 + iVar25 * 4) = uVar10;
          iVar25 = iVar25 + auStack_584[2];
          iVar26 = iVar26 + local_154;
        } while (iVar25 < (int)local_84);
        iVar29 = 1;
        do {
          do {
            iVar21 = iVar29 + 1;
            iVar25 = (iVar25 - auStack_584[iVar29]) + auStack_584[iVar29 + 2];
            iVar29 = iVar21;
          } while ((int)auStack_584[iVar21] < iVar25);
          iVar29 = 1;
          do {
            if (iVar26 < iVar25) {
              goto LAB_5f70eb6a;
            }
            iVar26 = iVar26 + local_154;
            iVar25 = iVar25 + auStack_584[2];
            if ((int)local_84 <= iVar25) break;
            if (iVar26 < iVar25) {
              goto LAB_5f70eb6a;
            }
            iVar25 = iVar25 + auStack_584[2];
            iVar26 = iVar26 + local_154;
          } while (iVar25 < (int)local_84);
        } while (iVar26 < (int)local_84);
        dVar9 = local_9c;
      }
      else {
        iVar29 = local_84 - local_170;
        local_a4 = (double)CONCAT44(local_a4._4_4_,auStack_584[2]);
        local_94 = (double)CONCAT44(local_94._4_4_,iVar29);
        dVar9 = local_9c;
LAB_5f70ebd7:
        do {
          do {
            local_9c = dVar9;
            local_8c = local_170 + iVar26;
            local_9c = (double)CONCAT44(local_9c._4_4_,1);
            dVar9 = local_9c;
            do {
              uVar10 = *(undefined4 *)(local_80 + -4 + iVar26 * 4);
              *(undefined4 *)(local_80 + -4 + iVar26 * 4) =
                   *(undefined4 *)(local_80 + -4 + iVar25 * 4);
              *(undefined4 *)(local_80 + -4 + iVar25 * 4) = uVar10;
              uVar10 = *(undefined4 *)(local_e0 + -4 + iVar26 * 4);
              *(undefined4 *)(local_e0 + -4 + iVar26 * 4) =
                   *(undefined4 *)(local_e0 + -4 + iVar25 * 4);
              *(undefined4 *)(local_e0 + -4 + iVar25 * 4) = uVar10;
              iVar26 = iVar26 + local_154;
              iVar25 = iVar25 + local_154;
            } while (iVar26 < local_8c);
            iVar25 = iVar25 + iVar29;
            iVar26 = iVar26 + iVar29;
            local_9c._0_4_ = 1;
          } while (iVar26 < local_16c);
          iVar26 = (iVar26 - local_16c) + local_170;
          iVar25 = (iVar25 - local_16c) + local_a4._0_4_;
        } while (iVar25 < (int)local_84);
        do {
          do {
            iVar21 = local_9c._0_4_ + 1;
            iVar25 = (iVar25 - auStack_584[local_9c._0_4_]) + auStack_584[local_9c._0_4_ + 2];
            local_9c._0_4_ = iVar21;
          } while ((int)auStack_584[iVar21] < iVar25);
          local_9c._0_4_ = 1;
          do {
            if (iVar26 < iVar25) {
              goto LAB_5f70ebd7;
            }
            iVar25 = iVar25 + local_a4._0_4_;
            iVar26 = iVar26 + local_170;
          } while (iVar25 < (int)local_84);
        } while (iVar26 < (int)local_84);
      }
      local_9c = dVar9;
      local_170 = local_148;
    }
    iVar25 = (int)local_74;
    if (local_6c <= (int)local_74 * 2 + 1) {
      return 1;
    }
    iVar26 = local_6c - (int)local_74;
    local_c4 = (undefined1 *)auStack_584[(int)local_74 + 1];
    auStack_5b0[iVar26 + 1] = 1;
    iVar26 = (int)&local_71c + iVar26 * 4;
    do {
      *(int *)(iVar26 + 0x16c) = *(int *)(iVar26 + 0x16c) * *(int *)(iVar26 + 0x170);
      iVar26 = iVar26 + -4;
    } while (iVar26 != (int)&local_71c + iVar25 * 4);
    uVar20 = auStack_5b0[(int)local_74 + 1];
    if ((int)(uVar20 - 1) < 0xd2) {
      uVar27 = 0;
      iVar25 = 0;
      local_84 = uVar20 - 1;
      while( true ) {
        iVar25 = iVar25 + 1;
        if ((int)local_84 < iVar25) break;
        uVar27 = uVar27 + auStack_5b0[(int)local_74 + 2];
        if ((int)uVar20 <= (int)uVar27) {
          iVar26 = (int)&local_71c + ((int)local_74 + 1) * 4 + 4;
          uVar23 = auStack_5b0[(int)local_74 + 2];
          do {
            puVar1 = (uint *)(iVar26 + 0x170);
            iVar26 = iVar26 + 4;
            uVar27 = (uVar27 - uVar20) + *puVar1;
            bVar11 = (int)uVar23 <= (int)uVar27;
            uVar20 = uVar23;
            uVar23 = *puVar1;
          } while (bVar11);
        }
        auStack_584[iVar25] = uVar27;
        uVar20 = auStack_5b0[(int)local_74 + 1];
      }
      uVar27 = 0;
      uVar20 = local_148;
      do {
        while( true ) {
          do {
            uVar27 = uVar27 + 1;
            uVar23 = auStack_584[uVar27];
          } while ((int)uVar23 < 0);
          if (uVar23 == uVar27) break;
          do {
            uVar20 = auStack_584[uVar23];
            auStack_584[uVar23] = -uVar20;
            uVar23 = uVar20;
          } while (uVar20 != uVar27);
        }
        auStack_584[uVar27] = -uVar27;
        local_148 = uVar20;
      } while (uVar27 != local_84);
      while( true ) {
        local_16c = local_16c - (int)local_c4;
        local_8c = local_148 + 1;
        local_a4 = (double)CONCAT44(local_a4._4_4_,local_16c - local_154);
        if (local_16c < 0) break;
        local_ac = (double)CONCAT44(local_ac._4_4_,local_154 * 0x17);
        do {
          do {
            local_8c = local_8c + -1;
            local_9c = (double)CONCAT44(local_9c._4_4_,local_8c * 2);
          } while ((int)auStack_584[local_8c] < 0);
          local_b4 = (double)CONCAT44(local_b4._4_4_,auStack_584[local_8c]);
          uVar20 = local_170;
          while( true ) {
            local_84 = uVar20;
            if ((int)local_ac._0_4_ < (int)uVar20) {
              local_84 = local_ac._0_4_;
            }
            local_94 = (double)CONCAT44(local_94._4_4_,local_b4._0_4_);
            iVar25 = local_170 * local_b4._0_4_ + (uVar20 - local_84) + 1 + local_a4._0_4_;
            iVar26 = local_84 + iVar25;
            iVar29 = 0;
            local_bc._0_4_ = uVar20 - local_84;
            do {
              iVar29 = iVar29 + 1;
              afStack_240[iVar29] = *(float *)(local_80 + -4 + iVar26 * 4);
              iVar21 = iVar26 * 4;
              iVar26 = iVar26 - local_154;
              afStack_1e4[iVar29] = *(float *)(local_e0 + -4 + iVar21);
            } while (iVar26 != iVar25);
            iVar26 = (int)local_94;
            do {
              local_68 = auStack_584[iVar26];
              iVar29 = local_84 + iVar25;
              iVar21 = iVar29 - (iVar26 + local_68) * local_170;
              iVar26 = -local_68;
              local_94 = (double)CONCAT44(local_94._4_4_,iVar26);
              do {
                *(undefined4 *)(local_80 + -4 + iVar29 * 4) =
                     *(undefined4 *)(local_80 + -4 + iVar21 * 4);
                iVar28 = iVar21 * 4;
                iVar21 = iVar21 - local_154;
                *(undefined4 *)(local_e0 + -4 + iVar29 * 4) =
                     *(undefined4 *)(local_e0 + -4 + iVar28);
                iVar29 = iVar29 - local_154;
              } while (iVar29 != iVar25);
              iVar25 = iVar21;
            } while (iVar26 != local_8c);
            iVar25 = iVar21 + local_84;
            iVar26 = 0;
            do {
              iVar29 = iVar26 + 1;
              iVar26 = iVar26 + 1;
              *(float *)(local_80 + -4 + iVar25 * 4) = afStack_240[iVar29];
              *(float *)(local_e0 + -4 + iVar25 * 4) = afStack_1e4[iVar26];
              iVar25 = iVar25 - local_154;
            } while (iVar25 != iVar21);
            local_80 = local_80;
            if (local_bc._0_4_ == 0) break;
            local_b4 = (double)CONCAT44(local_b4._4_4_,
                                        *(undefined4 *)((int)auStack_584 + local_9c._0_4_ * 2));
            uVar20 = local_bc._0_4_;
          }
        } while (local_8c != 1);
      }
      return 1;
    }
  }
  return 0;
}


