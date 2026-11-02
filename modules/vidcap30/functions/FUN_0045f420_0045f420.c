/* Module: vidcap30.exe
   Function: FUN_0045f420
   Address: 0045f420
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0045f420(undefined4 param_1,int param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  bVar5 = false;
  piVar4 = (int *)0x0;
  FUN_0042f4b0(param_1,0);
  if (param_2 != 0) {
    iVar3 = 0;
    iVar1 = **(int **)(param_2 + 0x10);
    if (0 < iVar1) {
      do {
        if (bVar5) goto LAB_0045f49c;
        piVar4 = *(int **)(*(int *)(*(int *)(param_2 + 0x10) + 8) + iVar3 * 4);
        if (*piVar4 == 4) {
          if (param_4 == 0) {
            iVar2 = lstrcmpiA((LPCSTR)piVar4[3],param_3);
          }
          else {
            iVar2 = lstrcmpA((LPCSTR)piVar4[3],param_3);
          }
          bVar5 = iVar2 == 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
      if (bVar5) goto LAB_0045f49c;
    }
  }
  piVar4 = (int *)0x0;
LAB_0045f49c:
  FUN_0042f5d0(param_1,0);
  return piVar4;
}


