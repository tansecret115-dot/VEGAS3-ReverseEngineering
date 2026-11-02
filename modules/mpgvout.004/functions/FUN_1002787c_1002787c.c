/* Module: mpgvout.004
   Function: FUN_1002787c
   Address: 1002787c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1002787c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_20;
  int local_1c;
  int local_10;
  
  iVar3 = 0x7f;
  if (*param_1 < 2) {
    iVar3 = 0x3f;
  }
  iVar2 = 0x3f;
  if (1 < *param_1) {
    iVar2 = 0x7f;
  }
  if ((param_1[4] != 1) && (local_10 = 1, 1 < param_1[4])) {
    local_1c = param_3;
    piVar5 = param_1 + 0x2c;
    local_20 = param_2;
    do {
      iVar1 = local_20;
      if (iVar3 <= local_20) {
        iVar1 = iVar3;
      }
      piVar5[-3] = iVar1;
      if (iVar1 < 8) {
        iVar4 = 1;
      }
      else if (iVar1 < 0x10) {
        iVar4 = 2;
      }
      else if (iVar1 < 0x20) {
        iVar4 = 3;
      }
      else if ((iVar1 < 0x40) || (param_1[2] != 0)) {
        iVar4 = 4;
      }
      else if (iVar1 < 0x80) {
        iVar4 = 5;
      }
      else if (iVar1 < 0x100) {
        iVar4 = 6;
      }
      else if (((iVar1 < 0x200) || (param_1[0x1b] == 10)) || (*param_1 < 2)) {
        iVar4 = 7;
      }
      else if ((iVar1 < 0x400) || (param_1[0x1b] == 8)) {
        iVar4 = 8;
      }
      else {
        iVar4 = 1;
        if (iVar1 < 0x800) {
          iVar4 = 9;
        }
      }
      piVar5[-5] = iVar4;
      iVar1 = local_1c;
      if (iVar2 <= local_1c) {
        iVar1 = iVar2;
      }
      piVar5[-2] = iVar1;
      if (iVar1 < 8) {
        iVar1 = 1;
      }
      else if (iVar1 < 0x10) {
        iVar1 = 2;
      }
      else if (iVar1 < 0x20) {
        iVar1 = 3;
      }
      else if (((iVar1 < 0x40) || (param_1[0x1b] == 10)) || (param_1[2] != 0)) {
        iVar1 = 4;
      }
      else {
        iVar1 = 5;
      }
      piVar5[-4] = iVar1;
      iVar1 = (param_1[4] - local_10) * param_2;
      if (iVar3 <= iVar1) {
        iVar1 = iVar3;
      }
      piVar5[1] = iVar1;
      if (iVar1 < 8) {
        iVar4 = 1;
      }
      else if (iVar1 < 0x10) {
        iVar4 = 2;
      }
      else if (iVar1 < 0x20) {
        iVar4 = 3;
      }
      else if ((iVar1 < 0x40) || (param_1[2] != 0)) {
        iVar4 = 4;
      }
      else if (iVar1 < 0x80) {
        iVar4 = 5;
      }
      else if (iVar1 < 0x100) {
        iVar4 = 6;
      }
      else if (((iVar1 < 0x200) || (param_1[0x1b] == 10)) || (*param_1 < 2)) {
        iVar4 = 7;
      }
      else if ((iVar1 < 0x400) || (param_1[0x1b] == 8)) {
        iVar4 = 8;
      }
      else {
        iVar4 = 1;
        if (iVar1 < 0x800) {
          iVar4 = 9;
        }
      }
      piVar5[-1] = iVar4;
      iVar1 = (param_1[4] - local_10) * param_3;
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
      piVar5[2] = iVar1;
      if (iVar1 < 8) {
        iVar1 = 1;
      }
      else if (iVar1 < 0x10) {
        iVar1 = 2;
      }
      else if (iVar1 < 0x20) {
        iVar1 = 3;
      }
      else if (((iVar1 < 0x40) || (param_1[0x1b] == 10)) || (param_1[2] != 0)) {
        iVar1 = 4;
      }
      else {
        iVar1 = 5;
      }
      *piVar5 = iVar1;
      local_10 = local_10 + 1;
      piVar5 = piVar5 + 8;
      local_1c = local_1c + param_3;
      local_20 = local_20 + param_2;
    } while (local_10 < param_1[4]);
  }
  if (param_2 * param_1[4] < iVar3) {
    iVar3 = param_2 * param_1[4];
  }
  param_1[0x21] = iVar3;
  if (iVar3 < 8) {
    iVar1 = 1;
  }
  else if (iVar3 < 0x10) {
    iVar1 = 2;
  }
  else if (iVar3 < 0x20) {
    iVar1 = 3;
  }
  else if ((iVar3 < 0x40) || (param_1[2] != 0)) {
    iVar1 = 4;
  }
  else if (iVar3 < 0x80) {
    iVar1 = 5;
  }
  else if (iVar3 < 0x100) {
    iVar1 = 6;
  }
  else if (((iVar3 < 0x200) || (param_1[0x1b] == 10)) || (*param_1 < 2)) {
    iVar1 = 7;
  }
  else if ((iVar3 < 0x400) || (param_1[0x1b] == 8)) {
    iVar1 = 8;
  }
  else {
    iVar1 = 1;
    if (iVar3 < 0x800) {
      iVar1 = 9;
    }
  }
  param_1[0x1f] = iVar1;
  if (param_3 * param_1[4] < iVar2) {
    iVar2 = param_3 * param_1[4];
  }
  param_1[0x22] = iVar2;
  if (iVar2 < 8) {
    iVar3 = 1;
  }
  else if (iVar2 < 0x10) {
    iVar3 = 2;
  }
  else if (iVar2 < 0x20) {
    iVar3 = 3;
  }
  else if (((iVar2 < 0x40) || (param_1[0x1b] == 10)) || (param_1[2] != 0)) {
    iVar3 = 4;
  }
  else {
    iVar3 = 5;
  }
  param_1[0x20] = iVar3;
  return;
}


