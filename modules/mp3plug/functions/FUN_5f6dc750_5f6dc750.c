/* Module: mp3plug.dll
   Function: FUN_5f6dc750
   Address: 5f6dc750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5f6dc750(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double *in_EAX;
  float *pfVar6;
  float *pfVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  float10 in_ST0;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int *in_stack_00000024;
  uint *in_stack_00000028;
  double local_20c [10];
  uint local_1bc;
  undefined8 local_1a4;
  uint local_194;
  uint uStack_190;
  uint uStack_180;
  uint local_174;
  uint uStack_170;
  uint uStack_160;
  uint local_154;
  uint uStack_150;
  undefined8 local_144;
  undefined8 local_134;
  undefined8 local_124;
  undefined8 local_114;
  undefined8 local_104;
  int local_f8;
  int local_f4;
  double local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  uint local_c4;
  int local_c0;
  int local_bc;
  int *local_b8;
  uint local_b4;
  uint *local_b0;
  int local_ac;
  double *local_a8;
  double local_a4;
  double local_9c;
  uint local_94;
  double local_6c;
  int local_54;
  uint local_4c;
  uint local_44;
  uint local_3c;
  uint local_34;
  uint local_30;
  
  local_bc = param_1;
  if (in_ST0 <= (float10)_DAT_5f75cef8) {
    return 4;
  }
  fVar3 = (float10)_DAT_5f75cf00;
  local_94 = in_stack_00000018;
  local_c0 = *(int *)(in_EAX + 3) * 4 * in_stack_00000018 + param_2;
  *in_stack_00000028 = 0;
  local_b0 = in_stack_00000028;
  *in_stack_00000024 = 0;
  local_a4 = (double)(fVar3 / in_ST0);
  local_b8 = in_stack_00000024;
  local_b4 = in_stack_00000020;
  local_c4 = in_stack_0000001c;
  if (in_stack_00000018 == 1) {
    iVar15 = *in_stack_00000024;
    if ((uint)(*(int *)((int)in_EAX + 0x14) + iVar15) <= in_stack_0000001c) {
      do {
        if (in_stack_00000020 <= *in_stack_00000028) {
          return 0;
        }
        FUN_5f6f45e0(in_EAX,(float *)(local_c0 + iVar15 * 4),
                     (float *)(local_bc + *in_stack_00000028 * 4));
        *in_stack_00000028 = *in_stack_00000028 + 1;
        dVar1 = _DAT_5f75cf08;
        local_6c = *in_EAX + local_a4;
        *in_EAX = local_6c;
        if (dVar1 <= local_6c) {
          local_1a4._4_4_ = (uint)((ulonglong)local_6c >> 0x20);
          local_1a4._0_4_ = SUB84(local_6c,0);
          uVar14 = local_1a4._4_4_ >> 0x14 & 0x7ff;
          if (uVar14 < 0x3ff) {
            local_1bc = 0;
          }
          else {
            local_1bc = (local_1a4._4_4_ << 0xb | (uint)local_1a4 >> 0x15 | 0x80000000) >>
                        (0x1eU - (char)uVar14 & 0x1f);
            if ((longlong)local_6c < 0) {
              local_1bc = -local_1bc;
            }
          }
          *in_stack_00000024 = *in_stack_00000024 + local_94 * local_1bc;
          *in_EAX = *in_EAX - (double)(int)local_1bc;
          local_1a4 = local_6c;
        }
        iVar15 = *in_stack_00000024;
      } while (local_94 * *(int *)((int)in_EAX + 0x14) + iVar15 <= local_c4);
    }
  }
  else if (in_stack_00000018 == 2) {
    iVar15 = *in_stack_00000024;
    uVar14 = *(int *)((int)in_EAX + 0x14) * 2 + iVar15;
    while ((uVar14 <= in_stack_0000001c && (uVar14 = *in_stack_00000028, uVar14 < in_stack_00000020)
           )) {
      dVar1 = *in_EAX;
      dVar4 = _DAT_5f75cf20 * in_EAX[1] * dVar1;
      dVar2 = in_EAX[1];
      pfVar7 = (float *)(local_c0 + iVar15 * 4);
      uStack_190 = (uint)((ulonglong)dVar4 >> 0x20);
      iVar15 = *(int *)(in_EAX + 2);
      iVar16 = *(int *)((int)in_EAX + 0x2c);
      fVar18 = (float10)_DAT_5f75cf10;
      uVar11 = uStack_190 >> 0x14 & 0x7ff;
      local_194 = SUB84(dVar4,0);
      fVar19 = (float10)_DAT_5f75cf18;
      if (uVar11 < 0x3ff) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uStack_190 << 0xb | local_194 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar11 & 0x1f);
        if ((longlong)dVar4 < 0) {
          uVar11 = -uVar11;
        }
      }
      dVar4 = in_EAX[4] - dVar1;
      uVar12 = uVar11 >> 9;
      uStack_180 = (uint)((ulonglong)dVar4 >> 0x20);
      uVar17 = uStack_180 >> 0x14 & 0x7ff;
      if (uVar17 < 0x3ff) {
        uVar17 = 0;
      }
      else {
        uVar17 = (uStack_180 << 0xb | SUB84(dVar4,0) >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar17 & 0x1f);
        if ((longlong)dVar4 < 0) {
          uVar17 = -uVar17;
        }
      }
      iVar13 = 0;
      if (0 < (int)uVar17) {
        fVar20 = (float10)dVar2;
        fVar21 = (float10)(in_EAX[1] * dVar1);
        pfVar6 = pfVar7;
        if (0 < (int)(uVar17 & 0xfffffffe)) {
          do {
            iVar13 = iVar13 + 2;
            fVar22 = (float10)*(float *)(iVar16 + 4 + uVar12 * 8) * fVar21 +
                     (float10)*(float *)(iVar16 + uVar12 * 8);
            uVar12 = uVar11 + iVar15 >> 9;
            uVar11 = uVar11 + iVar15 + iVar15;
            fVar23 = (float10)*(float *)(iVar16 + 4 + uVar12 * 8) * (fVar21 + fVar20) +
                     (float10)*(float *)(iVar16 + uVar12 * 8);
            uVar12 = uVar11 >> 9;
            fVar19 = (float10)pfVar6[-2] * fVar23 + (float10)*pfVar6 * fVar22 + fVar19;
            fVar21 = (float10)(double)(fVar21 + fVar20 + fVar20);
            fVar18 = fVar23 * (float10)pfVar6[-1] + fVar22 * (float10)pfVar6[1] + fVar18;
            pfVar6 = pfVar6 + -4;
          } while (iVar13 < (int)(uVar17 & 0xfffffffe));
        }
        if (iVar13 < (int)uVar17) {
          while( true ) {
            fVar22 = (float10)*(float *)(iVar16 + 4 + uVar12 * 8) * fVar21 +
                     (float10)*(float *)(iVar16 + uVar12 * 8);
            fVar19 = (float10)*pfVar6 * fVar22 + fVar19;
            fVar18 = fVar22 * (float10)pfVar6[1] + fVar18;
            uVar11 = uVar11 + iVar15;
            iVar13 = iVar13 + 1;
            uVar12 = uVar11 >> 9;
            pfVar6 = pfVar6 + -2;
            if ((int)uVar17 <= iVar13) break;
            fVar21 = fVar21 + fVar20;
          }
        }
      }
      dVar4 = (_DAT_5f75cf28 - dVar1) * dVar2;
      dVar5 = _DAT_5f75cf30 * dVar4;
      uStack_170 = (uint)((ulonglong)dVar5 >> 0x20);
      local_174 = SUB84(dVar5,0);
      uVar11 = uStack_170 >> 0x14 & 0x7ff;
      if (uVar11 < 0x3ff) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uStack_170 << 0xb | local_174 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar11 & 0x1f);
        if ((longlong)dVar5 < 0) {
          uVar11 = -uVar11;
        }
      }
      pfVar7 = pfVar7 + 2;
      dVar1 = in_EAX[4] + dVar1;
      uVar12 = uVar11 >> 9;
      uStack_160 = (uint)((ulonglong)dVar1 >> 0x20);
      uVar17 = uStack_160 >> 0x14 & 0x7ff;
      if (uVar17 < 0x3ff) {
        uVar17 = 0;
      }
      else {
        uVar17 = (uStack_160 << 0xb | SUB84(dVar1,0) >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar17 & 0x1f);
        if ((longlong)dVar1 < 0) {
          uVar17 = -uVar17;
        }
      }
      uVar17 = uVar17 - 1;
      iVar13 = 0;
      if (0 < (int)uVar17) {
        fVar20 = (float10)dVar2;
        fVar21 = (float10)dVar4;
        if (0 < (int)(uVar17 & 0xfffffffe)) {
          while( true ) {
            iVar13 = iVar13 + 2;
            fVar22 = (float10)*(float *)(iVar16 + 4 + uVar12 * 8) * fVar21 +
                     (float10)*(float *)(iVar16 + uVar12 * 8);
            fVar21 = fVar21 + fVar20;
            uVar12 = uVar11 + iVar15 >> 9;
            fVar23 = (float10)*(float *)(iVar16 + 4 + uVar12 * 8) * fVar21 +
                     (float10)*(float *)(iVar16 + uVar12 * 8);
            uVar11 = uVar11 + iVar15 + iVar15;
            fVar19 = (float10)pfVar7[2] * fVar23 + (float10)*pfVar7 * fVar22 + fVar19;
            fVar18 = (float10)pfVar7[3] * fVar23 + fVar22 * (float10)pfVar7[1] + fVar18;
            pfVar7 = pfVar7 + 4;
            uVar12 = uVar11 >> 9;
            if ((int)(uVar17 & 0xfffffffe) <= iVar13) break;
            fVar21 = fVar21 + fVar20;
          }
          fVar21 = fVar21 + fVar20;
        }
        if (iVar13 < (int)uVar17) {
          while( true ) {
            fVar22 = (float10)*(float *)(iVar16 + 4 + uVar12 * 8) * fVar21 +
                     (float10)*(float *)(iVar16 + uVar12 * 8);
            fVar19 = (float10)*pfVar7 * fVar22 + fVar19;
            fVar18 = fVar22 * (float10)pfVar7[1] + fVar18;
            uVar11 = uVar11 + iVar15;
            iVar13 = iVar13 + 1;
            uVar12 = uVar11 >> 9;
            pfVar7 = pfVar7 + 2;
            if ((int)uVar17 <= iVar13) break;
            fVar21 = fVar21 + fVar20;
          }
        }
      }
      *(float *)(param_1 + 4 + uVar14 * 4) = (float)fVar18;
      *(float *)(param_1 + uVar14 * 4) = (float)fVar19;
      *in_stack_00000028 = *in_stack_00000028 + 2;
      dVar2 = _DAT_5f75cf38;
      dVar1 = (double)(fVar3 / in_ST0) + *in_EAX;
      *in_EAX = dVar1;
      if (dVar2 <= dVar1) {
        uStack_150 = (uint)((ulonglong)dVar1 >> 0x20);
        local_154 = SUB84(dVar1,0);
        uVar14 = uStack_150 >> 0x14 & 0x7ff;
        if (uVar14 < 0x3ff) {
          uVar14 = 0;
        }
        else {
          uVar14 = (uStack_150 << 0xb | local_154 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar14 & 0x1f);
          if ((longlong)dVar1 < 0) {
            uVar14 = -uVar14;
          }
        }
        *in_stack_00000024 = *in_stack_00000024 + uVar14 * 2;
        *in_EAX = *in_EAX - (double)(int)uVar14;
      }
      iVar15 = *in_stack_00000024;
      uVar14 = *(int *)((int)in_EAX + 0x14) * 2 + iVar15;
    }
  }
  else {
    iVar15 = *in_stack_00000024;
    local_a8 = in_EAX;
    if (in_stack_00000018 * *(int *)((int)in_EAX + 0x14) + iVar15 <= in_stack_0000001c) {
      do {
        if (local_b4 <= *local_b0) {
          return 0;
        }
        local_ec = local_a8[1];
        local_f8 = local_c0 + iVar15 * 4;
        local_ac = local_bc + *local_b0 * 4;
        local_9c = (double)CONCAT44(local_9c._4_4_,*(undefined4 *)((int)local_a8 + 0x2c));
        local_f4 = *(int *)(local_a8 + 2);
        if (0 < (int)in_stack_00000018) {
          local_54 = (int)local_20c +
                     (((int)(local_20c + (in_stack_00000018 - 2)) - (int)&stack0xfffffde4 &
                      0xfffffff0U) - 0x10);
          puVar9 = &stack0xfffffde4;
          puVar8 = &stack0xfffffde4;
          if ((int)&stack0xfffffde4 < local_54) {
            do {
              *(undefined8 *)(puVar8 + 0x10) = _DAT_5f75cf40;
              *(undefined8 *)(puVar8 + 0x18) = _DAT_5f75cf40;
              puVar9 = puVar8 + 0x10;
              puVar8 = puVar9;
            } while ((int)puVar9 < local_54);
          }
          for (; (int)puVar9 < (int)(local_20c + (in_stack_00000018 - 2)); puVar9 = puVar9 + 8) {
            *(undefined8 *)(puVar9 + 0x10) = _DAT_5f75cf40;
          }
        }
        dVar2 = _DAT_5f75cf48 * local_ec * *local_a8;
        local_d4 = local_ec * *local_a8;
        local_144 = dVar2;
        local_144._0_4_ = SUB84(dVar2,0);
        dVar1 = *local_a8;
        local_144._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar14 = local_144._4_4_ >> 0x14 & 0x7ff;
        if (uVar14 < 0x3ff) {
          uVar14 = 0;
        }
        else {
          uVar14 = (local_144._4_4_ << 0xb | (uint)local_144 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar14 & 0x1f);
          if ((longlong)dVar2 < 0) {
            uVar14 = -uVar14;
          }
        }
        dVar2 = local_a8[4];
        dVar4 = dVar2 - dVar1;
        local_134 = dVar4;
        local_134._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
        local_134._0_4_ = SUB84(dVar4,0);
        local_cc = (double)CONCAT44(local_cc._4_4_,(uint)local_134);
        uVar11 = local_134._4_4_ >> 0x14 & 0x7ff;
        if (uVar11 < 0x3ff) {
          local_e4 = (double)((ulonglong)local_e4._4_4_ << 0x20);
        }
        else {
          local_34 = uVar14;
          local_30 = local_134._4_4_;
          uVar11 = (local_134._4_4_ << 0xb | (uint)local_134 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar11 & 0x1f);
          local_e4 = (double)CONCAT44(local_e4._4_4_,uVar11);
          if ((longlong)dVar4 < 0) {
            local_e4 = (double)CONCAT44(local_e4._4_4_,-uVar11);
          }
        }
        iVar15 = 0;
        local_1bc = (int)local_e4;
        local_dc = (double)CONCAT44(local_dc._4_4_,(int)local_e4);
        if (0 < (int)local_e4) {
          iVar16 = local_9c._0_4_;
          iVar13 = local_f8;
          do {
            dVar4 = local_d4 * (double)*(float *)(iVar16 + 4 + (uVar14 >> 9) * 8) +
                    (double)*(float *)(iVar16 + (uVar14 >> 9) * 8);
            iVar10 = 0;
            local_cc = dVar4;
            if (0 < (int)in_stack_00000018) {
              local_4c = in_stack_00000018 & 0xfffffffe;
              if (0 < (int)(in_stack_00000018 & 0xfffffffe)) {
                do {
                  local_20c[iVar10] =
                       (double)*(float *)(iVar13 + iVar10 * 4) * dVar4 + local_20c[iVar10];
                  local_20c[iVar10 + 1] =
                       (double)*(float *)(iVar13 + 4 + iVar10 * 4) * dVar4 + local_20c[iVar10 + 1];
                  iVar10 = iVar10 + 2;
                } while (iVar10 < (int)local_4c);
              }
              for (; iVar10 < (int)in_stack_00000018; iVar10 = iVar10 + 1) {
                local_20c[iVar10] =
                     (double)*(float *)(iVar13 + iVar10 * 4) * dVar4 + local_20c[iVar10];
              }
            }
            local_d4 = local_d4 + local_ec;
            uVar14 = uVar14 + local_f4;
            iVar15 = iVar15 + 1;
            iVar13 = iVar13 + in_stack_00000018 * -4;
          } while (iVar15 < (int)local_dc);
          local_9c = (double)CONCAT44(local_9c._4_4_,iVar16);
          dVar1 = *local_a8;
          dVar2 = local_a8[4];
        }
        local_e4 = (_DAT_5f75cf50 - dVar1) * local_ec;
        dVar4 = _DAT_5f75cf58 * local_e4;
        local_124 = dVar4;
        local_124._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
        local_124._0_4_ = SUB84(dVar4,0);
        uVar14 = local_124._4_4_ >> 0x14 & 0x7ff;
        if (uVar14 < 0x3ff) {
          uVar14 = 0;
        }
        else {
          uVar14 = (local_124._4_4_ << 0xb | (uint)local_124 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar14 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar14 = -uVar14;
          }
        }
        dVar2 = dVar2 + dVar1;
        iVar15 = local_f8 + in_stack_00000018 * 4;
        local_114 = dVar2;
        local_114._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        local_114._0_4_ = SUB84(dVar2,0);
        local_34 = (uint)local_114;
        uVar11 = local_114._4_4_ >> 0x14 & 0x7ff;
        local_cc = (double)CONCAT44(local_cc._4_4_,(uint)local_114);
        if (uVar11 < 0x3ff) {
          local_d4 = (double)((ulonglong)local_d4._4_4_ << 0x20);
        }
        else {
          local_34 = uVar14;
          local_30 = local_114._4_4_;
          uVar11 = (local_114._4_4_ << 0xb | (uint)local_114 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar11 & 0x1f);
          local_d4 = (double)CONCAT44(local_d4._4_4_,uVar11);
          if ((longlong)dVar2 < 0) {
            local_d4 = (double)CONCAT44(local_d4._4_4_,-uVar11);
          }
        }
        iVar16 = 0;
        local_1bc = (int)local_d4;
        local_f8 = (int)local_d4 + -1;
        if (0 < (int)local_d4 + -1) {
          do {
            dVar1 = local_e4 * (double)*(float *)(local_9c._0_4_ + 4 + (uVar14 >> 9) * 8) +
                    (double)*(float *)(local_9c._0_4_ + (uVar14 >> 9) * 8);
            iVar13 = 0;
            local_dc = dVar1;
            if (0 < (int)in_stack_00000018) {
              local_44 = in_stack_00000018 & 0xfffffffe;
              if (0 < (int)(in_stack_00000018 & 0xfffffffe)) {
                do {
                  local_20c[iVar13] =
                       (double)*(float *)(iVar15 + iVar13 * 4) * dVar1 + local_20c[iVar13];
                  local_20c[iVar13 + 1] =
                       (double)*(float *)(iVar15 + 4 + iVar13 * 4) * dVar1 + local_20c[iVar13 + 1];
                  iVar13 = iVar13 + 2;
                } while (iVar13 < (int)local_44);
              }
              for (; iVar13 < (int)in_stack_00000018; iVar13 = iVar13 + 1) {
                local_20c[iVar13] =
                     (double)*(float *)(iVar15 + iVar13 * 4) * dVar1 + local_20c[iVar13];
              }
            }
            iVar16 = iVar16 + 1;
            local_e4 = local_e4 + local_ec;
            uVar14 = uVar14 + local_f4;
            iVar15 = iVar15 + in_stack_00000018 * 4;
          } while (iVar16 < local_f8);
        }
        iVar15 = 0;
        if (0 < (int)in_stack_00000018) {
          local_3c = in_stack_00000018 & 0xfffffffe;
          if (0 < (int)local_3c) {
            do {
              *(float *)(local_ac + iVar15 * 4) = (float)local_20c[iVar15];
              *(float *)(local_ac + 4 + iVar15 * 4) = (float)local_20c[iVar15 + 1];
              iVar15 = iVar15 + 2;
            } while (iVar15 < (int)local_3c);
          }
          for (; iVar15 < (int)in_stack_00000018; iVar15 = iVar15 + 1) {
            *(float *)(local_ac + iVar15 * 4) = (float)local_20c[iVar15];
          }
        }
        *local_b0 = *local_b0 + in_stack_00000018;
        dVar1 = _DAT_5f75cf60;
        local_9c = *local_a8 + local_a4;
        *local_a8 = local_9c;
        if (dVar1 <= local_9c) {
          local_104 = local_9c;
          local_104._4_4_ = (uint)((ulonglong)local_9c >> 0x20);
          local_104._0_4_ = SUB84(local_9c,0);
          uVar14 = local_104._4_4_ >> 0x14 & 0x7ff;
          if (uVar14 < 0x3ff) {
            uVar14 = 0;
          }
          else {
            uVar14 = (local_104._4_4_ << 0xb | (uint)local_104 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar14 & 0x1f);
            if ((longlong)local_9c < 0) {
              uVar14 = -uVar14;
            }
          }
          *local_b8 = *local_b8 + uVar14 * in_stack_00000018;
          *local_a8 = *local_a8 - (double)(int)uVar14;
        }
        iVar15 = *local_b8;
      } while (in_stack_00000018 * *(int *)((int)local_a8 + 0x14) + iVar15 <= local_c4);
    }
  }
  return 0;
}


