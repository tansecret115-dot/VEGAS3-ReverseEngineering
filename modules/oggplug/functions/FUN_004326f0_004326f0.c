/* Module: oggplug.dll
   Function: FUN_004326f0
   Address: 004326f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004326f0(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  size_t _Size;
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  undefined4 *puVar15;
  float10 extraout_ST0;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 extraout_ST1;
  float10 fVar19;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  piVar3 = param_2;
  piVar2 = param_1;
  piVar11 = param_1;
  for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  iVar9 = 0;
  local_28 = 0;
  param_1[10] = *(int *)(param_3 + 4);
  fVar17 = (float10)log2((float10)(*(int *)(param_3 + 4) << 3));
  fVar18 = (float10)log2((float10)_DAT_0044d710);
  floor((double)(((float10)0.6931471805599453 * fVar17) / ((float10)0.6931471805599453 * fVar18) +
                (float10)_DAT_00447a78));
  iVar7 = ftol();
  param_1[9] = iVar7;
  log2(((float10)param_5 * (float10)_DAT_0044d720) / (float10)param_4);
  iVar7 = ftol();
  fVar17 = (float10)_DAT_0044d71c;
  param_1[8] = iVar7;
  log2((((float10)param_4 * fVar17 - (float10)_DAT_0044d720) * (float10)param_5) / (float10)param_4)
  ;
  iVar4 = ftol();
  pcVar14 = malloc_exref;
  param_1[0xb] = (iVar4 - iVar7) + 1;
  if (*param_2 != 0) {
    pvVar5 = malloc(param_4 * 4);
    param_1[5] = (int)pvVar5;
  }
  _Size = param_4 * 4;
  pvVar5 = malloc(_Size);
  param_1[6] = (int)pvVar5;
  pvVar5 = malloc(_Size);
  param_1[7] = (int)pvVar5;
  param_1[1] = (int)param_2;
  *param_1 = param_4;
  param_1[0xc] = param_5;
  if ((float *)*param_2 != (float *)0x0) {
    FUN_00433440((float *)*param_2,param_1[5],param_4,(float)param_5);
  }
  param_1 = (int *)0x0;
  if (0 < param_4) {
    local_18 = 0;
    local_1c = 0;
    iVar7 = param_5 / (param_4 * 2);
    iVar4 = iVar7 * iVar7;
    do {
      piVar11 = param_1;
      local_14 = param_2[0xd] + local_28;
      fVar17 = (float10)fpatan((float10)(local_1c * (int)param_1) * (float10)_DAT_0044d6e8,
                               (float10)1);
      fVar18 = (float10)fpatan((float10)local_18 * (float10)_DAT_0044d6d8,(float10)1);
      fVar1 = (float)((float10)local_18 * (float10)_DAT_0044d6c8 +
                     fVar18 * (float10)_DAT_0044d6d0 + fVar17 * (float10)_DAT_0044d6e0);
      if (local_14 < (int)param_1) {
        local_20 = iVar7 * local_28;
        iVar12 = iVar4 * local_28;
        do {
          fVar17 = (float10)fpatan((float10)(iVar12 * local_28) * (float10)_DAT_0044d6e8,(float10)1)
          ;
          fVar18 = (float10)fpatan((float10)local_20 * (float10)_DAT_0044d6d8,(float10)1);
          if ((float10)(fVar1 - (float)param_2[0xb]) <=
              (float10)local_20 * (float10)_DAT_0044d6c8 +
              fVar18 * (float10)_DAT_0044d6d0 + fVar17 * (float10)_DAT_0044d6e0) break;
          local_28 = local_28 + 1;
          iVar12 = iVar12 + iVar4;
          local_20 = local_20 + iVar7;
          local_14 = local_14 + 1;
        } while (local_14 < (int)param_1);
      }
      if (iVar9 < param_4) {
        iVar12 = param_2[0xe] + (int)param_1;
        param_1 = (int *)(iVar7 * iVar9);
        iVar13 = iVar4 * iVar9;
        do {
          if (iVar12 <= iVar9) {
            fVar17 = (float10)fpatan((float10)(iVar13 * iVar9) * (float10)_DAT_0044d6e8,(float10)1);
            fVar18 = (float10)fpatan((float10)(int)param_1 * (float10)_DAT_0044d6d8,(float10)1);
            if ((float10)fVar1 + (float10)(float)param_2[0xc] <=
                (float10)(int)param_1 * (float10)_DAT_0044d6c8 +
                fVar18 * (float10)_DAT_0044d6d0 + fVar17 * (float10)_DAT_0044d6e0) break;
          }
          iVar9 = iVar9 + 1;
          param_1 = (int *)((int)param_1 + iVar7);
          iVar13 = iVar13 + iVar4;
        } while (iVar9 < param_4);
      }
      *(int *)(piVar2[7] + (int)piVar11 * 4) = iVar9 * 0x10000 + local_28;
      local_1c = local_1c + iVar4;
      param_1 = (int *)((int)piVar11 + 1);
      local_18 = local_18 + iVar7;
      pcVar14 = malloc_exref;
    } while ((int)param_1 < param_4);
  }
  param_1 = (int *)0x0;
  if (0 < param_4) {
    do {
      log2((((float10)(int)param_1 * (float10)_DAT_0044d71c + (float10)_DAT_0044d720) *
           (float10)param_5) / (float10)param_4);
      uVar6 = ftol();
      param_1 = (int *)((int)param_1 + 1);
      *(undefined4 *)(piVar2[6] + -4 + (int)param_1 * 4) = uVar6;
    } while ((int)param_1 < param_4);
  }
  iVar7 = (*pcVar14)();
  piVar2[2] = iVar7;
  iVar7 = (*pcVar14)(_Size);
  piVar2[3] = iVar7;
  iVar7 = (*pcVar14)(_Size);
  piVar2[4] = iVar7;
  iVar7 = 0;
  do {
    uVar6 = (*pcVar14)();
    iVar7 = iVar7 + 4;
    *(undefined4 *)(piVar2[2] + -4 + iVar7) = uVar6;
  } while (iVar7 < 0x44);
  iVar7 = 0;
  do {
    iVar4 = 0;
    do {
      uVar6 = (*pcVar14)();
      iVar4 = iVar4 + 4;
      *(undefined4 *)(*(int *)(piVar2[2] + iVar7) + -4 + iVar4) = uVar6;
    } while (iVar4 < 0x2c);
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x44);
  puVar10 = &DAT_004512b0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)piVar2[2] + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451390;
  puVar15 = (undefined4 *)(*(int *)(*(int *)piVar2[2] + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451470;
  puVar15 = (undefined4 *)(*(int *)(*(int *)piVar2[2] + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451550;
  puVar15 = (undefined4 *)(*(int *)(*(int *)piVar2[2] + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004512b0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 8) + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451390;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 8) + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451470;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 8) + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451550;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 8) + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451630;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x10) + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451710;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x10) + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004517f0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x10) + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004518d0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x10) + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004519b0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x18) + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451a90;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x18) + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451b70;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x18) + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451c50;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x18) + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451d30;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x20) + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451e10;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x20) + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451ef0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x20) + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00451fd0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x20) + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004520b0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x28) + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452190;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x28) + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452270;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x28) + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452350;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x28) + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452430;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x30) + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452510;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x30) + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004525f0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x30) + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004526d0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x30) + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004527b0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x38) + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452890;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x38) + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452970;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x38) + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452a50;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x38) + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_004527b0;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x40) + 0x10) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452890;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x40) + 0x18) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452970;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x40) + 0x20) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar10 = &DAT_00452a50;
  puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + 0x40) + 0x28) + 8);
  for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar15 + 1;
  }
  iVar7 = 0;
  do {
    iVar4 = 0x10;
    do {
      iVar9 = 8;
      do {
        pfVar8 = (float *)(*(int *)(*(int *)(piVar2[2] + iVar7) + iVar4) + iVar9);
        iVar9 = iVar9 + 4;
        *pfVar8 = *pfVar8 + (float)param_2[3];
      } while (iVar9 < 0xe8);
      iVar4 = iVar4 + 8;
    } while (iVar4 < 0x2c);
    iVar7 = iVar7 + 8;
  } while (iVar7 < 0x44);
  param_1 = (int *)0x4;
  do {
    iVar7 = 0x10;
    do {
      puVar10 = (undefined4 *)(*(int *)(((int *)(piVar2[2] + (int)param_1))[-1] + iVar7) + 8);
      puVar15 = (undefined4 *)(*(int *)(*(int *)(piVar2[2] + (int)param_1) + iVar7) + 8);
      for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar15 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar15 = puVar15 + 1;
      }
      FUN_00433530((float *)(*(int *)(*(int *)(piVar2[2] + (int)param_1) + iVar7) + 8),
                   *(int *)(*(int *)((int)param_1 + piVar2[2] + 4) + iVar7) + 8);
      iVar7 = iVar7 + 8;
    } while (iVar7 < 0x2c);
    param_1 = param_1 + 2;
  } while ((int)param_1 < 0x44);
  iVar4 = 0;
  iVar7 = 0;
  do {
    FUN_00433560(*(int **)(piVar2[2] + iVar4 * 4),iVar4,iVar7 + param_2[5]);
    iVar7 = iVar7 + 0x2c;
    iVar4 = iVar4 + 1;
  } while (iVar7 < 0x2ec);
  if (param_2[7] != 0) {
    param_3 = 0;
    param_1 = (int *)0x0;
    do {
      param_2 = (int *)0x0;
      do {
        iVar7 = 2;
        if (2 < piVar3[7] + 0x12) {
          do {
            iVar9 = *(int *)(*(int *)(piVar2[2] + param_3) + (int)param_2 * 4);
            pfVar8 = (float *)(piVar3[8] + ((int)param_1 + (int)param_2) * 4);
            iVar4 = iVar7 * 4;
            if (*(float *)(iVar9 + iVar7 * 4) <= *pfVar8) break;
            iVar7 = iVar7 + 1;
            *(float *)(iVar9 + iVar4) = *pfVar8;
          } while (iVar7 < piVar3[7] + 0x12);
        }
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < 0xb);
      param_1 = (int *)((int)param_1 + 0xb);
      param_3 = param_3 + 4;
    } while ((int)param_1 < 0xbb);
  }
  if (piVar3[6] != 0) {
    iVar7 = 0;
    param_2 = (int *)0x0;
    do {
      iVar4 = 0;
      do {
        if (*(float *)(*(int *)(*(int *)(piVar2[2] + (int)param_2) + iVar4) + 0x48) <
            *(float *)(piVar3[8] + iVar7)) {
          *(float *)(*(int *)(*(int *)(piVar2[2] + (int)param_2) + iVar4) + 0x48) =
               *(float *)(piVar3[8] + iVar7);
        }
        iVar4 = iVar4 + 4;
        iVar7 = iVar7 + 4;
      } while (iVar4 < 0x2c);
      param_2 = param_2 + 1;
    } while (iVar7 < 0x2ec);
  }
  iVar7 = 0;
  do {
    iVar4 = 0;
    do {
      if (*(float *)(*(int *)(iVar4 + *(int *)(piVar2[2] + iVar7)) + 0x48) < (float)piVar3[4]) {
        *(int *)(*(int *)(iVar4 + *(int *)(piVar2[2] + iVar7)) + 0x48) = piVar3[4];
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x2c);
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x44);
  param_1 = (int *)0x0;
  if (0 < param_4) {
    fVar18 = (float10)param_5;
    fVar17 = (float10)param_4 + (float10)param_4;
    do {
      log2((((float10)(int)param_1 + (float10)_DAT_00447a78) * fVar18) / fVar17);
      fVar18 = fVar17;
      iVar7 = ftol();
      fVar16 = extraout_ST0 - (float10)iVar7;
      param_1 = (int *)((int)param_1 + 1);
      fVar17 = (float10)_DAT_0044d4a8;
      fVar19 = (float10)*(float *)(piVar2[1] + 0x84 + iVar7 * 4) * (fVar17 - fVar16) +
               fVar16 * (float10)*(float *)(piVar2[1] + 0x88 + iVar7 * 4);
      *(float *)(piVar2[3] + -4 + (int)param_1 * 4) =
           (float)((fVar19 + fVar19) - (float10)_DAT_0044d4a8);
      *(float *)(piVar2[4] + -4 + (int)param_1 * 4) =
           (float)((float10)*(float *)(piVar2[1] + 0x40 + iVar7 * 4) * (fVar17 - fVar16) +
                  fVar16 * (float10)*(float *)(piVar2[1] + 0x44 + iVar7 * 4));
      fVar17 = extraout_ST1;
    } while ((int)param_1 < param_4);
  }
  _DAT_00451130 = 1;
  FUN_00432360();
  FUN_00432360();
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  iVar7 = 0;
  do {
    FUN_00432360();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xb);
  _DAT_00451130 = 1;
  return;
}


