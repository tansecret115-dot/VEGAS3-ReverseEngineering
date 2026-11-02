/* Module: vegas30.exe
   Function: FUN_005ce9b0
   Address: 005ce9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ce9b0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  iVar5 = 0;
  local_4 = 0;
  local_8 = 0;
  iVar3 = FUN_005b87a0(param_1);
  if (iVar3 == 0) {
    return -0x7fffbffb;
  }
  FUN_005b86f0(param_1,&local_8);
  if (local_8 == 0) {
    return -0x7fffbffb;
  }
  FUN_005b83b0(param_1,1);
  if (param_2 == 0) {
    FUN_005caca0(param_1,iVar3);
    FUN_005b84d0(param_1,1);
    return 0;
  }
  piVar1 = *(int **)(*(int *)(local_8 + 8) + 0x24);
  iVar2 = *piVar1;
  if (0 < iVar2) {
    do {
      local_8 = *(int *)(piVar1[2] + iVar4 * 4);
      if (((*(uint *)(local_8 + 0x10) & 0x400) == 0) && (*(int *)(local_8 + 8) != iVar3)) {
        iVar5 = FUN_005c8dd0(local_8,&local_4,iVar3,*(undefined4 *)(local_8 + 0x18),
                             *(undefined4 *)(local_8 + 0x1c));
        if (iVar5 < 0) goto LAB_005cea8b;
        *(uint *)(local_4 + 0x10) = *(uint *)(local_4 + 0x10) | 0x400;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
    if (iVar5 < 0) {
LAB_005cea8b:
      iVar5 = 0;
    }
  }
  FUN_005b84d0(param_1,1);
  return iVar5;
}


