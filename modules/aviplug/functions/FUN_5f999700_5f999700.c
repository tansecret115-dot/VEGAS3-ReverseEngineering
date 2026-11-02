/* Module: aviplug.dll
   Function: FUN_5f999700
   Address: 5f999700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f999700(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  double *pdVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  double *local_14;
  int local_8;
  
  iVar5 = *(int *)(param_5 + 4);
  if (param_2 == 0) {
    if (0 < iVar5) {
      piVar9 = param_3 + iVar5 * param_4;
      pdVar6 = (double *)(param_5 + 0x30);
      do {
        iVar8 = *piVar9;
        piVar9 = piVar9 + 1;
        iVar5 = iVar5 + -1;
        *pdVar6 = (double)iVar8;
        pdVar6 = pdVar6 + 1;
      } while (iVar5 != 0);
    }
    return 0;
  }
  iVar8 = param_4 + -1;
  if (param_2 < param_4) {
    if (0 < iVar5) {
      iVar10 = (int)param_3 - (int)param_1;
      local_20 = iVar5;
      do {
        piVar11 = (int *)(iVar10 + (int)param_1);
        iVar1 = 0;
        piVar9 = param_1;
        local_24 = iVar8;
        if (0 < iVar8) {
          do {
            iVar1 = iVar1 - param_2;
            if (iVar1 < 0) {
              iVar1 = iVar1 + param_4;
              *piVar9 = (int)(((longlong)(piVar11[iVar5] - *piVar11) * (longlong)iVar1) /
                             (longlong)param_4) + *piVar11;
              piVar9 = piVar9 + iVar5;
            }
            piVar11 = piVar11 + iVar5;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        uVar2 = (uint)((int)piVar9 - (int)param_1) / (uint)(iVar5 * 4);
        if ((int)uVar2 < param_2) {
          iVar1 = param_2 - uVar2;
          do {
            *piVar9 = (*piVar11 - piVar11[-iVar5]) * 3 + piVar11[iVar5 * -2];
            piVar9 = piVar9 + iVar5;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
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
      iVar8 = (int)param_1 - (int)param_3;
      param_5 = iVar5;
      do {
        piVar9 = (int *)(iVar8 + (int)param_3);
        iVar3 = ftol();
        iVar1 = *param_3;
        iVar10 = 0;
        if (0 < param_2) {
          do {
            iVar10 = iVar10 + 1;
            *piVar9 = (int)(((longlong)(iVar1 - iVar3) * (longlong)iVar10) / (longlong)(param_2 + 1)
                           ) + iVar3;
            piVar9 = piVar9 + iVar5;
          } while (iVar10 < param_2);
        }
        param_3 = param_3 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return param_2;
    }
    if (0 < iVar5) {
      local_14 = (double *)(param_5 + 0x30);
      iVar10 = (int)param_1 - (int)param_3;
      piVar9 = param_3;
      local_2c = iVar5;
      do {
        piVar7 = (int *)(iVar10 + (int)piVar9);
        piVar4 = piVar9 + iVar8 * iVar5;
        piVar11 = piVar7 + (param_2 + -1) * iVar5;
        param_3 = (int *)param_2;
        if (param_5 == 0) {
          local_8 = (*piVar9 - piVar9[iVar5]) * 3 + piVar9[iVar5 * 2];
        }
        else {
          local_8 = ftol();
          *local_14 = (double)*piVar4;
        }
        for (; piVar9 < piVar4; piVar4 = piVar4 + -iVar5) {
          do {
            *piVar11 = (int)(((longlong)(*piVar4 - piVar4[-iVar5]) * (longlong)(int)param_3) /
                            (longlong)param_2) + piVar4[-iVar5];
            piVar11 = piVar11 + -iVar5;
            if (piVar11 < piVar7) {
              piVar4 = piVar9 + iVar5;
              break;
            }
            param_3 = (int *)((int)param_3 - param_4);
          } while (-1 < (int)param_3);
          param_3 = (int *)((int)param_3 + param_2);
        }
        iVar1 = *piVar4;
        local_28 = (uint)((int)piVar11 - (int)piVar7) / (uint)(iVar5 * 4) + 1;
        if (0 < local_28) {
          do {
            *piVar11 = (int)(((longlong)(iVar1 - local_8) * (longlong)(int)param_3) /
                            (longlong)param_2) + local_8;
            piVar11 = piVar11 + -iVar5;
            param_3 = (int *)((int)param_3 - param_4);
            local_28 = local_28 + -1;
          } while (local_28 != 0);
        }
        local_14 = local_14 + 1;
        piVar9 = piVar9 + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
  }
  _DAT_5f9f5c54 = _DAT_5f9f5c54 + 1;
  return param_2;
}


