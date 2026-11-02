/* Module: vegas30.exe
   Function: FUN_0046c310
   Address: 0046c310
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  FUN_005b83b0(uVar1,1);
  iVar5 = 0;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar2 == 0)) {
    param_1 = 0;
  }
  else if (*(int *)(param_1 + 0xbc8) == 0) {
    param_1 = _DAT_00000000;
  }
  else {
    piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    param_1 = *piVar3;
  }
  if (0 < param_1) {
    do {
      iVar2 = *(int *)(*(int *)(local_8 + 8) + iVar5 * 4);
      if (((*(uint *)(iVar2 + 0x10) & 0x100000) != 0) &&
         (iVar4 = FUN_005c8bb0(iVar2,param_2,param_3), -1 < iVar4)) {
        FUN_005c9930(uVar1,iVar2,iVar4,param_4,param_5);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  FUN_005b84d0(uVar1,1);
  return;
}


