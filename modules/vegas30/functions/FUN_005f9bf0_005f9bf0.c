/* Module: vegas30.exe
   Function: FUN_005f9bf0
   Address: 005f9bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005f9bf0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (param_2 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return;
}


