/* Module: vidcap30.exe
   Function: FUN_0045f710
   Address: 0045f710
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0045f710(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *local_4;
  
  iVar4 = 0;
  local_4 = (int *)0x0;
  bVar5 = false;
  FUN_0042f4b0(param_1,0);
  if ((param_2 != 0) && (iVar1 = **(int **)(param_2 + 0x10), 0 < iVar1)) {
    do {
      if (bVar5) goto LAB_0045f793;
      piVar2 = *(int **)(*(int *)(*(int *)(param_2 + 0x10) + 8) + iVar4 * 4);
      if (*piVar2 == 4) {
        iVar3 = FUN_0045f710(param_1,piVar2,param_3);
        bVar5 = iVar3 != 0;
      }
      else if (*piVar2 == 5) {
        bVar5 = param_3 == piVar2[2];
        local_4 = piVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
    if (bVar5) goto LAB_0045f793;
  }
  local_4 = (int *)0x0;
LAB_0045f793:
  FUN_0042f5d0(param_1,0);
  return local_4;
}


