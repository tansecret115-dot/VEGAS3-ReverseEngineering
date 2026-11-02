/* Module: sfppack2.dll
   Function: FUN_5cd3f946
   Address: 5cd3f946
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd3f946(int param_1)

{
  HANDLE hHandle;
  
  hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle(hHandle);
  }
  return;
}


