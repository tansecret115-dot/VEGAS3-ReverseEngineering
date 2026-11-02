/* Module: extmondrv.dll
   Function: FUN_0040a680
   Address: 0040a680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a680(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  if (((*(int *)(param_1 + 0x30) != *(int *)(param_2 + 4)) ||
      (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 8))) ||
     (*(int *)(param_1 + 0x3c) != *(int *)(param_2 + 0x10))) {
    uVar1 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  return uVar1;
}


