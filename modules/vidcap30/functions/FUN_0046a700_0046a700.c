/* Module: vidcap30.exe
   Function: FUN_0046a700
   Address: 0046a700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046a700(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0xc0);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x5c) * 0x23788;
  FUN_00468590(iVar1,*(undefined4 *)(param_1 + -0x84),iVar1 + 0x23760,iVar1 + 0x23784,
               iVar1 + 0x23708);
  *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) + 1) % 0x14;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  SetEvent(*(HANDLE *)(param_1 + 0x30));
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


