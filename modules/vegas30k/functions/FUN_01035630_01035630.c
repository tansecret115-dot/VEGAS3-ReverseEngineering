/* Module: vegas30k.dll
   Function: FUN_01035630
   Address: 01035630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01035630(short *param_1,int param_2,short *param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  short *psVar11;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  double *local_14;
  int local_8;
  
  iVar5 = *(int *)(param_5 + 4);
  if (param_2 == 0) {
    if (0 < iVar5) {
      param_3 = param_3 + iVar5 * param_4;
      pdVar6 = (double *)(param_5 + 0x30);
      do {
        sVar1 = *param_3;
        param_3 = param_3 + 1;
        iVar5 = iVar5 + -1;
        *pdVar6 = (double)(int)sVar1;
        pdVar6 = pdVar6 + 1;
      } while (iVar5 != 0);
    }
    return 0;
  }
  iVar7 = param_4 + -1;
  if (param_2 < param_4) {
    if (0 < iVar5) {
      iVar9 = (int)param_3 - (int)param_1;
      local_20 = iVar5;
      do {
        psVar10 = (short *)(iVar9 + (int)param_1);
        iVar2 = 0;
        psVar8 = param_1;
        local_24 = iVar7;
        if (0 < iVar7) {
          do {
            iVar2 = iVar2 - param_2;
            if (iVar2 < 0) {
              iVar2 = iVar2 + param_4;
              *psVar8 = (short)(((longlong)((int)psVar10[iVar5] - (int)*psVar10) * (longlong)iVar2)
                               / (longlong)param_4) + *psVar10;
              psVar8 = psVar8 + iVar5;
            }
            psVar10 = psVar10 + iVar5;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        uVar3 = (uint)((int)psVar8 - (int)param_1) / (uint)(iVar5 * 2);
        if ((int)uVar3 < param_2) {
          iVar2 = param_2 - uVar3;
          do {
            *psVar8 = (*psVar10 - psVar10[-iVar5]) * 3 + psVar10[iVar5 * -2];
            psVar8 = psVar8 + iVar5;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        param_1 = param_1 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  else {
    if (param_4 < 1) {
      if (iVar5 < 1) {
        return param_2;
      }
      iVar7 = (int)param_1 - (int)param_3;
      param_5 = iVar5;
      do {
        psVar8 = (short *)(iVar7 + (int)param_3);
        iVar2 = ftol();
        sVar1 = *param_3;
        iVar9 = 0;
        if (0 < param_2) {
          do {
            iVar9 = iVar9 + 1;
            *psVar8 = (short)(((longlong)(sVar1 - iVar2) * (longlong)iVar9) /
                             (longlong)(param_2 + 1)) + (short)iVar2;
            psVar8 = psVar8 + iVar5;
          } while (iVar9 < param_2);
        }
        param_3 = param_3 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return param_2;
    }
    if (0 < iVar5) {
      local_14 = (double *)(param_5 + 0x30);
      iVar9 = (int)param_1 - (int)param_3;
      psVar8 = param_3;
      local_2c = iVar5;
      do {
        psVar10 = (short *)((int)psVar8 + iVar9);
        psVar11 = psVar10 + (param_2 + -1) * iVar5;
        psVar4 = psVar8 + iVar7 * iVar5;
        param_3 = (short *)param_2;
        if (param_5 == 0) {
          local_8 = ((int)*psVar8 - (int)psVar8[iVar5]) * 3 + (int)psVar8[iVar5 * 2];
        }
        else {
          local_8 = ftol();
          *local_14 = (double)(int)*psVar4;
        }
        for (; psVar8 < psVar4; psVar4 = psVar4 + -iVar5) {
          do {
            *psVar11 = psVar4[-iVar5] +
                       (short)(((longlong)((int)*psVar4 - (int)psVar4[-iVar5]) *
                               (longlong)(int)param_3) / (longlong)param_2);
            psVar11 = psVar11 + -iVar5;
            if (psVar11 < psVar10) {
              psVar4 = psVar8 + iVar5;
              break;
            }
            param_3 = (short *)((int)param_3 - param_4);
          } while (-1 < (int)param_3);
          param_3 = (short *)((int)param_3 + param_2);
        }
        sVar1 = *psVar4;
        local_28 = (uint)((int)psVar11 - (int)psVar10) / (uint)(iVar5 * 2) + 1;
        if (0 < local_28) {
          do {
            *psVar11 = (short)local_8 +
                       (short)(((longlong)(sVar1 - local_8) * (longlong)(int)param_3) /
                              (longlong)param_2);
            psVar11 = psVar11 + -iVar5;
            param_3 = (short *)((int)param_3 - param_4);
            local_28 = local_28 + -1;
          } while (local_28 != 0);
        }
        local_14 = local_14 + 1;
        psVar8 = psVar8 + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
  }
  _DAT_01209a00 = _DAT_01209a00 + 1;
  return param_2;
}


