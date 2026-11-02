/* Module: vegas30.exe
   Function: FUN_005c97b0
   Address: 005c97b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c97b0(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_220 [24];
  int local_208;
  int local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  
  FUN_005b83b0(param_1,1);
  if ((*(int *)(param_2 + 0x18) == param_3) && (*(int *)(param_2 + 0x1c) == param_4)) {
    uVar4 = 1;
    if (param_5 != (int *)0x0) {
      *param_5 = -1;
    }
  }
  else {
    piVar1 = *(int **)(*(int *)(param_2 + 8) + 0x24);
    iVar2 = _SfList_FindSpecificItemRange_16(piVar1,0,0xffffffff,param_2);
    local_200 = *(undefined4 *)(param_2 + 0x20);
    local_204 = param_4;
    local_1fc = *(undefined4 *)(param_2 + 0x24);
    local_208 = param_3;
    iVar3 = _SfList_FindSortedInsertIndexRange_20(piVar1,local_220,0,0xffffffff,&LAB_005c8a50);
    if (iVar3 < 0) {
      iVar3 = *piVar1;
    }
    if (iVar2 < iVar3) {
      iVar3 = iVar3 + -1;
    }
    *(int *)(param_2 + 0x18) = param_3;
    *(int *)(param_2 + 0xa0) = param_3;
    *(int *)(param_2 + 0x1c) = param_4;
    *(int *)(param_2 + 0xa4) = param_4;
    if (iVar2 != iVar3) {
      _SfList_MoveRange_16(piVar1,iVar2,iVar3,1);
      *(uint *)*param_1 = *(uint *)*param_1 | 0x80000;
    }
    uVar4 = 0;
    if (param_5 != (int *)0x0) {
      *param_5 = iVar3;
    }
    iVar3 = *(int *)(param_2 + 0x3c) + 1;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(param_2 + 0x3c) = iVar3;
    iVar3 = *(int *)(param_2 + 8);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x200000;
      *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    }
    *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
    if (((*(uint *)(param_2 + 0x10) & 0x400) != 0) ||
       ((*(uint *)(*(int *)(param_2 + 8) + 0x10) & 0x200) != 0)) {
      *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
    }
  }
  FUN_005b84d0(param_1,1);
  return uVar4;
}


