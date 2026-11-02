/* Module: mp3plug.dll
   Function: FUN_5f6ef8a0
   Address: 5f6ef8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6ef8a0(int param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  int local_68;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*param_2 + 0x908) = 1;
    *(undefined4 *)(param_2[1] + 0x908) = 1;
    fVar6 = _DAT_5f75dcc0;
    iVar14 = *(int *)(param_1 + 0xc);
    if ((((iVar14 == 0) || (iVar14 == 1)) || (iVar14 == 3)) || ((iVar14 == 4 || (iVar14 == 6)))) {
      uVar16 = *(uint *)(*(int *)(**(int **)(param_1 + 0x14) + 0x20) + 100 +
                        *(int *)(param_1 + 0x100) * 4);
      iVar11 = 0;
      iVar14 = *param_2;
      iVar15 = param_2[1];
      if (0 < (int)uVar16) {
        if (0 < (int)(uVar16 & 0xfffffffe)) {
          do {
            fVar4 = *(float *)(iVar14 + 8 + iVar11 * 4);
            fVar5 = *(float *)(iVar15 + 8 + iVar11 * 4);
            *(float *)(iVar14 + 8 + iVar11 * 4) =
                 (*(float *)(iVar15 + 8 + iVar11 * 4) + *(float *)(iVar14 + 8 + iVar11 * 4)) * fVar6
            ;
            *(float *)(iVar15 + 8 + iVar11 * 4) = (fVar4 - fVar5) * fVar6;
            fVar4 = *(float *)(iVar15 + 0xc + iVar11 * 4);
            fVar5 = *(float *)(iVar14 + 0xc + iVar11 * 4);
            *(float *)(iVar14 + 0xc + iVar11 * 4) =
                 (*(float *)(iVar14 + 0xc + iVar11 * 4) + *(float *)(iVar15 + 0xc + iVar11 * 4)) *
                 fVar6;
            *(float *)(iVar15 + 0xc + iVar11 * 4) = (fVar5 - fVar4) * fVar6;
            iVar11 = iVar11 + 2;
          } while (iVar11 < (int)(uVar16 & 0xfffffffe));
        }
        if (iVar11 < (int)uVar16) {
          while( true ) {
            fVar4 = (*(float *)(iVar14 + 8 + iVar11 * 4) - *(float *)(iVar15 + 8 + iVar11 * 4)) *
                    fVar6;
            *(float *)(iVar14 + 8 + iVar11 * 4) =
                 (*(float *)(iVar15 + 8 + iVar11 * 4) + *(float *)(iVar14 + 8 + iVar11 * 4)) * fVar6
            ;
            iVar11 = iVar11 + 1;
            if ((int)uVar16 <= iVar11) break;
            *(float *)(iVar15 + 4 + iVar11 * 4) = fVar4;
          }
          *(float *)(iVar15 + 4 + iVar11 * 4) = fVar4;
        }
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        local_68 = 0;
      }
      else {
        iVar14 = *(int *)(**(int **)(param_1 + 0x14) + 0x20);
        iVar15 = *(int *)(*(int *)(**(int **)(param_1 + 0x14) + 0x20) + 4);
        iVar11 = *(int *)(**(int **)(param_1 + 0x14) + 0x20);
        iVar13 = *param_2;
        iVar12 = param_2[1];
        iVar18 = *(int *)(param_1 + 0xc0);
        iVar9 = *(int *)(param_1 + 0x80);
        local_68 = 0;
        iVar21 = 8;
        if (8 < iVar15) {
          do {
            if (iVar21 < iVar15 + -1) {
              fVar4 = *(float *)(iVar9 + iVar21 * 4);
              fVar6 = *(float *)(iVar9 + 4 + iVar21 * 4);
              if (fVar6 < fVar4) {
                fVar6 = fVar4;
              }
            }
            else {
              fVar6 = *(float *)(iVar9 + iVar21 * 4);
            }
            fVar6 = _DAT_5f75dcc4 - fVar6;
            fVar4 = *(float *)(iVar18 + iVar21 * 4);
            pfVar1 = (float *)(*(int *)(iVar11 + 100 + iVar21 * 4) * 4 + 8 + iVar13);
            fVar22 = FUN_5f6d8460(pfVar1,pfVar1,*(uint *)(iVar14 + 0xc + iVar21 * 4));
            pfVar1 = (float *)(*(int *)(iVar11 + 100 + iVar21 * 4) * 4 + 8 + iVar12);
            fVar23 = FUN_5f6d8460(pfVar1,pfVar1,*(uint *)(iVar14 + 0xc + iVar21 * 4));
            fVar22 = (float10)(double)fVar22 + fVar23;
            if (fVar22 <= (float10)_DAT_5f75dcc8) {
              fVar22 = (float10)_DAT_5f75dcd8;
            }
            iVar3 = *(int *)(iVar11 + 100 + iVar21 * 4) * 4;
            iVar10 = *(int *)(iVar14 + 0xc + iVar21 * 4);
            iVar2 = iVar3 + 8 + iVar13;
            iVar3 = iVar3 + 8 + iVar12;
            iVar20 = 0;
            iVar19 = 0;
            fVar22 = (fVar23 / (fVar22 + fVar23)) * (float10)_DAT_5f75dcbc;
            if (0 < iVar10) {
              do {
                fVar5 = *(float *)(iVar3 + 4 + iVar19 * 4);
                fVar7 = *(float *)(iVar3 + iVar19 * 4);
                fVar8 = *(float *)(iVar2 + 4 + iVar19 * 4);
                fVar7 = fVar7 * fVar7 + fVar5 * fVar5;
                fVar5 = *(float *)(iVar2 + iVar19 * 4);
                iVar19 = iVar19 + 2;
                if (fVar7 < (fVar5 * fVar5 + fVar8 * fVar8 + fVar7) *
                            (float)(fVar22 * fVar22 * (float10)(fVar6 * fVar4))) {
                  *(undefined4 *)(iVar3 + -8 + iVar19 * 4) = 0;
                  *(undefined4 *)(iVar3 + -4 + iVar19 * 4) = 0;
                  iVar20 = iVar20 + 2;
                }
              } while (iVar19 < iVar10);
            }
            iVar21 = iVar21 + 1;
            local_68 = local_68 + iVar20;
          } while (iVar21 < iVar15);
        }
      }
      *(int *)(param_1 + 0x110) = local_68;
      iVar14 = *(int *)(param_1 + 0xc);
    }
    else if (iVar14 == 2) {
      iVar15 = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
      iVar14 = param_1;
      do {
        iVar12 = iVar15 + param_2[1];
        iVar18 = iVar15 + *param_2;
        iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 0x20) + 100 +
                         *(int *)(iVar14 + 0x104) * 4) * 3;
        iVar13 = 0;
        if (0 < iVar11) {
          while( true ) {
            fVar6 = (*(float *)(iVar18 + 8 + iVar13 * 4) - *(float *)(iVar12 + 8 + iVar13 * 4)) *
                    _DAT_5f75dcc0;
            *(float *)(iVar18 + 8 + iVar13 * 4) =
                 (*(float *)(iVar12 + 8 + iVar13 * 4) + *(float *)(iVar18 + 8 + iVar13 * 4)) *
                 _DAT_5f75dcc0;
            iVar13 = iVar13 + 3;
            if (iVar11 <= iVar13) break;
            *(float *)(iVar12 + -4 + iVar13 * 4) = fVar6;
          }
          *(float *)(iVar12 + -4 + iVar13 * 4) = fVar6;
        }
        iVar14 = iVar14 + 4;
        iVar15 = iVar15 + 4;
      } while (iVar14 < param_1 + 0xc);
      iVar14 = *(int *)(param_1 + 0xc);
    }
    else if (iVar14 == 5) {
      piVar17 = *(int **)(param_1 + 0x14);
      iVar14 = param_2[1];
      uVar16 = *(uint *)(*(int *)(*piVar17 + 0x20) + 100 + *(int *)(param_1 + 0x100) * 4);
      iVar15 = *param_2;
      if (0 < (int)uVar16) {
        iVar11 = 0;
        if (0 < (int)(uVar16 & 0xfffffffe)) {
          do {
            fVar4 = *(float *)(iVar15 + 8 + iVar11 * 4);
            fVar5 = *(float *)(iVar14 + 8 + iVar11 * 4);
            *(float *)(iVar15 + 8 + iVar11 * 4) =
                 (*(float *)(iVar14 + 8 + iVar11 * 4) + *(float *)(iVar15 + 8 + iVar11 * 4)) * fVar6
            ;
            *(float *)(iVar14 + 8 + iVar11 * 4) = (fVar4 - fVar5) * fVar6;
            fVar4 = *(float *)(iVar14 + 0xc + iVar11 * 4);
            fVar5 = *(float *)(iVar15 + 0xc + iVar11 * 4);
            *(float *)(iVar15 + 0xc + iVar11 * 4) =
                 (*(float *)(iVar15 + 0xc + iVar11 * 4) + *(float *)(iVar14 + 0xc + iVar11 * 4)) *
                 fVar6;
            *(float *)(iVar14 + 0xc + iVar11 * 4) = (fVar5 - fVar4) * fVar6;
            iVar11 = iVar11 + 2;
          } while (iVar11 < (int)(uVar16 & 0xfffffffe));
        }
        if (iVar11 < (int)uVar16) {
          while( true ) {
            fVar4 = (*(float *)(iVar15 + 8 + iVar11 * 4) - *(float *)(iVar14 + 8 + iVar11 * 4)) *
                    fVar6;
            *(float *)(iVar15 + 8 + iVar11 * 4) =
                 (*(float *)(iVar14 + 8 + iVar11 * 4) + *(float *)(iVar15 + 8 + iVar11 * 4)) * fVar6
            ;
            iVar11 = iVar11 + 1;
            if ((int)uVar16 <= iVar11) break;
            *(float *)(iVar14 + 4 + iVar11 * 4) = fVar4;
          }
          *(float *)(iVar14 + 4 + iVar11 * 4) = fVar4;
        }
        piVar17 = *(int **)(param_1 + 0x14);
        uVar16 = *(uint *)(*(int *)(*piVar17 + 0x20) + 100 + *(int *)(param_1 + 0x100) * 4);
      }
      iVar14 = 0;
      while( true ) {
        iVar15 = *param_2 + uVar16 * 4 + iVar14 * 4;
        iVar11 = param_2[1] + uVar16 * 4 + iVar14 * 4;
        iVar13 = (*(int *)(*(int *)(piVar17[1] + 0x20) + 0x70 +
                          *(int *)(param_1 + 0x104 + iVar14 * 4) * 4) -
                 *(int *)(*(int *)(piVar17[1] + 0x20) + 0x70)) * 3;
        iVar12 = 0;
        if (0 < iVar13) {
          while( true ) {
            fVar6 = (*(float *)(iVar15 + 8 + iVar12 * 4) - *(float *)(iVar11 + 8 + iVar12 * 4)) *
                    _DAT_5f75dcc0;
            *(float *)(iVar15 + 8 + iVar12 * 4) =
                 (*(float *)(iVar11 + 8 + iVar12 * 4) + *(float *)(iVar15 + 8 + iVar12 * 4)) *
                 _DAT_5f75dcc0;
            iVar12 = iVar12 + 3;
            if (iVar13 <= iVar12) break;
            *(float *)(iVar11 + -4 + iVar12 * 4) = fVar6;
          }
          *(float *)(iVar11 + -4 + iVar12 * 4) = fVar6;
        }
        iVar14 = iVar14 + 1;
        if (2 < iVar14) break;
        piVar17 = *(int **)(param_1 + 0x14);
        uVar16 = *(uint *)(*(int *)(*piVar17 + 0x20) + 100 + *(int *)(param_1 + 0x100) * 4);
      }
      iVar14 = *(int *)(param_1 + 0xc);
    }
    if (((iVar14 == 0) || (iVar14 == 1)) || ((iVar14 == 3 || ((iVar14 == 4 || (iVar14 == 6)))))) {
      iVar14 = 0;
      if (0 < *(int *)(param_1 + 0x100)) {
        do {
          *(undefined4 *)(*(int *)(*param_3 + 0x268) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xe0) + iVar14 * 4);
          *(undefined4 *)(*(int *)(param_3[1] + 0x268) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar14 * 4);
          *(undefined4 *)(*(int *)(*param_3 + 0x278) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xa0) + iVar14 * 4);
          *(undefined4 *)(*(int *)(param_3[1] + 0x278) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xa4) + iVar14 * 4);
          *(undefined4 *)(*(int *)(*param_3 + 0x288) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar14 * 4);
          *(undefined4 *)(*(int *)(param_3[1] + 0x288) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xc4) + iVar14 * 4);
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(param_1 + 0x100));
      }
    }
    else if (iVar14 == 2) {
      iVar14 = 0;
      do {
        iVar15 = 0;
        if (0 < *(int *)(param_1 + 0x104 + iVar14 * 4)) {
          do {
            *(undefined4 *)(*(int *)(*param_3 + 0x26c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xe8 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(param_3[1] + 0x26c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xf4 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(*param_3 + 0x27c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xa8 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(param_3[1] + 0x27c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xb4 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(*param_3 + 0x28c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 200 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(param_3[1] + 0x28c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xd4 + iVar14 * 4) + iVar15 * 4);
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(param_1 + 0x104 + iVar14 * 4));
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3);
    }
    else if (iVar14 == 5) {
      iVar14 = 0;
      if (0 < *(int *)(param_1 + 0x100)) {
        do {
          *(undefined4 *)(*(int *)(*param_3 + 0x268) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xe0) + iVar14 * 4);
          *(undefined4 *)(*(int *)(param_3[1] + 0x268) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar14 * 4);
          *(undefined4 *)(*(int *)(*param_3 + 0x278) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xa0) + iVar14 * 4);
          *(undefined4 *)(*(int *)(param_3[1] + 0x278) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xa4) + iVar14 * 4);
          *(undefined4 *)(*(int *)(*param_3 + 0x288) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar14 * 4);
          *(undefined4 *)(*(int *)(param_3[1] + 0x288) + iVar14 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0xc4) + iVar14 * 4);
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(param_1 + 0x100));
      }
      iVar14 = 0;
      do {
        iVar15 = 3;
        if (3 < *(int *)(param_1 + 0x104 + iVar14 * 4) + 3) {
          do {
            *(undefined4 *)(*(int *)(*param_3 + 0x26c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xe8 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(param_3[1] + 0x26c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xf4 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(*param_3 + 0x27c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xa8 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(param_3[1] + 0x27c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xb4 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(*param_3 + 0x28c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 200 + iVar14 * 4) + iVar15 * 4);
            *(undefined4 *)(*(int *)(param_3[1] + 0x28c + iVar14 * 4) + iVar15 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xd4 + iVar14 * 4) + iVar15 * 4);
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(param_1 + 0x104 + iVar14 * 4) + 3);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3);
    }
  }
  return 0;
}


