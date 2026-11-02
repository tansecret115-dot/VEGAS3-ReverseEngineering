/* Module: vidpcore.dll
   Function: FUN_5dea0970
   Address: 5dea0970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5dea0970(int param_1,float param_2)

{
  if (((float)_DAT_5df18838 <= param_2) && (param_2 <= _DAT_5df205c8)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(float *)(param_1 + 0x9c) = param_2;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return 0;
  }
  return 0x80070057;
}


