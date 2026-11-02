/* Module: sfppack1.dll
   Function: FUN_5cdbfbe0
   Address: 5cdbfbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cdbfbe0(double *param_1,int param_2,double *param_3,int param_4,double param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined4 *param_9)

{
  double dVar1;
  undefined4 *puVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double *pdVar5;
  undefined4 uVar6;
  int iVar7;
  double *pdVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double *local_160;
  int local_15c;
  double *local_158;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  int local_12c;
  undefined8 local_128;
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90 [35];
  
  local_12c = (int)&local_a8 - (int)param_8;
  local_160 = (double *)0xa;
  puVar4 = param_8;
  do {
    iVar7 = local_12c;
    puVar2 = (undefined4 *)FUN_5cdbfb30(&local_150,0,0,0,0);
    puVar11 = (undefined4 *)(iVar7 + (int)puVar4);
    uVar9 = puVar2[1];
    *puVar11 = *puVar2;
    uVar6 = puVar2[2];
    puVar11[1] = uVar9;
    uVar9 = puVar2[3];
    puVar11[2] = uVar6;
    puVar11[3] = uVar9;
    puVar2 = (undefined4 *)FUN_5cdbfb30((undefined4 *)&local_140,0,0,0,0);
    uVar9 = puVar2[1];
    uVar6 = puVar2[2];
    uVar12 = puVar2[3];
    *puVar4 = *puVar2;
    puVar4[1] = uVar9;
    puVar4[2] = uVar6;
    puVar4[3] = uVar12;
    puVar2 = (undefined4 *)FUN_5cdbfb30((undefined4 *)&local_128,0,0,0,0);
    puVar11 = (undefined4 *)(((int)param_9 - (int)param_8) + (int)puVar4);
    puVar4 = puVar4 + 4;
    uVar9 = puVar2[1];
    uVar6 = puVar2[2];
    uVar12 = puVar2[3];
    *puVar11 = *puVar2;
    puVar11[1] = uVar9;
    local_160 = (double *)((int)local_160 + -1);
    puVar11[2] = uVar6;
    puVar11[3] = uVar12;
  } while (local_160 != (double *)0x0);
  local_128 = 1.0;
  pdVar3 = (double *)FUN_5cdbfb30(&local_150,0,0x3ff00000,0,0);
  uVar9 = *(undefined4 *)pdVar3;
  uVar6 = *(undefined4 *)((int)pdVar3 + 4);
  local_140 = *pdVar3;
  uVar12 = *(undefined4 *)(pdVar3 + 1);
  local_134 = *(undefined4 *)((int)pdVar3 + 0xc);
  puVar4 = (undefined4 *)FUN_5cdbfb30((undefined4 *)local_f8,0,0x40000000,0,0);
  local_150 = *puVar4;
  local_14c = puVar4[1];
  local_148 = puVar4[2];
  local_144 = puVar4[3];
  dVar1 = local_140;
  if (0 < param_2) {
    local_160 = (double *)param_2;
    pdVar3 = param_1;
    do {
      local_158 = pdVar3 + 2;
      pdVar3 = (double *)
               FUN_5cdbf960(local_f8,(double)CONCAT44(param_7,param_6),*local_158,pdVar3[3]);
      pdVar3 = (double *)
               FUN_5cdbf8b0(local_e8,(double)CONCAT44(local_14c,local_150),
                            (double)CONCAT44(local_144,local_148),*pdVar3,pdVar3[1]);
      pdVar3 = (double *)
               FUN_5cdbf900(local_108,(double)CONCAT44(uVar6,uVar9),
                            (double)CONCAT44(local_134,uVar12),*pdVar3,pdVar3[1]);
      uVar9 = *(undefined4 *)pdVar3;
      uVar6 = *(undefined4 *)((int)pdVar3 + 4);
      local_128 = local_128 * (double)CONCAT44(param_7,param_6);
      uVar12 = *(undefined4 *)(pdVar3 + 1);
      local_134 = *(undefined4 *)((int)pdVar3 + 0xc);
      local_160 = (double *)((int)local_160 + -1);
      dVar1 = *pdVar3;
      pdVar3 = local_158;
    } while (local_160 != (double *)0x0);
  }
  local_140 = dVar1;
  local_128 = (local_128 * param_5) / local_140;
  puVar4 = (undefined4 *)FUN_5cdbfb30((undefined4 *)local_108,0,0x3ff00000,0,0);
  iVar7 = 0;
  local_a8._0_4_ = *puVar4;
  local_a8._4_4_ = puVar4[1];
  local_a0 = puVar4[2];
  local_158 = (double *)(param_2 - param_4);
  local_9c = puVar4[3];
  if (0 < (int)local_158) {
    pdVar3 = (double *)&local_a8;
    do {
      iVar7 = iVar7 + 1;
      pdVar3 = pdVar3 + 2;
      pdVar5 = pdVar3;
      local_160 = (double *)iVar7;
      if (0 < iVar7) {
        do {
          puVar4 = (undefined4 *)FUN_5cdbf860(local_108,*pdVar5,pdVar5[1],pdVar5[-2],pdVar5[-1]);
          *(undefined4 *)pdVar5 = *puVar4;
          *(undefined4 *)((int)pdVar5 + 4) = puVar4[1];
          *(undefined4 *)(pdVar5 + 1) = puVar4[2];
          local_160 = (double *)((int)local_160 + -1);
          *(undefined4 *)((int)pdVar5 + 0xc) = puVar4[3];
          pdVar5 = pdVar5 + -2;
        } while (local_160 != (double *)0x0);
      }
      local_158 = (double *)((int)local_158 + -1);
    } while (local_158 != (double *)0x0);
  }
  if (0 < param_4) {
    local_140 = _DAT_5ce137f0 / (double)CONCAT44(param_7,param_6);
    local_15c = param_4;
    local_160 = (double *)(&local_a8 + iVar7 * 2);
    do {
      local_158 = param_3 + 2;
      uVar9 = *(undefined4 *)local_158;
      uVar6 = *(undefined4 *)((int)param_3 + 0x14);
      local_160 = local_160 + 2;
      iVar7 = iVar7 + 1;
      uVar12 = *(undefined4 *)(param_3 + 3);
      uVar17 = *(undefined4 *)((int)param_3 + 0x1c);
      pdVar3 = (double *)
               FUN_5cdbfb30((undefined4 *)local_108,(undefined4)local_140,local_140._4_4_,0,0);
      puVar4 = (undefined4 *)
               FUN_5cdbf860(local_e8,*pdVar3,pdVar3[1],(double)CONCAT44(uVar6,uVar9),
                            (double)CONCAT44(uVar17,uVar12));
      uVar9 = *puVar4;
      uVar6 = puVar4[1];
      uVar12 = puVar4[2];
      uVar17 = puVar4[3];
      uVar13 = *(undefined4 *)local_158;
      uVar14 = *(undefined4 *)((int)param_3 + 0x14);
      uVar15 = *(undefined4 *)(param_3 + 3);
      uVar16 = *(undefined4 *)((int)param_3 + 0x1c);
      pdVar3 = (double *)
               FUN_5cdbfb30((undefined4 *)local_f8,(undefined4)local_140,local_140._4_4_,0,0);
      pdVar3 = (double *)
               FUN_5cdbf8b0(local_c8,*pdVar3,pdVar3[1],(double)CONCAT44(uVar14,uVar13),
                            (double)CONCAT44(uVar16,uVar15));
      puVar4 = (undefined4 *)
               FUN_5cdbf9b0(local_d8,*pdVar3,pdVar3[1],(double)CONCAT44(uVar6,uVar9),
                            (double)CONCAT44(uVar17,uVar12));
      local_150 = *puVar4;
      local_14c = puVar4[1];
      local_148 = puVar4[2];
      local_144 = puVar4[3];
      pdVar3 = local_160;
      local_154 = iVar7;
      if (0 < iVar7) {
        do {
          pdVar5 = (double *)
                   FUN_5cdbf900(local_b8,(double)CONCAT44(local_14c,local_150),
                                (double)CONCAT44(local_144,local_148),pdVar3[-2],pdVar3[-1]);
          puVar4 = (undefined4 *)FUN_5cdbf860(local_118,*pdVar3,pdVar3[1],*pdVar5,pdVar5[1]);
          *(undefined4 *)pdVar3 = *puVar4;
          *(undefined4 *)((int)pdVar3 + 4) = puVar4[1];
          *(undefined4 *)(pdVar3 + 1) = puVar4[2];
          local_154 = local_154 + -1;
          *(undefined4 *)((int)pdVar3 + 0xc) = puVar4[3];
          pdVar3 = pdVar3 + -2;
        } while (local_154 != 0);
      }
      local_15c = local_15c + -1;
      param_3 = local_158;
    } while (local_15c != 0);
  }
  if (-1 < param_2) {
    local_15c = param_2 + 1;
    puVar4 = param_9;
    do {
      pdVar3 = (double *)(((int)&local_a8 - (int)param_9) + (int)puVar4);
      puVar2 = (undefined4 *)FUN_5cdbf960(local_118,local_128,*pdVar3,pdVar3[1]);
      uVar9 = puVar2[1];
      uVar6 = puVar2[2];
      uVar12 = puVar2[3];
      *puVar4 = *puVar2;
      local_15c = local_15c + -1;
      puVar4[1] = uVar9;
      puVar4[2] = uVar6;
      puVar4[3] = uVar12;
      puVar4 = puVar4 + 4;
    } while (local_15c != 0);
  }
  puVar4 = (undefined4 *)FUN_5cdbfb30((undefined4 *)local_118,0,0x3ff00000,0,0);
  local_a8._0_4_ = *puVar4;
  iVar7 = 9;
  local_a8._4_4_ = puVar4[1];
  local_a0 = puVar4[2];
  local_9c = puVar4[3];
  puVar10 = &local_98;
  do {
    puVar4 = (undefined4 *)FUN_5cdbfb30((undefined4 *)local_118,0,0,0,0);
    iVar7 = iVar7 + -1;
    *(undefined4 *)puVar10 = *puVar4;
    *(undefined4 *)((int)puVar10 + 4) = puVar4[1];
    uVar9 = puVar4[3];
    *(undefined4 *)(puVar10 + 1) = puVar4[2];
    *(undefined4 *)((int)puVar10 + 0xc) = uVar9;
    puVar10 = puVar10 + 2;
  } while (iVar7 != 0);
  local_160 = (double *)0x1;
  if (0 < param_2) {
    local_128 = _DAT_5ce135f8 / (double)CONCAT44(param_7,param_6);
    local_140 = _DAT_5ce137f0 / (double)CONCAT44(param_7,param_6);
    pdVar3 = param_1;
    do {
      pdVar8 = pdVar3 + 2;
      uVar9 = *(undefined4 *)pdVar8;
      uVar6 = *(undefined4 *)((int)pdVar3 + 0x14);
      uVar12 = *(undefined4 *)(pdVar3 + 3);
      uVar17 = *(undefined4 *)((int)pdVar3 + 0x1c);
      pdVar5 = (double *)
               FUN_5cdbfb30((undefined4 *)local_118,(undefined4)local_128,local_128._4_4_,0,0);
      puVar4 = (undefined4 *)
               FUN_5cdbf8b0(local_b8,*pdVar5,pdVar5[1],(double)CONCAT44(uVar6,uVar9),
                            (double)CONCAT44(uVar17,uVar12));
      uVar9 = *puVar4;
      uVar6 = puVar4[1];
      uVar12 = puVar4[2];
      uVar17 = puVar4[3];
      uVar13 = *(undefined4 *)pdVar8;
      uVar14 = *(undefined4 *)((int)pdVar3 + 0x14);
      uVar15 = *(undefined4 *)(pdVar3 + 3);
      uVar16 = *(undefined4 *)((int)pdVar3 + 0x1c);
      pdVar3 = (double *)
               FUN_5cdbfb30((undefined4 *)local_d8,(undefined4)local_140,local_140._4_4_,0,0);
      pdVar3 = (double *)
               FUN_5cdbf8b0(local_c8,*pdVar3,pdVar3[1],(double)CONCAT44(uVar14,uVar13),
                            (double)CONCAT44(uVar16,uVar15));
      puVar4 = (undefined4 *)
               FUN_5cdbf9b0(local_108,*pdVar3,pdVar3[1],(double)CONCAT44(uVar6,uVar9),
                            (double)CONCAT44(uVar17,uVar12));
      local_150 = *puVar4;
      local_14c = puVar4[1];
      local_148 = puVar4[2];
      local_144 = puVar4[3];
      if (0 < (int)local_160) {
        local_15c = (int)local_160;
        pdVar3 = (double *)(((int)&local_a8 - (int)param_1) + (int)pdVar8);
        do {
          pdVar5 = (double *)
                   FUN_5cdbf900(local_e8,(double)CONCAT44(local_14c,local_150),
                                (double)CONCAT44(local_144,local_148),pdVar3[-2],pdVar3[-1]);
          puVar4 = (undefined4 *)FUN_5cdbf860(local_f8,*pdVar3,pdVar3[1],*pdVar5,pdVar5[1]);
          *(undefined4 *)pdVar3 = *puVar4;
          *(undefined4 *)((int)pdVar3 + 4) = puVar4[1];
          *(undefined4 *)(pdVar3 + 1) = puVar4[2];
          local_15c = local_15c + -1;
          *(undefined4 *)((int)pdVar3 + 0xc) = puVar4[3];
          pdVar3 = pdVar3 + -2;
        } while (local_15c != 0);
      }
      local_160 = (double *)((int)local_160 + 1);
      pdVar3 = pdVar8;
    } while ((int)local_160 <= param_2);
    if (0 < param_2) {
      local_15c = param_2;
      do {
        puVar2 = param_8 + 4;
        puVar4 = (undefined4 *)
                 FUN_5cdbf960(local_118,-1.0,*(double *)(local_12c + (int)puVar2),
                              ((double *)(local_12c + (int)puVar2))[1]);
        uVar9 = puVar4[1];
        uVar6 = puVar4[2];
        uVar12 = puVar4[3];
        *puVar2 = *puVar4;
        param_8[5] = uVar9;
        local_15c = local_15c + -1;
        param_8[6] = uVar6;
        param_8[7] = uVar12;
        param_8 = puVar2;
      } while (local_15c != 0);
    }
  }
  return;
}


