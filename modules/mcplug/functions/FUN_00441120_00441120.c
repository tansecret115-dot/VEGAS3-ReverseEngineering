/* Module: mcplug.dll
   Function: FUN_00441120
   Address: 00441120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441120(undefined2 *param_1,double *param_2,uint param_3,float param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  undefined2 *puVar10;
  float10 fVar11;
  float10 extraout_ST0;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint local_c;
  undefined2 *local_8;
  
  uVar7 = param_3;
  fVar11 = (float10)param_4 * (float10)_DAT_0047f8a8;
  local_8 = param_1;
  if (((uint)param_2 & 7) == 0) {
    uVar6 = (uint)(((uint)param_2 & 0xf) != 0);
    if ((int)uVar6 < (int)param_3) {
      uVar7 = (int)(param_3 - uVar6) / 2;
      param_4 = (float)((param_3 + uVar7 * -2) - uVar6);
      param_3 = uVar7;
    }
    else {
      param_4 = 0.0;
      param_3 = 0;
      uVar6 = uVar7;
    }
    puVar10 = param_1;
    local_c = uVar6;
    if (0 < (int)uVar6) {
      do {
        iVar5 = ftol();
        if (iVar5 < -0x800000) {
          iVar5 = -0x800000;
        }
        else if (0x7fffff < iVar5) {
          iVar5 = 0x7fffff;
        }
        *(char *)(puVar10 + 1) = (char)((uint)iVar5 >> 0x10);
        *puVar10 = (short)iVar5;
        local_c = local_c - 1;
        puVar10 = (undefined2 *)((int)puVar10 + 3);
        fVar11 = extraout_ST0;
      } while (local_c != 0);
    }
    local_8 = (undefined2 *)((int)param_1 + uVar6 * 3);
    pdVar9 = param_2 + uVar6;
    uVar7 = param_3;
    if (param_3 != 0) {
      dVar1 = (double)fVar11;
      dVar2 = (double)fVar11;
      auVar17._12_4_ = 0xc1600000;
      auVar17._0_12_ = ZEXT812(0xc160000000000000);
      auVar13._8_4_ = 0xc0000000;
      auVar13._0_8_ = 0x415fffffc0000000;
      auVar13._12_4_ = 0x415fffff;
      uVar8 = param_3 & 3;
      puVar10 = local_8;
      for (uVar6 = param_3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        auVar19._0_8_ = *pdVar9 * dVar1;
        auVar19._8_8_ = pdVar9[1] * dVar2;
        auVar22._0_8_ = pdVar9[2] * dVar1;
        auVar22._8_8_ = pdVar9[3] * dVar2;
        auVar20._0_8_ = pdVar9[4] * dVar1;
        auVar20._8_8_ = pdVar9[5] * dVar2;
        auVar23._0_8_ = pdVar9[6] * dVar1;
        auVar23._8_8_ = pdVar9[7] * dVar2;
        auVar19 = maxpd(auVar19,auVar17);
        auVar22 = maxpd(auVar22,auVar17);
        auVar20 = maxpd(auVar20,auVar17);
        auVar23 = maxpd(auVar23,auVar17);
        auVar19 = minpd(auVar19,auVar13);
        auVar22 = minpd(auVar22,auVar13);
        auVar20 = minpd(auVar20,auVar13);
        auVar23 = minpd(auVar23,auVar13);
        *puVar10 = (short)(int)auVar19._0_8_;
        *(char *)(puVar10 + 1) = (char)((uint)(int)auVar19._0_8_ >> 0x10);
        *(short *)((int)puVar10 + 3) = (short)(int)auVar19._8_8_;
        *(char *)((int)puVar10 + 5) = (char)((uint)(int)auVar19._8_8_ >> 0x10);
        puVar10[3] = (short)(int)auVar22._0_8_;
        *(char *)(puVar10 + 4) = (char)((uint)(int)auVar22._0_8_ >> 0x10);
        *(short *)((int)puVar10 + 9) = (short)(int)auVar22._8_8_;
        *(char *)((int)puVar10 + 0xb) = (char)((uint)(int)auVar22._8_8_ >> 0x10);
        puVar10[6] = (short)(int)auVar20._0_8_;
        *(char *)(puVar10 + 7) = (char)((uint)(int)auVar20._0_8_ >> 0x10);
        *(short *)((int)puVar10 + 0xf) = (short)(int)auVar20._8_8_;
        *(char *)((int)puVar10 + 0x11) = (char)((uint)(int)auVar20._8_8_ >> 0x10);
        puVar10[9] = (short)(int)auVar23._0_8_;
        *(char *)(puVar10 + 10) = (char)((uint)(int)auVar23._0_8_ >> 0x10);
        *(short *)((int)puVar10 + 0x15) = (short)(int)auVar23._8_8_;
        *(char *)((int)puVar10 + 0x17) = (char)((uint)(int)auVar23._8_8_ >> 0x10);
        puVar10 = puVar10 + 0xc;
        pdVar9 = pdVar9 + 8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        auVar15._0_8_ = *pdVar9 * dVar1;
        auVar15._8_8_ = pdVar9[1] * dVar2;
        auVar19 = maxpd(auVar15,auVar17);
        auVar19 = minpd(auVar19,auVar13);
        *puVar10 = (short)(int)auVar19._0_8_;
        *(char *)(puVar10 + 1) = (char)((uint)(int)auVar19._0_8_ >> 0x10);
        *(short *)((int)puVar10 + 3) = (short)(int)auVar19._8_8_;
        *(char *)((int)puVar10 + 5) = (char)((uint)(int)auVar19._8_8_ >> 0x10);
        puVar10 = puVar10 + 3;
        pdVar9 = pdVar9 + 2;
      }
    }
  }
  else {
    uVar7 = (int)param_3 / 2;
    param_4 = (float)((int)param_3 % 2);
    if (uVar7 != 0) {
      dVar1 = (double)fVar11;
      dVar2 = (double)fVar11;
      auVar3._12_4_ = 0xc1600000;
      auVar3._0_12_ = ZEXT812(0xc160000000000000);
      auVar4._8_4_ = 0xc0000000;
      auVar4._0_8_ = 0x415fffffc0000000;
      auVar4._12_4_ = 0x415fffff;
      uVar8 = uVar7 & 3;
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        auVar12._0_8_ = *param_2 * dVar1;
        auVar12._8_8_ = param_2[1] * dVar2;
        auVar16._0_8_ = param_2[2] * dVar1;
        auVar16._8_8_ = param_2[3] * dVar2;
        auVar18._0_8_ = param_2[4] * dVar1;
        auVar18._8_8_ = param_2[5] * dVar2;
        auVar21._0_8_ = param_2[6] * dVar1;
        auVar21._8_8_ = param_2[7] * dVar2;
        auVar13 = maxpd(auVar12,auVar3);
        auVar17 = maxpd(auVar16,auVar3);
        auVar19 = maxpd(auVar18,auVar3);
        auVar22 = maxpd(auVar21,auVar3);
        auVar13 = minpd(auVar13,auVar4);
        auVar17 = minpd(auVar17,auVar4);
        auVar19 = minpd(auVar19,auVar4);
        auVar22 = minpd(auVar22,auVar4);
        *param_1 = (short)(int)auVar13._0_8_;
        *(char *)(param_1 + 1) = (char)((uint)(int)auVar13._0_8_ >> 0x10);
        *(short *)((int)param_1 + 3) = (short)(int)auVar13._8_8_;
        *(char *)((int)param_1 + 5) = (char)((uint)(int)auVar13._8_8_ >> 0x10);
        param_1[3] = (short)(int)auVar17._0_8_;
        *(char *)(param_1 + 4) = (char)((uint)(int)auVar17._0_8_ >> 0x10);
        *(short *)((int)param_1 + 9) = (short)(int)auVar17._8_8_;
        *(char *)((int)param_1 + 0xb) = (char)((uint)(int)auVar17._8_8_ >> 0x10);
        param_1[6] = (short)(int)auVar19._0_8_;
        *(char *)(param_1 + 7) = (char)((uint)(int)auVar19._0_8_ >> 0x10);
        *(short *)((int)param_1 + 0xf) = (short)(int)auVar19._8_8_;
        *(char *)((int)param_1 + 0x11) = (char)((uint)(int)auVar19._8_8_ >> 0x10);
        param_1[9] = (short)(int)auVar22._0_8_;
        *(char *)(param_1 + 10) = (char)((uint)(int)auVar22._0_8_ >> 0x10);
        *(short *)((int)param_1 + 0x15) = (short)(int)auVar22._8_8_;
        *(char *)((int)param_1 + 0x17) = (char)((uint)(int)auVar22._8_8_ >> 0x10);
        param_1 = param_1 + 0xc;
        param_2 = param_2 + 8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        auVar14._0_8_ = *param_2 * dVar1;
        auVar14._8_8_ = param_2[1] * dVar2;
        auVar13 = maxpd(auVar14,auVar3);
        auVar13 = minpd(auVar13,auVar4);
        *param_1 = (short)(int)auVar13._0_8_;
        *(char *)(param_1 + 1) = (char)((uint)(int)auVar13._0_8_ >> 0x10);
        *(short *)((int)param_1 + 3) = (short)(int)auVar13._8_8_;
        *(char *)((int)param_1 + 5) = (char)((uint)(int)auVar13._8_8_ >> 0x10);
        param_1 = param_1 + 3;
        param_2 = param_2 + 2;
      }
    }
  }
  local_8 = local_8 + uVar7 * 3;
  if (0 < (int)param_4) {
    do {
      iVar5 = ftol();
      if (iVar5 < -0x800000) {
        iVar5 = -0x800000;
      }
      else if (0x7fffff < iVar5) {
        iVar5 = 0x7fffff;
      }
      *(char *)(local_8 + 1) = (char)((uint)iVar5 >> 0x10);
      *local_8 = (short)iVar5;
      local_8 = (undefined2 *)((int)local_8 + 3);
      param_4 = (float)((int)param_4 + -1);
    } while (param_4 != 0.0);
  }
  return;
}


