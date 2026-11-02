/* Module: vegas30k.dll
   Function: FUN_01197e60
   Address: 01197e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01197e60(int param_1)

{
  if (*(int *)(param_1 + 0x480) == 0) {
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x484));
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x484));
  return 0;
}


