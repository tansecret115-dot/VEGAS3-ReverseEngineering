/* Module: vegas30.exe
   Function: FUN_00493050
   Address: 00493050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493050(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0xa4) == 2) {
    iVar2 = *(int *)(param_1 + 0xac4);
    if ((*(int *)(param_1 + 0xac4) <= param_4) &&
       (iVar2 = *(int *)(param_1 + 0xacc), param_4 <= *(int *)(param_1 + 0xacc))) {
      iVar2 = param_4;
    }
    param_1 = *(int *)(param_1 + 0xcf8);
    if (param_1 < 0) {
      param_1 = 0;
    }
    iVar2 = FUN_00497960(iVar1,iVar2);
    if (iVar2 < 0) {
      if ((*(int *)(iVar1 + 0xbc8) == 0) ||
         (iVar2 = FUN_005b87b0(*(int *)(iVar1 + 0xbc8)), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = _DAT_00000000;
        if (*(int *)(iVar1 + 0xbc8) != 0) {
          piVar3 = (int *)FUN_005b87b0(*(int *)(iVar1 + 0xbc8));
          iVar2 = *piVar3;
        }
      }
    }
    local_4 = *(undefined4 *)(iVar1 + 0x9c);
    local_8 = *(undefined4 *)(iVar1 + 0x98);
    lVar4 = ftol();
    lVar4 = lVar4 + *(longlong *)(iVar1 + 0xb88);
    if (*(int *)(iVar1 + 0x208) == 1) {
      param_1 = 0;
      if ((*(int *)(iVar1 + 0xbc8) == 0) ||
         (iVar2 = FUN_005b87b0(*(int *)(iVar1 + 0xbc8)), iVar2 == 0)) {
        iVar2 = -1;
      }
      else if (*(int *)(iVar1 + 0xbc8) == 0) {
        iVar2 = _DAT_00000000 + -1;
      }
      else {
        piVar3 = (int *)FUN_005b87b0(*(int *)(iVar1 + 0xbc8));
        iVar2 = *piVar3 + -1;
      }
    }
    else if (*(int *)(iVar1 + 0x208) == 2) {
      lVar4 = *(longlong *)(iVar1 + 0x600);
      local_8 = 0;
      local_4 = 0;
    }
    if ((param_2 & 8) == 0) {
      if ((param_2 & 4) == 0) {
        FUN_0049d860(iVar1);
      }
      else {
        FUN_004931f0(iVar1);
      }
      uVar5 = 0;
    }
    else {
      FUN_004931f0(iVar1);
      uVar5 = 1;
    }
    FUN_0049d570(iVar1,local_8,local_4,lVar4,param_1,iVar2,uVar5);
  }
  FUN_00492ef0(iVar1,param_2,param_3,param_4);
  return;
}


