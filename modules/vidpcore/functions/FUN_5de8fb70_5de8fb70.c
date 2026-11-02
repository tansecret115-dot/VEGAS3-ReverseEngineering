/* Module: vidpcore.dll
   Function: FUN_5de8fb70
   Address: 5de8fb70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5de8fb70(float param_1,float param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            float param_7,float param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LPCVOID pMem;
  float fVar8;
  undefined1 uVar9;
  HGLOBAL pvVar10;
  LPVOID pvVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  int local_50;
  int local_48;
  uint local_3c;
  uint local_34;
  int local_24 [4];
  int local_14;
  int local_10;
  LPCVOID local_8;
  LPCVOID local_4;
  
  if (param_1 == 0.0) {
    return 0x80004003;
  }
  param_2 = param_2 / (float)(double)CONCAT44(param_6,param_5);
  local_48 = *(int *)((int)param_1 + 8);
  iVar2 = *(int *)((int)param_1 + 0x1c);
  iVar3 = *(int *)((int)param_1 + 0x28);
  iVar4 = *(int *)((int)param_1 + 0x3c);
  iVar5 = *(int *)((int)param_1 + 0x34);
  iVar6 = *(int *)((int)param_1 + 0x38);
  piVar12 = local_24;
  iVar20 = 4;
  do {
    pvVar10 = GlobalAlloc(0x40,0x400);
    pvVar11 = GlobalLock(pvVar10);
    *piVar12 = (int)pvVar11;
    piVar12 = piVar12 + 1;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  if (param_7 == 0.0) {
    FUN_5de8f1b0(&local_14,param_2,param_3);
  }
  else {
    FUN_5de8f390(&local_14,param_2,param_3);
  }
  if ((param_4 == 4) && (param_3 = 0, 0 < iVar6)) {
    do {
      iVar20 = 0;
      do {
        piVar12 = local_24;
        iVar17 = 4;
        do {
          iVar14 = *piVar12;
          piVar12 = piVar12 + 1;
          iVar17 = iVar17 + -1;
          *(undefined4 *)(iVar14 + iVar20) = 0;
        } while (iVar17 != 0);
        iVar20 = iVar20 + 4;
      } while (iVar20 < 0x400);
      uVar13 = 1 - local_10;
      if ((int)uVar13 < local_10) {
        iVar20 = (uVar13 + param_3) * iVar4 + iVar3;
        uVar18 = (iVar6 - uVar13) - param_3;
        do {
          uVar18 = uVar18 - 1;
          uVar21 = 1 - local_14;
          if ((int)uVar21 < local_14) {
            param_2 = (float)(iVar20 + uVar21 * 4);
            uVar16 = iVar5 - uVar21;
            do {
              uVar16 = uVar16 - 1;
              if (-1 < (int)(uVar18 | uVar16 | uVar21 | param_3 + uVar13)) {
                iVar17 = 0;
                piVar12 = local_24;
                do {
                  pfVar19 = (float *)(*piVar12 + (uint)*(byte *)((int)param_2 + iVar17) * 4);
                  iVar17 = iVar17 + 1;
                  *pfVar19 = *(float *)((int)local_8 +
                                       (((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) *
                                        local_14 +
                                       ((uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f))) * 4
                                       ) + *pfVar19;
                  piVar12 = piVar12 + 1;
                } while (iVar17 < 4);
              }
              uVar21 = uVar21 + 1;
              param_2 = (float)((int)param_2 + 4);
            } while ((int)uVar21 < local_14);
          }
          uVar13 = uVar13 + 1;
          iVar20 = iVar20 + iVar4;
        } while ((int)uVar13 < local_10);
      }
      iVar20 = 0;
      piVar12 = local_24;
      do {
        pfVar19 = (float *)*piVar12;
        iVar17 = 0x100;
        pfVar15 = pfVar19;
        fVar8 = _DAT_5df205cc;
        do {
          fVar8 = fVar8 + *pfVar15;
          pfVar15 = pfVar15 + 1;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        param_1 = 0.0;
        param_2 = 0.0;
        do {
          if (_DAT_5df205cc < *pfVar19) {
            param_1 = *pfVar19 + param_1;
          }
          if ((fVar8 - _DAT_5df205c8) * param_8 + _DAT_5df2bbe0 + _DAT_5df2bbe0 <= param_1) break;
          param_2 = (float)((int)param_2 + 1);
          pfVar19 = pfVar19 + 1;
        } while ((int)param_2 < 0x100);
        uVar9 = ftol();
        *(undefined1 *)(iVar20 + local_48) = uVar9;
        iVar20 = iVar20 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar20 < 4);
      param_4 = 1;
      if (1 < iVar5) {
        local_34 = iVar5 - 2;
        do {
          param_2 = (float)(1 - local_10);
          if ((int)param_2 < local_10) {
            local_50 = -((int)param_2 + param_3);
            param_5 = ((int)param_2 + param_3) * iVar4 + iVar3;
            do {
              uVar18 = 1 - local_14;
              uVar13 = (int)param_2 >> 0x1f;
              if ((int)uVar18 < 1) {
                do {
                  iVar20 = ((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f)) +
                           (((uint)param_2 ^ uVar13) - uVar13) * local_14;
                  if ((*(float *)((int)local_4 + iVar20 * 4) != _DAT_5df205cc) &&
                     (uVar21 = param_4 + -1 + uVar18,
                     -1 < (int)(local_50 + -1 + iVar6 | (iVar5 - uVar21) - 1 | uVar21 |
                               (int)param_2 + param_3))) {
                    iVar17 = 0;
                    piVar12 = local_24;
                    do {
                      iVar14 = *piVar12;
                      uVar16 = (uint)*(byte *)(param_5 + uVar21 * 4 + iVar17);
                      iVar17 = iVar17 + 1;
                      piVar12 = piVar12 + 1;
                      *(float *)(iVar14 + uVar16 * 4) =
                           *(float *)(iVar14 + uVar16 * 4) - *(float *)((int)local_4 + iVar20 * 4);
                    } while (iVar17 < 4);
                  }
                  uVar18 = uVar18 + 1;
                } while ((int)uVar18 < 1);
              }
              uVar18 = 0;
              if (0 < local_14) {
                iVar20 = param_5 + param_4 * 4;
                local_3c = local_34;
                do {
                  iVar17 = ((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f)) +
                           (((uint)param_2 ^ uVar13) - uVar13) * local_14;
                  if ((*(float *)((int)local_4 + iVar17 * 4) != _DAT_5df205cc) &&
                     (-1 < (int)(local_50 + -1 + iVar6 | param_4 + uVar18 | local_3c |
                                (int)param_2 + param_3))) {
                    iVar14 = 0;
                    piVar12 = local_24;
                    do {
                      iVar7 = *piVar12;
                      pbVar1 = (byte *)(iVar14 + iVar20);
                      iVar14 = iVar14 + 1;
                      piVar12 = piVar12 + 1;
                      pfVar19 = (float *)(iVar7 + (uint)*pbVar1 * 4);
                      *pfVar19 = *(float *)((int)local_4 + iVar17 * 4) + *pfVar19;
                    } while (iVar14 < 4);
                  }
                  uVar18 = uVar18 + 1;
                  local_3c = local_3c - 1;
                  iVar20 = iVar20 + 4;
                } while ((int)uVar18 < local_14);
              }
              param_5 = param_5 + iVar4;
              param_2 = (float)((int)param_2 + 1);
              local_50 = local_50 + -1;
            } while ((int)param_2 < local_10);
          }
          iVar20 = 0;
          piVar12 = local_24;
          do {
            pfVar19 = (float *)*piVar12;
            iVar17 = 0x100;
            pfVar15 = pfVar19;
            fVar8 = _DAT_5df205cc;
            do {
              fVar8 = fVar8 + *pfVar15;
              pfVar15 = pfVar15 + 1;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
            param_7 = 0.0;
            param_2 = 0.0;
            do {
              if (_DAT_5df205cc < *pfVar19) {
                param_7 = *pfVar19 + param_7;
              }
              if ((fVar8 - _DAT_5df205c8) * param_8 + _DAT_5df2bbe0 + _DAT_5df2bbe0 <= param_7)
              break;
              param_2 = (float)((int)param_2 + 1);
              pfVar19 = pfVar19 + 1;
            } while ((int)param_2 < 0x100);
            uVar9 = ftol();
            iVar17 = iVar20 + param_4 * 4;
            iVar20 = iVar20 + 1;
            piVar12 = piVar12 + 1;
            *(undefined1 *)(iVar17 + local_48) = uVar9;
          } while (iVar20 < 4);
          param_4 = param_4 + 1;
          local_34 = local_34 - 1;
        } while (param_4 < iVar5);
      }
      local_48 = local_48 + iVar2;
      param_3 = param_3 + 1;
    } while (param_3 < iVar6);
  }
  if (local_8 != (LPCVOID)0x0) {
    pvVar10 = GlobalHandle(local_8);
    GlobalUnlock(pvVar10);
    pvVar10 = GlobalHandle(local_8);
    GlobalFree(pvVar10);
    local_8 = (LPCVOID)0x0;
  }
  if (local_4 != (LPCVOID)0x0) {
    pvVar10 = GlobalHandle(local_4);
    GlobalUnlock(pvVar10);
    pvVar10 = GlobalHandle(local_4);
    GlobalFree(pvVar10);
    local_4 = (LPCVOID)0x0;
  }
  piVar12 = local_24;
  param_3 = 4;
  do {
    pMem = (LPCVOID)*piVar12;
    if (pMem != (LPCVOID)0x0) {
      pvVar10 = GlobalHandle(pMem);
      GlobalUnlock(pvVar10);
      pvVar10 = GlobalHandle(pMem);
      GlobalFree(pvVar10);
      *piVar12 = 0;
    }
    piVar12 = piVar12 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return 0;
}


