/* Module: vidcap30.exe
   Function: FUN_00469f30
   Address: 00469f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00469f30(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  FUN_0057e650();
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  if (*(HANDLE *)(param_1 + 0x104) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x10c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x10c));
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


