/* Module: aviplug.dll
   Function: FUN_5f9d1360
   Address: 5f9d1360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9d1360(double *param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  float10 fVar7;
  undefined4 in_stack_fffffe70;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_stack_fffffe74;
  undefined4 uVar10;
  undefined4 in_stack_fffffe78;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_stack_fffffe7c;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  double local_18 [2];
  
  if ((*(uint *)(param_1 + 0x5b) & 0x6000) == 0) {
    fVar7 = (float10)fptan((float10)param_1[0x53] * (float10)_DAT_5f9ec338);
    param_1[0x5c] = (double)(fVar7 * (float10)_DAT_5f9ee7f8);
    fVar7 = (float10)fptan((float10)param_1[0x54] * (float10)_DAT_5f9ec338);
    param_1[0x5d] = (double)(fVar7 * (float10)_DAT_5f9ee7f8);
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x53);
    *(undefined4 *)((int)param_1 + 0x2e4) = *(undefined4 *)((int)param_1 + 0x29c);
    *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)((int)param_1 + 0x2ec) = *(undefined4 *)((int)param_1 + 0x2a4);
  }
  local_150 = param_1[0x5c] * _DAT_5f9ee7f0;
  local_138 = param_1[0x5d] * _DAT_5f9ee7f0;
  switch(*(uint *)(param_1 + 0x5b) & 0x1e0) {
  case 0x20:
    iVar6 = 0;
    pdVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        puVar2 = (undefined4 *)FUN_5f9cfe30(local_68,*pdVar5,pdVar5[1],local_150,0.0);
        iVar6 = iVar6 + 1;
        *(undefined4 *)pdVar5 = *puVar2;
        *(undefined4 *)((int)pdVar5 + 4) = puVar2[1];
        *(undefined4 *)(pdVar5 + 1) = puVar2[2];
        *(undefined4 *)((int)pdVar5 + 0xc) = puVar2[3];
        pdVar5 = pdVar5 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    *(undefined4 *)((int)param_1 + 0x144) = 0;
    return;
  case 0x40:
    iVar6 = 0;
    pdVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        uVar9 = *(undefined4 *)pdVar5;
        uVar10 = *(undefined4 *)((int)pdVar5 + 4);
        uVar12 = *(undefined4 *)(pdVar5 + 1);
        uVar14 = *(undefined4 *)((int)pdVar5 + 0xc);
        FUN_5f9d2e40(&stack0xfffffe70,(undefined4)local_150,local_150._4_4_);
        puVar2 = (undefined4 *)
                 FUN_5f9cfe60(local_108,(double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70),
                              (double)CONCAT44(in_stack_fffffe7c,in_stack_fffffe78),
                              (double)CONCAT44(uVar10,uVar9),(double)CONCAT44(uVar14,uVar12));
        iVar6 = iVar6 + 1;
        *(undefined4 *)pdVar5 = *puVar2;
        *(undefined4 *)((int)pdVar5 + 4) = puVar2[1];
        *(undefined4 *)(pdVar5 + 1) = puVar2[2];
        *(undefined4 *)((int)pdVar5 + 0xc) = puVar2[3];
        pdVar5 = pdVar5 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      pdVar5 = param_1 + 0x14;
      do {
        iVar6 = iVar6 + 1;
        *(undefined4 *)pdVar5 = 0;
        *(undefined4 *)((int)pdVar5 + 4) = 0;
        *(undefined4 *)(pdVar5 + 1) = 0;
        *(undefined4 *)((int)pdVar5 + 0xc) = 0;
        pdVar5 = pdVar5 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    *(undefined4 *)((int)param_1 + 0x144) = *(undefined4 *)(param_1 + 0x28);
    return;
  case 0x80:
    iVar6 = 0;
    local_140 = SQRT(local_138 * local_150);
    local_138 = local_138 - local_150;
    pdVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        pdVar1 = (double *)FUN_5f9cfe30(local_88,*pdVar5,pdVar5[1],local_138,0.0);
        uVar13 = 0x3fe00000;
        uVar11 = 0;
        pdVar4 = (double *)&local_150;
        uVar8 = 0x5f9d1622;
        FUN_5f9d1d10(pdVar4,0.5,*pdVar1,pdVar1[1]);
        uVar9 = (undefined4)local_150;
        uVar10 = local_150._4_4_;
        uVar12 = local_148;
        uVar14 = local_144;
        FUN_5f9d2e40(&stack0xfffffe70,(undefined4)local_140,local_140._4_4_);
        puVar2 = (undefined4 *)
                 FUN_5f9cfe60(local_e8,(double)CONCAT44(pdVar4,uVar8),
                              (double)CONCAT44(uVar13,uVar11),(double)CONCAT44(uVar10,uVar9),
                              (double)CONCAT44(uVar14,uVar12));
        pdVar1 = local_48;
        uVar11 = 0x5f9d168b;
        pdVar3 = FUN_5f9cffc0(pdVar1,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        uVar9 = *(undefined4 *)pdVar3;
        uVar10 = *(undefined4 *)((int)pdVar3 + 4);
        uVar12 = *(undefined4 *)(pdVar3 + 1);
        uVar14 = *(undefined4 *)((int)pdVar3 + 0xc);
        FUN_5f9d2e40(&stack0xfffffe70,0,0x3ff00000);
        puVar2 = (undefined4 *)
                 FUN_5f9cff10(local_c8,(double)CONCAT44(pdVar4,uVar8),
                              (double)CONCAT44(pdVar1,uVar11),(double)CONCAT44(uVar10,uVar9),
                              (double)CONCAT44(uVar14,uVar12));
        pdVar1 = (double *)&local_160;
        uVar11 = 0x5f9d16e9;
        FUN_5f9cfd30(pdVar1,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        uVar9 = local_160;
        uVar10 = local_15c;
        uVar12 = local_158;
        uVar14 = local_154;
        FUN_5f9d2e40(&stack0xfffffe70,0,0x3ff00000);
        pdVar4 = (double *)
                 FUN_5f9cfed0(local_128,(double)CONCAT44(pdVar4,uVar8),
                              (double)CONCAT44(pdVar1,uVar11),(double)CONCAT44(uVar10,uVar9),
                              (double)CONCAT44(uVar14,uVar12));
        uVar9 = (undefined4)local_150;
        uVar10 = local_150._4_4_;
        uVar12 = local_148;
        uVar14 = local_144;
        puVar2 = (undefined4 *)
                 FUN_5f9cfe30(local_a8,local_150,(double)CONCAT44(local_144,local_148),*pdVar4,
                              pdVar4[1]);
        *(undefined4 *)pdVar5 = *puVar2;
        *(undefined4 *)((int)pdVar5 + 4) = puVar2[1];
        *(undefined4 *)(pdVar5 + 1) = puVar2[2];
        *(undefined4 *)((int)pdVar5 + 0xc) = puVar2[3];
        uVar8 = local_160;
        uVar11 = local_15c;
        uVar13 = local_158;
        uVar15 = local_154;
        FUN_5f9d2e40(&stack0xfffffe70,0,0x3ff00000);
        pdVar4 = (double *)
                 FUN_5f9cff10(local_28,(double)CONCAT44(uVar10,uVar9),
                              (double)CONCAT44(uVar14,uVar12),(double)CONCAT44(uVar11,uVar8),
                              (double)CONCAT44(uVar15,uVar13));
        puVar2 = (undefined4 *)
                 FUN_5f9cfe30(local_118,local_150,(double)CONCAT44(local_144,local_148),*pdVar4,
                              pdVar4[1]);
        pdVar4 = param_1 + (iVar6 + *(int *)(param_1 + 0x28)) * 2;
        iVar6 = iVar6 + 1;
        *(undefined4 *)pdVar4 = *puVar2;
        *(undefined4 *)((int)pdVar4 + 4) = puVar2[1];
        *(undefined4 *)(pdVar4 + 1) = puVar2[2];
        *(undefined4 *)((int)pdVar4 + 0xc) = puVar2[3];
        pdVar5 = pdVar5 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      pdVar5 = param_1 + 0x14;
      do {
        iVar6 = iVar6 + 1;
        *(undefined4 *)pdVar5 = 0;
        *(undefined4 *)((int)pdVar5 + 4) = 0;
        *(undefined4 *)(pdVar5 + 1) = 0;
        *(undefined4 *)((int)pdVar5 + 0xc) = 0;
        pdVar5 = pdVar5 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    *(int *)((int)param_1 + 0x144) = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) * 2;
    return;
  case 0x100:
    iVar6 = 0;
    local_140 = SQRT(local_138 * local_150);
    local_138 = local_138 - local_150;
    pdVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        uVar9 = *(undefined4 *)pdVar5;
        uVar10 = *(undefined4 *)((int)pdVar5 + 4);
        uVar12 = *(undefined4 *)(pdVar5 + 1);
        uVar14 = *(undefined4 *)((int)pdVar5 + 0xc);
        FUN_5f9d2e40(&stack0xfffffe70,(undefined4)local_138,local_138._4_4_);
        pdVar1 = (double *)
                 FUN_5f9cfe60(local_f8,(double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70),
                              (double)CONCAT44(in_stack_fffffe7c,in_stack_fffffe78),
                              (double)CONCAT44(uVar10,uVar9),(double)CONCAT44(uVar14,uVar12));
        uVar13 = 0x3fe00000;
        uVar11 = 0;
        pdVar4 = (double *)&local_150;
        uVar8 = 0x5f9d193d;
        FUN_5f9d1d10(pdVar4,0.5,*pdVar1,pdVar1[1]);
        uVar9 = (undefined4)local_150;
        uVar10 = local_150._4_4_;
        uVar12 = local_148;
        uVar14 = local_144;
        FUN_5f9d2e40(&stack0xfffffe70,(undefined4)local_140,local_140._4_4_);
        puVar2 = (undefined4 *)
                 FUN_5f9cfe60(local_d8,(double)CONCAT44(pdVar4,uVar8),
                              (double)CONCAT44(uVar13,uVar11),(double)CONCAT44(uVar10,uVar9),
                              (double)CONCAT44(uVar14,uVar12));
        pdVar1 = local_b8;
        uVar11 = 0x5f9d19a6;
        pdVar3 = FUN_5f9cffc0(pdVar1,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        uVar9 = *(undefined4 *)pdVar3;
        uVar10 = *(undefined4 *)((int)pdVar3 + 4);
        uVar12 = *(undefined4 *)(pdVar3 + 1);
        uVar14 = *(undefined4 *)((int)pdVar3 + 0xc);
        FUN_5f9d2e40(&stack0xfffffe70,0,0x3ff00000);
        puVar2 = (undefined4 *)
                 FUN_5f9cff10(local_98,(double)CONCAT44(pdVar4,uVar8),
                              (double)CONCAT44(pdVar1,uVar11),(double)CONCAT44(uVar10,uVar9),
                              (double)CONCAT44(uVar14,uVar12));
        pdVar1 = (double *)&local_160;
        uVar11 = 0x5f9d1a04;
        FUN_5f9cfd30(pdVar1,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        uVar9 = local_160;
        uVar10 = local_15c;
        uVar12 = local_158;
        uVar14 = local_154;
        FUN_5f9d2e40(&stack0xfffffe70,0,0x3ff00000);
        pdVar4 = (double *)
                 FUN_5f9cfed0(local_78,(double)CONCAT44(pdVar4,uVar8),
                              (double)CONCAT44(pdVar1,uVar11),(double)CONCAT44(uVar10,uVar9),
                              (double)CONCAT44(uVar14,uVar12));
        uVar9 = (undefined4)local_150;
        uVar10 = local_150._4_4_;
        uVar12 = local_148;
        uVar14 = local_144;
        puVar2 = (undefined4 *)
                 FUN_5f9cfe30(local_58,local_150,(double)CONCAT44(local_144,local_148),*pdVar4,
                              pdVar4[1]);
        *(undefined4 *)pdVar5 = *puVar2;
        *(undefined4 *)((int)pdVar5 + 4) = puVar2[1];
        *(undefined4 *)(pdVar5 + 1) = puVar2[2];
        *(undefined4 *)((int)pdVar5 + 0xc) = puVar2[3];
        uVar8 = local_160;
        uVar11 = local_15c;
        uVar13 = local_158;
        uVar15 = local_154;
        FUN_5f9d2e40(&stack0xfffffe70,0,0x3ff00000);
        pdVar4 = (double *)
                 FUN_5f9cff10(local_38,(double)CONCAT44(uVar10,uVar9),
                              (double)CONCAT44(uVar14,uVar12),(double)CONCAT44(uVar11,uVar8),
                              (double)CONCAT44(uVar15,uVar13));
        in_stack_fffffe70 = (undefined4)local_150;
        in_stack_fffffe74 = local_150._4_4_;
        in_stack_fffffe78 = local_148;
        in_stack_fffffe7c = local_144;
        puVar2 = (undefined4 *)
                 FUN_5f9cfe30(local_18,local_150,(double)CONCAT44(local_144,local_148),*pdVar4,
                              pdVar4[1]);
        pdVar4 = param_1 + (iVar6 + *(int *)(param_1 + 0x28)) * 2;
        iVar6 = iVar6 + 1;
        *(undefined4 *)pdVar4 = *puVar2;
        *(undefined4 *)((int)pdVar4 + 4) = puVar2[1];
        *(undefined4 *)(pdVar4 + 1) = puVar2[2];
        *(undefined4 *)((int)pdVar4 + 0xc) = puVar2[3];
        pdVar5 = pdVar5 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      pdVar5 = param_1 + 0x14;
      do {
        *(undefined4 *)pdVar5 = 0;
        *(undefined4 *)((int)pdVar5 + 4) = 0;
        *(undefined4 *)(pdVar5 + 1) = (undefined4)local_140;
        *(undefined4 *)((int)pdVar5 + 0xc) = local_140._4_4_;
        pdVar4 = param_1 + (iVar6 + 10 + *(int *)(param_1 + 0x28)) * 2;
        iVar6 = iVar6 + 1;
        *(undefined4 *)pdVar4 = 0;
        *(undefined4 *)((int)pdVar4 + 4) = 0;
        pdVar4[1] = -local_140;
        pdVar5 = pdVar5 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    iVar6 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar6 << 1;
    *(int *)((int)param_1 + 0x144) = iVar6 << 1;
  }
  return;
}


