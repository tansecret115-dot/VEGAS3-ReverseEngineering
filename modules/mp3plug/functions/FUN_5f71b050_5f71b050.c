/* Module: mp3plug.dll
   Function: FUN_5f71b050
   Address: 5f71b050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f71b050(void *this,void *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_c;
  int *local_8;
  
  if ((param_3[4] == 0) || (param_3[5] != 2)) {
    local_30 = *(int *)(&DAT_5f7698b4 + param_4[1] * 0x94 + param_4[6] * 0x1bc + param_3[0xd] * 4);
    local_8 = param_4;
    local_2c = *(int *)(&DAT_5f7698b0 +
                       param_4[6] * 0x1bc + (param_3[0xe] + 2 + param_3[0xd]) * 4 +
                       param_4[1] * 0x94);
  }
  else {
    if (param_3[6] == 0) {
      local_30 = *(int *)(&DAT_5f76990c +
                         ((param_3[0xd] + 1) / 3) * 4 + param_4[6] * 0x1bc + param_4[1] * 0x94) * 3;
      local_8 = param_3;
    }
    else if ((char)param_4[8] == '\0') {
      iVar1 = param_4[1] * 0x94;
      iVar5 = param_4[6] * 0x1bc;
      local_30 = *(int *)(&DAT_5f7698c8 + iVar5 + iVar1) +
                 (*(int *)(&DAT_5f76991c + iVar5 + iVar1) - *(int *)(&DAT_5f769918 + iVar5 + iVar1))
                 * 2;
    }
    else {
      local_30 = *(int *)(&DAT_5f7698b4 + param_4[1] * 0x94 + param_4[6] * 0x1bc + param_3[0xd] * 4)
      ;
    }
    local_2c = 0x240;
  }
  local_c = param_4;
  if (param_3[1] * 2 < local_30) {
    local_30 = param_3[1] * 2;
  }
  if (param_3[1] * 2 < local_2c) {
    local_2c = param_3[1] * 2;
  }
  local_28 = param_3[1] * 2;
  iVar1 = FUN_5f715e50(this,param_1,param_2,(int)(param_3 + 7),(int)&local_30,param_3[0x11] + 0x20,
                       *param_3);
  param_3[0x13] = iVar1;
  if ((param_3[4] == 0) || (param_3[5] != 2)) {
    param_3[0x14] = 1;
  }
  else if (param_3[6] == 0) {
    param_3[0x14] = 0;
  }
  else {
    if ((char)param_4[8] == '\0') {
      iVar1 = 6;
    }
    else {
      iVar1 = 8;
    }
    if (*(int *)(param_4[6] * 0x1bc + param_4[1] * 0x94 + 0x5f7698ac + iVar1 * 4) < param_3[0x13]) {
      param_3[0x14] = 0;
    }
    else {
      param_3[0x14] = 1;
    }
  }
  if (param_3[0x14] == 0) {
    iVar5 = param_4[6] * 0x1bc + param_4[1] * 0x94;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      if (((param_3[0x13] <= *(int *)(&DAT_5f76990c + iVar1 * 4 + iVar5) * 3) ||
          (iVar2 = iVar1 + 1, 0xc < iVar2)) ||
         (param_3[0x13] <= *(int *)(&DAT_5f76990c + iVar2 * 4 + iVar5) * 3)) break;
      iVar1 = iVar1 + 2;
      iVar2 = iVar1;
    } while (iVar1 < 0xd);
    param_3[0x16] = iVar2;
    param_3[0x17] = iVar2;
    param_3[0x18] = iVar2;
    local_24 = 0;
    param_3[0x19] = iVar2;
    do {
      iVar1 = param_3[0x16] + -1;
      if (-1 < iVar1) {
        iVar5 = param_4[6] * 0x1bc + param_3[0x16] * 4 + -4;
        do {
          iVar3 = *(int *)(&DAT_5f769910 + iVar5 + param_4[1] * 0x94) -
                  *(int *)(&DAT_5f76990c + iVar1 * 4 + param_4[6] * 0x1bc + param_4[1] * 0x94);
          iVar2 = local_24 * iVar3 +
                  *(int *)(&DAT_5f76990c + iVar1 * 4 + param_4[6] * 0x1bc + param_4[1] * 0x94) * 3;
          iVar3 = iVar3 + iVar2;
          if (iVar2 < iVar3) {
            piVar4 = (int *)(param_2 + iVar2 * 4);
            do {
              if (*piVar4 != 0) {
                param_3[local_24 + 0x17] = iVar1 + 1;
                goto LAB_5f71b252;
              }
              piVar4 = piVar4 + 1;
            } while ((int)piVar4 < param_2 + iVar3 * 4);
          }
          iVar1 = iVar1 + -1;
          iVar5 = iVar5 + -4;
        } while (-1 < iVar1);
      }
LAB_5f71b252:
      local_24 = local_24 + 1;
    } while (local_24 < 3);
  }
  else {
    iVar1 = 0;
    do {
      if (param_3[0x13] <=
          *(int *)(&DAT_5f7698b0 + iVar1 * 4 + param_4[6] * 0x1bc + param_4[1] * 0x94)) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x16);
    param_3[0x15] = iVar1;
  }
  return;
}


