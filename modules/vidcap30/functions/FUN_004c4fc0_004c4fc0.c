/* Module: vidcap30.exe
   Function: FUN_004c4fc0
   Address: 004c4fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c4fc0(double *param_1,int param_2,double *param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  double *local_10;
  int local_c;
  
  iVar7 = param_2;
  iVar12 = *(int *)(param_5 + 4);
  if (param_2 == 0) {
    if (0 < iVar12) {
      pdVar6 = (double *)(param_5 + 0x30);
      param_3 = param_3 + iVar12 * param_4;
      do {
        *pdVar6 = *param_3;
        param_3 = param_3 + 1;
        pdVar6 = pdVar6 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    return 0;
  }
  iVar9 = param_4 + -1;
  if (param_2 < param_4) {
    if (param_6 != 0) {
      FUN_0053b7c0(param_1,param_3,param_4,iVar12,param_5 + 0x130);
      param_3 = param_1;
    }
    if (0 < iVar12) {
      iVar7 = (int)param_3 - (int)param_1;
      param_5 = iVar12;
      do {
        pdVar8 = (double *)(iVar7 + (int)param_1);
        iVar4 = 0;
        iVar11 = iVar9;
        pdVar6 = param_1;
        if (0 < iVar9) {
          do {
            iVar4 = iVar4 - param_2;
            if (iVar4 < 0) {
              iVar4 = iVar4 + param_4;
              *pdVar6 = ((pdVar8[iVar12] - *pdVar8) * (double)iVar4) / (double)param_4 + *pdVar8;
              pdVar6 = pdVar6 + iVar12;
            }
            pdVar8 = pdVar8 + iVar12;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        uVar5 = (uint)((int)pdVar6 - (int)param_1) / (uint)(iVar12 * 8);
        if ((int)uVar5 < param_2) {
          iVar11 = param_2 - uVar5;
          do {
            *pdVar6 = (*pdVar8 * _DAT_0059a140 - pdVar8[-iVar12] * _DAT_0059a140) +
                      pdVar8[iVar12 * -2];
            pdVar6 = pdVar6 + iVar12;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        param_1 = param_1 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else {
    if (param_4 < 1) {
      if (iVar12 < 1) {
        return param_2;
      }
      iVar9 = (int)param_1 - (int)param_3;
      pdVar6 = (double *)(param_5 + 0x30);
      param_2 = iVar12;
      do {
        dVar1 = *pdVar6;
        dVar2 = *param_3;
        pdVar8 = (double *)(iVar9 + (int)param_3);
        iVar11 = 0;
        if (0 < iVar7) {
          do {
            iVar11 = iVar11 + 1;
            *pdVar8 = ((double)iVar11 * (dVar2 - dVar1)) / (double)(iVar7 + 1) + dVar1;
            pdVar8 = pdVar8 + iVar12;
          } while (iVar11 < iVar7);
        }
        pdVar6 = pdVar6 + 1;
        param_3 = param_3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return iVar7;
    }
    if (0 < iVar12) {
      local_10 = (double *)(param_5 + 0x30);
      iVar7 = (int)param_1 - (int)param_3;
      pdVar6 = param_3;
      local_c = iVar12;
      do {
        pdVar8 = (double *)((int)pdVar6 + iVar7);
        pdVar13 = pdVar6 + iVar9 * iVar12;
        pdVar10 = pdVar8 + (param_2 + -1) * iVar12;
        if (param_5 == 0) {
          dVar1 = (*pdVar6 * _DAT_0059a140 - pdVar6[iVar12] * _DAT_0059a140) + pdVar6[iVar12 * 2];
        }
        else {
          dVar1 = *local_10;
          *local_10 = *pdVar13;
        }
        param_3 = (double *)param_2;
        if (pdVar6 < pdVar13) {
          do {
            dVar2 = pdVar13[-iVar12];
            *pdVar10 = ((*pdVar13 - dVar2) * (double)(int)param_3) / (double)param_2 + dVar2;
            for (pdVar10 = pdVar10 + -iVar12; pdVar8 <= pdVar10; pdVar10 = pdVar10 + -iVar12) {
              param_3 = (double *)((int)param_3 - param_4);
              if ((int)param_3 < 0) goto LAB_004c5254;
              dVar2 = pdVar13[-iVar12];
              *pdVar10 = ((*pdVar13 - dVar2) * (double)(int)param_3) / (double)param_2 + dVar2;
            }
            pdVar13 = pdVar6 + iVar12;
LAB_004c5254:
            pdVar13 = pdVar13 + -iVar12;
            param_3 = (double *)((int)param_3 + param_2);
          } while (pdVar6 < pdVar13);
        }
        dVar2 = *pdVar13;
        iVar11 = (uint)((int)pdVar10 - (int)pdVar8) / (uint)(iVar12 * 8) + 1;
        if (0 < iVar11) {
          do {
            dVar3 = (double)(int)param_3;
            param_3 = (double *)((int)param_3 - param_4);
            *pdVar10 = (dVar3 * (dVar2 - dVar1)) / (double)param_2 + dVar1;
            pdVar10 = pdVar10 + -iVar12;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        if (param_6 != 0) {
          FUN_0053b7c0(param_1,param_1,param_2,iVar12,param_5 + 0x130);
        }
        pdVar6 = pdVar6 + 1;
        local_10 = local_10 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  _DAT_005c2308 = _DAT_005c2308 + 1;
  return param_2;
}


