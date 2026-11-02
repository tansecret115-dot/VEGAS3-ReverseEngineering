/* Module: vegas30k.dll
   Function: FUN_01041610
   Address: 01041610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01041610(int param_1)

{
  if (*(int *)(param_1 + 0x44) == 0) {
    return 1;
  }
  FUN_01040e20();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 0;
}


