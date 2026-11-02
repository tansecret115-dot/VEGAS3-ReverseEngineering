/* Module: rmbe3260.dll
   Function: FUN_66020280
   Address: 66020280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66020280(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x158));
  (**(code **)(*param_2 + 4))(param_2);
  FUN_6605cf30((void *)(param_1 + 0x15c),*(int *)(param_1 + 0x160),param_2);
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x158));
  return 0;
}


