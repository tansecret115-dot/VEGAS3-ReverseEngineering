/* Module: tokr3260.dll
   Function: FUN_68057c40
   Address: 68057c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_68057c40(float *param_1,int param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int aiStack_e58 [264];
  undefined4 local_a2c [128];
  float local_82c [128];
  float local_62c [125];
  float local_438 [259];
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_4 == 1) {
    pfVar12 = local_82c;
    param_1 = param_1 + 0xff;
    iVar14 = 0x100;
    do {
      fVar11 = *param_1;
      param_1 = param_1 + -1;
      *pfVar12 = fVar11;
      pfVar12 = pfVar12 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  else {
    pfVar12 = local_82c;
    for (iVar14 = 0x100; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pfVar12 = *param_1;
      param_1 = param_1 + 1;
      pfVar12 = pfVar12 + 1;
    }
  }
  iVar14 = (int)PTR_DAT_6805b174 - (int)PTR_DAT_6805b170;
  pfVar12 = local_82c;
  param_1 = (float *)0x40;
  pfVar13 = (float *)PTR_DAT_6805b170;
  do {
    fVar11 = *pfVar13;
    fVar5 = *pfVar12;
    fVar6 = *pfVar13;
    pfVar4 = pfVar12 + 2;
    fVar7 = *pfVar12;
    pfVar2 = (float *)(iVar14 + (int)pfVar13);
    fVar8 = *(float *)(iVar14 + (int)pfVar13);
    pfVar1 = pfVar12 + 2;
    pfVar12 = pfVar12 + 4;
    pfVar13 = pfVar13 + 1;
    fVar9 = *pfVar1;
    *(float *)((int)local_438 + -(int)PTR_DAT_6805b170 + 8 + (int)pfVar13) =
         fVar11 * fVar7 - *pfVar4 * *pfVar2;
    param_1 = (float *)((int)param_1 + -1);
    *(float *)((int)local_438 + -(int)PTR_DAT_6805b170 + 0x208 + (int)pfVar13) =
         fVar6 * fVar9 + fVar5 * fVar8;
  } while (param_1 != (float *)0x0);
  iVar16 = 0x40;
  pfVar12 = local_438 + 2;
  pfVar13 = (float *)(PTR_DAT_6805b170 + 0x100);
  do {
    fVar11 = pfVar12[-2];
    fVar5 = *pfVar13;
    fVar6 = *(float *)((int)pfVar13 + iVar14);
    pfVar4 = pfVar12 + -2;
    fVar7 = *pfVar12;
    fVar8 = *pfVar12;
    pfVar12 = pfVar12 + -4;
    iVar16 = iVar16 + -1;
    *(float *)((int)pfVar13 + (int)local_438 + -(int)PTR_DAT_6805b170 + 0xc) =
         *(float *)((int)pfVar13 + iVar14) * *pfVar4 - *pfVar13 * fVar7;
    *(float *)((int)pfVar13 + (int)local_438 + -(int)PTR_DAT_6805b170 + 0x20c) =
         -(fVar11 * fVar5) - fVar6 * fVar8;
    pfVar13 = pfVar13 + 1;
  } while (iVar16 != 0);
  puVar17 = local_a2c;
  for (iVar14 = 0x80; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  iVar14 = 0;
  do {
    pfVar12 = (float *)((int)local_438 + iVar14 + 0xc);
    piVar3 = (int *)(((int)PTR_DAT_6805b190 - (int)(local_438 + 3)) + (int)pfVar12);
    if (*(int *)((int)piVar3 + ((int)local_a2c - (int)PTR_DAT_6805b190)) == 0) {
      iVar16 = *piVar3;
      fVar5 = local_438[iVar16 + 0x83];
      local_a2c[iVar16] = 1;
      fVar11 = local_438[iVar16 + 3];
      local_438[iVar16 + 3] = *pfVar12;
      *pfVar12 = fVar11;
      local_438[iVar16 + 0x83] = *(float *)((int)local_438 + iVar14 + 0x20c);
      *(float *)((int)local_438 + iVar14 + 0x20c) = fVar5;
    }
    iVar14 = iVar14 + 4;
  } while (iVar14 < 0x200);
  local_8 = 0x40;
  local_10 = 2;
  local_c = 1;
  local_14 = 7;
  do {
    param_1 = (float *)0x0;
    if (0 < local_8) {
      local_24 = local_8;
      iVar14 = local_c;
      param_4 = local_c;
      do {
        if (0 < iVar14) {
          local_28 = iVar14;
          local_2c = (int)PTR_DAT_6805b18c - (int)PTR_DAT_6805b188;
          pfVar12 = (float *)PTR_DAT_6805b188;
          do {
            fVar11 = *pfVar12;
            pfVar13 = (float *)(local_2c + (int)pfVar12);
            pfVar4 = (float *)(local_2c + (int)pfVar12);
            fVar5 = *pfVar12;
            fVar6 = local_438[(int)param_1 + 3];
            local_1c = fVar6;
            fVar7 = local_438[(int)param_1 + 0x83];
            pfVar12 = pfVar12 + local_8;
            iVar14 = (int)param_1 + 0x83;
            local_20 = fVar7;
            fVar11 = fVar11 * local_438[param_4 + 3] - *pfVar13 * local_438[param_4 + 0x83];
            fVar5 = fVar5 * local_438[param_4 + 0x83] + *pfVar4 * local_438[param_4 + 3];
            local_18 = fVar5;
            local_438[param_4 + 3] = fVar6 - fVar11;
            local_438[(int)param_1 + 3] = fVar6 + fVar11;
            local_438[param_4 + 0x83] = fVar7 - fVar5;
            param_1 = (float *)((int)param_1 + 1);
            local_438[iVar14] = local_20 + local_18;
            param_4 = param_4 + 1;
            local_28 = local_28 + -1;
            iVar14 = local_c;
          } while (local_28 != 0);
        }
        param_1 = (float *)((int)param_1 + iVar14);
        param_4 = param_4 + iVar14;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    local_14 = local_14 + -1;
    local_8 = local_8 >> 1;
    local_c = local_10;
    local_10 = local_10 * 2;
  } while (local_14 != 0);
  iVar14 = 0;
  pfVar12 = (float *)PTR_DAT_6805b17c;
  iVar16 = 0;
  do {
    fVar11 = *(float *)(PTR_DAT_6805b180 + iVar14);
    fVar5 = *(float *)((int)local_438 + iVar16 + 0x208);
    fVar6 = *(float *)(((int)PTR_DAT_6805b178 - (int)PTR_DAT_6805b17c) + (int)pfVar12);
    fVar7 = *(float *)((int)local_438 + iVar14 + 0xc);
    iVar15 = iVar16 + -4;
    fVar8 = *(float *)(PTR_DAT_6805b184 + iVar14);
    fVar9 = *(float *)((int)local_438 + iVar16 + 0x408);
    fVar10 = *(float *)((int)local_438 + iVar14 + 0x20c);
    *(float *)((int)local_82c + iVar14) =
         *(float *)((int)local_438 + iVar16 + 0x208) * *pfVar12 +
         *(float *)(PTR_DAT_6805b180 + iVar14) * *(float *)((int)local_438 + iVar14 + 0x20c) +
         *(float *)(((int)PTR_DAT_6805b178 - (int)PTR_DAT_6805b17c) + (int)pfVar12) *
         *(float *)((int)local_438 + iVar14 + 0xc) +
         *(float *)((int)local_438 + iVar16 + 0x408) * *(float *)(PTR_DAT_6805b184 + iVar14);
    *(float *)((int)local_438 + iVar16 + 8) =
         fVar9 * *pfVar12 + ((fVar11 * fVar7 - fVar5 * fVar8) - fVar6 * fVar10);
    iVar14 = iVar14 + 4;
    pfVar12 = pfVar12 + 1;
    iVar16 = iVar15;
  } while (-0x200 < iVar15);
  iVar14 = 0x80;
  pfVar12 = param_3;
  pfVar13 = (float *)(param_2 + 0x600);
  do {
    pfVar4 = (float *)(((int)local_62c - (int)param_3) + (int)pfVar12);
    fVar11 = *pfVar12;
    pfVar12 = pfVar12 + 1;
    iVar14 = iVar14 + -1;
    pfVar13[-0x180] = *pfVar4 * fVar11;
    *pfVar13 = -(*(float *)(((int)param_3 - param_2) + -4 + (int)(pfVar13 + 1)) *
                *(float *)((int)local_a2c + (0x1fc - (int)param_3) + (int)pfVar12));
    pfVar13 = pfVar13 + 1;
  } while (iVar14 != 0);
  pfVar12 = local_438 + 2;
  iVar14 = 0x100;
  pfVar13 = (float *)(param_2 + 0x200);
  do {
    fVar11 = *pfVar12;
    pfVar12 = pfVar12 + -1;
    iVar14 = iVar14 + -1;
    *pfVar13 = -(*(float *)((int)pfVar13 + ((int)param_3 - param_2)) * fVar11);
    pfVar13 = pfVar13 + 1;
  } while (iVar14 != 0);
  return;
}


