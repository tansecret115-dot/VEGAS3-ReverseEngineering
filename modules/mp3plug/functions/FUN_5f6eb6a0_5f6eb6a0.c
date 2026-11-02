/* Module: mp3plug.dll
   Function: FUN_5f6eb6a0
   Address: 5f6eb6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6eb6a0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_30 [4];
  int *local_20 [4];
  
  iVar4 = param_2[1];
  if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 3)) || ((iVar4 == 4 || (iVar4 == 6)))) {
    iVar4 = 0;
  }
  else if (iVar4 == 2) {
    iVar4 = 1;
  }
  else if (iVar4 == 5) {
    iVar4 = 2;
  }
  if (*param_2 == 0) {
    iVar1 = 0;
  }
  else if (param_2[0x8b] == 0) {
    if (param_2[0x58] == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = 4;
  }
  iVar4 = iVar1 * 0x30 + iVar4 * 0x10;
  local_20[0] = param_2 + 3;
  iVar6 = 0;
  iVar5 = -4;
  do {
    iVar2 = 0;
    if (iVar6 < iVar6 + *(int *)(&DAT_5f7415a8 + iVar5 * 4 + iVar4)) {
      piVar3 = local_20[0] + iVar6;
      do {
        if (iVar2 < *piVar3) {
          iVar2 = *piVar3;
        }
        piVar3 = piVar3 + 1;
      } while ((int)piVar3 <
               (int)(local_20[0] + iVar6 + *(int *)(&DAT_5f7415a8 + iVar5 * 4 + iVar4)));
    }
    piVar3 = (int *)0x0;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    for (; 7 < iVar2; iVar2 = iVar2 >> 4) {
      piVar3 = piVar3 + 1;
    }
    if (iVar2 < 2) {
      if (0 < iVar2) {
        piVar3 = (int *)((int)piVar3 + 1);
      }
    }
    else {
      if (iVar2 < 4) {
        iVar2 = 2;
      }
      else {
        iVar2 = 3;
      }
      piVar3 = (int *)((int)piVar3 + iVar2);
    }
    local_20[iVar5] = piVar3;
    iVar6 = iVar6 + *(int *)(&DAT_5f7415a8 + iVar5 * 4 + iVar4);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0);
  iVar4 = 0;
  do {
    if (*(int *)(&DAT_5f741774 + iVar4 * 4 + iVar1 * 0x10) < (int)local_30[iVar4]) {
      return 0;
    }
    iVar5 = iVar4 + 1;
    if (3 < iVar5) {
      return 1;
    }
    if (*(int *)(&DAT_5f741774 + iVar5 * 4 + iVar1 * 0x10) < (int)local_30[iVar5]) {
      return 0;
    }
    iVar4 = iVar4 + 2;
  } while (iVar4 < 4);
  return 1;
}


