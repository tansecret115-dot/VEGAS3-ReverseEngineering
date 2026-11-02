/* Module: vidcap30.exe
   Function: FUN_0045f4c0
   Address: 0045f4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045f4c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  FUN_0042f4b0(param_1,0);
  iVar5 = 0;
  iVar1 = **(int **)(param_2 + 0x10);
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_2 + 0x10) + 8) + iVar5 * 4);
      if (*piVar2 == 4) {
        if (param_3 != 0) {
          iVar3 = FUN_0045f4c0(param_1,piVar2,param_3);
          iVar4 = iVar4 + iVar3;
        }
      }
      else if (*piVar2 == 5) {
        iVar3 = FUN_0045f820(param_1,piVar2);
        if (iVar3 != 0) {
          iVar4 = iVar4 + 1;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  FUN_0042f5d0(param_1,0);
  return iVar4;
}


