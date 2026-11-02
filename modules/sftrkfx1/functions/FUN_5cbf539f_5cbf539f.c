/* Module: sftrkfx1.dll
   Function: FUN_5cbf539f
   Address: 5cbf539f
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf539f(int param_1)

{
  HANDLE hHandle;
  
  hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle(hHandle);
  }
  return;
}


