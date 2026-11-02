/* Module: sfppack2.dll
   Function: FUN_5cd37700
   Address: 5cd37700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cd37700(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  int *piVar7;
  HGLOBAL pvVar8;
  undefined4 uVar9;
  LPVOID pvVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  double *pdVar18;
  code *pcVar19;
  code *pcVar20;
  undefined4 *puVar21;
  int iVar22;
  code *pcVar23;
  float10 fVar24;
  int local_44;
  undefined4 *local_40;
  int local_38;
  int local_34;
  int local_30;
  double *local_2c;
  double local_10;
  
  pvVar8 = GlobalAlloc(0x42,0x818);
  DAT_5cd70a90 = GlobalLock(pvVar8);
  pcVar23 = GlobalHandle_exref;
  if (DAT_5cd70a90 == (double *)0x0) {
    local_44 = 8;
  }
  else {
    pvVar8 = GlobalAlloc(0x42,0x8180);
    DAT_5cd70a94 = GlobalLock(pvVar8);
    if (DAT_5cd70a94 == (LPVOID)0x0) {
      local_44 = 8;
    }
    else {
      pvVar8 = GlobalAlloc(0x42,0x8180);
      DAT_5cd70a98 = GlobalLock(pvVar8);
      if (DAT_5cd70a98 == (LPVOID)0x0) {
        local_44 = 8;
        pcVar19 = GlobalFree_exref;
        pcVar20 = GlobalUnlock_exref;
        goto LAB_5cd3778f;
      }
      pvVar8 = GlobalAlloc(0x42,0x8180);
      DAT_5cd70a9c = GlobalLock(pvVar8);
      if (DAT_5cd70a9c == (LPVOID)0x0) {
        local_44 = 8;
      }
      else {
        pvVar8 = GlobalAlloc(0x42,0x40c);
        DAT_5cd70aa0 = GlobalLock(pvVar8);
        if (DAT_5cd70aa0 == (int *)0x0) {
          local_44 = 8;
        }
        else {
          pvVar8 = GlobalAlloc(0x42,0x818);
          pvVar10 = GlobalLock(pvVar8);
          piVar7 = DAT_5cd70aa0;
          pvVar6 = DAT_5cd70a9c;
          pvVar5 = DAT_5cd70a98;
          pvVar4 = DAT_5cd70a94;
          pdVar14 = DAT_5cd70a90;
          DAT_5cd70aa4 = pvVar10;
          if (pvVar10 == (LPVOID)0x0) {
            local_44 = 8;
          }
          else {
            local_38 = param_2;
            local_34 = param_3;
            if ((DAT_5cd67d9c < (int)param_1) || ((int)param_1 < 3)) {
              local_44 = 0x12;
            }
            else {
              if (param_2 < 1) {
                local_38 = 1;
              }
              if (param_3 < 1) {
                local_34 = 0x10;
              }
              uVar15 = param_1 & 0x80000001;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
              }
              iVar11 = (int)param_1 / 2;
              if (uVar15 == 1) {
                iVar11 = iVar11 + 1;
              }
              *(undefined4 *)((int)DAT_5cd70a98 + 8) = *(undefined4 *)(param_5 + 8);
              *(undefined4 *)((int)pvVar5 + 0xc) = *(undefined4 *)(param_5 + 0xc);
              iVar17 = 1;
              dVar3 = _DAT_5cd514e8 / (double)(iVar11 * local_34);
              local_34 = 1;
              iVar22 = param_6 - param_7;
              puVar16 = (undefined4 *)(param_7 + 8);
              local_40 = (undefined4 *)(param_5 + 8);
              while( true ) {
                iVar17 = iVar17 + 1;
                dVar1 = *(double *)(local_40 + 2);
                dVar2 = *(double *)((int)pvVar5 + iVar17 * 8 + -8);
                *(undefined4 *)((int)pvVar4 + iVar17 * 8 + -8) =
                     *(undefined4 *)(iVar22 + (int)puVar16);
                *(undefined4 *)((int)pvVar4 + iVar17 * 8 + -4) =
                     *(undefined4 *)(iVar22 + 4 + (int)puVar16);
                *(undefined4 *)((int)pvVar6 + iVar17 * 8 + -8) = *puVar16;
                dVar2 = dVar2 + dVar3;
                *(undefined4 *)((int)pvVar6 + iVar17 * 8 + -4) = puVar16[1];
                *(double *)((int)pvVar5 + iVar17 * 8) = dVar2;
                if (dVar2 <= dVar1) {
                  puVar21 = (undefined4 *)((int)pvVar6 + iVar17 * 8);
                  do {
                    iVar17 = iVar17 + 1;
                    *(undefined4 *)(((int)pvVar4 - (int)pvVar6) + (int)puVar21) =
                         *(undefined4 *)(iVar22 + (int)puVar16);
                    *(undefined4 *)(((int)pvVar4 - (int)pvVar6) + 4 + (int)puVar21) =
                         *(undefined4 *)(iVar22 + 4 + (int)puVar16);
                    *puVar21 = *puVar16;
                    dVar2 = dVar2 + dVar3;
                    puVar21[1] = puVar16[1];
                    puVar21 = puVar21 + 2;
                    *(double *)(((int)pvVar5 - (int)pvVar6) + (int)puVar21) = dVar2;
                  } while (dVar2 <= dVar1);
                }
                puVar21 = puVar16 + 2;
                *(double *)((int)pvVar5 + iVar17 * 8 + -8) = dVar1;
                *(undefined4 *)((int)pvVar4 + iVar17 * 8 + -8) =
                     *(undefined4 *)(iVar22 + -8 + (int)puVar21);
                *(undefined4 *)((int)pvVar4 + iVar17 * 8 + -4) =
                     *(undefined4 *)(iVar22 + -4 + (int)puVar21);
                *(undefined4 *)((int)pvVar6 + iVar17 * 8 + -8) = *puVar16;
                *(undefined4 *)((int)pvVar6 + iVar17 * 8 + -4) = puVar16[1];
                local_34 = local_34 + 1;
                if (local_38 < local_34) break;
                *(undefined4 *)((int)pvVar5 + iVar17 * 8) = local_40[4];
                *(undefined4 *)((int)pvVar5 + iVar17 * 8 + 4) = local_40[5];
                puVar16 = puVar21;
                local_40 = local_40 + 4;
              }
              local_30 = iVar17 + -1;
              if ((uVar15 == 0) && (_DAT_5cd514e8 - dVar3 < *(double *)((int)pvVar5 + local_30 * 8))
                 ) {
                local_30 = iVar17 + -2;
              }
              if ((uVar15 != 1) && (0 < local_30)) {
                pdVar12 = (double *)((int)pvVar4 + 8);
                iVar17 = local_30;
                do {
                  pdVar13 = pdVar12 + 1;
                  iVar17 = iVar17 + -1;
                  fVar24 = (float10)fcos((float10)*(double *)
                                                   (((int)pvVar5 - (int)pvVar4) + (int)pdVar12) *
                                         (float10)_DAT_5cd51720);
                  *pdVar12 = (double)((float10)*pdVar12 / fVar24);
                  *(double *)((int)pvVar6 + (-8 - (int)pvVar4) + (int)pdVar13) =
                       (double)(fVar24 * (float10)*(double *)
                                                   ((int)pvVar6 + (-8 - (int)pvVar4) + (int)pdVar13)
                               );
                  pdVar12 = pdVar13;
                } while (iVar17 != 0);
              }
              local_44 = FUN_5cd37d40(&local_10,(int)pvVar4,(int)pvVar5,(int)pvVar6,local_30,piVar7,
                                      (int)pvVar10,iVar11);
              pcVar23 = GlobalHandle_exref;
              if (local_44 == 0) {
                if (uVar15 == 0) {
                  pdVar12 = (double *)((int)pvVar10 + iVar11 * 8);
                  pdVar14[1] = *(double *)((int)pvVar10 + iVar11 * 8) * _DAT_5cd594d0;
                  if (1 < iVar11 + -1) {
                    pdVar13 = (double *)((int)pvVar10 + iVar11 * 8 + -8);
                    iVar17 = iVar11 + -2;
                    pdVar18 = pdVar14 + 2;
                    do {
                      dVar3 = *pdVar12;
                      dVar1 = *pdVar13;
                      pdVar12 = pdVar12 + -1;
                      pdVar13 = pdVar13 + -1;
                      iVar17 = iVar17 + -1;
                      *pdVar18 = (dVar3 + dVar1) * _DAT_5cd594d0;
                      pdVar18 = pdVar18 + 1;
                    } while (iVar17 != 0);
                  }
                  pdVar14[iVar11] =
                       *(double *)((int)pvVar10 + 8) * _DAT_5cd514e8 +
                       *(double *)((int)pvVar10 + 0x10) * _DAT_5cd594d0;
                }
                else {
                  iVar17 = iVar11 + -1;
                  if (iVar17 < 1) {
                    *(undefined4 *)(pdVar14 + iVar11) = *(undefined4 *)((int)pvVar10 + 8);
                    *(undefined4 *)((int)pdVar14 + iVar11 * 8 + 4) =
                         *(undefined4 *)((int)pvVar10 + 0xc);
                  }
                  else {
                    pdVar12 = (double *)((int)pvVar10 + iVar11 * 8);
                    pdVar13 = pdVar14;
                    do {
                      pdVar13 = pdVar13 + 1;
                      dVar3 = *pdVar12;
                      pdVar12 = pdVar12 + -1;
                      iVar17 = iVar17 + -1;
                      *pdVar13 = dVar3 * _DAT_5cd514e8;
                    } while (iVar17 != 0);
                    *(undefined4 *)(pdVar14 + iVar11) = *(undefined4 *)((int)pvVar10 + 8);
                    *(undefined4 *)((int)pdVar14 + iVar11 * 8 + 4) =
                         *(undefined4 *)((int)pvVar10 + 0xc);
                  }
                }
                *(uint *)(param_4 + 8) = param_1;
                pvVar8 = GlobalAlloc(0x42,param_1 * 8);
                pdVar12 = GlobalLock(pvVar8);
                *(double **)(param_4 + 4) = pdVar12;
                if (pdVar12 == (double *)0x0) {
                  local_44 = 8;
                  pcVar23 = GlobalHandle_exref;
                }
                else {
                  if (0 < iVar11) {
                    pdVar13 = pdVar12 + (param_1 - 1);
                    do {
                      pdVar14 = pdVar14 + 1;
                      dVar3 = *pdVar14;
                      *pdVar13 = dVar3;
                      *pdVar12 = dVar3;
                      pdVar13 = pdVar13 + -1;
                      iVar11 = iVar11 + -1;
                      pdVar12 = pdVar12 + 1;
                    } while (iVar11 != 0);
                  }
                  iVar11 = 1;
                  pcVar23 = GlobalHandle_exref;
                  if (0 < local_38) {
                    local_2c = (double *)(param_8 + 8);
                    do {
                      iVar17 = iVar11 + 3;
                      if (local_38 < iVar11 + 3) {
                        iVar17 = local_38;
                      }
                      if (iVar11 <= iVar17) {
                        iVar17 = (iVar17 - iVar11) + 1;
                        pdVar14 = local_2c;
                        do {
                          pdVar12 = (double *)((param_6 - param_8) + (int)pdVar14);
                          iVar17 = iVar17 + -1;
                          fVar24 = (float10)local_10 /
                                   (float10)*(double *)((int)pdVar12 + (param_7 - param_6));
                          *pdVar14 = (double)fVar24;
                          fVar24 = (float10)log2(fVar24 + (float10)*pdVar12);
                          *pdVar14 = (double)((float10)0.3010299956639812 * fVar24 *
                                             (float10)_DAT_5cd514d0);
                          pdVar14 = pdVar14 + 1;
                        } while (iVar17 != 0);
                      }
                      iVar11 = iVar11 + 4;
                      local_2c = local_2c + 4;
                      pcVar23 = GlobalHandle_exref;
                    } while (iVar11 <= local_38);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar19 = GlobalFree_exref;
  pcVar20 = GlobalUnlock_exref;
  if (DAT_5cd70a98 != (LPVOID)0x0) {
    pvVar8 = (HGLOBAL)(*pcVar23)(DAT_5cd70a98);
    pcVar20 = GlobalUnlock_exref;
    GlobalUnlock(pvVar8);
    pvVar8 = (HGLOBAL)(*pcVar23)(DAT_5cd70a98);
    pcVar19 = GlobalFree_exref;
    GlobalFree(pvVar8);
  }
LAB_5cd3778f:
  if (DAT_5cd70a90 != (double *)0x0) {
    uVar9 = (*pcVar23)(DAT_5cd70a90);
    (*pcVar20)(uVar9);
    uVar9 = (*pcVar23)(DAT_5cd70a90);
    (*pcVar19)(uVar9);
  }
  if (DAT_5cd70a94 != (LPVOID)0x0) {
    uVar9 = (*pcVar23)(DAT_5cd70a94);
    (*pcVar20)(uVar9);
    uVar9 = (*pcVar23)(DAT_5cd70a94);
    (*pcVar19)(uVar9);
  }
  if (DAT_5cd70aa4 != (LPVOID)0x0) {
    uVar9 = (*pcVar23)(DAT_5cd70aa4);
    (*pcVar20)(uVar9);
    uVar9 = (*pcVar23)(DAT_5cd70aa4);
    (*pcVar19)(uVar9);
  }
  if (DAT_5cd70aa0 != (int *)0x0) {
    uVar9 = (*pcVar23)(DAT_5cd70aa0);
    (*pcVar20)(uVar9);
    uVar9 = (*pcVar23)(DAT_5cd70aa0);
    (*pcVar19)(uVar9);
  }
  if (DAT_5cd70a9c != (LPVOID)0x0) {
    uVar9 = (*pcVar23)(DAT_5cd70a9c);
    (*pcVar20)(uVar9);
    uVar9 = (*pcVar23)(DAT_5cd70a9c);
    (*pcVar19)(uVar9);
  }
  return local_44;
}


