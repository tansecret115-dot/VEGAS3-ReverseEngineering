/* Module: mpgvout.003
   Function: FUN_1002736c
   Address: 1002736c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1002736c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = 0x7f;
  if (*param_1 < 2) {
    local_14 = 0x3f;
  }
  local_18 = 0x7f;
  if (*param_1 < 2) {
    local_18 = 0x3f;
  }
  if ((param_1[4] != 1) && (local_10 = 1, 1 < param_1[4])) {
    iVar4 = 0x20;
    iVar5 = param_3;
    iVar6 = param_2;
    do {
      iVar1 = local_14;
      if (iVar6 < local_14) {
        iVar1 = iVar6;
      }
      *(int *)((int)param_1 + iVar4 + 0x84) = iVar1;
      if (iVar1 < 8) {
        uVar3 = 1;
      }
      else if (iVar1 < 0x10) {
        uVar3 = 2;
      }
      else if (iVar1 < 0x20) {
        uVar3 = 3;
      }
      else if ((iVar1 < 0x40) || (param_1[2] != 0)) {
        uVar3 = 4;
      }
      else if (iVar1 < 0x80) {
        uVar3 = 5;
      }
      else if (iVar1 < 0x100) {
        uVar3 = 6;
      }
      else if (((iVar1 < 0x200) || (param_1[0x1b] == 10)) || (*param_1 < 2)) {
        uVar3 = 7;
      }
      else if ((iVar1 < 0x400) || (param_1[0x1b] == 8)) {
        uVar3 = 8;
      }
      else {
        uVar3 = 1;
        if (iVar1 < 0x800) {
          uVar3 = 9;
        }
      }
      *(undefined4 *)((int)param_1 + iVar4 + 0x7c) = uVar3;
      iVar1 = local_18;
      if (iVar5 < local_18) {
        iVar1 = iVar5;
      }
      *(int *)(iVar4 + 0x88 + (int)param_1) = iVar1;
      if (iVar1 < 8) {
        uVar3 = 1;
      }
      else if (iVar1 < 0x10) {
        uVar3 = 2;
      }
      else if (iVar1 < 0x20) {
        uVar3 = 3;
      }
      else if (((iVar1 < 0x40) || (param_1[0x1b] == 10)) || (param_1[2] != 0)) {
        uVar3 = 4;
      }
      else {
        uVar3 = 5;
      }
      *(undefined4 *)((int)param_1 + iVar4 + 0x80) = uVar3;
      iVar2 = (param_1[4] - local_10) * param_2;
      iVar1 = local_14;
      if (iVar2 < local_14) {
        iVar1 = iVar2;
      }
      *(int *)(iVar4 + 0x94 + (int)param_1) = iVar1;
      if (iVar1 < 8) {
        uVar3 = 1;
      }
      else if (iVar1 < 0x10) {
        uVar3 = 2;
      }
      else if (iVar1 < 0x20) {
        uVar3 = 3;
      }
      else if ((iVar1 < 0x40) || (param_1[2] != 0)) {
        uVar3 = 4;
      }
      else if (iVar1 < 0x80) {
        uVar3 = 5;
      }
      else if (iVar1 < 0x100) {
        uVar3 = 6;
      }
      else if (((iVar1 < 0x200) || (param_1[0x1b] == 10)) || (*param_1 < 2)) {
        uVar3 = 7;
      }
      else if ((iVar1 < 0x400) || (param_1[0x1b] == 8)) {
        uVar3 = 8;
      }
      else {
        uVar3 = 1;
        if (iVar1 < 0x800) {
          uVar3 = 9;
        }
      }
      *(undefined4 *)((int)param_1 + iVar4 + 0x8c) = uVar3;
      iVar2 = (param_1[4] - local_10) * param_3;
      iVar1 = local_18;
      if (iVar2 < local_18) {
        iVar1 = iVar2;
      }
      *(int *)(iVar4 + 0x98 + (int)param_1) = iVar1;
      if (iVar1 < 8) {
        uVar3 = 1;
      }
      else if (iVar1 < 0x10) {
        uVar3 = 2;
      }
      else if (iVar1 < 0x20) {
        uVar3 = 3;
      }
      else if (((iVar1 < 0x40) || (param_1[0x1b] == 10)) || (param_1[2] != 0)) {
        uVar3 = 4;
      }
      else {
        uVar3 = 5;
      }
      *(undefined4 *)((int)param_1 + iVar4 + 0x90) = uVar3;
      local_10 = local_10 + 1;
      iVar4 = iVar4 + 0x20;
      iVar5 = iVar5 + param_3;
      iVar6 = iVar6 + param_2;
    } while (local_10 < param_1[4]);
  }
  if (param_2 * param_1[4] < local_14) {
    local_14 = param_2 * param_1[4];
  }
  param_1[0x21] = local_14;
  if (local_14 < 8) {
    iVar5 = 1;
  }
  else if (local_14 < 0x10) {
    iVar5 = 2;
  }
  else if (local_14 < 0x20) {
    iVar5 = 3;
  }
  else if ((local_14 < 0x40) || (param_1[2] != 0)) {
    iVar5 = 4;
  }
  else if (local_14 < 0x80) {
    iVar5 = 5;
  }
  else if (local_14 < 0x100) {
    iVar5 = 6;
  }
  else if (((local_14 < 0x200) || (param_1[0x1b] == 10)) || (*param_1 < 2)) {
    iVar5 = 7;
  }
  else if ((local_14 < 0x400) || (param_1[0x1b] == 8)) {
    iVar5 = 8;
  }
  else {
    iVar5 = 1;
    if (local_14 < 0x800) {
      iVar5 = 9;
    }
  }
  param_1[0x1f] = iVar5;
  if (param_3 * param_1[4] < local_18) {
    local_18 = param_3 * param_1[4];
  }
  param_1[0x22] = local_18;
  if (local_18 < 8) {
    iVar5 = 1;
  }
  else if (local_18 < 0x10) {
    iVar5 = 2;
  }
  else if (local_18 < 0x20) {
    iVar5 = 3;
  }
  else if (((local_18 < 0x40) || (param_1[0x1b] == 10)) || (param_1[2] != 0)) {
    iVar5 = 4;
  }
  else {
    iVar5 = 5;
  }
  param_1[0x20] = iVar5;
  return;
}


