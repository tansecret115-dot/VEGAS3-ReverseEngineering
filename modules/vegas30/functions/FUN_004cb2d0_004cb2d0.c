/* Module: vegas30.exe
   Function: FUN_004cb2d0
   Address: 004cb2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004cb2d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((param_3 != 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    return 0;
  }
  if (param_2 == -1) {
    if ((*(int *)(param_1 + 0xbc8) == 0) ||
       (iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar1 == 0)) {
      param_2 = 0;
    }
    else {
      param_2 = _DAT_00000000;
      if (*(int *)(param_1 + 0xbc8) != 0) {
        piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        param_2 = *piVar2;
      }
    }
    param_2 = param_2 + -1;
  }
  if (param_2 < 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x18) & 0x80000) == 0) {
    iVar3 = FUN_004cb480(param_1,param_2,&param_3);
    iVar1 = *(int *)(param_1 + 0xba8);
    if ((iVar3 < iVar1) || (*(int *)(param_1 + 0xbac) <= param_3)) {
      iVar1 = iVar3 - iVar1;
    }
    else {
      iVar3 = iVar3 + param_3;
      if (iVar3 <= iVar1 + *(int *)(param_1 + 0xbac)) {
        return 0;
      }
      for (iVar6 = *(int *)(param_1 + 0xbc0); iVar6 <= param_2; iVar6 = iVar6 + 1) {
        iVar4 = FUN_004cb3e0(param_1,iVar6);
        iVar1 = iVar1 + iVar4;
        if (iVar3 <= iVar1 + *(int *)(param_1 + 0xbac)) break;
      }
      iVar1 = iVar1 - *(int *)(param_1 + 0xba8);
    }
  }
  else {
    if (*(int *)(param_1 + 0xbc0) == param_2) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0xbac) * param_2 - *(int *)(param_1 + 0xba8);
  }
  uVar5 = FUN_00458ac0(param_1,0,0,iVar1);
  return uVar5;
}


