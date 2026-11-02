/* Module: cook3260.dll
   Function: FUN_633a3ae0
   Address: 633a3ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a3ae0(void *this,int *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int aiStack_8f4 [256];
  int local_4f4 [102];
  int local_35c [102];
  int local_1c4 [102];
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 < (int)param_2) {
    iVar4 = ((int)param_2 - iVar5) * 5;
    param_2 = (int *)(((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) + iVar5);
  }
  local_c = -0x20;
  iVar5 = 0x20;
  do {
    iVar4 = *(int *)((int)this + 0x20);
    iVar6 = 0;
    piVar3 = param_1;
    if (0 < iVar4) {
      do {
        iVar2 = ((iVar5 - *piVar3) + local_c) / 2;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        if (7 < iVar2) {
          iVar2 = 7;
        }
        iVar6 = iVar6 + (&DAT_633a95f0)[iVar2];
        iVar4 = iVar4 + -1;
        piVar3 = piVar3 + 1;
      } while (iVar4 != 0);
    }
    if ((int)(param_2 + -8) <= iVar6) {
      local_c = local_c + iVar5;
    }
    iVar5 = iVar5 >> 1;
  } while (iVar5 != 0);
  iVar5 = *(int *)((int)this + 0x20);
  iVar6 = 0;
  iVar4 = 0;
  if (0 < iVar5) {
    local_10 = local_1c4;
    local_1c = (int)param_1 - (int)local_4f4;
    do {
      piVar3 = local_4f4 + iVar4;
      iVar2 = (local_c - *(int *)(local_1c + (int)piVar3)) / 2;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      if (7 < iVar2) {
        iVar2 = 7;
      }
      iVar1 = (&DAT_633a95f0)[iVar2];
      local_35c[iVar4] = iVar2;
      iVar6 = iVar6 + iVar1;
      iVar4 = iVar4 + 1;
      *piVar3 = iVar2;
      *local_10 = iVar2;
      local_10 = local_10 + 1;
    } while (iVar4 < iVar5);
  }
  local_10 = (int *)iVar6;
  local_20 = iVar6;
  local_1c = 1;
  local_14 = *(int *)((int)local_8 + 0x28);
  local_18 = local_14;
  if (1 < local_14) {
    local_2c = (int)param_2 * 2;
    param_2 = aiStack_8f4 + local_14;
    local_28 = aiStack_8f4 + local_14;
    do {
      if (local_2c < (int)local_10 + local_20) {
        iVar6 = -1;
        iVar2 = 0;
        iVar4 = -999999;
        if (0 < iVar5) {
          piVar3 = local_35c;
          local_24 = (int)param_1 - (int)local_35c;
          do {
            if ((*piVar3 < 7) &&
               (iVar5 = (*piVar3 * -2 - *(int *)(((int)param_1 - (int)local_35c) + (int)piVar3)) +
                        local_c, iVar4 <= iVar5)) {
              iVar4 = iVar5;
              iVar6 = iVar2;
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
            iVar5 = *(int *)((int)local_8 + 0x20);
          } while (iVar2 < iVar5);
        }
        if (iVar6 == -1) break;
        iVar4 = local_35c[iVar6];
        *local_28 = iVar6;
        iVar2 = (&DAT_633a95f0)[iVar4];
        local_28 = local_28 + 1;
        local_14 = local_14 + 1;
        iVar4 = iVar4 + 1;
        local_35c[iVar6] = iVar4;
        local_10 = (int *)(((int)local_10 - iVar2) + (&DAT_633a95f0)[iVar4]);
      }
      else {
        iVar6 = -1;
        iVar2 = 0;
        iVar4 = 999999;
        if (0 < iVar5) {
          piVar3 = local_1c4;
          local_24 = (int)param_1 - (int)local_1c4;
          do {
            if ((0 < *piVar3) &&
               (iVar5 = (*piVar3 * -2 - *(int *)(((int)param_1 - (int)local_1c4) + (int)piVar3)) +
                        local_c, iVar5 < iVar4)) {
              iVar4 = iVar5;
              iVar6 = iVar2;
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
            iVar5 = *(int *)((int)local_8 + 0x20);
          } while (iVar2 < iVar5);
        }
        if (iVar6 == -1) break;
        iVar4 = local_1c4[iVar6];
        param_2 = param_2 + -1;
        iVar2 = (&DAT_633a95f0)[iVar4];
        *param_2 = iVar6;
        local_18 = local_18 + -1;
        iVar4 = iVar4 + -1;
        local_1c4[iVar6] = iVar4;
        local_20 = (local_20 - iVar2) + (&DAT_633a95f0)[iVar4];
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)((int)local_8 + 0x28));
  }
  iVar4 = 0;
  if (0 < iVar5) {
    iVar5 = (int)local_1c4 - (int)param_3;
    do {
      iVar4 = iVar4 + 1;
      *param_3 = *(undefined4 *)(iVar5 + (int)param_3);
      param_3 = param_3 + 1;
    } while (iVar4 < *(int *)((int)local_8 + 0x20));
  }
  local_14 = local_14 - local_18;
  if (0 < local_14) {
    piVar3 = aiStack_8f4 + local_18;
    piVar7 = param_4;
    for (iVar5 = local_14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar7 = piVar7 + 1;
    }
  }
  if (local_14 < *(int *)((int)local_8 + 0x28) + -1) {
    piVar3 = param_4 + local_14;
    do {
      *piVar3 = -1;
      local_14 = local_14 + 1;
      piVar3 = piVar3 + 1;
    } while (local_14 < *(int *)((int)local_8 + 0x28) + -1);
  }
  return;
}


