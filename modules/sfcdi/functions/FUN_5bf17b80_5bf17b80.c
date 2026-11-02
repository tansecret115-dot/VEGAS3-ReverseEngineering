/* Module: sfcdi.dll
   Function: FUN_5bf17b80
   Address: 5bf17b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf17b80(LPVOID param_1)

{
  undefined4 uVar1;
  HANDLE hHandle;
  DWORD DVar2;
  
  uVar1 = 0x80004005;
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf17ad0,
                           param_1,0,(LPDWORD)&param_1);
    if (hHandle == (HANDLE)0x0) {
      return 0x8007000e;
    }
    DVar2 = WaitForSingleObject(hHandle,2000);
    if (DVar2 != 0x102) {
      CloseHandle(hHandle);
    }
    uVar1 = 0;
  }
  return uVar1;
}


