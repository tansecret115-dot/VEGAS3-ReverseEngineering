/* Module: vidpcore.dll
   Function: FUN_5de902a0
   Address: 5de902a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5de902a0(int param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,uint param_6,
            int *param_7)

{
  undefined4 *puVar1;
  LPCVOID pMem;
  longlong lVar2;
  float fVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  LPVOID pMem_00;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  SIZE_T dwBytes;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uStack00000020;
  int local_58;
  int local_54;
  LPCVOID local_4c;
  LPCVOID local_48;
  int local_44 [4];
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  local_14 = *(int *)(param_1 + 8);
  local_34 = *(int *)(param_1 + 0x1c);
  local_20 = *(int *)(param_1 + 0x28);
  local_10 = *(int *)(param_1 + 0x3c);
  local_8 = *(int *)(param_1 + 0x34);
  local_c = *(int *)(param_1 + 0x38);
  local_28 = ftol();
  fVar3 = (float)param_2 / (float)(double)CONCAT44(param_6,param_5);
  piVar7 = local_44;
  iVar17 = 4;
  do {
    pvVar4 = GlobalAlloc(0x40,0x400);
    pvVar5 = GlobalLock(pvVar4);
    *piVar7 = (int)pvVar5;
    piVar7 = piVar7 + 1;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  if (param_7 == (int *)0x0) {
    FUN_5de8f1b0(&local_58,fVar3,param_3);
  }
  else {
    FUN_5de8f390(&local_58,fVar3,param_3);
  }
  iVar13 = local_54;
  iVar17 = local_58;
  dwBytes = local_58 * 4 * local_54;
  pvVar4 = GlobalAlloc(0x40,dwBytes);
  pvVar5 = GlobalLock(pvVar4);
  pvVar4 = GlobalAlloc(0x40,dwBytes);
  pMem_00 = GlobalLock(pvVar4);
  iVar16 = 0;
  if (0 < iVar13 * iVar17) {
    do {
      puVar1 = (undefined4 *)((int)pMem_00 + iVar16 * 4);
      uVar6 = ftol();
      *(undefined4 *)((int)puVar1 + ((int)pvVar5 - (int)pMem_00)) = uVar6;
      uVar6 = ftol();
      iVar16 = iVar16 + 1;
      *puVar1 = uVar6;
    } while (iVar16 < iVar13 * iVar17);
  }
  if ((param_4 == 4) && (param_1 = 0, 0 < local_c)) {
    do {
      iVar17 = 0;
      do {
        piVar7 = local_44;
        iVar13 = 4;
        do {
          iVar16 = *piVar7;
          piVar7 = piVar7 + 1;
          iVar13 = iVar13 + -1;
          *(undefined4 *)(iVar16 + iVar17) = 0;
        } while (iVar13 != 0);
        iVar17 = iVar17 + 4;
      } while (iVar17 < 0x400);
      uVar8 = 1 - local_54;
      if ((int)uVar8 < local_54) {
        iVar17 = (uVar8 + param_1) * local_10 + local_20;
        local_1c = ((local_c - uVar8) - param_1) - 1;
        do {
          local_24 = param_1 + uVar8;
          uVar18 = 1 - local_58;
          if ((int)uVar18 < local_58) {
            uStack00000020 = iVar17 + uVar18 * 4;
            uVar10 = local_8 - uVar18;
            do {
              uVar10 = uVar10 - 1;
              if (-1 < (int)(local_1c | uVar10 | uVar18 | param_1 + uVar8)) {
                iVar13 = 0;
                param_3 = local_44;
                do {
                  piVar7 = (int *)(*param_3 + (uint)*(byte *)(uStack00000020 + iVar13) * 4);
                  iVar13 = iVar13 + 1;
                  param_3 = param_3 + 1;
                  *piVar7 = *piVar7 + *(int *)((int)pvVar5 +
                                              (((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))
                                               * local_58 +
                                              ((uVar18 ^ (int)uVar18 >> 0x1f) -
                                              ((int)uVar18 >> 0x1f))) * 4);
                } while (iVar13 < 4);
              }
              uVar18 = uVar18 + 1;
              uStack00000020 = uStack00000020 + 4;
            } while ((int)uVar18 < local_58);
          }
          uVar8 = uVar8 + 1;
          iVar17 = iVar17 + local_10;
          local_1c = local_1c - 1;
        } while ((int)uVar8 < local_54);
      }
      param_2 = local_44;
      param_6 = 0;
      do {
        iVar17 = 0;
        iVar13 = 0x100;
        piVar7 = (int *)*param_2;
        piVar11 = piVar7;
        do {
          iVar16 = *piVar11;
          piVar11 = piVar11 + 1;
          iVar17 = iVar17 + iVar16;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        lVar2 = (longlong)local_28 * (longlong)(iVar17 + -0x2000);
        local_2c = (uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12;
        iVar15 = 0;
        iVar17 = local_2c + 0x2000;
        iVar16 = local_2c - 0x2000;
        iVar14 = 0;
        uStack00000020 = 0;
        iVar13 = 0;
        do {
          iVar9 = *piVar7;
          iVar12 = iVar13;
          if ((0 < iVar9) && (iVar12 = iVar9 + iVar13, iVar16 <= iVar12)) {
            if (iVar13 < iVar16) {
              if (iVar12 <= iVar17) {
                iVar9 = (iVar9 - iVar16) + iVar13;
                goto LAB_5de90579;
              }
              iVar15 = iVar15 + uStack00000020;
            }
            else if (iVar17 < iVar12) {
              iVar15 = iVar15 + (iVar17 - iVar13) * iVar14;
            }
            else {
LAB_5de90579:
              iVar15 = iVar15 + iVar9 * iVar14;
            }
          }
          if (iVar17 <= iVar12) break;
          uStack00000020 = uStack00000020 + 0x4000;
          iVar14 = iVar14 + 1;
          piVar7 = piVar7 + 1;
          iVar13 = iVar12;
        } while ((int)uStack00000020 < 0x3fc001);
        iVar17 = (int)(iVar15 + 0x2000 + (iVar15 + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar17 < 0) {
          iVar17 = 0;
        }
        else if (0xff < iVar17) {
          iVar17 = 0xff;
        }
        *(char *)(param_6 + local_14) = (char)iVar17;
        param_6 = param_6 + 1;
        param_2 = param_2 + 1;
      } while ((int)param_6 < 4);
      param_3 = (int *)0x1;
      if (1 < local_8) {
        local_1c = local_8 - 2;
        do {
          local_18 = 1 - local_54;
          if ((int)local_18 < local_54) {
            param_7 = (int *)-(local_18 + param_1);
            param_2 = (int *)((local_18 + param_1) * local_10 + local_20);
            do {
              local_24 = local_18 + param_1;
              uVar8 = 1 - local_58;
              uVar18 = (int)local_18 >> 0x1f;
              if ((int)uVar8 < 1) {
                do {
                  iVar17 = ((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) +
                           ((local_18 ^ uVar18) - uVar18) * local_58;
                  if ((*(int *)((int)pMem_00 + iVar17 * 4) != 0) &&
                     (uVar10 = (uVar8 - 1) + (int)param_3,
                     -1 < (int)((int)param_7 + -1 + local_c | (local_8 - uVar10) - 1 | uVar10 |
                               local_24))) {
                    iVar13 = 0;
                    piVar7 = local_44;
                    do {
                      iVar16 = *piVar7;
                      piVar7 = piVar7 + 1;
                      piVar11 = (int *)(iVar16 + (uint)*(byte *)((int)param_2 + uVar10 * 4 + iVar13)
                                                 * 4);
                      *piVar11 = *piVar11 - *(int *)((int)pMem_00 + iVar17 * 4);
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < 4);
                  }
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < 1);
              }
              uStack00000020 = 0;
              if (0 < local_58) {
                iVar17 = (int)param_2 + (int)param_3 * 4;
                param_6 = local_1c;
                do {
                  iVar13 = ((uStack00000020 ^ (int)uStack00000020 >> 0x1f) -
                           ((int)uStack00000020 >> 0x1f)) +
                           ((local_18 ^ uVar18) - uVar18) * local_58;
                  if ((*(int *)((int)pMem_00 + iVar13 * 4) != 0) &&
                     (-1 < (int)((int)param_7 + -1 + local_c | (int)param_3 + uStack00000020 |
                                 param_6 | local_24))) {
                    iVar16 = 0;
                    piVar7 = local_44;
                    do {
                      iVar14 = *piVar7;
                      piVar7 = piVar7 + 1;
                      piVar11 = (int *)(iVar14 + (uint)*(byte *)(iVar17 + iVar16) * 4);
                      *piVar11 = *piVar11 + *(int *)((int)pMem_00 + iVar13 * 4);
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < 4);
                  }
                  uStack00000020 = uStack00000020 + 1;
                  param_6 = param_6 - 1;
                  iVar17 = iVar17 + 4;
                } while ((int)uStack00000020 < local_58);
              }
              param_2 = (int *)((int)param_2 + local_10);
              local_18 = local_18 + 1;
              param_7 = (int *)((int)param_7 + -1);
            } while ((int)local_18 < local_54);
          }
          param_7 = local_44;
          local_24 = 0;
          do {
            iVar17 = 0;
            piVar7 = (int *)*param_7;
            iVar13 = 0x100;
            piVar11 = piVar7;
            do {
              iVar16 = *piVar11;
              piVar11 = piVar11 + 1;
              iVar17 = iVar17 + iVar16;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            lVar2 = (longlong)local_28 * (longlong)(iVar17 + -0x2000);
            local_30 = (uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12;
            iVar15 = 0;
            iVar17 = local_30 + 0x2000;
            iVar16 = local_30 - 0x2000;
            iVar14 = 0;
            param_2 = (int *)0x0;
            iVar13 = 0;
            do {
              iVar9 = *piVar7;
              iVar12 = iVar13;
              if ((0 < iVar9) && (iVar12 = iVar9 + iVar13, iVar16 <= iVar12)) {
                if (iVar13 < iVar16) {
                  if (iVar12 <= iVar17) {
                    iVar9 = (iVar9 - iVar16) + iVar13;
                    goto LAB_5de9081c;
                  }
                  iVar15 = iVar15 + (int)param_2;
                }
                else if (iVar17 < iVar12) {
                  iVar15 = iVar15 + (iVar17 - iVar13) * iVar14;
                }
                else {
LAB_5de9081c:
                  iVar15 = iVar15 + iVar9 * iVar14;
                }
              }
              if (iVar17 <= iVar12) break;
              param_2 = (int *)((int)param_2 + 0x4000);
              iVar14 = iVar14 + 1;
              piVar7 = piVar7 + 1;
              iVar13 = iVar12;
            } while ((int)param_2 < 0x3fc001);
            iVar17 = (int)(iVar15 + 0x2000 + (iVar15 + 0x2000 >> 0x1f & 0x3fffU)) >> 0xe;
            if (iVar17 < 0) {
              iVar17 = 0;
            }
            else if (0xff < iVar17) {
              iVar17 = 0xff;
            }
            iVar13 = local_24 + (int)param_3 * 4;
            local_24 = local_24 + 1;
            *(char *)(iVar13 + local_14) = (char)iVar17;
            param_7 = param_7 + 1;
          } while ((int)local_24 < 4);
          param_3 = (int *)((int)param_3 + 1);
          local_1c = local_1c - 1;
        } while ((int)param_3 < local_8);
      }
      local_14 = local_14 + local_34;
      param_1 = param_1 + 1;
    } while (param_1 < local_c);
  }
  if (local_4c != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(local_4c);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(local_4c);
    GlobalFree(pvVar4);
    local_4c = (LPCVOID)0x0;
  }
  if (local_48 != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(local_48);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(local_48);
    GlobalFree(pvVar4);
    local_48 = (LPCVOID)0x0;
  }
  if (pvVar5 != (LPVOID)0x0) {
    pvVar4 = GlobalHandle(pvVar5);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pvVar5);
    GlobalFree(pvVar4);
  }
  if (pMem_00 != (LPVOID)0x0) {
    pvVar4 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem_00);
    GlobalFree(pvVar4);
  }
  piVar7 = local_44;
  param_3 = (int *)0x4;
  do {
    pMem = (LPCVOID)*piVar7;
    if (pMem != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
    param_3 = (int *)((int)param_3 + -1);
  } while (param_3 != (int *)0x0);
  return 0;
}


