/* Module: vidcap30.exe
   Function: FUN_00584020
   Address: 00584020
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00584020(int param_1)

{
  int iVar1;
  HANDLE hHandle;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584c68;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_0057e350();
    if (iVar1 < 0) {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return iVar1;
    }
    if (*(int *)(param_1 + -0x34) != 0) {
      iVar1 = FUN_00582780(3);
      if (iVar1 < 0) {
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = local_c;
        return iVar1;
      }
      iVar1 = FUN_00582780(4);
      if (iVar1 < 0) {
        LeaveCriticalSection(lpCriticalSection);
        ExceptionList = local_c;
        return iVar1;
      }
      hHandle = (HANDLE)InterlockedExchange((LONG *)(param_1 + -0x34),0);
      if (hHandle != (HANDLE)0x0) {
        WaitForSingleObject(hHandle,0xffffffff);
        CloseHandle(hHandle);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}


