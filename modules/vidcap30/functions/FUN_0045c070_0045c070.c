/* Module: vidcap30.exe
   Function: FUN_0045c070
   Address: 0045c070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0045c070(int param_1,LPCSTR param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar3 = 0;
  local_8 = 0;
  iVar1 = **(int **)(param_1 + 0x1c);
  if (0 < iVar1) {
    do {
      iVar2 = lstrcmpiA(param_2,(LPCSTR)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + iVar3 * 4
                                                 ) + 4));
      if (iVar2 == 0) {
        local_8 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return local_8;
}


