/* Module: vidcap30.exe
   Function: FUN_0045f390
   Address: 0045f390
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0045f390(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  piVar3 = (int *)0x0;
  FUN_0042f4b0(param_1,0);
  if (param_2 != (int *)0x0) {
    bVar6 = param_3 == param_2[2];
    piVar4 = param_2;
    if (!bVar6) {
      iVar5 = 0;
      iVar1 = *(int *)param_2[4];
      piVar4 = piVar3;
      if (0 < iVar1) {
        do {
          if (bVar6) goto LAB_0045f3fd;
          piVar3 = *(int **)(*(int *)(param_2[4] + 8) + iVar5 * 4);
          if (*piVar3 == 4) {
            iVar2 = FUN_0045f390(param_1,piVar3,param_3);
            bVar6 = iVar2 != 0;
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar3;
        } while (iVar5 < iVar1);
      }
    }
    piVar3 = piVar4;
    if (bVar6) goto LAB_0045f3fd;
  }
  piVar3 = (int *)0x0;
LAB_0045f3fd:
  FUN_0042f5d0(param_1,0);
  return piVar3;
}


