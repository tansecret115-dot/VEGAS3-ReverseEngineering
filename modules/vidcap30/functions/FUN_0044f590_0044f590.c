/* Module: vidcap30.exe
   Function: FUN_0044f590
   Address: 0044f590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f590(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_440;
  undefined1 local_43c [4];
  undefined4 local_438 [264];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  puVar4 = local_438;
  for (iVar3 = 0x10e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_4 = 5;
  local_14 = 3;
  local_10 = 3;
  local_18 = param_3;
  iVar3 = FUN_0044eee0(&local_440,param_2,local_438);
  if (-1 < iVar3) {
    iVar1 = 0;
    if (*(int **)(param_3 + 0x10) != (int *)0x0) {
      iVar1 = **(int **)(param_3 + 0x10);
    }
    while ((iVar1 = iVar1 + -1, -1 < iVar1 && (-1 < iVar3))) {
      piVar2 = *(int **)(*(int *)(*(int *)(param_3 + 0x10) + 8) + iVar1 * 4);
      if (*piVar2 == 4) {
        iVar3 = FUN_0044f590(local_43c,local_440,piVar2);
      }
      else if (*piVar2 == 5) {
        iVar3 = FUN_0044f650(local_43c,local_440,piVar2);
      }
    }
  }
  *param_1 = local_440;
  return;
}


