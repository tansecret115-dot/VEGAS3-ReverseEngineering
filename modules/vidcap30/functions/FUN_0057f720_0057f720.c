/* Module: vidcap30.exe
   Function: FUN_0057f720
   Address: 0057f720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057f720(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa4);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0xc4) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  SetEvent(*(HANDLE *)(param_1 + 0xbc));
  if (*(HANDLE *)(param_1 + 0xc0) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0xc0));
    CloseHandle(*(HANDLE *)(param_1 + 0xc0));
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


