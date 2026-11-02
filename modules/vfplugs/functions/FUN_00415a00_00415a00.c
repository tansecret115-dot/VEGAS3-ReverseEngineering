/* Module: vfplugs.dll
   Function: FUN_00415a00
   Address: 00415a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00415a00(int param_1,float param_2)

{
  if (param_2 <= (float)_DAT_00487598) {
    return 0x80070057;
  }
  if (param_2 != *(float *)(param_1 + 0x70)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(float *)(param_1 + 0x70) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return 0;
}


