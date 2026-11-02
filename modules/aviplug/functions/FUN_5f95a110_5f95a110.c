/* Module: aviplug.dll
   Function: FUN_5f95a110
   Address: 5f95a110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f95a110(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  uVar3 = 1;
  EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int **)(param_1 + 8);
  iVar4 = *piVar1 + -1;
  if (-1 < iVar4) {
    while (piVar2 = (int *)(piVar1[1] * iVar4 + piVar1[2]), param_2 != *piVar2) {
      iVar4 = iVar4 + 1;
      if (iVar4 < 0) {
        LeaveCriticalSection(lpCriticalSection);
        return 1;
      }
    }
    if (piVar2[3] != 0) {
      ICRemove(0x63646976,*piVar2,0);
    }
    FUN_5f978470(*(int **)(param_1 + 8),iVar4,1,0);
    uVar3 = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar3;
}


