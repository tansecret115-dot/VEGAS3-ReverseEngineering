/* Module: tokr3260.dll
   Function: FUN_68054270
   Address: 68054270
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_68054270(int param_1,int *param_2,double *param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  float10 fVar14;
  
  piVar4 = param_6;
  pdVar7 = param_3;
  piVar12 = param_2;
  iVar5 = param_1 / (int)param_6;
  fVar14 = (float10)_CIpow();
  if (param_5 == 1) {
    param_1 = 0;
    if (0 < (int)param_6) {
      param_6 = param_2;
      do {
        if (0 < iVar5) {
          pcVar6 = (char *)(param_1 + (int)param_3);
          pfVar10 = (float *)*param_6;
          iVar11 = iVar5;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + (int)piVar4;
            iVar11 = iVar11 + -1;
            *pfVar10 = (float)((float10)(int)cVar2 * fVar14);
            pfVar10 = pfVar10 + 1;
          } while (iVar11 != 0);
        }
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
      } while (param_1 < (int)piVar4);
    }
  }
  else if (param_5 == 2) {
    if (0 < (int)param_6) {
      param_3 = (double *)param_2;
      param_1 = (int)param_6;
      do {
        pfVar10 = *(float **)param_3;
        pdVar8 = pdVar7;
        iVar11 = iVar5;
        if (0 < iVar5) {
          do {
            iVar11 = iVar11 + -1;
            *pfVar10 = (float)((float10)(int)*(short *)pdVar8 * fVar14);
            pdVar8 = (double *)((int)pdVar8 + (int)param_6 * 2);
            pfVar10 = pfVar10 + 1;
          } while (iVar11 != 0);
        }
        param_3 = (double *)((int)param_3 + 4);
        pdVar7 = (double *)((int)pdVar7 + 2);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  else if (param_5 == 4) {
    if (0 < (int)param_6) {
      iVar11 = (int)param_2 - (int)param_3;
      param_1 = (int)param_6;
      do {
        if (0 < iVar5) {
          pdVar7 = param_3;
          pfVar10 = *(float **)(iVar11 + (int)param_3);
          iVar13 = iVar5;
          do {
            iVar1 = *(int *)pdVar7;
            pdVar7 = (double *)((int)pdVar7 + (int)param_6 * 4);
            iVar13 = iVar13 + -1;
            *pfVar10 = (float)((float10)iVar1 * fVar14);
            pfVar10 = pfVar10 + 1;
          } while (iVar13 != 0);
        }
        param_3 = (double *)((int)param_3 + 4);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  else if (param_5 == 0x84) {
    if ((int)param_6 < 1) {
      return iVar5;
    }
    iVar11 = (int)param_2 - (int)param_3;
    param_5 = (int)param_6;
    do {
      puVar9 = *(undefined4 **)((int)param_3 + iVar11);
      if (0 < iVar5) {
        pdVar7 = param_3;
        iVar13 = iVar5;
        do {
          uVar3 = *(undefined4 *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + (int)param_6 * 4);
          *puVar9 = uVar3;
          puVar9 = puVar9 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      param_3 = (double *)((int)param_3 + 4);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  else {
    if (param_5 != 0x88) {
      return -999999;
    }
    if ((int)param_6 < 1) {
      return iVar5;
    }
    param_3 = (double *)param_2;
    param_1 = (int)param_6;
    do {
      pfVar10 = *(float **)param_3;
      pdVar8 = pdVar7;
      iVar11 = iVar5;
      if (0 < iVar5) {
        do {
          *pfVar10 = (float)*pdVar8;
          pfVar10 = pfVar10 + 1;
          iVar11 = iVar11 + -1;
          pdVar8 = pdVar8 + (int)param_6;
        } while (iVar11 != 0);
      }
      param_3 = (double *)((int)param_3 + 4);
      pdVar7 = pdVar7 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  if (0 < (int)piVar4) {
    param_2 = piVar4;
    do {
      if (iVar5 < param_4) {
        puVar9 = (undefined4 *)(*piVar12 + iVar5 * 4);
        for (iVar11 = param_4 - iVar5; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      piVar12 = piVar12 + 1;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  return iVar5;
}


