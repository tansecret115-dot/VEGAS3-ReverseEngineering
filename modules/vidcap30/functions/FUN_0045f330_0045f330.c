/* Module: vidcap30.exe
   Function: FUN_0045f330
   Address: 0045f330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045f330(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0042f4b0(param_1,1);
  iVar3 = 0;
  iVar1 = **(int **)(param_2 + 0x10);
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_2 + 0x10) + 8) + iVar3 * 4);
      if (*piVar2 == 4) {
        if (param_3 != 0) {
          FUN_0045f330(param_1,piVar2,param_3);
        }
      }
      else if (*piVar2 == 5) {
        FUN_0045f920(param_1,piVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_0042f5d0(param_1,1);
  return;
}


