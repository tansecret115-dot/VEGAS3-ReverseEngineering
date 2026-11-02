/* Module: vidpcore.dll
   Function: FUN_5de76520
   Address: 5de76520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5de76520(uint param_1,float param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            float param_7)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LPCVOID pMem;
  undefined1 uVar8;
  HGLOBAL pvVar9;
  LPVOID pvVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  int iVar18;
  uint uVar19;
  float local_50;
  int local_48;
  uint local_3c;
  uint local_34;
  int local_24 [4];
  int local_14;
  int local_10;
  LPCVOID local_8;
  LPCVOID local_4;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  param_2 = param_2 / (float)(double)CONCAT44(param_6,param_5);
  local_48 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar5 = *(int *)(param_1 + 0x34);
  iVar6 = *(int *)(param_1 + 0x38);
  piVar11 = local_24;
  iVar18 = 4;
  do {
    pvVar9 = GlobalAlloc(0x40,0x400);
    pvVar10 = GlobalLock(pvVar9);
    *piVar11 = (int)pvVar10;
    piVar11 = piVar11 + 1;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  if (param_7 == 0.0) {
    FUN_5de75500(&local_14,param_2,param_3);
  }
  else {
    FUN_5de756e0(&local_14,param_2,param_3);
  }
  if ((param_4 == 4) && (param_3 = 0, 0 < iVar6)) {
    do {
      iVar18 = 0;
      do {
        piVar11 = local_24;
        iVar15 = 4;
        do {
          iVar13 = *piVar11;
          piVar11 = piVar11 + 1;
          iVar15 = iVar15 + -1;
          *(undefined4 *)(iVar18 + iVar13) = 0;
        } while (iVar15 != 0);
        iVar18 = iVar18 + 4;
      } while (iVar18 < 0x400);
      uVar12 = 1 - local_10;
      if ((int)uVar12 < local_10) {
        iVar18 = (uVar12 + param_3) * iVar4 + iVar3;
        uVar16 = (iVar6 - uVar12) - param_3;
        do {
          uVar16 = uVar16 - 1;
          uVar19 = 1 - local_14;
          if ((int)uVar19 < local_14) {
            param_1 = iVar18 + uVar19 * 4;
            uVar14 = iVar5 - uVar19;
            do {
              uVar14 = uVar14 - 1;
              if (-1 < (int)(uVar14 | uVar16 | uVar19 | param_3 + uVar12)) {
                iVar15 = 0;
                piVar11 = local_24;
                do {
                  pfVar17 = (float *)(*piVar11 + (uint)*(byte *)(param_1 + iVar15) * 4);
                  iVar15 = iVar15 + 1;
                  *pfVar17 = *(float *)((int)local_8 +
                                       (((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) *
                                        local_14 +
                                       ((uVar19 ^ (int)uVar19 >> 0x1f) - ((int)uVar19 >> 0x1f))) * 4
                                       ) + *pfVar17;
                  piVar11 = piVar11 + 1;
                } while (iVar15 < 4);
              }
              uVar19 = uVar19 + 1;
              param_1 = param_1 + 4;
            } while ((int)uVar19 < local_14);
          }
          uVar12 = uVar12 + 1;
          iVar18 = iVar18 + iVar4;
        } while ((int)uVar12 < local_10);
      }
      iVar18 = 0;
      piVar11 = local_24;
      do {
        pfVar17 = (float *)*piVar11;
        param_7 = 0.0;
        param_1 = 0;
        do {
          if (_DAT_5df205cc < *pfVar17) {
            param_7 = *pfVar17 + param_7;
          }
          if (_DAT_5df205c8 <= param_7) break;
          param_1 = param_1 + 1;
          pfVar17 = pfVar17 + 1;
        } while ((int)param_1 < 0x100);
        uVar8 = ftol();
        *(undefined1 *)(iVar18 + local_48) = uVar8;
        iVar18 = iVar18 + 1;
        piVar11 = piVar11 + 1;
      } while (iVar18 < 4);
      param_2 = 1.4013e-45;
      if (1 < iVar5) {
        local_34 = iVar5 - 2;
        do {
          param_1 = 1 - local_10;
          if ((int)param_1 < local_10) {
            param_5 = -(param_1 + param_3);
            param_4 = (param_1 + param_3) * iVar4 + iVar3;
            do {
              uVar16 = 1 - local_14;
              uVar12 = (int)param_1 >> 0x1f;
              if ((int)uVar16 < 1) {
                do {
                  iVar18 = ((uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f)) +
                           ((param_1 ^ uVar12) - uVar12) * local_14;
                  if ((*(float *)((int)local_4 + iVar18 * 4) != _DAT_5df205cc) &&
                     (uVar19 = (int)param_2 + -1 + uVar16,
                     -1 < (int)(param_5 + -1 + iVar6 | (iVar5 - uVar19) - 1 | uVar19 |
                               param_1 + param_3))) {
                    iVar15 = 0;
                    piVar11 = local_24;
                    do {
                      iVar13 = *piVar11;
                      uVar14 = (uint)*(byte *)(param_4 + uVar19 * 4 + iVar15);
                      iVar15 = iVar15 + 1;
                      piVar11 = piVar11 + 1;
                      *(float *)(iVar13 + uVar14 * 4) =
                           *(float *)(iVar13 + uVar14 * 4) - *(float *)((int)local_4 + iVar18 * 4);
                    } while (iVar15 < 4);
                  }
                  uVar16 = uVar16 + 1;
                } while ((int)uVar16 < 1);
              }
              uVar16 = 0;
              if (0 < local_14) {
                iVar18 = param_4 + (int)param_2 * 4;
                local_3c = local_34;
                do {
                  iVar15 = ((uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f)) +
                           ((param_1 ^ uVar12) - uVar12) * local_14;
                  if ((*(float *)((int)local_4 + iVar15 * 4) != _DAT_5df205cc) &&
                     (-1 < (int)(param_5 + -1 + iVar6 | (int)param_2 + uVar16 | local_3c |
                                param_1 + param_3))) {
                    iVar13 = 0;
                    piVar11 = local_24;
                    do {
                      iVar7 = *piVar11;
                      pbVar1 = (byte *)(iVar13 + iVar18);
                      iVar13 = iVar13 + 1;
                      piVar11 = piVar11 + 1;
                      pfVar17 = (float *)(iVar7 + (uint)*pbVar1 * 4);
                      *pfVar17 = *(float *)((int)local_4 + iVar15 * 4) + *pfVar17;
                    } while (iVar13 < 4);
                  }
                  uVar16 = uVar16 + 1;
                  local_3c = local_3c - 1;
                  iVar18 = iVar18 + 4;
                } while ((int)uVar16 < local_14);
              }
              param_4 = param_4 + iVar4;
              param_1 = param_1 + 1;
              param_5 = param_5 + -1;
            } while ((int)param_1 < local_10);
          }
          iVar18 = 0;
          piVar11 = local_24;
          do {
            pfVar17 = (float *)*piVar11;
            local_50 = 0.0;
            param_1 = 0;
            do {
              if (_DAT_5df205cc < *pfVar17) {
                local_50 = *pfVar17 + local_50;
              }
              if (_DAT_5df205c8 <= local_50) break;
              param_1 = param_1 + 1;
              pfVar17 = pfVar17 + 1;
            } while ((int)param_1 < 0x100);
            uVar8 = ftol();
            iVar15 = iVar18 + (int)param_2 * 4;
            iVar18 = iVar18 + 1;
            piVar11 = piVar11 + 1;
            *(undefined1 *)(iVar15 + local_48) = uVar8;
          } while (iVar18 < 4);
          param_2 = (float)((int)param_2 + 1);
          local_34 = local_34 - 1;
        } while ((int)param_2 < iVar5);
      }
      local_48 = local_48 + iVar2;
      param_3 = param_3 + 1;
    } while (param_3 < iVar6);
  }
  if (local_8 != (LPCVOID)0x0) {
    pvVar9 = GlobalHandle(local_8);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(local_8);
    GlobalFree(pvVar9);
    local_8 = (LPCVOID)0x0;
  }
  if (local_4 != (LPCVOID)0x0) {
    pvVar9 = GlobalHandle(local_4);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(local_4);
    GlobalFree(pvVar9);
    local_4 = (LPCVOID)0x0;
  }
  piVar11 = local_24;
  param_3 = 4;
  do {
    pMem = (LPCVOID)*piVar11;
    if (pMem != (LPCVOID)0x0) {
      pvVar9 = GlobalHandle(pMem);
      GlobalUnlock(pvVar9);
      pvVar9 = GlobalHandle(pMem);
      GlobalFree(pvVar9);
      *piVar11 = 0;
    }
    piVar11 = piVar11 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return 0;
}


