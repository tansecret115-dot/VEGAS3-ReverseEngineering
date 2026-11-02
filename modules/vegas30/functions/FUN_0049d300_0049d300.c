/* Module: vegas30.exe
   Function: FUN_0049d300
   Address: 0049d300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d300(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if (((*(int *)(param_1 + 0xd08) != param_2) || (*(uint *)(param_1 + 0xd10) != param_4)) ||
     (*(int *)(param_1 + 0xd14) != param_5)) {
    local_4 = *(int *)(param_1 + 0xd04);
    local_8 = *(uint *)(param_1 + 0xd00);
    *(uint *)(param_1 + 0xd10) = param_4;
    *(int *)(param_1 + 0xd08) = param_2;
    *(int *)(param_1 + 0xd14) = param_5;
    if ((param_5 < local_4) ||
       ((local_10 = local_8, local_c = local_4, param_5 <= local_4 && (param_4 <= local_8)))) {
      local_10 = param_4;
      local_c = param_5;
    }
    if ((local_4 < param_5) || ((local_4 <= param_5 && (local_8 <= param_4)))) {
      local_8 = param_4;
      local_4 = param_5;
    }
    param_1 = *(int *)(param_1 + 0xcf8);
    iVar6 = param_1;
    if (param_2 <= param_1) {
      iVar6 = param_2;
    }
    if (param_1 <= param_2) {
      param_1 = param_2;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (param_1 < 0) {
      if ((*(int *)(iVar2 + 0xbc8) == 0) ||
         (iVar3 = FUN_005b87b0(*(int *)(iVar2 + 0xbc8)), iVar3 == 0)) {
        param_1 = 0;
      }
      else if (*(int *)(iVar2 + 0xbc8) == 0) {
        param_1 = _DAT_00000000;
      }
      else {
        piVar4 = (int *)FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
        param_1 = *piVar4;
      }
    }
    iVar3 = **(int **)(iVar2 + 0xcd0);
    if (iVar3 != 0) {
      FUN_005c9070(*(undefined4 *)(iVar2 + 0xbc8),*(int **)(iVar2 + 0xcd0),0,0x10);
      _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 0xcd0),0,iVar3,0);
    }
    for (; iVar6 <= param_1; iVar6 = iVar6 + 1) {
      if (local_14 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *local_14;
      }
      if ((iVar6 < 0) || (iVar3 + -1 < iVar6)) {
        param_2 = 0;
      }
      else {
        param_2 = *(int *)(local_14[2] + iVar6 * 4);
      }
      if (param_2 != 0) {
        iVar5 = (local_4 - local_c) - (uint)(local_8 < local_10);
        for (iVar3 = FUN_005cade0(*(undefined4 *)(iVar2 + 0xbc8),param_2,0,local_10,local_c,
                                  local_8 - local_10,iVar5,0);
            (-1 < iVar3 &&
            (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 8) + iVar3 * 4), iVar1 != 0));
            iVar3 = FUN_005cade0(*(undefined4 *)(iVar2 + 0xbc8),param_2,iVar3 + 1,local_10,local_c,
                                 local_8 - local_10,iVar5,0)) {
          FUN_0049ce10(iVar2,iVar1);
        }
      }
    }
    if (**(int **)(iVar2 + 0xcd0) != 0) {
      FUN_005c9070(*(undefined4 *)(iVar2 + 0xbc8),*(int **)(iVar2 + 0xcd0),0xffffffff,0x10);
    }
    FUN_0048f940(*(undefined4 *)(iVar2 + 0xbc8),*(undefined4 *)(iVar2 + 0xcd0),2);
    FUN_005da080(*(undefined4 *)(iVar2 + 0xbc8),*(undefined4 *)(iVar2 + 0xcd0));
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


