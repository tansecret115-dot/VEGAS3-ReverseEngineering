/* Module: vfplugs.dll
   Function: FUN_00415930
   Address: 00415930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00415930(int param_1,float param_2)

{
  if (((float)_DAT_00487598 <= param_2) && (param_2 <= _DAT_00487ed4)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(float *)(param_1 + 0x9c) = param_2;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return 0;
  }
  return 0x80070057;
}


