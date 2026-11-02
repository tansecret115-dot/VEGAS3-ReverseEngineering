/* Module: sfxpfx1.dll
   Function: FUN_5c97b8cf
   Address: 5c97b8cf
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c97b8cf(int param_1)

{
  HANDLE hHandle;
  
  hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle(hHandle);
  }
  return;
}


