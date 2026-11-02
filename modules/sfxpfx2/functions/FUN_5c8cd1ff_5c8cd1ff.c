/* Module: sfxpfx2.dll
   Function: FUN_5c8cd1ff
   Address: 5c8cd1ff
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8cd1ff(int param_1)

{
  HANDLE hHandle;
  
  hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle(hHandle);
  }
  return;
}


