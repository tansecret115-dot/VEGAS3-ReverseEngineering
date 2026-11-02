/* Module: sfmarket2.dll
   Function: FUN_0042e910
   Address: 0042e910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0042e910(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x60) == 0) {
    pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 0x2c) = pvVar1;
    if (pvVar1 != (HANDLE)0x0) {
      pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      *(HANDLE *)(param_1 + 0x30) = pvVar1;
      if (pvVar1 != (HANDLE)0x0) {
        *(undefined4 *)(param_1 + 0x60) = 1;
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      CloseHandle(*(HANDLE *)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0x80004005;
}


