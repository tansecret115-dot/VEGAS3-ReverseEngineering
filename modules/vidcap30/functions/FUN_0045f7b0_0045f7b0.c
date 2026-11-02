/* Module: vidcap30.exe
   Function: FUN_0045f7b0
   Address: 0045f7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0045f7b0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  bVar2 = false;
  piVar4 = (int *)0x0;
  FUN_0042f4b0(param_1,0);
  if (param_2 != 0) {
    iVar3 = 0;
    iVar1 = **(int **)(param_2 + 0x10);
    if (0 < iVar1) {
      do {
        if (bVar2) goto LAB_0045f80b;
        piVar4 = *(int **)((*(int **)(param_2 + 0x10))[2] + iVar3 * 4);
        if (*piVar4 == 5) {
          if ((param_3 == piVar4[4]) && (param_4 == piVar4[5])) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
      if (bVar2) goto LAB_0045f80b;
    }
  }
  piVar4 = (int *)0x0;
LAB_0045f80b:
  FUN_0042f5d0(param_1,0);
  return piVar4;
}


