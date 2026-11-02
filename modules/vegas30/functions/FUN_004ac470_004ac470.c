/* Module: vegas30.exe
   Function: FUN_004ac470
   Address: 004ac470
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ac470(int *param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_8;
  
  iVar8 = *param_4;
  if (*(int *)((int)param_1 + 0xbc8) == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)FUN_005b87b0(*(int *)((int)param_1 + 0xbc8));
  }
  iVar3 = *param_1;
  if ((*(uint *)(param_2 + 8) <= param_3) || (iVar4 = param_2 + 0x70 + param_3 * 0x68, iVar4 == 0))
  {
    return 0;
  }
  iVar1 = *(int *)(iVar4 + 8);
  if ((iVar8 < iVar3) && (-1 < iVar8)) {
    iVar1 = FUN_004aa940(param_1,iVar8);
    iVar2 = FUN_004a9c80(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar1 + 4));
    if (iVar2 < 0) {
      if (0 < iVar8) {
        iVar3 = FUN_004aa940(param_1,iVar8 + -1);
        if ((iVar3 != 0) &&
           ((*(int *)(iVar3 + 4) == *(int *)(iVar4 + 8) || (*(int *)(iVar3 + 4) == 0)))) {
          *param_4 = iVar8 + -1;
          return iVar3;
        }
      }
    }
    else {
      iVar2 = FUN_004a9c80(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar1 + 4));
      if (iVar2 < 1) goto LAB_004ac731;
      iVar8 = iVar8 + 1;
      if ((iVar8 < iVar3) && (iVar1 = FUN_004aa940(param_1,iVar8), iVar1 != 0)) {
        if ((*(int *)(iVar1 + 4) != *(int *)(iVar4 + 8)) && (*(int *)(iVar1 + 4) != 0)) {
          *param_4 = iVar8;
          return 0;
        }
        goto LAB_004ac731;
      }
    }
  }
  else if (iVar3 < 1) {
    if (param_3 == 0) {
      *param_4 = 0;
      return 0;
    }
    uVar6 = 0;
    if (0 < (int)param_3) {
      uVar7 = param_2 + 0x70;
      while ((uVar5 = -(uint)(uVar6 < *(uint *)(param_2 + 8)) & uVar7,
             *(int *)(uVar5 + 0x48) != iVar8 ||
             (iVar3 = FUN_004a9c80(*(undefined4 *)(uVar5 + 8),iVar1), iVar3 == 0))) {
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 + 0x68;
        if ((int)param_3 <= (int)uVar6) {
          *param_4 = iVar8;
          return 0;
        }
      }
      iVar8 = iVar8 + 1;
    }
  }
  else {
    if (param_3 == 0) {
      FUN_004aa960(param_1);
      *param_4 = iVar3;
      return 0;
    }
    uVar6 = 0;
    if (0 < (int)param_3) {
      local_8 = param_2 + 0x70;
      do {
        uVar7 = -(uint)(uVar6 < *(uint *)(param_2 + 8)) & local_8;
        if (*(int *)(uVar7 + 0x48) != iVar8) {
          FUN_004aa940(param_1,iVar3 + -1);
          *param_4 = iVar8;
          return 0;
        }
        iVar4 = FUN_004a9c80(*(undefined4 *)(uVar7 + 8),iVar1);
        if (iVar4 < 0) {
          FUN_004aa960(param_1);
          *param_4 = iVar8 + 1;
          return 0;
        }
        iVar4 = FUN_004a9c80(*(undefined4 *)(uVar7 + 8),iVar1);
        if (0 < iVar4) {
          if (iVar8 != iVar3) {
            FUN_004aa940(param_1,iVar3 + -1);
            *param_4 = iVar8;
            return 0;
          }
          iVar4 = FUN_004aa960(param_1);
          if ((iVar4 == 0) || ((*(int *)(iVar4 + 4) != iVar1 && (*(int *)(iVar4 + 4) != 0)))) break;
          iVar8 = iVar8 + -1;
        }
        uVar6 = uVar6 + 1;
        local_8 = local_8 + 0x68;
      } while ((int)uVar6 < (int)param_3);
    }
  }
  iVar1 = 0;
LAB_004ac731:
  *param_4 = iVar8;
  return iVar1;
}


