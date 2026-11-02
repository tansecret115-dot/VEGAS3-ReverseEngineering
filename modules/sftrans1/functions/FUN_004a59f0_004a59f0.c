/* Module: sftrans1.dll
   Function: FUN_004a59f0
   Address: 004a59f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a5cc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004a59f0(int param_1,int param_2)

{
  bool bVar1;
  double dVar2;
  LPVOID pvVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LPVOID *ppvVar12;
  HGLOBAL pvVar13;
  undefined1 uVar18;
  int *piVar14;
  int iVar15;
  LPVOID *ppvVar16;
  int iVar17;
  int iVar19;
  int *unaff_ESI;
  undefined1 *puVar20;
  int unaff_EDI;
  int *piVar21;
  LPCVOID *ppvVar22;
  byte *pbVar23;
  float10 fVar24;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  int iVar25;
  int *piVar26;
  LPVOID *ppvVar27;
  int *piVar28;
  int iVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  int iVar32;
  byte **ppbStack_27c;
  undefined4 *puStack_278;
  int iStack_274;
  undefined4 *puStack_270;
  int iStack_26c;
  int iStack_268;
  int *piStack_264;
  undefined8 uStack_254;
  int *piStack_230;
  byte *pbStack_224;
  int *local_220;
  int *piStack_21c;
  int *piStack_218;
  undefined1 uStack_214;
  undefined1 uStack_213;
  undefined1 uStack_212;
  byte bStack_211;
  double dStack_20c;
  undefined8 local_1f8;
  LPVOID apvStack_1f0 [2];
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  tagRECT tStack_1c4;
  undefined4 uStack_1b4;
  int *piStack_1a8;
  int iStack_198;
  int iStack_190;
  undefined4 auStack_18c [2];
  undefined4 uStack_184;
  LPCVOID apvStack_17c [3];
  int iStack_170;
  int iStack_16c;
  undefined1 auStack_168 [8];
  undefined4 uStack_160;
  LPVOID pvStack_158;
  int iStack_154;
  int iStack_150;
  LPVOID pvStack_14c;
  undefined4 uStack_148;
  tagRECT tStack_144;
  double dStack_134;
  int *piStack_124;
  undefined1 auStack_118 [16];
  int *piStack_108;
  int *piStack_e4;
  LPCVOID pvStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  LPCVOID local_b8;
  int iStack_b4;
  undefined4 uStack_9c;
  LPVOID pvStack_94;
  int iStack_90;
  int aiStack_8c [5];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  piVar14 = (int *)(*(int *)(param_2 + 100) - *(int *)(param_2 + 0x60));
  local_220 = (int *)(*(int *)(param_2 + 0x5c) - *(int *)(param_2 + 0x58));
  if ((int)piVar14 <= (int)local_220) {
    local_220 = piVar14;
  }
  piVar14 = *(int **)(*(int *)(param_1 + 0xa0) + 4);
  local_c8 = 0;
  local_c0 = 0;
  piStack_264 = (int *)0x0;
  ppvVar22 = &local_b8;
  for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
    *ppvVar22 = (LPCVOID)0x0;
    ppvVar22 = ppvVar22 + 1;
  }
  puStack_278 = (undefined4 *)(param_2 + 8);
  local_1f8 = (double)(int)local_220 * _DAT_005652a8;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  iStack_274 = 0;
  iVar15 = (**(code **)(*piVar14 + 0x28))();
  if (-1 < iVar15) {
    if (puStack_278 == (undefined4 *)0x0) {
      (**(code **)(*unaff_ESI + 0x1c))();
      FUN_0046eef0();
    }
    else {
      FUN_0045df30();
    }
    iVar15 = (**(code **)(*unaff_ESI + 0x18))(unaff_ESI);
    if (-1 < iVar15) {
      if (piVar14 == (int *)0x60001) {
        (**(code **)(*piStack_e4 + 0x10))();
        pvStack_94 = (LPVOID)uStack_1cc;
        uStack_9c = uStack_1d4._4_4_;
        piVar21 = unaff_ESI;
      }
      else {
        aiStack_8c[0] = FUN_0046eed0();
        aiStack_8c[0] = aiStack_8c[0] << 2;
        iVar15 = FUN_0046eee0();
        iVar29 = FUN_0046eed0();
        pvVar13 = GlobalAlloc(0x40,iVar15 * iVar29 * 4);
        pvStack_94 = GlobalLock(pvVar13);
        if (pvStack_94 == (LPVOID)0x0) {
          pvStack_94 = (LPVOID)0x0;
        }
        else {
          FUN_004029a0(pvStack_94,4);
        }
        if (pvStack_94 == (LPVOID)0x0) {
          iVar15 = -0x7ff8fff2;
          pvStack_94 = (LPCVOID)0x0;
          goto LAB_004a5ceb;
        }
        iStack_90 = 1;
        uStack_1cc = (double)CONCAT44(1,pvStack_94);
        FUN_0046eff0();
        OffsetRect(&tStack_1c4,-(int)pvStack_d4,-iStack_cc);
        uStack_1b4 = 0;
        (**(code **)(*piStack_e4 + 0x2c))();
        piVar21 = piStack_264;
      }
      FUN_0046ee70(piVar21,aiStack_8c);
      piVar21 = _UNK_00554898;
      auStack_18c[0] = 0;
      uStack_184 = 0;
      ppvVar22 = apvStack_17c;
      for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
        *ppvVar22 = (LPCVOID)0x0;
        ppvVar22 = ppvVar22 + 1;
      }
      tStack_144.right = 0;
      puVar30 = &DAT_00554800;
      iVar29 = 1;
      tStack_144.bottom = 0;
      dStack_134 = (double)((ulonglong)dStack_134 & 0xffffffff00000000);
      piVar28 = _UNK_00554898;
      iVar15 = (**(code **)(*_UNK_00554898 + 0x28))
                         (_UNK_00554898,uStack_254._4_4_,0,1,&DAT_00554800,auStack_18c,0);
      if (-1 < iVar15) {
        FUN_0045df30(&DAT_005547f0);
        iVar15 = (**(code **)(*piVar21 + 0x18))(piVar21,auStack_118,&piStack_264);
        if (-1 < iVar15) {
          if (piStack_264 == (int *)0x60001) {
            ppvVar16 = apvStack_1f0;
            (**(code **)(*piStack_1a8 + 0x10))(piStack_1a8);
            pvStack_158 = apvStack_1f0[0];
            uStack_160 = local_1f8._4_4_;
            FUN_0046ee70(piVar21,&tStack_144.bottom);
          }
          else {
            iStack_150 = FUN_0046eed0();
            iStack_150 = iStack_150 << 2;
            iVar15 = FUN_0046eee0();
            iVar8 = FUN_0046eed0();
            pvVar13 = GlobalAlloc(0x40,iVar15 * iVar8 * 4);
            pvStack_158 = GlobalLock(pvVar13);
            if (pvStack_158 == (LPVOID)0x0) {
              pvStack_158 = (LPVOID)0x0;
            }
            else {
              FUN_004029a0(pvStack_158,4,iVar15 * iVar8,&LAB_0046f010);
            }
            if (pvStack_158 == (LPVOID)0x0) {
              iVar15 = -0x7ff8fff2;
              pvStack_158 = (LPCVOID)0x0;
              goto LAB_004a5e1e;
            }
            iStack_154 = 1;
            uStack_148 = 1;
            pvStack_14c = pvStack_158;
            FUN_0046eff0(&tStack_144);
            OffsetRect(&tStack_144,-iStack_198,-iStack_190);
            ppvVar16 = &pvStack_14c;
            dStack_134 = (double)((ulonglong)dStack_134 & 0xffffffff00000000);
            (**(code **)(*piStack_1a8 + 0x2c))(piStack_1a8);
            FUN_0046ee70(piVar21,&tStack_144.bottom);
          }
          puVar31 = puVar30;
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar30 + 0x69));
          if (puVar30[0x52] == 0) {
            (**(code **)(puVar30[0x3c] + 0x24))(puVar30 + 0x78);
          }
          else {
            (**(code **)(puVar30[0x3c] + 0x28))
                      (puVar30 + 0x78,puVar30 + 0x56,puVar30 + 0x5e,puVar30[0x54]);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar30 + 0x69));
          bVar1 = *(double *)(puVar30 + 0x4e) < _DAT_00557838;
          iStack_1e4 = puVar30[0x78];
          iVar6 = ftol();
          iVar8 = iVar6;
          puVar30 = (undefined4 *)ftol();
          fVar24 = (float10)_CIpow();
          uStack_1d4 = (double)(fVar24 + (float10)_DAT_00555908);
          fVar24 = (float10)_CIpow();
          uStack_1cc = (double)((fVar24 * (float10)_DAT_005652a0) / (float10)uStack_254);
          _CIpow();
          _CIpow();
          iVar7 = ftol();
          iVar15 = 0x10000 - iVar7;
          if (iVar6 == iVar29) {
            iVar6 = iVar6 + -1;
            iVar8 = iVar6;
          }
          if (puVar30 == puVar31) {
            puVar30 = (undefined4 *)((int)puVar30 + -1);
          }
          bVar5 = 0;
          ppbStack_27c = &pbStack_224;
          iVar25 = 0;
          iVar32 = 0;
          ppvVar27 = ppvVar16;
          iStack_1e8 = iVar15;
          do {
            if ((((bVar5 == 1) || (bVar5 == 3)) && (iVar6 == iVar29 + -1)) ||
               (((bVar5 == 2 || (bVar5 == 3)) && (puVar30 == (undefined4 *)((int)puVar31 + -1)))))
            goto LAB_004a6762;
            piVar26 = piVar14;
            piVar21 = piVar28;
            switch(iVar32) {
            case 0:
              unaff_ESI = (int *)0xffffffff;
              unaff_EDI = -1;
              piStack_264 = (int *)(iVar6 + 1);
              ppvVar16 = (LPVOID *)((int)puVar30 + 1);
              ppvVar27 = ppvVar16;
              puStack_278 = puVar30;
              iStack_274 = iVar6;
              break;
            case 1:
              piStack_264 = (int *)((iVar29 - iVar6) + -1);
              unaff_ESI = (int *)0x1;
              unaff_EDI = -1;
              ppvVar16 = (LPVOID *)((int)puVar30 + 1);
              ppvVar27 = ppvVar16;
              puStack_278 = puVar30;
              iStack_274 = iVar6 + 1;
              break;
            case 2:
              unaff_ESI = (int *)0xffffffff;
              piStack_264 = (int *)(iVar6 + 1);
              iStack_274 = iVar6;
              goto LAB_004a622f;
            case 3:
              unaff_ESI = (int *)0x1;
              piStack_264 = (int *)((iVar29 - iVar6) + -1);
              iStack_274 = iVar6 + 1;
LAB_004a622f:
              puStack_278 = (undefined4 *)((int)puVar30 + 1);
              unaff_EDI = 1;
              ppvVar16 = (LPVOID *)((int)puVar31 + (-1 - (int)puVar30));
              piVar26 = piVar14 + ((int)(iStack_cc + (iStack_cc >> 0x1f & 3U)) >> 2);
              ppvVar27 = ppvVar16;
              piVar21 = piVar28 + ((int)(iStack_16c + (iStack_16c >> 0x1f & 3U)) >> 2);
            }
            piVar21 = piVar21 + ((int)(iStack_16c + (iStack_16c >> 0x1f & 3U)) >> 2) * (int)puVar30;
            piVar26 = piVar26 + ((int)(iStack_cc + (iStack_cc >> 0x1f & 3U)) >> 2) * (int)puVar30;
            *(undefined1 *)((int)piVar21 + iVar6 * 4 + 2) =
                 *(undefined1 *)((int)piVar26 + iVar6 * 4 + 2);
            *(undefined1 *)((int)piVar21 + iVar6 * 4 + 1) =
                 *(undefined1 *)((int)piVar26 + iVar6 * 4 + 1);
            *(char *)(piVar21 + iVar6) = (char)piVar26[iVar6];
            *(undefined1 *)((int)piVar21 + iVar6 * 4 + 3) =
                 *(undefined1 *)((int)piVar26 + iVar6 * 4 + 3);
            puStack_270 = puStack_278;
            bVar5 = (byte)((uint)iVar25 >> 0x18);
            if (0 < (int)ppvVar16) {
              iStack_26c = (int)puVar30 - (int)puStack_278;
              iVar6 = iVar8;
              ppvVar12 = ppvVar16;
              do {
                ppvVar16 = ppvVar27;
                iStack_268 = iStack_274;
                if (0 < (int)piStack_264) {
                  iStack_1dc = -(int)unaff_ESI;
                  iVar8 = iVar6 - iStack_274;
                  pbVar23 = (byte *)(piVar26 + iStack_274);
                  iVar19 = (int)piVar26 - (int)piVar21;
                  puVar20 = (undefined1 *)((int)piVar21 + iStack_274 * 4 + 2);
                  piStack_230 = piStack_264;
                  do {
                    if (iStack_1e4 == 0) {
                      dVar2 = (double)iStack_26c * uStack_1cc;
LAB_004a639f:
                      dVar2 = dVar2 + (double)(int)puStack_270;
                    }
                    else {
                      dVar2 = SQRT((double)(iStack_26c * iStack_26c + iVar8 * iVar8));
                      if (uStack_1d4 < dVar2) {
                        dVar2 = (double)iStack_26c * (uStack_1d4 / dVar2);
                        goto LAB_004a639f;
                      }
                      dVar2 = (double)(int)puVar30;
                    }
                    if (bVar1) {
                      iVar15 = iStack_16c + (iStack_16c >> 0x1f & 3U);
                      iVar9 = ftol();
                      iVar10 = ftol();
                      iVar10 = (iVar15 >> 2) * iVar9 + iVar10;
                      pbVar4 = (byte *)(piVar28 + iVar10);
                      *puVar20 = (char)((uint)(byte)puVar20[iVar19] * iStack_1e8 +
                                        (uint)*(byte *)((int)piVar28 + iVar10 * 4 + 2) * iVar7 >>
                                       0x10);
                      puVar20[-1] = (char)((uint)pbVar4[1] * iVar7 + (uint)pbVar23[1] * iStack_1e8
                                          >> 0x10);
                      puVar20[-2] = (char)((uint)*pbVar4 * iVar7 + (uint)*pbVar23 * iStack_1e8 >>
                                          0x10);
                      uVar18 = (undefined1)
                               ((uint)pbVar4[3] * iVar7 + (uint)pbVar23[3] * iStack_1e8 >> 0x10);
                      iVar15 = iStack_1e8;
                    }
                    else {
                      iVar9 = ftol();
                      dStack_134 = (double)(extraout_ST1 - (float10)iVar9);
                      iVar10 = ftol();
                      dStack_20c = (double)(extraout_ST0 - (float10)iVar10);
                      iStack_1d8 = ftol();
                      iStack_1d8 = 0x100 - iStack_1d8;
                      iStack_1e0 = ftol();
                      iStack_1e0 = 0x100 - iStack_1e0;
                      iVar11 = (int)(iStack_16c + (iStack_16c >> 0x1f & 3U)) >> 2;
                      iVar17 = iVar11 * iVar10 + iVar9;
                      pbStack_224 = (byte *)(piVar28 + iVar17);
                      if ((iVar9 == iVar29 + -1) || (iVar10 == (int)puVar31 + -1)) {
                        piStack_218 = (int *)&stack0xfffffd7c;
                        if (iVar9 == iVar29 + -1) {
                          local_220 = (int *)&stack0xfffffd7c;
                        }
                        else {
                          local_220 = piVar28 + iVar17 + 1;
                        }
                        if (iVar10 == (int)puVar31 + -1) {
                          piStack_21c = (int *)&stack0xfffffd7c;
                        }
                        else {
                          piStack_21c = piVar28 + iVar11 + iVar17;
                        }
                      }
                      else {
                        local_220 = piVar28 + iVar17 + 1;
                        piStack_21c = piVar28 + iVar17 + iVar11;
                        piStack_218 = piVar28 + iVar17 + iVar11 + 1;
                      }
                      pbVar4 = pbStack_224;
                      if (((ABS(extraout_ST0_00 - (float10)iStack_268) < (float10)_DAT_00555908) &&
                          (ABS(dVar2 - (double)(int)puStack_270) < _DAT_00555908)) &&
                         ((dStack_134 != _DAT_00555910 ||
                          (pbVar4 = pbVar23, dStack_20c != _DAT_00555910)))) {
                        *ppbStack_27c = pbVar23;
                        pbVar4 = pbStack_224;
                      }
                      pbStack_224 = pbVar4;
                      FUN_004a56f0(&uStack_214,&pbStack_224,iStack_1d8,iStack_1e0);
                      *puVar20 = (char)((uint)(byte)puVar20[iVar19] * iVar15 +
                                        (CONCAT11(bStack_211,uStack_212) & 0xff) * iVar7 >> 0x10);
                      puVar20[-1] = (char)((uint)pbVar23[1] * iVar15 +
                                           (CONCAT12(bStack_211,CONCAT11(uStack_212,uStack_213)) &
                                           0xff) * iVar7 >> 0x10);
                      puVar20[-2] = (char)((uint)*pbVar23 * iVar15 +
                                           (CONCAT12(uStack_212,CONCAT11(uStack_213,uStack_214)) &
                                           0xff) * iVar7 >> 0x10);
                      uVar18 = (undefined1)
                               ((uint)bStack_211 * iVar7 + (uint)pbVar23[3] * iVar15 >> 0x10);
                    }
                    puVar20[1] = uVar18;
                    iStack_268 = iStack_268 + (int)unaff_ESI;
                    pbVar23 = pbVar23 + (int)unaff_ESI * 4;
                    puVar20 = puVar20 + (int)unaff_ESI * 4;
                    iVar8 = iVar8 + iStack_1dc;
                    piStack_230 = (int *)((int)piStack_230 + -1);
                  } while (piStack_230 != (int *)0x0);
                }
                bVar5 = (byte)((uint)iVar25 >> 0x18);
                puStack_270 = (undefined4 *)((int)puStack_270 + unaff_EDI);
                piVar21 = piVar21 + ((int)(iStack_16c + (iStack_16c >> 0x1f & 3U)) >> 2) * unaff_EDI
                ;
                piVar26 = piVar26 + ((int)(iStack_cc + (iStack_cc >> 0x1f & 3U)) >> 2) * unaff_EDI;
                iStack_26c = iStack_26c - unaff_EDI;
                ppvVar12 = (LPVOID *)((int)ppvVar12 + -1);
                ppvVar27 = ppvVar16;
                iVar8 = iVar6;
              } while (ppvVar12 != (LPVOID *)0x0);
            }
LAB_004a6762:
            bVar5 = bVar5 + 1;
            iVar32 = iVar32 + 1;
            iVar25 = (uint)bVar5 << 0x18;
            ppbStack_27c = ppbStack_27c + 1;
            if (3 < bVar5) {
              if (iStack_170 != 0) {
                (**(code **)(*(int *)tStack_1c4.left + 0x38))(tStack_1c4.left,auStack_168);
                pvVar13 = GlobalHandle(apvStack_17c[2]);
                GlobalUnlock(pvVar13);
                pvVar13 = GlobalHandle(apvStack_17c[2]);
                GlobalFree(pvVar13);
              }
              if ((int *)tStack_1c4.left != (int *)0x0) {
                (**(code **)(*(int *)tStack_1c4.left + 8))(tStack_1c4.left);
              }
              if (iStack_d0 != 0) {
                pvVar13 = GlobalHandle(pvStack_d4);
                GlobalUnlock(pvVar13);
                pvVar13 = GlobalHandle(pvStack_d4);
                GlobalFree(pvVar13);
              }
              if (piStack_124 != (int *)0x0) {
                (**(code **)(*piStack_124 + 8))(piStack_124);
              }
              return 0;
            }
          } while( true );
        }
      }
LAB_004a5e1e:
      if (iStack_154 != 0) {
        (**(code **)(*piStack_1a8 + 0x38))(piStack_1a8,&pvStack_14c);
        pvVar3 = pvStack_158;
        pvVar13 = GlobalHandle(pvStack_158);
        GlobalUnlock(pvVar13);
        pvVar13 = GlobalHandle(pvVar3);
        GlobalFree(pvVar13);
      }
      if (piStack_1a8 != (int *)0x0) {
        (**(code **)(*piStack_1a8 + 8))(piStack_1a8);
      }
      if (iStack_b4 != 0) {
        pvVar13 = GlobalHandle(local_b8);
        GlobalUnlock(pvVar13);
        pvVar13 = GlobalHandle(local_b8);
        GlobalFree(pvVar13);
      }
      if (piStack_108 != (int *)0x0) {
        (**(code **)(*piStack_108 + 8))(piStack_108);
      }
      return iVar15;
    }
  }
LAB_004a5ceb:
  pvVar3 = pvStack_94;
  if (iStack_90 != 0) {
    pvVar13 = GlobalHandle(pvStack_94);
    GlobalUnlock(pvVar13);
    pvVar13 = GlobalHandle(pvVar3);
    GlobalFree(pvVar13);
  }
  if (piStack_e4 != (int *)0x0) {
    (**(code **)(*piStack_e4 + 8))();
  }
  return iVar15;
}


