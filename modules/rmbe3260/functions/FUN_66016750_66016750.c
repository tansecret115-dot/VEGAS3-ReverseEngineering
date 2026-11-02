/* Module: rmbe3260.dll
   Function: FUN_66016750
   Address: 66016750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66016750(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (param_2 < uVar1) {
    iVar3 = (param_2 - uVar1) + -1;
  }
  else {
    iVar3 = param_2 - uVar1;
  }
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0xbc) = uVar1;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + *(int *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0xb8);
  uVar2 = *(uint *)(param_1 + 0xbc);
  iVar3 = *(int *)(param_1 + 0xc0) + param_3;
  *(int *)(param_1 + 0xc0) = iVar3;
  if (uVar1 < uVar2) {
    iVar4 = (uVar1 - uVar2) + -1;
  }
  else {
    iVar4 = uVar1 - uVar2;
  }
  iVar3 = iVar3 - (iVar4 * *(uint *)(param_1 + 0xb4)) / 1000;
  *(int *)(param_1 + 0xc4) = iVar3;
  if ((double)*(int *)(param_1 + 0xb0) <
      ((double)(*(int *)(param_1 + 200) + iVar3) * _DAT_660664b8) /
      (double)*(uint *)(param_1 + 0xb4)) {
    uVar5 = ftol();
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
    return 0;
  }
  return 0;
}


