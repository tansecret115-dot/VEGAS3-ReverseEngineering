/* Module: sftrans1.dll
   Function: FUN_004e90f0
   Address: 004e90f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e90f0(undefined4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int extraout_ECX;
  int iVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  float *pfVar22;
  float *pfVar23;
  undefined4 *puVar24;
  float *pfStack00000008;
  int iStack0000000c;
  int iStack00000018;
  code *pcStack0000001c;
  int iStack00000040;
  int iStack0000004c;
  int in_stack_00000054;
  int local_8;
  
  FUN_00551640();
  iStack00000040 = 0;
  iVar8 = ftol();
  iVar9 = ftol();
  if (*(int *)(extraout_ECX + 0x2214) == 3) {
    pcStack0000001c = (code *)&LAB_004e5dc0;
    goto LAB_004e9203;
  }
  uVar18 = *(uint *)(extraout_ECX + 0x2218);
  if (((byte)uVar18 & 0xf) < 3) {
    pcStack0000001c = (code *)&LAB_004e5ef0;
    goto LAB_004e9203;
  }
  if (((uVar18 & 0x2000000) != 0) &&
     ((((0x5000 < iVar8 || (0x5000 < iVar9)) && (0x3fff < iVar8)) && (0x3fff < iVar9)))) {
    pcStack0000001c = FUN_004e64f0;
    goto LAB_004e9203;
  }
  if ((((uVar18 & 0x4000000) != 0) && (iVar8 < 0x3fff)) && (iVar9 < 0x3fff)) {
    FUN_0050fde0();
    pcStack0000001c = FUN_004e6080;
    goto LAB_004e9203;
  }
  if (((uVar18 & 0x4000000) != 0) && ((uVar18 & 0x2000000) != 0)) {
    if (0x4000 < iVar8) {
      if (0x4000 < iVar9) goto LAB_004e91e4;
LAB_004e91ec:
      FUN_0050fde0();
      pcStack0000001c = FUN_004e6880;
      goto LAB_004e9203;
    }
    if (0x4000 < iVar9) {
LAB_004e91e4:
      if (iVar8 < 0x4001) goto LAB_004e91ec;
    }
  }
  pcStack0000001c = (code *)&LAB_004e5f90;
LAB_004e9203:
  iVar8 = 0;
  if (0 < (int)param_1[0xfd]) {
    pfVar10 = (float *)(param_1 + 5);
    do {
      iVar9 = *(int *)(extraout_ECX + 0x2010 + param_1[0xfc] * 4);
      if (pcStack0000001c == (code *)&LAB_004e5f90) {
        pfVar10[-1] = (float)(*(int *)(iVar9 + 4) + -1) * pfVar10[-1];
        iVar9 = *(int *)(*(int *)(extraout_ECX + 0x2010 + param_1[0xfc] * 4) + 8) + -1;
      }
      else {
        pfVar10[-1] = (float)*(int *)(iVar9 + 4) * pfVar10[-1];
        iVar9 = *(int *)(*(int *)(extraout_ECX + 0x2010 + param_1[0xfc] * 4) + 8);
      }
      iVar8 = iVar8 + 1;
      *pfVar10 = (float)iVar9 * *pfVar10;
      pfVar10 = pfVar10 + 7;
    } while (iVar8 < (int)param_1[0xfd]);
  }
  FUN_004e5c20();
  iVar8 = param_1[0xfd];
  iVar9 = 0;
  if (0 < iVar8) {
    pfStack00000008 = (float *)&stack0x00000208;
    pfVar10 = (float *)(param_1 + 1);
    puVar20 = (undefined4 *)&stack0x0000052c;
    do {
      iVar9 = iVar9 + 1;
      iVar8 = iVar9 % iVar8;
      pfVar22 = (float *)(param_1 + iVar8 * 7 + 1);
      param_1 = param_1 + iVar8 * 7;
      puVar21 = puVar20;
      if ((float)_DAT_0056b448 < ABS(*pfVar22 - *pfVar10)) {
        if (_DAT_00557840 <= *pfVar22 - *pfVar10) {
          fVar4 = (float)param_1[1] - *pfVar10;
          iVar17 = *(int *)(extraout_ECX + 0x2214);
          floor((double)*pfVar10);
          uVar11 = ftol();
          puVar20[-1] = uVar11;
          ceil((double)(float)param_1[1]);
          uVar11 = ftol();
          *puVar20 = uVar11;
          pfVar22 = pfVar10 + -1;
          pfVar23 = (float *)(puVar20 + -0xf);
          for (iVar19 = 7; iVar19 != 0; iVar19 = iVar19 + -1) {
            *pfVar23 = *pfVar22;
            pfVar22 = pfVar22 + 1;
            pfVar23 = pfVar23 + 1;
          }
          puVar21 = param_1;
          puVar24 = puVar20 + -8;
          for (iVar19 = 7; iVar19 != 0; iVar19 = iVar19 + -1) {
            *puVar24 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar24 = puVar24 + 1;
          }
          uVar11 = ftol();
          puVar20[1] = uVar11;
          uVar11 = ftol();
          puVar20[3] = uVar11;
          if (iVar17 == 2) {
            uVar11 = ftol();
            puVar20[5] = uVar11;
            uVar11 = ftol();
            puVar20[7] = uVar11;
          }
          else if ((iVar17 == 3) && (&stack0x00000000 != (undefined1 *)0xffffff18)) {
            fVar1 = pfStack00000008[-0x24];
            fVar3 = *pfStack00000008;
            puVar20[9] = pfStack00000008[-0x48];
            puVar20[6] = fVar1;
            puVar20[8] = fVar3;
            puVar20[10] = (*(float *)(&stack0x000000e8 + iVar8 * 4) - (float)puVar20[9]) / fVar4;
            puVar20[5] = (*(float *)(&stack0x00000178 + iVar8 * 4) - (float)puVar20[6]) / fVar4;
            fVar4 = (*(float *)(&stack0x00000208 + iVar8 * 4) - (float)puVar20[8]) / fVar4;
            goto LAB_004e9588;
          }
        }
        else {
          fVar4 = *pfVar10 - (float)param_1[1];
          iVar17 = *(int *)(extraout_ECX + 0x2214);
          floor((double)(float)param_1[1]);
          uVar11 = ftol();
          fVar1 = *pfVar10;
          puVar20[-1] = uVar11;
          ceil((double)fVar1);
          uVar11 = ftol();
          *puVar20 = uVar11;
          puVar21 = param_1;
          puVar24 = puVar20 + -0xf;
          for (iVar19 = 7; iVar19 != 0; iVar19 = iVar19 + -1) {
            *puVar24 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar24 = puVar24 + 1;
          }
          pfVar22 = pfVar10 + -1;
          pfVar23 = (float *)(puVar20 + -8);
          for (iVar19 = 7; iVar19 != 0; iVar19 = iVar19 + -1) {
            *pfVar23 = *pfVar22;
            pfVar22 = pfVar22 + 1;
            pfVar23 = pfVar23 + 1;
          }
          uVar11 = ftol();
          puVar20[1] = uVar11;
          uVar11 = ftol();
          puVar20[3] = uVar11;
          if (iVar17 == 2) {
            uVar11 = ftol();
            puVar20[5] = uVar11;
            uVar11 = ftol();
            puVar20[7] = uVar11;
          }
          else if ((iVar17 == 3) && (&stack0x00000000 != (undefined1 *)0xffffff18)) {
            uVar11 = *(undefined4 *)(&stack0x00000178 + iVar8 * 4);
            puVar20[9] = *(undefined4 *)(&stack0x000000e8 + iVar8 * 4);
            uVar2 = *(undefined4 *)(&stack0x00000208 + iVar8 * 4);
            puVar20[6] = uVar11;
            puVar20[8] = uVar2;
            puVar20[10] = (pfStack00000008[-0x48] - (float)puVar20[9]) / fVar4;
            puVar20[5] = (pfStack00000008[-0x24] - (float)puVar20[6]) / fVar4;
            fVar4 = (*pfStack00000008 - (float)puVar20[8]) / fVar4;
LAB_004e9588:
            puVar20[7] = fVar4;
          }
        }
        iStack00000040 = iStack00000040 + 1;
        puVar21 = puVar20 + 0x1a;
        uVar11 = ftol();
        puVar20[2] = uVar11;
        uVar11 = ftol();
        puVar20[4] = uVar11;
        if (*(int *)(extraout_ECX + 0x2214) == 2) {
          uVar11 = ftol();
          puVar20[6] = uVar11;
          uVar11 = ftol();
          puVar20[8] = uVar11;
        }
      }
      pfStack00000008 = pfStack00000008 + 1;
      iVar8 = param_1[0xfd];
      pfVar10 = pfVar10 + 7;
      puVar20 = puVar21;
    } while (iVar9 < iVar8);
  }
  iStack00000018 = 0;
  if (0 < *(int *)(extraout_ECX + 0x2240)) {
    do {
      local_8 = 0;
      if (0 < iStack00000040) {
        piVar12 = (int *)&stack0x000002b0;
        piVar13 = (int *)&stack0x0000052c;
        iStack0000000c = iStack00000040;
        do {
          if ((piVar13[-1] <= iStack00000018) && (iStack00000018 < *piVar13)) {
            local_8 = local_8 + 1;
            *piVar12 = (int)(piVar13 + -0xf);
            piVar12 = piVar12 + 2;
          }
          piVar13 = piVar13 + 0x1a;
          iStack0000000c = iStack0000000c + -1;
        } while (iStack0000000c != 0);
        if (local_8 != 0) {
          iVar9 = 0;
          iVar8 = FUN_004e8cf0();
          if (iVar8 == 1) {
            if (0 < local_8) {
              puVar20 = (undefined4 *)&stack0x00000058;
              piVar12 = (int *)&stack0x000002b0;
              do {
                uVar18 = piVar12[1];
                puVar21 = puVar20;
                if ((uVar18 & 1) != 0) {
                  iVar9 = iVar9 + 1;
                  puVar21 = puVar20 + 1;
                  *puVar20 = *(undefined4 *)(*piVar12 + 4);
                }
                puVar20 = puVar21;
                if ((uVar18 & 2) != 0) {
                  iVar9 = iVar9 + 1;
                  puVar20 = puVar21 + 1;
                  *puVar21 = *(undefined4 *)(*piVar12 + 0x20);
                }
                piVar12 = piVar12 + 2;
                local_8 = local_8 + -1;
              } while (local_8 != 0);
            }
            (&stack0x00000054)[iVar9 + 1] = (int)(float)iStack00000018;
            (&stack0x00000054)[iVar9 + 2] = (int)(float)(iStack00000018 + 1);
            iVar8 = FUN_004e8e80();
            iVar8 = iVar8 + -1;
            if (0 < iVar8) {
              pfVar10 = (float *)&stack0x00000058;
              do {
                iVar9 = FUN_004e8f10();
                iStack0000004c = 0;
                if (0 < iVar9) {
                  piVar12 = (int *)&stack0x000003d0;
                  do {
                    if (iStack0000004c + 1 < iVar9) {
                      piVar13 = (int *)FUN_004e7c10();
                      iVar17 = piVar12[2];
                      iVar19 = *piVar12;
                      fVar3 = *pfVar10 - *(float *)(iVar19 + 4);
                      fVar1 = *pfVar10 - *(float *)(iVar17 + 4);
                      fVar4 = pfVar10[1] - *(float *)(iVar19 + 4);
                      in_stack_00000054 = ftol();
                      *piVar13 = in_stack_00000054;
                      iVar14 = ftol();
                      piVar13[1] = iVar14;
                      iVar15 = ftol();
                      piVar13[4] = iVar15;
                      piVar13[5] = iVar14;
                      iVar15 = ftol();
                      piVar13[2] = iVar15;
                      iVar14 = ftol();
                      piVar13[3] = iVar14;
                      iVar16 = ftol();
                      piVar13[6] = iVar16;
                      piVar13[7] = iVar14;
                      iVar14 = in_stack_00000054;
                      if (iVar15 <= in_stack_00000054) {
                        iVar14 = iVar15;
                      }
                      piVar13[0x14] = iVar14;
                      piVar13[0x17] = 0;
                      iVar14 = ftol();
                      iVar15 = ftol();
                      fVar7 = (float)(((iVar14 - iVar15) - *(int *)(iVar19 + 0x44)) +
                                     *(int *)(iVar17 + 0x44)) * (float)_DAT_00561088;
                      if (*(int *)(extraout_ECX + 0x2214) == 2) {
                        iVar14 = *(int *)(iVar19 + 0x54);
                        iVar15 = ftol();
                        piVar13[10] = iVar15 + iVar14;
                        iVar15 = ftol();
                        iVar19 = *(int *)(iVar19 + 0x5c);
                        piVar13[0xb] = iVar15 + *(int *)(iVar17 + 0x54);
                        iVar15 = ftol();
                        piVar13[0xc] = iVar15 + iVar19;
                        iVar15 = ftol();
                        piVar13[0xd] = iVar15 + *(int *)(iVar17 + 0x5c);
                        iVar17 = ftol();
                        piVar13[0x10] = iVar17 + iVar14;
                        iVar17 = ftol();
                        piVar13[0x11] = iVar17 + iVar19;
                      }
                      else if (*(int *)(extraout_ECX + 0x2214) == 3) {
                        fVar5 = fVar3 * *(float *)(iVar19 + 100) + *(float *)(iVar19 + 0x60);
                        piVar13[0xe] = (int)fVar5;
                        fVar6 = fVar3 * *(float *)(iVar19 + 0x50) + *(float *)(iVar19 + 0x54);
                        piVar13[10] = (int)fVar6;
                        fVar3 = fVar3 * *(float *)(iVar19 + 0x58) + *(float *)(iVar19 + 0x5c);
                        piVar13[0xc] = (int)fVar3;
                        piVar13[0x13] =
                             (int)(fVar4 * *(float *)(iVar19 + 100) + *(float *)(iVar19 + 0x60));
                        piVar13[0x10] =
                             (int)(fVar4 * *(float *)(iVar19 + 0x50) + *(float *)(iVar19 + 0x54));
                        piVar13[0x11] =
                             (int)(fVar4 * *(float *)(iVar19 + 0x58) + *(float *)(iVar19 + 0x5c));
                        if ((float)_DAT_00563840 <= ABS(fVar7)) {
                          piVar13[0xf] = (int)(((fVar1 * *(float *)(iVar17 + 100) +
                                                *(float *)(iVar17 + 0x60)) - fVar5) / fVar7);
                          piVar13[0xb] = (int)(((fVar1 * *(float *)(iVar17 + 0x50) +
                                                *(float *)(iVar17 + 0x54)) - fVar6) / fVar7);
                          piVar13[0xd] = (int)(((fVar1 * *(float *)(iVar17 + 0x58) +
                                                *(float *)(iVar17 + 0x5c)) - fVar3) / fVar7);
                        }
                        else {
                          piVar13[0xf] = 0;
                          piVar13[0xb] = 0;
                          piVar13[0xd] = 0;
                        }
                      }
                      FUN_004e7e90();
                    }
                    iStack0000004c = iStack0000004c + 2;
                    piVar12 = piVar12 + 4;
                  } while (iStack0000004c < iVar9);
                }
                pfVar10 = pfVar10 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
          else if (0 < local_8) {
            uVar18 = local_8 + 1U >> 1;
            do {
              FUN_004e7c10();
              FUN_004ea930();
              FUN_004e7e90();
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
      }
      iStack00000018 = iStack00000018 + 1;
    } while (iStack00000018 < *(int *)(extraout_ECX + 0x2240));
  }
  return;
}


