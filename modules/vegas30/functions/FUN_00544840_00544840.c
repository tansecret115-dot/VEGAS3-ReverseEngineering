/* Module: vegas30.exe
   Function: FUN_00544840
   Address: 00544840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544840(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x3c) + 0xc));
  iVar4 = 0;
  iVar5 = **(int **)(param_1 + 0x3c);
  if (0 < iVar5) {
    do {
      piVar1 = *(int **)(param_1 + 0x3c);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if ((iVar4 < 0) || (iVar2 + -1 < iVar4)) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(piVar1[1] * iVar4 + piVar1[2]);
      }
      if (*piVar3 == param_2) {
        _SfList_DeleteList_16(piVar1,iVar4,1,0);
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + -1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x3c) + 0xc));
  return 0;
}


