/* Module: vidcap30.exe
   Function: FUN_005826a0
   Address: 005826a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005826a0(int param_1)

{
  HANDLE hHandle;
  
  hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
    CloseHandle(hHandle);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_005825d0();
  FUN_005825d0();
  return;
}


