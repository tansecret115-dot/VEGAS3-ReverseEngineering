/* Module: sfnetmedia.dll
   Function: FUN_00427720
   Address: 00427720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00427720(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(HWND *)(param_1 + 0x28) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x28),0xf01,0,0);
  }
  PulseEvent(*(HANDLE *)(param_1 + 0x2c));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


