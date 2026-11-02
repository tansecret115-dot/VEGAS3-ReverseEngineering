/* Module: stl2plg.dll
   Function: FUN_0041f990
   Address: 0041f990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f990(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  iVar2 = *(int *)(param_1 + 0x58) + -1;
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar2 <= *(int *)(param_1 + 0x4c)) {
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 < *(int *)(param_1 + 0x54)) {
    piVar1 = *(int **)(param_1 + 0x44);
    iVar3 = -1;
    iVar2 = *piVar1;
    if (0 < iVar2) {
      do {
        iVar2 = iVar2 + -1;
        if (*(int *)(piVar1[2] + 8 + piVar1[1] * iVar2) < 0x7fffffff) {
          iVar3 = iVar2;
        }
      } while (0 < iVar2);
      if (-1 < iVar3) {
        VirtualFree(*(LPVOID *)(piVar1[1] * iVar3 + 4 + piVar1[2]),0,0x8000);
        FUN_004164c0(*(int **)(param_1 + 0x44),iVar3,1,0);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  return;
}


