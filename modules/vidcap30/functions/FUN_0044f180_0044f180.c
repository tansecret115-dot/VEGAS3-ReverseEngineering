/* Module: vidcap30.exe
   Function: FUN_0044f180
   Address: 0044f180
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044f180(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_440;
  undefined1 local_43c [4];
  undefined4 local_438 [264];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  iVar2 = FUN_0042e500(DAT_005bb838);
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  else {
    puVar5 = local_438;
    for (iVar4 = 0x10e; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_14 = 3;
    local_10 = 3;
    puVar5 = local_438;
    local_4 = 7;
    local_18 = iVar2;
    uVar3 = FUN_0044c610(param_1);
    iVar4 = FUN_0044eee0(&local_440,uVar3,puVar5);
    iVar6 = 0;
    if (*(int **)(iVar2 + 0x10) != (int *)0x0) {
      iVar6 = **(int **)(iVar2 + 0x10);
    }
    iVar6 = iVar6 + -1;
    if (-1 < iVar6) {
      while (-1 < iVar4) {
        piVar1 = *(int **)(*(int *)(*(int *)(iVar2 + 0x10) + 8) + iVar6 * 4);
        if (*piVar1 == 4) {
          iVar4 = FUN_0044f590(local_43c,local_440,piVar1);
        }
        else if (*piVar1 == 5) {
          iVar4 = FUN_0044f650(local_43c,local_440,piVar1);
        }
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) {
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}


