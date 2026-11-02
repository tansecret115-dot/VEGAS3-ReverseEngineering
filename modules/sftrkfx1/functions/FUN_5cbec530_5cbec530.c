/* Module: sftrkfx1.dll
   Function: FUN_5cbec530
   Address: 5cbec530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbec530(undefined2 *param_1,uint param_2,int param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int local_c;
  uint local_8;
  
  uVar4 = param_2 >> 2 & 3;
  if (uVar4 == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)(4 - uVar4);
  }
  if ((int)fVar7 < param_3) {
    local_8 = (int)((param_3 - (int)fVar7) + (param_3 - (int)fVar7 >> 0x1f & 3U)) >> 2;
    local_c = (param_3 + local_8 * -4) - (int)fVar7;
  }
  else {
    local_c = 0;
    local_8 = 0;
    fVar7 = (float)param_3;
  }
  fVar3 = param_4 * _DAT_5cc0a740;
  puVar10 = param_1;
  param_4 = fVar7;
  if (0 < (int)fVar7) {
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
      param_4 = (float)((int)param_4 + -1);
      puVar10 = (undefined2 *)((int)puVar10 + 3);
    } while (param_4 != 0.0);
  }
  puVar10 = (undefined2 *)((int)param_1 + (int)fVar7 * 3);
  pfVar8 = (float *)(param_2 + (int)fVar7 * 4);
  if (local_8 != 0) {
    auVar1._8_4_ = 0xcb000000;
    auVar1._0_8_ = 0xcb000000cb000000;
    auVar1._12_4_ = 0xcb000000;
    auVar2._8_4_ = 0x4afffffe;
    auVar2._0_8_ = 0x4afffffe4afffffe;
    auVar2._12_4_ = 0x4afffffe;
    uVar6 = local_8 & 3;
    puVar9 = puVar10;
    for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      auVar11._0_4_ = *pfVar8 * fVar3;
      auVar11._4_4_ = pfVar8[1] * fVar3;
      auVar11._8_4_ = pfVar8[2] * fVar3;
      auVar11._12_4_ = pfVar8[3] * fVar3;
      auVar13._0_4_ = pfVar8[4] * fVar3;
      auVar13._4_4_ = pfVar8[5] * fVar3;
      auVar13._8_4_ = pfVar8[6] * fVar3;
      auVar13._12_4_ = pfVar8[7] * fVar3;
      auVar14._0_4_ = pfVar8[8] * fVar3;
      auVar14._4_4_ = pfVar8[9] * fVar3;
      auVar14._8_4_ = pfVar8[10] * fVar3;
      auVar14._12_4_ = pfVar8[0xb] * fVar3;
      auVar15._0_4_ = pfVar8[0xc] * fVar3;
      auVar15._4_4_ = pfVar8[0xd] * fVar3;
      auVar15._8_4_ = pfVar8[0xe] * fVar3;
      auVar15._12_4_ = pfVar8[0xf] * fVar3;
      auVar11 = maxps(auVar11,auVar1);
      auVar13 = maxps(auVar13,auVar1);
      auVar14 = maxps(auVar14,auVar1);
      auVar15 = maxps(auVar15,auVar1);
      auVar11 = minps(auVar11,auVar2);
      auVar13 = minps(auVar13,auVar2);
      auVar14 = minps(auVar14,auVar2);
      auVar15 = minps(auVar15,auVar2);
      *puVar9 = (short)(int)auVar11._0_4_;
      *(char *)(puVar9 + 1) = (char)((uint)(int)auVar11._0_4_ >> 0x10);
      *(short *)((int)puVar9 + 3) = (short)(int)auVar11._4_4_;
      *(char *)((int)puVar9 + 5) = (char)((uint)(int)auVar11._4_4_ >> 0x10);
      puVar9[3] = (short)(int)auVar11._8_4_;
      *(char *)(puVar9 + 4) = (char)((uint)(int)auVar11._8_4_ >> 0x10);
      *(short *)((int)puVar9 + 9) = (short)(int)auVar11._12_4_;
      *(char *)((int)puVar9 + 0xb) = (char)((uint)(int)auVar11._12_4_ >> 0x10);
      puVar9[6] = (short)(int)auVar13._0_4_;
      *(char *)(puVar9 + 7) = (char)((uint)(int)auVar13._0_4_ >> 0x10);
      *(short *)((int)puVar9 + 0xf) = (short)(int)auVar13._4_4_;
      *(char *)((int)puVar9 + 0x11) = (char)((uint)(int)auVar13._4_4_ >> 0x10);
      puVar9[9] = (short)(int)auVar13._8_4_;
      *(char *)(puVar9 + 10) = (char)((uint)(int)auVar13._8_4_ >> 0x10);
      *(short *)((int)puVar9 + 0x15) = (short)(int)auVar13._12_4_;
      *(char *)((int)puVar9 + 0x17) = (char)((uint)(int)auVar13._12_4_ >> 0x10);
      puVar9[0xc] = (short)(int)auVar14._0_4_;
      *(char *)(puVar9 + 0xd) = (char)((uint)(int)auVar14._0_4_ >> 0x10);
      *(short *)((int)puVar9 + 0x1b) = (short)(int)auVar14._4_4_;
      *(char *)((int)puVar9 + 0x1d) = (char)((uint)(int)auVar14._4_4_ >> 0x10);
      puVar9[0xf] = (short)(int)auVar14._8_4_;
      *(char *)(puVar9 + 0x10) = (char)((uint)(int)auVar14._8_4_ >> 0x10);
      *(short *)((int)puVar9 + 0x21) = (short)(int)auVar14._12_4_;
      *(char *)((int)puVar9 + 0x23) = (char)((uint)(int)auVar14._12_4_ >> 0x10);
      puVar9[0x12] = (short)(int)auVar15._0_4_;
      *(char *)(puVar9 + 0x13) = (char)((uint)(int)auVar15._0_4_ >> 0x10);
      *(short *)((int)puVar9 + 0x27) = (short)(int)auVar15._4_4_;
      *(char *)((int)puVar9 + 0x29) = (char)((uint)(int)auVar15._4_4_ >> 0x10);
      puVar9[0x15] = (short)(int)auVar15._8_4_;
      *(char *)(puVar9 + 0x16) = (char)((uint)(int)auVar15._8_4_ >> 0x10);
      *(short *)((int)puVar9 + 0x2d) = (short)(int)auVar15._12_4_;
      *(char *)((int)puVar9 + 0x2f) = (char)((uint)(int)auVar15._12_4_ >> 0x10);
      puVar9 = puVar9 + 0x18;
      pfVar8 = pfVar8 + 0x10;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      auVar12._0_4_ = *pfVar8 * fVar3;
      auVar12._4_4_ = pfVar8[1] * fVar3;
      auVar12._8_4_ = pfVar8[2] * fVar3;
      auVar12._12_4_ = pfVar8[3] * fVar3;
      auVar11 = maxps(auVar12,auVar1);
      auVar11 = minps(auVar11,auVar2);
      *puVar9 = (short)(int)auVar11._0_4_;
      *(char *)(puVar9 + 1) = (char)((uint)(int)auVar11._0_4_ >> 0x10);
      *(short *)((int)puVar9 + 3) = (short)(int)auVar11._4_4_;
      *(char *)((int)puVar9 + 5) = (char)((uint)(int)auVar11._4_4_ >> 0x10);
      puVar9[3] = (short)(int)auVar11._8_4_;
      *(char *)(puVar9 + 4) = (char)((uint)(int)auVar11._8_4_ >> 0x10);
      *(short *)((int)puVar9 + 9) = (short)(int)auVar11._12_4_;
      *(char *)((int)puVar9 + 0xb) = (char)((uint)(int)auVar11._12_4_ >> 0x10);
      puVar9 = puVar9 + 6;
      pfVar8 = pfVar8 + 4;
    }
  }
  puVar10 = puVar10 + local_8 * 6;
  if (0 < local_c) {
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
      puVar10 = (undefined2 *)((int)puVar10 + 3);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


