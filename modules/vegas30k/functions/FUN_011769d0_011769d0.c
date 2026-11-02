/* Module: vegas30k.dll
   Function: FUN_011769d0
   Address: 011769d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011769d0(int param_1)

{
  HANDLE hEvent;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x38) = hEvent;
  SetEvent(hEvent);
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  return 1;
}


