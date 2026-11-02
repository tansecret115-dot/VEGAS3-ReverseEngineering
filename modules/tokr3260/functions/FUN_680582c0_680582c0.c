/* Module: tokr3260.dll
   Function: FUN_680582c0
   Address: 680582c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_680582c0(int param_1,float *param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  undefined4 *puVar21;
  int aiStack_e48 [262];
  undefined4 local_a24 [128];
  float local_824 [64];
  float local_724 [128];
  float local_524 [63];
  float local_428 [257];
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar19 = param_1;
  iVar17 = param_3 - param_1;
  pfVar16 = (float *)(param_1 + 0x5fc);
  local_8 = param_1 - param_3;
  param_1 = 0x40;
  pfVar15 = (float *)(param_3 + 0x600);
  pfVar20 = local_824;
  do {
    param_1 = param_1 + -1;
    *pfVar20 = -(*(float *)(local_8 + -8 + (int)(pfVar15 + 2)) * *pfVar15) -
               *(float *)(iVar17 + 8 + (int)(pfVar16 + -2)) * *pfVar16;
    pfVar15 = pfVar15 + 2;
    pfVar16 = pfVar16 + -2;
    pfVar20 = pfVar20 + 1;
  } while (param_1 != 0);
  iVar18 = 0x200;
  pfVar16 = (float *)(iVar19 + 0x3fc);
  pfVar15 = local_724;
  do {
    iVar14 = iVar18 + 8;
    *pfVar15 = *(float *)(iVar18 + -0x200 + iVar19) * *(float *)(iVar18 + -0x200 + param_3) -
               *(float *)((int)pfVar16 + iVar17) * *pfVar16;
    iVar18 = iVar14;
    pfVar16 = pfVar16 + -2;
    pfVar15 = pfVar15 + 1;
  } while (iVar14 < 0x600);
  iVar18 = 0x600;
  pfVar16 = (float *)(iVar19 + 0x7fc);
  pfVar15 = local_524;
  do {
    iVar14 = iVar18 + 8;
    *pfVar15 = *(float *)((int)pfVar16 + iVar17) * *pfVar16 +
               *(float *)(iVar18 + -0x200 + param_3) * *(float *)(iVar18 + -0x200 + iVar19);
    iVar18 = iVar14;
    pfVar16 = pfVar16 + -2;
    pfVar15 = pfVar15 + 1;
  } while (iVar14 < 0x800);
  pfVar16 = local_824 + 1;
  iVar19 = 0x80;
  pfVar15 = (float *)PTR_DAT_6805ce2c;
  do {
    fVar2 = pfVar16[-1];
    fVar3 = *(float *)(((int)PTR_DAT_6805ce28 - (int)PTR_DAT_6805ce2c) + (int)pfVar15);
    fVar4 = *pfVar15;
    fVar5 = *pfVar16;
    *(float *)((int)local_428 + (4U - (int)PTR_DAT_6805ce2c) + (int)pfVar15) =
         pfVar16[-1] * *(float *)(((int)PTR_DAT_6805ce28 - (int)PTR_DAT_6805ce2c) + (int)pfVar15) -
         *pfVar15 * *pfVar16;
    pfVar16 = pfVar16 + 2;
    pfVar15 = pfVar15 + 1;
    iVar19 = iVar19 + -1;
    *(float *)((int)local_428 + (0x200U - (int)PTR_DAT_6805ce2c) + (int)pfVar15) =
         fVar3 * fVar5 + fVar2 * fVar4;
  } while (iVar19 != 0);
  puVar21 = local_a24;
  for (iVar19 = 0x80; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  iVar19 = 0;
  do {
    puVar21 = (undefined4 *)((int)local_428 + iVar19 + 4U);
    piVar1 = (int *)(((int)PTR_DAT_6805ce48 - (int)(local_428 + 1)) + (int)puVar21);
    if (*(int *)((int)piVar1 + ((int)local_a24 - (int)PTR_DAT_6805ce48)) == 0) {
      iVar17 = *piVar1;
      uVar12 = local_428[iVar17 + 0x81];
      local_a24[iVar17] = 1;
      uVar6 = local_428[iVar17 + 1];
      local_428[iVar17 + 1] = (float)*puVar21;
      *puVar21 = uVar6;
      local_428[iVar17 + 0x81] = (float)*(undefined4 *)((int)local_428 + iVar19 + 0x204U);
      *(undefined4 *)((int)local_428 + iVar19 + 0x204U) = uVar12;
    }
    iVar19 = iVar19 + 4;
  } while (iVar19 < 0x200);
  param_1 = 0x40;
  local_14 = 2;
  local_8 = 7;
  do {
    local_18 = 0;
    iVar19 = local_14 / 2;
    local_24 = iVar19;
    if (0 < param_1) {
      local_c = param_1;
      param_3 = iVar19;
      do {
        if (0 < iVar19) {
          local_10 = iVar19;
          local_20 = (int)PTR_DAT_6805ce40 - (int)PTR_DAT_6805ce44;
          pfVar16 = (float *)PTR_DAT_6805ce44;
          do {
            local_1c = *(float *)(local_20 + (int)pfVar16) * local_428[param_3 + 1] -
                       *pfVar16 * local_428[param_3 + 0x81];
            uVar6 = local_18 + 1;
            fVar2 = local_428[local_18 + 0x81];
            fVar4 = *(float *)(local_20 + (int)pfVar16) * local_428[param_3 + 0x81] +
                    *pfVar16 * local_428[param_3 + 1];
            uVar12 = local_18 + 1;
            pfVar16 = pfVar16 + param_1;
            uVar13 = local_18 + 0x81;
            local_18 = local_18 + 1;
            local_428[param_3 + 1] = local_428[uVar6] - local_1c;
            fVar3 = local_428[uVar12];
            local_428[param_3 + 0x81] = fVar2 - fVar4;
            param_3 = param_3 + 1;
            local_428[uVar12] = fVar3 + local_1c;
            iVar17 = local_10 + -1;
            local_428[uVar13] = local_428[uVar13] + fVar4;
            local_10 = iVar17;
            iVar19 = local_24;
          } while (iVar17 != 0);
        }
        local_18 = local_18 + iVar19;
        param_3 = param_3 + iVar19;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    local_14 = local_14 * 2;
    param_1 = param_1 / 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar19 = 0;
  pfVar16 = (float *)PTR_DAT_6805ce34;
  iVar17 = 0;
  do {
    fVar2 = *(float *)(PTR_DAT_6805ce38 + iVar19);
    fVar3 = *pfVar16;
    fVar4 = *(float *)(PTR_DAT_6805ce3c + iVar19);
    fVar5 = *(float *)((int)local_428 + iVar17 + 0x200U);
    fVar7 = *(float *)((int)local_428 + iVar19 + 4U);
    fVar8 = *(float *)((int)local_428 + iVar19 + 0x204U);
    fVar9 = *(float *)(((int)PTR_DAT_6805ce30 - (int)PTR_DAT_6805ce34) + (int)pfVar16);
    fVar10 = *pfVar16;
    pfVar15 = (float *)(((int)PTR_DAT_6805ce30 - (int)PTR_DAT_6805ce34) + (int)pfVar16);
    iVar18 = iVar17 + -4;
    pfVar16 = pfVar16 + 1;
    fVar11 = *(float *)((int)local_428 + iVar17 + 0x400U);
    *(float *)((int)local_824 + iVar19) =
         *(float *)((int)local_428 + iVar19 + 4U) * *pfVar15 +
         *(float *)(PTR_DAT_6805ce3c + iVar19) * *(float *)((int)local_428 + iVar17 + 0x400U) +
         *(float *)(PTR_DAT_6805ce38 + iVar19) * *(float *)((int)local_428 + iVar19 + 0x204U) +
         *(float *)((int)local_428 + iVar17 + 0x200U) * fVar3;
    *(float *)((int)local_428 + iVar17) =
         fVar10 * fVar11 + ((fVar2 * fVar7 - fVar4 * fVar5) - fVar8 * fVar9);
    iVar19 = iVar19 + 4;
    iVar17 = iVar18;
  } while (-0x200 < iVar18);
  if (param_4 != 1) {
    iVar19 = 0x100;
    pfVar16 = param_2;
    do {
      iVar19 = iVar19 + -1;
      *pfVar16 = *(float *)(((int)local_824 - (int)param_2) + (int)pfVar16) * _DAT_6805b1c8;
      pfVar16 = pfVar16 + 1;
    } while (iVar19 != 0);
    return;
  }
  pfVar16 = local_428;
  iVar19 = 0x100;
  do {
    fVar2 = *pfVar16;
    pfVar16 = pfVar16 + -1;
    iVar19 = iVar19 + -1;
    *param_2 = fVar2 * _DAT_6805b1c8;
    param_2 = param_2 + 1;
  } while (iVar19 != 0);
  return;
}


