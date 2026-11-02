/* Module: vegas30k.dll
   Function: FUN_01197350
   Address: 01197350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01197350(int param_1)

{
  if (*(int *)(param_1 + 0x430) == 0) {
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x434));
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x434));
  return 0;
}


