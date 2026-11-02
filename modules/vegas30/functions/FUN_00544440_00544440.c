/* Module: vegas30.exe
   Function: FUN_00544440
   Address: 00544440
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00544440(int param_1,int param_2)

{
  LONG LVar1;
  
  GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  LVar1 = InterlockedDecrement((LONG *)(param_2 + 0x14));
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  return (-1 < LVar1) - 1 & 0x80070057;
}


