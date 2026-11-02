/* Module: tokr3260.dll
   Function: FUN_680544b0
   Address: 680544b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_680544b0(undefined4 *param_1,double *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  undefined1 *puVar10;
  float10 fVar11;
  int local_8;
  
  pdVar7 = param_2;
  if (param_4 == 1) {
    fVar11 = (float10)_CIpow();
    local_8 = 0;
    if (0 < param_5) {
      do {
        pfVar6 = (float *)*param_1;
        if (0 < param_3) {
          puVar10 = (undefined1 *)(local_8 + (int)param_2);
          iVar9 = param_3;
          do {
            floor((double)(*pfVar6 * (float)fVar11 - (float)_DAT_6805b0a8));
            iVar3 = ftol();
            if (iVar3 < 0x80) {
              if (iVar3 < -0x80) {
                iVar3 = -0x80;
              }
            }
            else {
              iVar3 = 0x7f;
            }
            pfVar6 = pfVar6 + 1;
            *puVar10 = (char)iVar3;
            puVar10 = puVar10 + param_5;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        local_8 = local_8 + 1;
        param_1 = param_1 + 1;
      } while (local_8 < param_5);
      return 0;
    }
  }
  else if (param_4 == 2) {
    if (0 < param_5) {
      local_8 = param_5;
      do {
        pfVar6 = (float *)*param_1;
        if (0 < param_3) {
          pdVar7 = param_2;
          iVar9 = param_3;
          do {
            iVar3 = (int)ROUND(*pfVar6);
            if (iVar3 < -0x8000) {
              iVar3 = -0x8000;
            }
            else if (0x7fff < iVar3) {
              iVar3 = 0x7fff;
            }
            *(short *)pdVar7 = (short)iVar3;
            pfVar6 = pfVar6 + 1;
            pdVar7 = (double *)((int)pdVar7 + param_5 * 2);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        param_1 = param_1 + 1;
        param_2 = (double *)((int)param_2 + 2);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      return 0;
    }
  }
  else if (param_4 == 4) {
    fVar11 = (float10)_CIpow();
    if (0 < param_5) {
      iVar9 = (int)param_1 - (int)param_2;
      param_1 = (undefined4 *)param_5;
      do {
        pfVar6 = *(float **)(iVar9 + (int)param_2);
        if (0 < param_3) {
          iVar3 = param_3;
          pdVar7 = param_2;
          do {
            floor((double)(*pfVar6 * (float)fVar11 - (float)_DAT_6805b0a8));
            iVar4 = ftol();
            if (iVar4 < 0x800000) {
              if (iVar4 < -0x800000) {
                iVar4 = -0x800000;
              }
            }
            else {
              iVar4 = 0x7fffff;
            }
            pfVar6 = pfVar6 + 1;
            *(int *)pdVar7 = iVar4 << 8;
            pdVar7 = (double *)((int)pdVar7 + param_5 * 4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        param_2 = (double *)((int)param_2 + 4);
        param_1 = (undefined4 *)((int)param_1 + -1);
      } while (param_1 != (undefined4 *)0x0);
      return 0;
    }
  }
  else if (param_4 == 0x84) {
    if (0 < param_5) {
      iVar9 = (int)param_1 - (int)param_2;
      param_1 = (undefined4 *)param_5;
      do {
        puVar5 = *(undefined4 **)((int)param_2 + iVar9);
        if (0 < param_3) {
          pdVar7 = param_2;
          iVar3 = param_3;
          do {
            uVar2 = *puVar5;
            puVar5 = puVar5 + 1;
            *(undefined4 *)pdVar7 = uVar2;
            pdVar7 = (double *)((int)pdVar7 + param_5 * 4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        param_2 = (double *)((int)param_2 + 4);
        param_1 = (undefined4 *)((int)param_1 + -1);
      } while (param_1 != (undefined4 *)0x0);
      return 0;
    }
  }
  else {
    if (param_4 != 0x88) {
      return 0xfff0bdc1;
    }
    if (0 < param_5) {
      param_2 = (double *)param_1;
      param_1 = (undefined4 *)param_5;
      do {
        pfVar6 = *(float **)param_2;
        pdVar8 = pdVar7;
        iVar9 = param_3;
        if (0 < param_3) {
          do {
            fVar1 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            *pdVar8 = (double)fVar1;
            iVar9 = iVar9 + -1;
            pdVar8 = pdVar8 + param_5;
          } while (iVar9 != 0);
        }
        param_2 = (double *)((int)param_2 + 4);
        pdVar7 = pdVar7 + 1;
        param_1 = (undefined4 *)((int)param_1 + -1);
      } while (param_1 != (undefined4 *)0x0);
    }
  }
  return 0;
}


