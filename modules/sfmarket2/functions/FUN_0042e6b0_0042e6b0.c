/* Module: sfmarket2.dll
   Function: FUN_0042e6b0
   Address: 0042e6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042e6b0(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(HWND *)(param_1 + 0x28) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x28),0xf01,0,0);
  }
  PulseEvent(*(HANDLE *)(param_1 + 0x2c));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


