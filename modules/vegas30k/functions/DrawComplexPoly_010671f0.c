/* Module: vegas30k.dll
   Function: DrawComplexPoly
   Address: 010671f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall A_Buffer::DrawComplexPoly(struct SF3DPOLY *,double,double) */

void __thiscall
A_Buffer::DrawComplexPoly(A_Buffer *this,SF3DPOLY *param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  CScanlineIntersect *pCVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  A_Buffer *extraout_ECX;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  float *pfVar20;
  undefined4 *puVar21;
  SF3DPOLY *pSVar22;
  A_Buffer *this_00;
  SF3DPOLY *pSVar23;
  float *in_stack_00000008;
  code *pcStack0000001c;
  A_Buffer *pAStack00000024;
  int iStack00000040;
  int iStack00000048;
  int iStack0000004c;
  int iStack00000050;
  int in_stack_00000054;
  int local_8;
  
                    /* 0x671f0  34  ?DrawComplexPoly@A_Buffer@@AAEXPAUSF3DPOLY@@NN@Z */
  FUN_01002100();
  iStack00000040 = 0;
  pAStack00000024 = extraout_ECX;
  iVar7 = ftol();
  iStack00000048 = iVar7;
  iStack00000050 = ftol();
  if (*(int *)(extraout_ECX + 0x2214) == 3) {
    pcStack0000001c = FUN_01063ec0;
    goto LAB_01067303;
  }
  uVar16 = *(uint *)(extraout_ECX + 0x2218);
  if (((byte)uVar16 & 0xf) < 3) {
    pcStack0000001c = (code *)&LAB_01063ff0;
    goto LAB_01067303;
  }
  if (((uVar16 & 0x2000000) != 0) &&
     ((((0x5000 < iVar7 || (0x5000 < iStack00000050)) && (0x3fff < iVar7)) &&
      (0x3fff < iStack00000050)))) {
    pcStack0000001c = FUN_010645f0;
    goto LAB_01067303;
  }
  if ((((uVar16 & 0x4000000) != 0) && (iVar7 < 0x3fff)) && (iStack00000050 < 0x3fff)) {
    FUN_010e7860();
    pcStack0000001c = FUN_01064180;
    goto LAB_01067303;
  }
  if (((uVar16 & 0x4000000) != 0) && ((uVar16 & 0x2000000) != 0)) {
    if (0x4000 < iVar7) {
      if (0x4000 < iStack00000050) goto LAB_010672e4;
LAB_010672ec:
      FUN_010e7860();
      pcStack0000001c = FUN_01064980;
      goto LAB_01067303;
    }
    if (0x4000 < iStack00000050) {
LAB_010672e4:
      if (iVar7 < 0x4001) goto LAB_010672ec;
    }
  }
  pcStack0000001c = (code *)&LAB_01064090;
LAB_01067303:
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x3f4)) {
    pSVar23 = param_1 + 0x14;
    do {
      if (pcStack0000001c == (code *)&LAB_01064090) {
        *(float *)(pSVar23 + -4) =
             (float)(*(int *)(*(int *)(extraout_ECX + *(int *)(param_1 + 0x3f0) * 4 + 0x2010) + 4) +
                    -1) * *(float *)(pSVar23 + -4);
        iVar18 = *(int *)(*(int *)(extraout_ECX + *(int *)(param_1 + 0x3f0) * 4 + 0x2010) + 8) + -1;
      }
      else {
        *(float *)(pSVar23 + -4) =
             (float)*(int *)(*(int *)(extraout_ECX + *(int *)(param_1 + 0x3f0) * 4 + 0x2010) + 4) *
             *(float *)(pSVar23 + -4);
        iVar18 = *(int *)(*(int *)(extraout_ECX + *(int *)(param_1 + 0x3f0) * 4 + 0x2010) + 8);
      }
      iVar7 = iVar7 + 1;
      *(float *)pSVar23 = (float)iVar18 * *(float *)pSVar23;
      pSVar23 = pSVar23 + 0x1c;
    } while (iVar7 < *(int *)(param_1 + 0x3f4));
  }
  FUN_01063d20();
  iVar7 = *(int *)(param_1 + 0x3f4);
  iVar18 = 0;
  this_00 = extraout_ECX;
  if (0 < iVar7) {
    in_stack_00000008 = (float *)&stack0x00000208;
    pSVar23 = param_1 + 4;
    puVar21 = (undefined4 *)&stack0x0000052c;
    do {
      iVar18 = iVar18 + 1;
      iVar7 = iVar18 % iVar7;
      pSVar22 = param_1 + iVar7 * 0x1c + 4;
      param_1 = param_1 + iVar7 * 0x1c;
      puVar19 = puVar21;
      if ((float)_DAT_011e1dc0 < ABS(*(float *)pSVar22 - *(float *)pSVar23)) {
        if (_DAT_011dd160 <= *(float *)pSVar22 - *(float *)pSVar23) {
          fVar3 = *(float *)(param_1 + 4) - *(float *)pSVar23;
          iVar15 = *(int *)(this_00 + 0x2214);
          floor((double)*(float *)pSVar23);
          uVar8 = ftol();
          puVar21[-1] = uVar8;
          ceil((double)*(float *)(param_1 + 4));
          uVar8 = ftol();
          *puVar21 = uVar8;
          pSVar22 = pSVar23 + -4;
          pfVar20 = (float *)(puVar21 + -0xf);
          for (iVar17 = 7; iVar17 != 0; iVar17 = iVar17 + -1) {
            *pfVar20 = *(float *)pSVar22;
            pSVar22 = pSVar22 + 4;
            pfVar20 = pfVar20 + 1;
          }
          pSVar22 = param_1;
          puVar19 = puVar21 + -8;
          for (iVar17 = 7; iVar17 != 0; iVar17 = iVar17 + -1) {
            *puVar19 = *(undefined4 *)pSVar22;
            pSVar22 = pSVar22 + 4;
            puVar19 = puVar19 + 1;
          }
          uVar8 = ftol();
          puVar21[1] = uVar8;
          uVar8 = ftol();
          puVar21[3] = uVar8;
          if (iVar15 == 2) {
            uVar8 = ftol();
            puVar21[5] = uVar8;
            uVar8 = ftol();
            puVar21[7] = uVar8;
          }
          else if ((iVar15 == 3) && (&stack0x00000000 != (undefined1 *)0xffffff18)) {
            fVar1 = in_stack_00000008[-0x24];
            fVar2 = *in_stack_00000008;
            puVar21[9] = in_stack_00000008[-0x48];
            puVar21[6] = fVar1;
            puVar21[8] = fVar2;
            puVar21[10] = (*(float *)(&stack0x000000e8 + iVar7 * 4) - (float)puVar21[9]) / fVar3;
            puVar21[5] = (*(float *)(&stack0x00000178 + iVar7 * 4) - (float)puVar21[6]) / fVar3;
            fVar3 = (*(float *)(&stack0x00000208 + iVar7 * 4) - (float)puVar21[8]) / fVar3;
            goto LAB_01067688;
          }
        }
        else {
          fVar3 = *(float *)pSVar23 - *(float *)(param_1 + 4);
          iVar15 = *(int *)(this_00 + 0x2214);
          floor((double)*(float *)(param_1 + 4));
          uVar8 = ftol();
          fVar1 = *(float *)pSVar23;
          puVar21[-1] = uVar8;
          ceil((double)fVar1);
          uVar8 = ftol();
          *puVar21 = uVar8;
          pSVar22 = param_1;
          puVar19 = puVar21 + -0xf;
          for (iVar17 = 7; iVar17 != 0; iVar17 = iVar17 + -1) {
            *puVar19 = *(undefined4 *)pSVar22;
            pSVar22 = pSVar22 + 4;
            puVar19 = puVar19 + 1;
          }
          pSVar22 = pSVar23 + -4;
          pfVar20 = (float *)(puVar21 + -8);
          for (iVar17 = 7; iVar17 != 0; iVar17 = iVar17 + -1) {
            *pfVar20 = *(float *)pSVar22;
            pSVar22 = pSVar22 + 4;
            pfVar20 = pfVar20 + 1;
          }
          uVar8 = ftol();
          puVar21[1] = uVar8;
          uVar8 = ftol();
          puVar21[3] = uVar8;
          if (iVar15 == 2) {
            uVar8 = ftol();
            puVar21[5] = uVar8;
            uVar8 = ftol();
            puVar21[7] = uVar8;
          }
          else if ((iVar15 == 3) && (&stack0x00000000 != (undefined1 *)0xffffff18)) {
            uVar8 = *(undefined4 *)(&stack0x00000178 + iVar7 * 4);
            puVar21[9] = *(undefined4 *)(&stack0x000000e8 + iVar7 * 4);
            uVar12 = *(undefined4 *)(&stack0x00000208 + iVar7 * 4);
            puVar21[6] = uVar8;
            puVar21[8] = uVar12;
            puVar21[10] = (in_stack_00000008[-0x48] - (float)puVar21[9]) / fVar3;
            puVar21[5] = (in_stack_00000008[-0x24] - (float)puVar21[6]) / fVar3;
            fVar3 = (*in_stack_00000008 - (float)puVar21[8]) / fVar3;
LAB_01067688:
            puVar21[7] = fVar3;
          }
        }
        iStack00000040 = iStack00000040 + 1;
        puVar19 = puVar21 + 0x1a;
        uVar8 = ftol();
        puVar21[2] = uVar8;
        uVar8 = ftol();
        puVar21[4] = uVar8;
        this_00 = pAStack00000024;
        if (*(int *)(pAStack00000024 + 0x2214) == 2) {
          uVar8 = ftol();
          puVar21[6] = uVar8;
          uVar8 = ftol();
          puVar21[8] = uVar8;
          this_00 = pAStack00000024;
        }
      }
      in_stack_00000008 = in_stack_00000008 + 1;
      iVar7 = *(int *)(param_1 + 0x3f4);
      pSVar23 = pSVar23 + 0x1c;
      puVar21 = puVar19;
    } while (iVar18 < iVar7);
  }
  param_3._4_4_ = 0;
  if (0 < *(int *)(this_00 + 0x2240)) {
    do {
      local_8 = 0;
      if (0 < iStack00000040) {
        piVar10 = (int *)&stack0x000002b0;
        piVar9 = (int *)&stack0x0000052c;
        param_2._0_4_ = iStack00000040;
        do {
          if ((piVar9[-1] <= param_3._4_4_) && (param_3._4_4_ < *piVar9)) {
            local_8 = local_8 + 1;
            *piVar10 = (int)(piVar9 + -0xf);
            piVar10 = piVar10 + 2;
          }
          piVar9 = piVar9 + 0x1a;
          param_2._0_4_ = param_2._0_4_ + -1;
        } while (param_2._0_4_ != 0);
        if (local_8 != 0) {
          iVar18 = 0;
          iVar7 = FUN_01066df0();
          if (iVar7 == 1) {
            if (0 < local_8) {
              puVar21 = (undefined4 *)&stack0x00000058;
              piVar10 = (int *)&stack0x000002b0;
              do {
                uVar16 = piVar10[1];
                puVar19 = puVar21;
                if ((uVar16 & 1) != 0) {
                  iVar18 = iVar18 + 1;
                  puVar19 = puVar21 + 1;
                  *puVar21 = *(undefined4 *)(*piVar10 + 4);
                }
                puVar21 = puVar19;
                if ((uVar16 & 2) != 0) {
                  iVar18 = iVar18 + 1;
                  puVar21 = puVar19 + 1;
                  *puVar19 = *(undefined4 *)(*piVar10 + 0x20);
                }
                piVar10 = piVar10 + 2;
                local_8 = local_8 + -1;
              } while (local_8 != 0);
            }
            (&stack0x00000054)[iVar18 + 1] = (int)(float)param_3._4_4_;
            (&stack0x00000054)[iVar18 + 2] = (int)(float)(param_3._4_4_ + 1);
            iVar7 = FUN_01066f80();
            iVar7 = iVar7 + -1;
            if (0 < iVar7) {
              pfVar20 = (float *)&stack0x00000058;
              do {
                iVar18 = FUN_01067010();
                iStack0000004c = 0;
                if (0 < iVar18) {
                  piVar10 = (int *)&stack0x000003d0;
                  do {
                    if (iStack0000004c + 1 < iVar18) {
                      pCVar11 = GetIntersectStructure(this_00);
                      iVar15 = piVar10[2];
                      iVar17 = *piVar10;
                      in_stack_00000008 = (float *)(*pfVar20 - *(float *)(iVar17 + 4));
                      fVar1 = *pfVar20 - *(float *)(iVar15 + 4);
                      fVar3 = pfVar20[1] - *(float *)(iVar17 + 4);
                      in_stack_00000054 = ftol();
                      *(int *)pCVar11 = in_stack_00000054;
                      uVar8 = ftol();
                      *(undefined4 *)(pCVar11 + 4) = uVar8;
                      uVar12 = ftol();
                      *(undefined4 *)(pCVar11 + 0x10) = uVar12;
                      *(undefined4 *)(pCVar11 + 0x14) = uVar8;
                      iVar13 = ftol();
                      *(int *)(pCVar11 + 8) = iVar13;
                      uVar8 = ftol();
                      *(undefined4 *)(pCVar11 + 0xc) = uVar8;
                      uVar12 = ftol();
                      *(undefined4 *)(pCVar11 + 0x18) = uVar12;
                      *(undefined4 *)(pCVar11 + 0x1c) = uVar8;
                      iVar14 = in_stack_00000054;
                      if (iVar13 <= in_stack_00000054) {
                        iVar14 = iVar13;
                      }
                      *(int *)(pCVar11 + 0x50) = iVar14;
                      *(undefined4 *)(pCVar11 + 0x5c) = 0;
                      iVar14 = ftol();
                      iVar13 = ftol();
                      fVar2 = (float)(((iVar14 - iVar13) - *(int *)(iVar17 + 0x44)) +
                                     *(int *)(iVar15 + 0x44)) * (float)_DAT_011dba40;
                      if (*(int *)(pAStack00000024 + 0x2214) == 2) {
                        iVar14 = *(int *)(iVar17 + 0x54);
                        iVar13 = ftol();
                        *(int *)(pCVar11 + 0x28) = iVar13 + iVar14;
                        iVar13 = ftol();
                        iVar17 = *(int *)(iVar17 + 0x5c);
                        *(int *)(pCVar11 + 0x2c) = iVar13 + *(int *)(iVar15 + 0x54);
                        iVar13 = ftol();
                        *(int *)(pCVar11 + 0x30) = iVar13 + iVar17;
                        iVar13 = ftol();
                        *(int *)(pCVar11 + 0x34) = iVar13 + *(int *)(iVar15 + 0x5c);
                        iVar15 = ftol();
                        *(int *)(pCVar11 + 0x40) = iVar15 + iVar14;
                        iVar15 = ftol();
                        *(int *)(pCVar11 + 0x44) = iVar15 + iVar17;
                      }
                      else if (*(int *)(pAStack00000024 + 0x2214) == 3) {
                        fVar4 = (float)in_stack_00000008 * *(float *)(iVar17 + 100) +
                                *(float *)(iVar17 + 0x60);
                        *(float *)(pCVar11 + 0x38) = fVar4;
                        fVar5 = (float)in_stack_00000008 * *(float *)(iVar17 + 0x50) +
                                *(float *)(iVar17 + 0x54);
                        *(float *)(pCVar11 + 0x28) = fVar5;
                        fVar6 = (float)in_stack_00000008 * *(float *)(iVar17 + 0x58) +
                                *(float *)(iVar17 + 0x5c);
                        *(float *)(pCVar11 + 0x30) = fVar6;
                        *(float *)(pCVar11 + 0x4c) =
                             fVar3 * *(float *)(iVar17 + 100) + *(float *)(iVar17 + 0x60);
                        *(float *)(pCVar11 + 0x40) =
                             fVar3 * *(float *)(iVar17 + 0x50) + *(float *)(iVar17 + 0x54);
                        *(float *)(pCVar11 + 0x44) =
                             fVar3 * *(float *)(iVar17 + 0x58) + *(float *)(iVar17 + 0x5c);
                        if ((float)_DAT_011dba50 <= ABS(fVar2)) {
                          *(float *)(pCVar11 + 0x3c) =
                               ((fVar1 * *(float *)(iVar15 + 100) + *(float *)(iVar15 + 0x60)) -
                               fVar4) / fVar2;
                          *(float *)(pCVar11 + 0x2c) =
                               ((fVar1 * *(float *)(iVar15 + 0x50) + *(float *)(iVar15 + 0x54)) -
                               fVar5) / fVar2;
                          *(float *)(pCVar11 + 0x34) =
                               ((fVar1 * *(float *)(iVar15 + 0x58) + *(float *)(iVar15 + 0x5c)) -
                               fVar6) / fVar2;
                        }
                        else {
                          *(undefined4 *)(pCVar11 + 0x3c) = 0;
                          *(undefined4 *)(pCVar11 + 0x2c) = 0;
                          *(undefined4 *)(pCVar11 + 0x34) = 0;
                        }
                      }
                      InsertIntersect(pAStack00000024,pCVar11,param_3._4_4_,pcStack0000001c,
                                      iStack00000048,iStack00000050);
                      this_00 = pAStack00000024;
                    }
                    iStack0000004c = iStack0000004c + 2;
                    piVar10 = piVar10 + 4;
                  } while (iStack0000004c < iVar18);
                }
                pfVar20 = pfVar20 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
          }
          else if (0 < local_8) {
            puVar21 = (undefined4 *)&stack0x000002b0;
            uVar16 = local_8 + 1U >> 1;
            do {
              pCVar11 = GetIntersectStructure(this_00);
              CScanlineIntersect::SetCurVal
                        (pCVar11,(tSCANEDGE *)*puVar21,(tSCANEDGE *)puVar21[2],
                         *(SF3DRENDERSTATE *)(this_00 + 0x2214),(float)param_3._4_4_,
                         (float)(param_3._4_4_ + 1));
              InsertIntersect(this_00,pCVar11,param_3._4_4_,pcStack0000001c,iStack00000048,
                              iStack00000050);
              puVar21 = puVar21 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
      }
      param_3._4_4_ = param_3._4_4_ + 1;
    } while (param_3._4_4_ < *(int *)(this_00 + 0x2240));
  }
  return;
}


