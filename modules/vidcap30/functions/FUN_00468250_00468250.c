/* Module: vidcap30.exe
   Function: FUN_00468250
   Address: 00468250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00468250(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0057c520(param_1);
  SetEvent(*(HANDLE *)(param_1 + 0xa0));
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 100);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x9c);
  while (iVar1 != 1) {
    LeaveCriticalSection(lpCriticalSection);
    WaitForSingleObject(*(HANDLE *)(param_1 + 0xa8),0xffffffff);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)(param_1 + 0x9c);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}


