/* Module: vegas30k.dll
   Function: FUN_01194940
   Address: 01194940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01194940(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c8));
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c8));
  return 0;
}


