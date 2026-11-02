/* Module: vidcap30.exe
   Function: FUN_004c4c80
   Address: 004c4c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c4c80(float *param_1,int param_2,float *param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  double *local_10;
  int local_c;
  
  iVar8 = param_2;
  iVar14 = *(int *)(param_5 + 4);
  if (param_2 == 0) {
    if (0 < iVar14) {
      pdVar7 = (double *)(param_5 + 0x30);
      param_3 = param_3 + iVar14 * param_4;
      do {
        *pdVar7 = (double)*param_3;
        param_3 = param_3 + 1;
        pdVar7 = pdVar7 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    return 0;
  }
  iVar10 = param_4 + -1;
  if (param_2 < param_4) {
    if (param_6 != 0) {
      FUN_0053b690(param_1,param_3,param_4,iVar14,param_5 + 0x130);
      param_3 = param_1;
    }
    if (0 < iVar14) {
      iVar8 = (int)param_3 - (int)param_1;
      param_5 = iVar14;
      do {
        pfVar9 = (float *)(iVar8 + (int)param_1);
        iVar5 = 0;
        iVar13 = iVar10;
        pfVar11 = param_1;
        if (0 < iVar10) {
          do {
            iVar5 = iVar5 - param_2;
            if (iVar5 < 0) {
              iVar5 = iVar5 + param_4;
              *pfVar11 = ((pfVar9[iVar14] - *pfVar9) * (float)iVar5) / (float)param_4 + *pfVar9;
              pfVar11 = pfVar11 + iVar14;
            }
            pfVar9 = pfVar9 + iVar14;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        uVar6 = (uint)((int)pfVar11 - (int)param_1) / (uint)(iVar14 * 4);
        if ((int)uVar6 < param_2) {
          iVar13 = param_2 - uVar6;
          do {
            *pfVar11 = (*pfVar9 * (float)_DAT_0059a140 - pfVar9[-iVar14] * (float)_DAT_0059a140) +
                       pfVar9[iVar14 * -2];
            pfVar11 = pfVar11 + iVar14;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        param_1 = param_1 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else {
    if (param_4 < 1) {
      if (iVar14 < 1) {
        return param_2;
      }
      iVar10 = (int)param_1 - (int)param_3;
      pdVar7 = (double *)(param_5 + 0x30);
      param_2 = iVar14;
      do {
        dVar3 = *pdVar7;
        fVar1 = *param_3;
        pfVar11 = (float *)(iVar10 + (int)param_3);
        iVar13 = 0;
        if (0 < iVar8) {
          do {
            iVar13 = iVar13 + 1;
            *pfVar11 = ((float)iVar13 * (fVar1 - (float)dVar3)) / (float)(iVar8 + 1) + (float)dVar3;
            pfVar11 = pfVar11 + iVar14;
          } while (iVar13 < iVar8);
        }
        pdVar7 = pdVar7 + 1;
        param_3 = param_3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return iVar8;
    }
    if (0 < iVar14) {
      local_10 = (double *)(param_5 + 0x30);
      iVar8 = (int)param_1 - (int)param_3;
      pfVar11 = param_3;
      local_c = iVar14;
      do {
        pfVar9 = (float *)((int)pfVar11 + iVar8);
        pfVar15 = pfVar11 + iVar10 * iVar14;
        pfVar12 = pfVar9 + (param_2 + -1) * iVar14;
        if (param_5 == 0) {
          fVar1 = (*pfVar11 * (float)_DAT_0059a140 - pfVar11[iVar14] * (float)_DAT_0059a140) +
                  pfVar11[iVar14 * 2];
        }
        else {
          fVar1 = (float)*local_10;
          *local_10 = (double)*pfVar15;
        }
        param_3 = (float *)param_2;
        if (pfVar11 < pfVar15) {
          do {
            fVar2 = pfVar15[-iVar14];
            *pfVar12 = ((*pfVar15 - fVar2) * (float)(int)param_3) / (float)param_2 + fVar2;
            for (pfVar12 = pfVar12 + -iVar14; pfVar9 <= pfVar12; pfVar12 = pfVar12 + -iVar14) {
              param_3 = (float *)((int)param_3 - param_4);
              if ((int)param_3 < 0) goto LAB_004c4f11;
              fVar2 = pfVar15[-iVar14];
              *pfVar12 = ((*pfVar15 - fVar2) * (float)(int)param_3) / (float)param_2 + fVar2;
            }
            pfVar15 = pfVar11 + iVar14;
LAB_004c4f11:
            pfVar15 = pfVar15 + -iVar14;
            param_3 = (float *)((int)param_3 + param_2);
          } while (pfVar11 < pfVar15);
        }
        fVar2 = *pfVar15;
        iVar13 = (uint)((int)pfVar12 - (int)pfVar9) / (uint)(iVar14 * 4) + 1;
        if (0 < iVar13) {
          do {
            fVar4 = (float)(int)param_3;
            param_3 = (float *)((int)param_3 - param_4);
            *pfVar12 = (fVar4 * (fVar2 - fVar1)) / (float)param_2 + fVar1;
            pfVar12 = pfVar12 + -iVar14;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        if (param_6 != 0) {
          FUN_0053b690(param_1,param_1,param_2,iVar14,param_5 + 0x130);
        }
        local_10 = local_10 + 1;
        pfVar11 = pfVar11 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  _DAT_005c2304 = _DAT_005c2304 + 1;
  return param_2;
}


