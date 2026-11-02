/* Module: vidcap30.exe
   Function: FUN_0045c2a0
   Address: 0045c2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045c2a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if (param_1[8] != -1) {
    iVar5 = 0;
    iVar1 = *(int *)param_1[7];
    if (0 < iVar1) {
      do {
        iVar4 = (param_1[8] + iVar5) % iVar1;
        piVar2 = *(int **)(*(int *)(param_1[7] + 8) + iVar4 * 4);
        if ((*piVar2 != 0) && (iVar3 = (**(code **)(*param_1 + 0xc))(piVar2 + 1), iVar3 != 0)) {
          param_1[8] = iVar4;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    if (iVar5 == iVar1) {
      param_1[8] = -1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}


