/* Module: vidcap30.exe
   Function: FUN_00582780
   Address: 00582780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00582780(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x14) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  SetEvent(*(HANDLE *)(param_1 + 4));
  WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}


