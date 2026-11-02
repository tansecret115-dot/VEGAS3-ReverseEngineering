/* Module: sftrans1.dll
   Function: FUN_00495a80
   Address: 00495a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00495a80(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  LPVOID pvVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  HGLOBAL pvVar21;
  int *piVar22;
  int iVar23;
  int **ppiVar24;
  undefined4 *puVar25;
  int **ppiVar26;
  int **ppiVar27;
  int *unaff_ESI;
  undefined1 *puVar28;
  float10 fVar29;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  LPVOID *ppvVar30;
  int *piVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  int *piStack_274;
  int **ppiStack_270;
  undefined4 *puStack_26c;
  undefined4 *puStack_268;
  int **ppiStack_250;
  int *piStack_24c;
  int *piStack_244;
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined8 uStack_1fc;
  undefined1 auStack_1f4 [12];
  LPVOID pvStack_1e8;
  undefined8 uStack_1e4;
  int *piStack_1dc;
  LPCRITICAL_SECTION local_1d8;
  int *piStack_1c8;
  undefined4 uStack_1bc;
  LPVOID pvStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int aiStack_1ac [2];
  undefined4 uStack_1a4;
  undefined4 auStack_19c [4];
  undefined4 *puStack_18c;
  int iStack_188;
  int iStack_184;
  LONG aLStack_180 [2];
  LPVOID pvStack_178;
  int iStack_174;
  int iStack_170;
  LPVOID pvStack_16c;
  undefined4 uStack_168;
  tagRECT tStack_164;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  int *piStack_138;
  int *piStack_108;
  undefined4 *puStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  LPCVOID pvStack_e8;
  int iStack_e4;
  undefined4 auStack_dc [2];
  double dStack_d4;
  undefined4 uStack_c0;
  int iStack_bc;
  LPVOID pvStack_b8;
  int iStack_b4;
  int aiStack_b0 [5];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  iVar15 = param_2 + 0x50;
  auStack_1f4._4_4_ = *(int *)(param_2 + 0x5c) - *(int *)(param_2 + 0x58);
  stack0xfffffe14 = (double)CONCAT44(pvStack_1e8,*(int *)(param_2 + 100) - *(int *)(param_2 + 0x60))
  ;
  local_1d8 = (LPCRITICAL_SECTION)(param_1 + 0x19c);
  uStack_230 = 0xc6;
  uStack_22f = 0x5a;
  uStack_22e = 0x49;
  uStack_22d = 0;
  EnterCriticalSection(local_1d8);
  if (*(int *)(param_1 + 0x148) == 0) {
    puVar25 = (undefined4 *)(param_1 + 0x1b4);
    iVar23 = param_1 + 0x1d0;
    uStack_230 = (undefined1)iVar23;
    uStack_22f = (undefined1)((uint)iVar23 >> 8);
    uStack_22e = (undefined1)((uint)iVar23 >> 0x10);
    uStack_22d = (undefined1)((uint)iVar23 >> 0x18);
    uStack_234 = 3;
    uStack_233 = 0x5b;
    uStack_232 = 0x49;
    uStack_231 = 0;
    (**(code **)(*(int *)(param_1 + 0xf0) + 0x24))();
  }
  else {
    puVar25 = *(undefined4 **)(param_1 + 0x154);
    uVar3 = *(undefined4 *)(param_1 + 0x150);
    iVar23 = param_1 + 0x174;
    uStack_230 = (undefined1)uVar3;
    uStack_22f = (undefined1)((uint)uVar3 >> 8);
    uStack_22e = (undefined1)((uint)uVar3 >> 0x10);
    uStack_22d = (undefined1)((uint)uVar3 >> 0x18);
    uStack_234 = (undefined1)iVar23;
    uStack_233 = (undefined1)((uint)iVar23 >> 8);
    uStack_232 = (undefined1)((uint)iVar23 >> 0x10);
    uStack_231 = (undefined1)((uint)iVar23 >> 0x18);
    iVar23 = param_1 + 0x158;
    iVar14 = param_1 + 0x1d0;
    uStack_238 = (undefined1)iVar23;
    uStack_237 = (undefined1)((uint)iVar23 >> 8);
    uStack_236 = (undefined1)((uint)iVar23 >> 0x10);
    uStack_235 = (undefined1)((uint)iVar23 >> 0x18);
    uStack_23c = (undefined1)iVar14;
    uStack_23b = (undefined1)((uint)iVar14 >> 8);
    uStack_23a = (undefined1)((uint)iVar14 >> 0x10);
    uStack_239 = (undefined1)((uint)iVar14 >> 0x18);
    (**(code **)(*(int *)(param_1 + 0xf0) + 0x28))();
  }
  piStack_244 = (int *)0x495b0e;
  LeaveCriticalSection(SUB84(stack0xfffffe14,0));
  piVar22 = (int *)(param_2 + 8);
  piVar16 = *(int **)(*(int *)(param_1 + 0xa0) + 4);
  iStack_ec = 0;
  iStack_e4 = 0;
  puVar17 = auStack_dc;
  for (iVar23 = 8; iVar23 != 0; iVar23 = iVar23 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  piStack_244 = &iStack_ec;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  iVar23 = (**(code **)(*piVar16 + 0x28))();
  if (-1 < iVar23) {
    if (CONCAT13(uStack_239,CONCAT12(uStack_23a,CONCAT11(uStack_23b,uStack_23c))) == 0) {
      (**(code **)(*unaff_ESI + 0x1c))();
      FUN_0046eef0();
    }
    else {
      FUN_0045df30();
    }
    puStack_268 = (undefined4 *)0x495bd1;
    iVar23 = (**(code **)(*unaff_ESI + 0x18))();
    if (-1 < iVar23) {
      if (piVar16 == (int *)0x60001) {
        uVar9 = SUB41(&pvStack_1b8,0);
        uVar10 = (undefined1)((uint)&pvStack_1b8 >> 8);
        uVar11 = (undefined1)((uint)&pvStack_1b8 >> 0x10);
        uVar12 = (undefined1)((uint)&pvStack_1b8 >> 0x18);
        (**(code **)(*piStack_108 + 0x10))();
        pvStack_b8 = pvStack_1b8;
        uStack_c0 = uStack_1bc;
        piStack_24c = piStack_108;
        puStack_26c = puVar25;
      }
      else {
        aiStack_b0[0] = (iStack_f4 - iStack_f8) * 4;
        pvVar21 = GlobalAlloc(0x40,(iStack_ec - iStack_f0) * (iStack_f4 - iStack_f8) * 4);
        pvStack_b8 = GlobalLock(pvVar21);
        if (pvStack_b8 == (LPVOID)0x0) {
          pvStack_b8 = (LPVOID)0x0;
        }
        if (pvStack_b8 == (LPVOID)0x0) {
          iVar23 = -0x7ff8fff2;
          pvStack_b8 = (LPCVOID)0x0;
          goto LAB_00495dd1;
        }
        iStack_b4 = 1;
        uStack_1fc = (double)CONCAT44(1,pvStack_b8);
        auStack_1f4._4_4_ = iStack_f0;
        auStack_1f4._0_4_ = iStack_f8;
        stack0xfffffe14 = (double)CONCAT44(iStack_ec,iStack_f4);
        puStack_268 = (undefined4 *)0x495cd6;
        OffsetRect((LPRECT)auStack_1f4,-iStack_f8,-iStack_f0);
        uStack_1e4 = (double)((ulonglong)uStack_1e4._4_4_ << 0x20);
        uVar9 = SUB41(&uStack_1fc,0);
        uVar10 = (undefined1)((uint)&uStack_1fc >> 8);
        uVar11 = (undefined1)((uint)&uStack_1fc >> 0x10);
        uVar12 = (undefined1)((uint)&uStack_1fc >> 0x18);
        (**(code **)(*piStack_108 + 0x2c))();
        piStack_24c = piStack_108;
        puStack_26c = puVar25;
      }
      ppiVar27 = &piStack_244;
      puStack_268 = &DAT_0056b170;
      ppiStack_270 = (int **)0x495d03;
      iVar23 = (**(code **)*puStack_26c)();
      if (iVar23 < 0) {
        ppiStack_270 = (int **)&iStack_bc;
        piStack_274 = (int *)0x495dc5;
        FUN_00497630();
      }
      else {
        piStack_274 = &iStack_bc;
        ppiStack_270 = (int **)0x18;
        (**(code **)(iRam00000000 + 0xc))();
        piVar16 = (int *)CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
        (**(code **)(*piVar16 + 8))(piVar16);
      }
      piVar16 = *(int **)(param_1 + 0xa8);
      aiStack_1ac[0] = 0;
      uStack_1a4 = 0;
      puVar25 = auStack_19c;
      for (iVar23 = 8; iVar23 != 0; iVar23 = iVar23 + -1) {
        *puVar25 = 0;
        puVar25 = puVar25 + 1;
      }
      piStack_274 = aiStack_1ac;
      ppiStack_270 = (int **)0x0;
      uVar32 = 0x55480000000001;
      tStack_164.right = 0;
      tStack_164.bottom = 0;
      uStack_154 = 0;
      piVar31 = (int *)0x0;
      uStack_238 = SUB41(piVar16,0);
      uStack_237 = (undefined1)((uint)piVar16 >> 8);
      uStack_236 = (undefined1)((uint)piVar16 >> 0x10);
      uStack_235 = (undefined1)((uint)piVar16 >> 0x18);
      iVar23 = iVar15;
      iVar14 = (**(code **)(*piVar16 + 0x28))();
      if (-1 < iVar14) {
        if (iVar15 == 0) {
          (**(code **)(*piVar22 + 0x1c))(piVar22,aiStack_b0,piVar16,iVar23,piVar31,uVar32);
          FUN_0046eef0(aiStack_b0);
        }
        else {
          FUN_0045df30(iVar15);
        }
        iVar14 = (**(code **)(*piVar22 + 0x18))(piVar22,&uStack_c0,&uStack_238);
        if (-1 < iVar14) {
          if (CONCAT13(uStack_235,CONCAT12(uStack_236,CONCAT11(uStack_237,uStack_238))) == 0x60001)
          {
            ppvVar30 = &pvStack_1e8;
            (**(code **)(*piStack_1c8 + 0x10))(piStack_1c8);
            pvStack_178 = pvStack_1e8;
            aLStack_180[0] = auStack_1f4._8_4_;
          }
          else {
            iStack_170 = (iStack_1b4 - (int)pvStack_1b8) * 4;
            pvVar21 = GlobalAlloc(0x40,(aiStack_1ac[0] - iStack_1b0) *
                                       (iStack_1b4 - (int)pvStack_1b8) * 4);
            pvStack_178 = GlobalLock(pvVar21);
            if (pvStack_178 == (LPVOID)0x0) {
              pvStack_178 = (LPVOID)0x0;
            }
            if (pvStack_178 == (LPVOID)0x0) {
              iVar14 = -0x7ff8fff2;
              pvStack_178 = (LPCVOID)0x0;
              goto LAB_00495eeb;
            }
            iStack_174 = 1;
            uStack_168 = 1;
            tStack_164.right = iStack_1b4;
            tStack_164.top = iStack_1b0;
            tStack_164.left = (LONG)pvStack_1b8;
            tStack_164.bottom = aiStack_1ac[0];
            pvStack_16c = pvStack_178;
            OffsetRect(&tStack_164,-(int)pvStack_1b8,-iStack_1b0);
            ppvVar30 = &pvStack_16c;
            uStack_154 = 0;
            (**(code **)(*piStack_1c8 + 0x2c))(piStack_1c8);
            piVar22 = (int *)CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
          }
          iVar15 = (**(code **)*piVar22)(piVar22,&DAT_0056b170,&piStack_274);
          if (iVar15 < 0) {
            if (&stack0x00000000 != (undefined1 *)0x164) {
              tStack_164.left = 0;
              tStack_164.top = 0x3ff00000;
              tStack_164.right = 0;
              tStack_164.bottom = 0;
              uStack_154 = 0;
              uStack_150 = 0;
            }
          }
          else {
            (**(code **)(*piVar31 + 0xc))(piVar31,&tStack_164,0x18);
            (**(code **)((int)*ppvVar30 + 8))(ppvVar30);
          }
          puVar25 = puStack_fc;
          puStack_26c = puStack_18c;
          piStack_244 = (int *)((int)(iStack_184 + (iStack_184 >> 0x1f & 3U)) >> 2);
          iVar15 = (int)(iStack_f4 + (iStack_f4 >> 0x1f & 3U)) >> 2;
          fVar29 = (float10)_CIfmod();
          dVar33 = (double)fVar29;
          dVar1 = (double)((float)(int)ppiVar27 * *(float *)(param_1 + 0x1d0) - (float)_DAT_00557838
                          );
          fVar6 = (float)(int)piStack_24c * *(float *)(param_1 + 0x1d4) - (float)_DAT_00557838;
          dVar2 = (double)fVar6;
          uVar9 = ftol();
          uVar10 = ftol();
          uVar11 = ftol();
          uVar12 = ftol();
          if ((dVar33 < _DAT_00563ca0) || (_DAT_00563c98 < dVar33)) {
            if (((_DAT_00563c88 <= dVar33) && (dVar33 <= _DAT_00563c80)) ||
               ((_DAT_00563c78 <= dVar33 && (dVar33 <= _DAT_00563c70)))) {
              piVar16 = (int *)ftol();
              ppiStack_270 = (int **)0x0;
              puVar17 = puStack_26c;
              while( true ) {
                piVar22 = piVar16;
                if ((int)piStack_24c <= (int)piVar16) {
                  piVar22 = piStack_24c;
                }
                if ((int)piVar22 <= (int)ppiStack_270) break;
                if (0 < (int)ppiVar27) {
                  puVar20 = puVar17;
                  for (ppiVar24 = ppiVar27; ppiVar24 != (int **)0x0;
                      ppiVar24 = (int **)((int)ppiVar24 + -1)) {
                    *puVar20 = CONCAT13(uVar12,CONCAT12(uVar9,CONCAT11(uVar10,uVar11)));
                    puVar20 = puVar20 + 1;
                  }
                }
                puVar17 = puVar17 + (int)piStack_244;
                ppiStack_270 = (int **)((int)ppiStack_270 + 1);
              }
              iVar23 = (int)piStack_24c + -1;
              fVar29 = (float10)iVar23;
              while( true ) {
                if ((float10)fVar6 < fVar29) {
                  fVar29 = (float10)fVar6;
                }
                puStack_26c = puVar17;
                if (fVar29 < (float10)(int)ppiStack_270) break;
                iVar14 = ftol();
                puStack_268 = (undefined4 *)0x0;
                fVar29 = extraout_ST1;
                if (0 < (int)ppiVar27) {
                  puVar28 = (undefined1 *)((int)puVar17 + 1);
                  do {
                    if ((iVar14 < 0) || ((int)piStack_24c <= iVar14)) {
                      *(uint *)(puVar28 + -1) =
                           CONCAT13(uVar12,CONCAT12(uVar9,CONCAT11(uVar10,uVar11)));
                    }
                    else if (iVar14 == iVar23) {
                      uVar13 = ftol();
                      puVar28[1] = uVar13;
                      uVar13 = ftol();
                      *puVar28 = uVar13;
                      uVar13 = ftol();
                      puVar28[-1] = uVar13;
                      uVar13 = ftol();
                      puVar28[2] = uVar13;
                      puVar17 = puStack_26c;
                      fVar29 = extraout_ST1_00;
                    }
                    else {
                      uVar13 = ftol();
                      puVar28[1] = uVar13;
                      uVar13 = ftol();
                      *puVar28 = uVar13;
                      uVar13 = ftol();
                      puVar28[-1] = uVar13;
                      uVar13 = ftol();
                      puVar28[2] = uVar13;
                      puVar17 = puStack_26c;
                      fVar29 = extraout_ST1_01;
                    }
                    puVar28 = puVar28 + 4;
                    puStack_268 = (undefined4 *)((int)puStack_268 + 1);
                  } while ((int)puStack_268 < (int)ppiVar27);
                }
                puVar17 = puVar17 + (int)piStack_244;
                ppiStack_270 = (int **)((int)ppiStack_270 + 1);
              }
              puVar25 = puVar25 + (int)ppiStack_270 * iVar15;
              if ((int)ppiStack_270 < (int)piStack_24c) {
                piStack_24c = (int *)((int)piStack_24c - (int)ppiStack_270);
                do {
                  if (0 < (int)ppiVar27) {
                    puVar20 = puVar17;
                    ppiVar24 = ppiVar27;
                    do {
                      *puVar20 = *(undefined4 *)(((int)puVar25 - (int)puVar17) + (int)puVar20);
                      puVar20 = puVar20 + 1;
                      ppiVar24 = (int **)((int)ppiVar24 + -1);
                    } while (ppiVar24 != (int **)0x0);
                  }
                  puVar17 = puVar17 + (int)piStack_244;
                  piStack_24c = (int *)((int)piStack_24c + -1);
                  puVar25 = puVar25 + iVar15;
                } while (piStack_24c != (int *)0x0);
              }
            }
            else if (((_DAT_00563c68 <= dVar33) && (dVar33 <= _DAT_00563c60)) ||
                    ((_DAT_00563c58 <= dVar33 && (dVar33 <= _DAT_00563c50)))) {
              if (0 < (int)piStack_24c) {
                do {
                  ppiVar24 = (int **)0x0;
                  ppiStack_270 = (int **)0x0;
                  if (_DAT_00555910 < dVar1) {
                    puVar17 = puStack_26c;
                    do {
                      ppiVar24 = (int **)((int)ppiVar24 + 1);
                      *puVar17 = *(undefined4 *)(((int)puVar25 - (int)puStack_26c) + (int)puVar17);
                      puVar17 = puVar17 + 1;
                      ppiStack_270 = ppiVar24;
                    } while ((double)(int)ppiVar24 < dVar1);
                  }
                  if ((int)ppiStack_270 < (int)ppiVar27) {
                    puVar28 = (undefined1 *)((int)puStack_26c + (int)ppiStack_270 * 4 + 1);
                    do {
                      iVar23 = ftol();
                      if ((iVar23 < 0) || ((int)ppiVar27 <= iVar23)) {
                        *(uint *)(puVar28 + -1) =
                             CONCAT13(uVar12,CONCAT12(uVar9,CONCAT11(uVar10,uVar11)));
                      }
                      else {
                        if (iVar23 == (int)ppiVar27 + -1) {
                          uVar13 = ftol();
                          puVar28[1] = uVar13;
                          uVar13 = ftol();
                          *puVar28 = uVar13;
                          uVar13 = ftol();
                          puVar28[-1] = uVar13;
                        }
                        else {
                          uVar13 = ftol();
                          puVar28[1] = uVar13;
                          uVar13 = ftol();
                          *puVar28 = uVar13;
                          uVar13 = ftol();
                          puVar28[-1] = uVar13;
                        }
                        uVar13 = ftol();
                        puVar28[2] = uVar13;
                      }
                      ppiStack_270 = (int **)((int)ppiStack_270 + 1);
                      puVar28 = puVar28 + 4;
                    } while ((int)ppiStack_270 < (int)ppiVar27);
                  }
                  puVar25 = puVar25 + iVar15;
                  puStack_26c = puStack_26c + (int)piStack_244;
                  piStack_24c = (int *)((int)piStack_24c + -1);
                } while (piStack_24c != (int *)0x0);
              }
            }
            else if (((_DAT_00563c48 <= dVar33) && (dVar33 <= _DAT_00563c40)) ||
                    ((_DAT_00563c38 <= dVar33 && (dVar33 <= _DAT_00563c30)))) {
              if (0 < (int)piStack_24c) {
                do {
                  puStack_268 = (undefined4 *)0x0;
                  if (_DAT_00555910 <= dVar1) {
                    puVar28 = (undefined1 *)((int)puStack_26c + 1);
                    do {
                      iVar23 = ftol();
                      if ((iVar23 < 0) || ((int)ppiVar27 <= iVar23)) {
                        *(uint *)(puVar28 + -1) =
                             CONCAT13(uVar12,CONCAT12(uVar9,CONCAT11(uVar10,uVar11)));
                      }
                      else if (iVar23 == (int)ppiVar27 + -1) {
                        uVar13 = ftol();
                        puVar28[1] = uVar13;
                        uVar13 = ftol();
                        *puVar28 = uVar13;
                        uVar13 = ftol();
                        puVar28[-1] = uVar13;
                        uVar13 = ftol();
                        puVar28[2] = uVar13;
                      }
                      else {
                        uVar13 = ftol();
                        puVar28[1] = uVar13;
                        uVar13 = ftol();
                        *puVar28 = uVar13;
                        uVar13 = ftol();
                        puVar28[-1] = uVar13;
                        uVar13 = ftol();
                        puVar28[2] = uVar13;
                      }
                      puVar28 = puVar28 + 4;
                      puStack_268 = (undefined4 *)((int)puStack_268 + 1);
                    } while ((double)(int)puStack_268 <= dVar1);
                  }
                  if ((int)puStack_268 < (int)ppiVar27) {
                    puVar17 = puStack_26c + (int)puStack_268;
                    iVar23 = (int)ppiVar27 - (int)puStack_268;
                    do {
                      *puVar17 = *(undefined4 *)(((int)puVar25 - (int)puStack_26c) + (int)puVar17);
                      puVar17 = puVar17 + 1;
                      iVar23 = iVar23 + -1;
                    } while (iVar23 != 0);
                  }
                  puStack_26c = puStack_26c + (int)piStack_244;
                  puVar25 = puVar25 + iVar15;
                  piStack_24c = (int *)((int)piStack_24c + -1);
                } while (piStack_24c != (int *)0x0);
              }
            }
            else {
              dVar34 = _DAT_00563c28;
              if (_DAT_00555910 < dVar33) {
                dVar34 = _DAT_00560f58;
              }
              dVar34 = dVar34 - dVar33;
              iVar23 = 0;
              fVar29 = (float10)fptan((float10)dVar34);
              dVar33 = (double)fVar29;
              dVar7 = _DAT_00557828 / dVar33;
              puVar17 = puVar25;
              if (0 < (int)piStack_24c) {
                do {
                  uStack_1e4 = (double)iVar23;
                  ppiVar24 = ppiVar27;
                  iVar14 = ftol();
                  ppiStack_250 = (int **)(iVar14 + 1);
                  if (dVar34 <= _DAT_00555910) {
                    ppiVar26 = (int **)0x0;
                    if ((int)ppiVar27 <= (int)ppiStack_250) goto LAB_00496eaf;
                  }
                  else {
                    ppiVar26 = ppiStack_250;
                    if ((int)ppiVar27 <= (int)ppiStack_250) {
                      ppiVar26 = ppiVar27;
                    }
LAB_00496eaf:
                    ppiStack_250 = ppiVar27;
                  }
                  ppiStack_270 = (int **)0x0;
                  if (0 < (int)ppiVar26) {
                    puVar20 = puStack_26c;
                    ppiVar27 = ppiVar26;
                    do {
                      *puVar20 = *(undefined4 *)(((int)puVar17 - (int)puStack_26c) + (int)puVar20);
                      puVar20 = puVar20 + 1;
                      ppiVar27 = (int **)((int)ppiVar27 + -1);
                      ppiStack_270 = ppiVar26;
                    } while (ppiVar27 != (int **)0x0);
                  }
                  if ((int)ppiStack_270 < (int)ppiStack_250) {
                    dStack_d4 = dVar33 * dVar1;
                    puStack_268 = (undefined4 *)((int)puStack_26c + (int)ppiStack_270 * 4 + 1);
                    uStack_1fc = dVar33 - dVar7;
                    do {
                      dVar5 = (((uStack_1e4 - (double)(int)ppiStack_270 * dVar7) - dVar2) +
                              dStack_d4) / uStack_1fc;
                      unique0x100007fb = (dVar5 + dVar5) - (double)(int)ppiStack_270;
                      dVar5 = (dVar5 - dVar1) * dVar33 + dVar2;
                      dVar5 = (dVar5 + dVar5) - uStack_1e4;
                      floor(unique0x100007fb);
                      iVar18 = ftol();
                      iVar14 = iVar18;
                      floor(dVar5);
                      iVar19 = ftol();
                      if (((((double)iVar14 < _DAT_00557828) || ((int)ppiVar24 <= iVar18)) ||
                          ((double)iVar19 < _DAT_00557828)) || ((int)piStack_24c <= iVar19)) {
                        *(uint *)((int)puStack_268 + -1) =
                             CONCAT13(uVar12,CONCAT12(uVar9,CONCAT11(uVar10,uVar11)));
                      }
                      else {
                        uStack_238 = uVar11;
                        uStack_237 = uVar10;
                        uStack_236 = uVar9;
                        uStack_235 = uVar12;
                        uStack_234 = uVar11;
                        uStack_233 = uVar10;
                        uStack_232 = uVar9;
                        uStack_231 = uVar12;
                        if (iVar18 < 0) {
                          if (iVar19 < 0) {
                            uVar3 = *puVar25;
                            uStack_234 = (undefined1)uVar3;
                            uStack_233 = (undefined1)((uint)uVar3 >> 8);
                            uStack_232 = (undefined1)((uint)uVar3 >> 0x10);
                            uStack_231 = (undefined1)((uint)uVar3 >> 0x18);
                          }
                          else if (iVar19 < (int)piStack_24c + -1) {
                            uVar3 = puVar25[(iVar19 + 1) * iVar15];
                            uStack_234 = (undefined1)uVar3;
                            uStack_233 = (undefined1)((uint)uVar3 >> 8);
                            uStack_232 = (undefined1)((uint)uVar3 >> 0x10);
                            uStack_231 = (undefined1)((uint)uVar3 >> 0x18);
                          }
                        }
                        else if (iVar18 < (int)ppiVar24 + -1) {
                          if (iVar19 < 0) {
                            uVar3 = puVar25[iVar18];
                            uVar4 = puVar25[iVar18 + 1];
                            uStack_238 = (undefined1)uVar3;
                            uStack_237 = (undefined1)((uint)uVar3 >> 8);
                            uStack_236 = (undefined1)((uint)uVar3 >> 0x10);
                            uStack_235 = (undefined1)((uint)uVar3 >> 0x18);
                            uStack_234 = (undefined1)uVar4;
                            uStack_233 = (undefined1)((uint)uVar4 >> 8);
                            uStack_232 = (undefined1)((uint)uVar4 >> 0x10);
                            uStack_231 = (undefined1)((uint)uVar4 >> 0x18);
                          }
                          else if (iVar19 < (int)piStack_24c + -1) {
                            iVar18 = iVar18 + (iVar19 + 1) * iVar15;
                            uVar3 = puVar25[iVar18];
                            uVar4 = puVar25[iVar18 + 1];
                            uStack_238 = (undefined1)uVar3;
                            uStack_237 = (undefined1)((uint)uVar3 >> 8);
                            uStack_236 = (undefined1)((uint)uVar3 >> 0x10);
                            uStack_235 = (undefined1)((uint)uVar3 >> 0x18);
                            uStack_234 = (undefined1)uVar4;
                            uStack_233 = (undefined1)((uint)uVar4 >> 8);
                            uStack_232 = (undefined1)((uint)uVar4 >> 0x10);
                            uStack_231 = (undefined1)((uint)uVar4 >> 0x18);
                          }
                        }
                        else if (iVar19 < 0) {
                          uVar3 = puVar25[iVar18];
                          uStack_238 = (undefined1)uVar3;
                          uStack_237 = (undefined1)((uint)uVar3 >> 8);
                          uStack_236 = (undefined1)((uint)uVar3 >> 0x10);
                          uStack_235 = (undefined1)((uint)uVar3 >> 0x18);
                        }
                        else if (iVar19 < (int)piStack_24c + -1) {
                          uVar3 = puVar25[(iVar19 + 1) * iVar15 + iVar18];
                          uStack_238 = (undefined1)uVar3;
                          uStack_237 = (undefined1)((uint)uVar3 >> 8);
                          uStack_236 = (undefined1)((uint)uVar3 >> 0x10);
                          uStack_235 = (undefined1)((uint)uVar3 >> 0x18);
                        }
                        uVar13 = ftol();
                        puVar20 = puStack_268;
                        *(undefined1 *)((int)puStack_268 + 1) = uVar13;
                        uVar13 = ftol();
                        *(undefined1 *)puVar20 = uVar13;
                        uVar13 = ftol();
                        *(undefined1 *)((int)puVar20 + -1) = uVar13;
                        uVar13 = ftol();
                        *(undefined1 *)((int)puVar20 + 2) = uVar13;
                        puStack_268 = puVar20;
                      }
                      ppiStack_270 = (int **)((int)ppiStack_270 + 1);
                      puStack_268 = puStack_268 + 1;
                    } while ((int)ppiStack_270 < (int)ppiStack_250);
                  }
                  if ((int)ppiStack_270 < (int)ppiVar24) {
                    puVar20 = puStack_26c + (int)ppiStack_270;
                    iVar14 = (int)ppiVar24 - (int)ppiStack_270;
                    do {
                      *puVar20 = *(undefined4 *)(((int)puVar17 - (int)puStack_26c) + (int)puVar20);
                      puVar20 = puVar20 + 1;
                      iVar14 = iVar14 + -1;
                    } while (iVar14 != 0);
                  }
                  puVar17 = puVar17 + iVar15;
                  puStack_26c = puStack_26c + (int)piStack_244;
                  iVar23 = iVar23 + 1;
                  ppiVar27 = ppiVar24;
                } while (iVar23 < (int)piStack_24c);
              }
            }
          }
          else {
            ppiStack_270 = (int **)0x0;
            dVar33 = _DAT_00555910;
            while (dVar33 < dVar2) {
              if (0 < (int)ppiVar27) {
                puVar17 = puStack_26c;
                ppiVar24 = ppiVar27;
                do {
                  *puVar17 = *(undefined4 *)(((int)puVar25 - (int)puStack_26c) + (int)puVar17);
                  puVar17 = puVar17 + 1;
                  ppiVar24 = (int **)((int)ppiVar24 + -1);
                } while (ppiVar24 != (int **)0x0);
              }
              puStack_26c = puStack_26c + (int)piStack_244;
              ppiStack_270 = (int **)((int)ppiStack_270 + 1);
              puVar25 = puVar25 + iVar15;
              dVar33 = (double)(int)ppiStack_270;
            }
            iVar15 = ftol();
            piVar16 = piStack_24c;
            while( true ) {
              piVar22 = (int *)(1 - iVar15);
              if ((int)piStack_24c <= 1 - iVar15) {
                piVar22 = piStack_24c;
              }
              if ((int)piVar22 <= (int)ppiStack_270) break;
              iVar23 = ftol();
              puStack_268 = (undefined4 *)0x0;
              if (0 < (int)ppiVar27) {
                puVar28 = (undefined1 *)((int)puStack_26c + 1);
                do {
                  if ((iVar23 < 0) || ((int)piStack_24c <= iVar23)) {
                    *(uint *)(puVar28 + -1) =
                         CONCAT13(uVar12,CONCAT12(uVar9,CONCAT11(uVar10,uVar11)));
                  }
                  else if (iVar23 == (int)piStack_24c + -1) {
                    uVar13 = ftol();
                    puVar28[1] = uVar13;
                    uVar13 = ftol();
                    *puVar28 = uVar13;
                    uVar13 = ftol();
                    puVar28[-1] = uVar13;
                    piStack_24c = piVar16;
                    uVar13 = ftol();
                    puVar28[2] = uVar13;
                    piVar16 = piStack_24c;
                  }
                  else {
                    uVar13 = ftol();
                    puVar28[1] = uVar13;
                    uVar13 = ftol();
                    *puVar28 = uVar13;
                    uVar13 = ftol();
                    puVar28[-1] = uVar13;
                    piStack_24c = piVar16;
                    uVar13 = ftol();
                    puVar28[2] = uVar13;
                    piVar16 = piStack_24c;
                  }
                  puStack_268 = (undefined4 *)((int)puStack_268 + 1);
                  puVar28 = puVar28 + 4;
                } while ((int)puStack_268 < (int)ppiVar27);
              }
              puStack_26c = puStack_26c + (int)piStack_244;
              ppiStack_270 = (int **)((int)ppiStack_270 + 1);
            }
            if ((int)ppiStack_270 < (int)piStack_24c) {
              iVar15 = (int)piVar16 - (int)ppiStack_270;
              puVar25 = puStack_26c;
              do {
                if (0 < (int)ppiVar27) {
                  puVar17 = puVar25;
                  for (ppiVar24 = ppiVar27; ppiVar24 != (int **)0x0;
                      ppiVar24 = (int **)((int)ppiVar24 + -1)) {
                    *puVar17 = CONCAT13(uVar12,CONCAT12(uVar9,CONCAT11(uVar10,uVar11)));
                    puVar17 = puVar17 + 1;
                  }
                }
                puVar25 = puVar25 + (int)piStack_244;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
          }
          if (iStack_188 != 0) {
            (**(code **)(*piStack_1dc + 0x38))(piStack_1dc,aLStack_180);
            pvVar21 = GlobalHandle(puStack_18c);
            GlobalUnlock(pvVar21);
            pvVar21 = GlobalHandle(puStack_18c);
            GlobalFree(pvVar21);
          }
          if (piStack_1dc != (int *)0x0) {
            (**(code **)(*piStack_1dc + 8))(piStack_1dc);
          }
          if (iStack_f8 != 0) {
            pvVar21 = GlobalHandle(puStack_fc);
            GlobalUnlock(pvVar21);
            pvVar21 = GlobalHandle(puStack_fc);
            GlobalFree(pvVar21);
          }
          if (piStack_14c != (int *)0x0) {
            (**(code **)(*piStack_14c + 8))(piStack_14c);
          }
          return 0;
        }
      }
LAB_00495eeb:
      if (iStack_174 != 0) {
        (**(code **)(*piStack_1c8 + 0x38))(piStack_1c8,&pvStack_16c);
        pvVar8 = pvStack_178;
        pvVar21 = GlobalHandle(pvStack_178);
        GlobalUnlock(pvVar21);
        pvVar21 = GlobalHandle(pvVar8);
        GlobalFree(pvVar21);
      }
      if (piStack_1c8 != (int *)0x0) {
        (**(code **)(*piStack_1c8 + 8))(piStack_1c8);
      }
      if (iStack_e4 != 0) {
        pvVar21 = GlobalHandle(pvStack_e8);
        GlobalUnlock(pvVar21);
        pvVar21 = GlobalHandle(pvStack_e8);
        GlobalFree(pvVar21);
      }
      if (piStack_138 != (int *)0x0) {
        (**(code **)(*piStack_138 + 8))(piStack_138);
      }
      return iVar14;
    }
  }
LAB_00495dd1:
  pvVar8 = pvStack_b8;
  if (iStack_b4 != 0) {
    pvVar21 = GlobalHandle(pvStack_b8);
    GlobalUnlock(pvVar21);
    pvVar21 = GlobalHandle(pvVar8);
    GlobalFree(pvVar21);
  }
  if (piStack_108 != (int *)0x0) {
    (**(code **)(*piStack_108 + 8))();
  }
  return iVar23;
}


