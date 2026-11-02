/* Module: vidcap30.exe
   Function: FUN_0045c240
   Address: 0045c240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045c240(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  EnterCriticalSection(lpCriticalSection);
  param_1[8] = -1;
  iVar4 = 0;
  iVar1 = *(int *)param_1[7];
  if (iVar1 < 1) {
LAB_0045c293:
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  do {
    piVar2 = *(int **)(*(int *)(param_1[7] + 8) + iVar4 * 4);
    if (*piVar2 != 0) {
      iVar3 = (**(code **)(*param_1 + 0xc))(piVar2 + 1);
      if (iVar3 != 0) {
        param_1[8] = iVar4;
        goto LAB_0045c293;
      }
    }
    iVar4 = iVar4 + 1;
    if (iVar1 <= iVar4) {
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  } while( true );
}


