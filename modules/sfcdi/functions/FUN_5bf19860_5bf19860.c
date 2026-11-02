/* Module: sfcdi.dll
   Function: FUN_5bf19860
   Address: 5bf19860
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5bf19860(int param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x1fe0) == 0) {
    *(undefined4 *)(param_1 + 0x1df0) = *(undefined4 *)(param_1 + 0x1e58);
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf19070,
                          (LPVOID)(param_1 + 0x28),0,(LPDWORD)(param_1 + 0x1fe4));
    *(HANDLE *)(param_1 + 0x1fe0) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      iVar3 = -0x7ff8fff2;
    }
    else if (*(int *)(param_1 + 0x1dec) == 0) {
      *(undefined4 *)(param_1 + 0x1de0) = 1;
      iVar3 = -0x7ff5ffda;
    }
    else {
      SetEvent(*(HANDLE *)(param_1 + 0x1df4));
    }
  }
  DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x1fe0),0);
  if ((DVar2 == 0) && (*(int *)(param_1 + 0x1dd0) < 0)) {
    iVar3 = *(int *)(param_1 + 0x1dd0);
  }
  if (-1 < iVar3) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x1dd8),50000);
  }
  return iVar3;
}


