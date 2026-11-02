/* Module: sftrans1.dll
   Function: FUN_0052b020
   Address: 0052b020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0052b020(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10;
  int local_c;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x308) + 8);
  param_2 = *(int *)(*(int *)(param_1 + 0x308) + 4) * param_2;
  local_18 = *(int *)(param_2 + iVar3);
  param_2 = param_2 + iVar3;
  iStack_14 = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_2 + 0x150) != 0) {
    if (_DAT_00555910 <= (double)CONCAT44(iStack_14,local_18)) {
      if (_DAT_00555908 < (double)CONCAT44(iStack_14,local_18)) {
        local_18 = 0;
        iStack_14 = 0x3ff00000;
      }
    }
    else {
      local_18 = 0;
      iStack_14 = 0;
    }
  }
  local_1c = *(int *)(param_1 + 0x2d4) - *(int *)(param_1 + 0x2cc);
  iVar3 = ftol();
  local_1c = *(int *)(param_1 + 0x2d8) - *(int *)(param_1 + 0x2d0);
  local_18 = iVar3;
  iStack_14 = ftol();
  BVar4 = IsRectEmpty((RECT *)(param_2 + 0x140));
  if (BVar4 == 0) {
    iVar1 = *(int *)(param_2 + 0x140);
    iVar6 = *(int *)(param_2 + 0x144) + iStack_14;
    iVar2 = *(int *)(param_2 + 0x148);
    iVar5 = *(int *)(param_2 + 0x14c);
  }
  else {
    iVar5 = ftol();
    iVar1 = -iVar5;
    iVar6 = iStack_14 - iVar5;
    iVar2 = iVar5;
  }
  local_1c = *param_3;
  if ((((local_1c <= iVar3 + iVar2) && (iVar3 + iVar1 <= local_1c)) &&
      (param_3[1] <= iVar5 + iStack_14)) &&
     ((iVar6 <= param_3[1] && (*(int *)(param_2 + 0x14) == 1)))) {
    *(int *)(param_1 + 0x2f0) = local_1c - local_18;
    *(int *)(param_1 + 0x2f4) = param_3[1] - iStack_14;
    return 1;
  }
  if ((((*(int *)(param_2 + 0x154) != 0) &&
       (iVar3 = FUN_0052a030(param_1,param_2,iVar3 + iVar1,iVar6,iVar3 + iVar2,iVar5 + iStack_14,
                             &local_18,&local_1c), iVar3 != 0)) &&
      ((*param_3 <= local_10 &&
       (((local_18 <= *param_3 && (param_3[1] <= local_c)) && (iStack_14 <= param_3[1])))))) &&
     (*(int *)(param_2 + 0x14) == 1)) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    return 1;
  }
  return 0;
}


