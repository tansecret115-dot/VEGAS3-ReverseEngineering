/* Module: sftrans1.dll
   Function: FUN_0046e020
   Address: 0046e020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0046e201) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffec4 : 0x0046e1a7 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall FUN_0046e020(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  LPVOID pvVar4;
  LPCVOID pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  HGLOBAL pvVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  LPVOID unaff_EBX;
  int iVar18;
  int *unaff_ESI;
  uint uVar19;
  LPCVOID *ppvVar20;
  undefined4 *puVar21;
  int *piVar22;
  int iVar23;
  float10 fVar24;
  float10 fVar25;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 *puStack_2b4;
  int *piStack_2b0;
  int iVar29;
  int *piVar30;
  int iStack_28c;
  int iVar31;
  int iStack_284;
  int *piStack_27c;
  int iStack_278;
  LPCRITICAL_SECTION lpCriticalSection;
  double dStack_23c;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  undefined8 local_21c;
  int *piStack_214;
  int *piStack_20c;
  int iStack_1fc;
  int iStack_1f4;
  int aiStack_1f0 [2];
  undefined4 uStack_1e8;
  undefined4 auStack_1e0 [7];
  int *in_stack_fffffe3c;
  int iStack_1c0;
  LPCVOID in_stack_fffffe44;
  int iStack_1b8;
  int iStack_1b4;
  LPVOID pvStack_1b0;
  undefined4 uStack_1ac;
  tagRECT tStack_1a8;
  undefined4 uStack_198;
  int *piStack_184;
  int *piStack_17c;
  int *piStack_158;
  int iStack_148;
  int iStack_140;
  int aiStack_13c [2];
  LPCVOID pvStack_134;
  int iStack_130;
  LPCVOID pvStack_12c;
  int iStack_128;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined1 auStack_fc [16];
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_ac;
  undefined4 auStack_a4 [5];
  undefined4 uStack_90;
  undefined4 uStack_88;
  
  local_21c = (double)CONCAT44(*(int *)(param_2 + 0x5c) - *(int *)(param_2 + 0x58),param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c4));
  if (*(int *)(param_1 + 0x148) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1e0);
    iStack_278 = param_1 + 0x210;
    (**(code **)(*(int *)(param_1 + 0xf0) + 0x24))();
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x154);
    iStack_278 = *(int *)(param_1 + 0x150);
    (**(code **)(*(int *)(param_1 + 0xf0) + 0x28))();
  }
  LeaveCriticalSection(lpCriticalSection);
  uStack_ac = 0;
  puVar21 = auStack_a4;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  uVar27 = *(undefined4 *)(param_1 + 0x24c);
  iVar31 = 0;
  puVar21 = auStack_a4;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  auStack_a4[0] = *(undefined4 *)(param_1 + 0x248);
  auStack_a4[1] = *(undefined4 *)(param_1 + 0x250);
  auStack_a4[3] = *(undefined4 *)(param_1 + 0x254);
  uStack_90 = 1;
  uStack_88 = 0x7fffffff;
  piVar22 = *(int **)(*(int *)(param_1 + 0xa0) + 4);
  aiStack_13c[0] = 0;
  pvStack_134 = (LPCVOID)0x0;
  ppvVar20 = &pvStack_12c;
  auStack_a4[2] = uVar27;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *ppvVar20 = (LPCVOID)0x0;
    ppvVar20 = ppvVar20 + 1;
  }
  iStack_ec = 0;
  iStack_e8 = 0;
  iStack_e4 = 0;
  iVar13 = (**(code **)(*piVar22 + 0x28))();
  if (-1 < iVar13) {
    if (&stack0x00000000 == (undefined1 *)0xc8) {
      (**(code **)(aiStack_13c[0] + 0x1c))();
      FUN_0046eef0();
    }
    else {
      FUN_0045df30();
    }
    piStack_2b0 = (LPVOID)0x46e1ed;
    iVar13 = (**(code **)(aiStack_13c[0] + 0x18))();
    if (-1 < iVar13) {
      iVar13 = FUN_0046eed0();
      uStack_104 = (double)CONCAT44(iVar13 << 2,(int)uStack_104);
      iVar13 = FUN_0046eee0();
      iVar14 = FUN_0046eed0();
      pvVar12 = GlobalAlloc(0x40,iVar13 * iVar14 * 4);
      pvVar4 = GlobalLock(pvVar12);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = (LPVOID)0x0;
      }
      else {
        puStack_2b4 = (undefined4 *)0x46e28e;
        piStack_2b0 = pvVar4;
        FUN_004029a0();
      }
      uStack_10c = (double)CONCAT44(pvVar4,(undefined4)uStack_10c);
      if (pvVar4 != (LPVOID)0x0) {
        uStack_104 = (double)CONCAT44(uStack_104._4_4_,1);
        FUN_0046eff0();
        piStack_2b0 = (int *)0x46e2ef;
        OffsetRect((LPRECT)&dStack_23c,-iStack_148,-iStack_140);
        iStack_22c = 0;
        (**(code **)(*piStack_158 + 0x2c))();
        piStack_2b0 = (int *)0x0;
        puStack_2b4 = (undefined4 *)0x46e317;
        FUN_0046ee70();
        piVar22 = *(int **)(param_1 + 0xa8);
        aiStack_1f0[0] = 0;
        uStack_1e8 = 0;
        puVar21 = auStack_1e0;
        for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar21 = 0;
          puVar21 = puVar21 + 1;
        }
        piStack_2b0 = aiStack_1f0;
        puStack_2b4 = &DAT_00554800;
        uVar27 = 1;
        tStack_1a8.right = 0;
        tStack_1a8.bottom = 0;
        uStack_198 = 0;
        iVar13 = (**(code **)(*piVar22 + 0x28))(piVar22,aiStack_13c,0,1);
        piVar22 = piStack_2b0;
        if (-1 < iVar13) {
          if (piStack_158 == (int *)0x0) {
            (**(code **)(*piStack_2b0 + 0x1c))(piStack_2b0,auStack_a4);
            FUN_0046eef0(auStack_a4);
            piVar30 = piStack_158;
          }
          else {
            FUN_0045df30(piStack_158);
            piVar22 = piStack_2b0;
            piVar30 = piStack_158;
          }
          iVar13 = (**(code **)(*piVar22 + 0x18))(piVar22,auStack_fc,&puStack_2b4);
          if (-1 < iVar13) {
            if (puStack_2b4 == (undefined4 *)0x60001) {
              (**(code **)(*piStack_20c + 0x10))(piStack_20c,&stack0xfffffd98);
              in_stack_fffffe3c = unaff_ESI;
            }
            else {
              iStack_1b4 = FUN_0046eed0();
              iStack_1b4 = iStack_1b4 << 2;
              iVar13 = FUN_0046eee0();
              iVar14 = FUN_0046eed0();
              pvVar12 = GlobalAlloc(0x40,iVar13 * iVar14 * 4);
              unaff_EBX = GlobalLock(pvVar12);
              if (unaff_EBX == (LPVOID)0x0) {
                unaff_EBX = (LPVOID)0x0;
              }
              else {
                FUN_004029a0(unaff_EBX,4,iVar13 * iVar14,&LAB_0046f010);
              }
              if (unaff_EBX == (LPVOID)0x0) {
                iVar13 = -0x7ff8fff2;
                in_stack_fffffe44 = (LPCVOID)0x0;
                goto LAB_0046e4e0;
              }
              iStack_1b8 = 1;
              uStack_1ac = 1;
              pvStack_1b0 = unaff_EBX;
              FUN_0046eff0(&tStack_1a8);
              OffsetRect(&tStack_1a8,-iStack_1fc,-iStack_1f4);
              uStack_198 = 0;
              (**(code **)(*piStack_20c + 0x2c))(piStack_20c,&pvStack_1b0);
            }
            FUN_0046ee70(uVar27,&tStack_1a8.bottom);
            iVar13 = *(int *)(param_1 + 0x248);
            iVar14 = *(int *)(param_1 + 0x254) - *(int *)(param_1 + 0x24c);
            iStack_224 = ftol();
            dStack_23c = (double)iVar14;
            iStack_224 = iStack_224 + iVar13;
            ftol();
            dVar3 = _DAT_00555908 / (*(double *)(param_1 + 0x228) + _DAT_0055c078);
            iVar13 = piStack_2b0[2];
            iVar14 = piStack_2b0[4];
            iStack_22c = iStack_e8 - iStack_ec;
            iVar2 = *(int *)(param_1 + 600);
            iStack_220 = iStack_e0 - iStack_e4;
            iVar18 = (int)((int)pvStack_12c + ((int)pvStack_12c >> 0x1f & 3U)) >> 2;
            iVar28 = 0;
            local_21c = _DAT_00555908 / (*(double *)(param_1 + 0x230) + _DAT_0055c078);
            uStack_104 = *(double *)(param_1 + 0x210) * _DAT_005614f0;
            iStack_230 = ftol();
            iStack_230 = iStack_230 + iVar2;
            iVar2 = *(int *)(param_1 + 0x25c);
            iVar6 = ftol();
            fVar24 = (float10)dVar3;
            iStack_284 = 0;
            uStack_10c = (double)((fVar24 + fVar24) / extraout_ST1);
            if (0 < (int)piVar30) {
              piStack_27c = in_stack_fffffe3c;
              do {
                fVar24 = (float10)((iVar14 - (iVar6 + iVar2)) + iStack_284);
                iStack_28c = 0;
                fVar24 = ((fVar24 + fVar24) / (float10)dStack_23c) * (float10)local_21c;
                if (0 < (int)lpCriticalSection) {
                  iStack_228 = iVar13 - iStack_230;
                  fVar24 = fVar24 * fVar24;
                  piStack_2b0 = piStack_27c;
                  do {
                    fVar25 = (float10)(iStack_228 + iStack_28c) * (float10)uStack_10c;
                    fVar25 = fVar25 * fVar25 + fVar24;
                    if (fVar25 < (float10)_DAT_00555908) {
                      fVar24 = (float10)_DAT_00555908 - SQRT(fVar25);
                      fVar24 = fVar24 * fVar24 * (float10)uStack_104;
                      fcos(fVar24);
                      fsin(fVar24);
                      iVar7 = ftol();
                      iVar8 = ftol();
                      iVar15 = 0x100 - iVar8;
                      iVar23 = iVar7 + -1000000000;
                      iVar7 = iVar7 + -999999999;
                      if (iVar23 < 0) {
                        iVar23 = 0;
                      }
                      if (iStack_220 <= iVar23) {
                        iVar23 = iStack_220 + -1;
                      }
                      if (iVar7 < 0) {
                        iVar7 = 0;
                      }
                      if (iStack_220 <= iVar7) {
                        iVar7 = iStack_220 + -1;
                      }
                      iVar1 = iVar31 + iVar23 * iVar18 * 4;
                      iVar7 = iVar31 + iVar7 * iVar18 * 4;
                      iVar26 = iVar7;
                      iVar29 = iVar1;
                      iVar9 = ftol();
                      iVar10 = ftol();
                      iVar23 = iVar9 + -1000000000;
                      puStack_2b4 = (undefined4 *)(iVar9 + -999999999);
                      if (iVar23 < 0) {
                        iVar23 = 0;
                      }
                      if (iStack_22c <= iVar23) {
                        iVar23 = iStack_22c + -1;
                      }
                      if ((int)puStack_2b4 < 0) {
                        puStack_2b4 = (undefined4 *)0x0;
                      }
                      if (iStack_22c <= (int)puStack_2b4) {
                        puStack_2b4 = (undefined4 *)(iStack_22c + -1);
                      }
                      uVar11 = (uint)*(byte *)(iVar7 + 3 + iVar23 * 4) * (0x100 - iVar10) * iVar8 >>
                               8;
                      uVar19 = (uint)*(byte *)(iVar7 + 3 + (int)puStack_2b4 * 4) * iVar10 * iVar8 >>
                               8;
                      uVar17 = (uint)*(byte *)(iVar1 + 3 + (int)puStack_2b4 * 4) * iVar10 * iVar15
                               >> 8;
                      uVar16 = (uint)*(byte *)(iVar1 + 3 + iVar23 * 4) * (0x100 - iVar10) * iVar15
                               >> 8;
                      iVar8 = uVar11 + uVar19 + uVar17 + uVar16;
                      param_1 = iStack_278;
                      fVar24 = extraout_ST1_00;
                      if (iVar8 == 0) {
                        *piStack_2b0 = iVar28;
                      }
                      else {
                        *(char *)((int)piStack_2b0 + 3) = (char)((uint)(iVar8 + 0x80) >> 8);
                        *(char *)((int)piStack_2b0 + 2) =
                             (char)(*(byte *)(iVar7 + 2 + (int)puStack_2b4 * 4) * uVar19 +
                                    *(byte *)(iVar7 + 2 + iVar23 * 4) * uVar11 +
                                    *(byte *)(iVar29 + 2 + (int)puStack_2b4 * 4) * uVar17 + 0x8000 +
                                    *(byte *)(iVar29 + 2 + iVar23 * 4) * uVar16 >> 0x10);
                        *(char *)((int)piStack_2b0 + 1) =
                             (char)(*(byte *)(iVar26 + 1 + (int)puStack_2b4 * 4) * uVar19 +
                                    *(byte *)(iVar26 + 1 + iVar23 * 4) * uVar11 +
                                    *(byte *)(iVar29 + 1 + (int)puStack_2b4 * 4) * uVar17 + 0x8000 +
                                    *(byte *)(iVar29 + 1 + iVar23 * 4) * uVar16 >> 0x10);
                        *(char *)piStack_2b0 =
                             (char)(*(byte *)(iVar29 + iVar23 * 4) * uVar16 +
                                    *(byte *)(iVar26 + (int)puStack_2b4 * 4) * uVar19 +
                                    *(byte *)(iVar26 + iVar23 * 4) * uVar11 + 0x8000 +
                                    *(byte *)(iVar29 + (int)puStack_2b4 * 4) * uVar17 >> 0x10);
                      }
                    }
                    else {
                      *piStack_2b0 = *(int *)(iVar31 + ((((*(int *)(param_1 + 0x25c) - iVar14) +
                                                         iStack_284) * iVar18 - iVar13) +
                                                        *(int *)(param_1 + 600) + iStack_28c) * 4);
                    }
                    iStack_28c = iStack_28c + 1;
                    piStack_2b0 = piStack_2b0 + 1;
                  } while (iStack_28c < (int)lpCriticalSection);
                }
                iStack_284 = iStack_284 + 1;
                piStack_27c = piStack_27c +
                              ((int)((int)unaff_EBX + ((int)unaff_EBX >> 0x1f & 3U)) >> 2);
              } while (iStack_284 < (int)piVar30);
            }
            if (iStack_1c0 != 0) {
              (**(code **)(*piStack_214 + 0x38))(piStack_214,&iStack_1b8);
              pvVar12 = GlobalHandle(in_stack_fffffe3c);
              GlobalUnlock(pvVar12);
              pvVar12 = GlobalHandle(in_stack_fffffe3c);
              GlobalFree(pvVar12);
            }
            if (piStack_214 != (int *)0x0) {
              (**(code **)(*piStack_214 + 8))(piStack_214);
            }
            pvVar5 = pvStack_134;
            if (iStack_130 != 0) {
              pvVar12 = GlobalHandle(pvStack_134);
              GlobalUnlock(pvVar12);
              pvVar12 = GlobalHandle(pvVar5);
              GlobalFree(pvVar12);
            }
            if (piStack_184 != (int *)0x0) {
              (**(code **)(*piStack_184 + 8))(piStack_184);
            }
            return 0;
          }
        }
LAB_0046e4e0:
        if (iStack_1b8 != 0) {
          (**(code **)(*piStack_20c + 0x38))(piStack_20c,&pvStack_1b0);
          pvVar12 = GlobalHandle(in_stack_fffffe44);
          GlobalUnlock(pvVar12);
          pvVar12 = GlobalHandle(in_stack_fffffe44);
          GlobalFree(pvVar12);
        }
        if (piStack_20c != (int *)0x0) {
          (**(code **)(*piStack_20c + 8))(piStack_20c);
        }
        if (iStack_128 != 0) {
          pvVar12 = GlobalHandle(pvStack_12c);
          GlobalUnlock(pvVar12);
          pvVar12 = GlobalHandle(pvStack_12c);
          GlobalFree(pvVar12);
        }
        if (piStack_17c != (int *)0x0) {
          (**(code **)(*piStack_17c + 8))(piStack_17c);
        }
        return iVar13;
      }
      iVar13 = -0x7ff8fff2;
      pvVar5 = (LPCVOID)0x0;
      goto LAB_0046e3bc;
    }
  }
  pvVar5 = uStack_10c._4_4_;
LAB_0046e3bc:
  if ((int)uStack_104 != 0) {
    pvVar12 = GlobalHandle(pvVar5);
    GlobalUnlock(pvVar12);
    pvVar12 = GlobalHandle(pvVar5);
    GlobalFree(pvVar12);
  }
  if (piStack_158 != (int *)0x0) {
    (**(code **)(*piStack_158 + 8))();
  }
  return iVar13;
}


