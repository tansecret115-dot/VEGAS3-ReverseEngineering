/* Module: vegas30k.dll
   Function: FUN_011af240
   Address: 011af240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011af240(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b0) = 1;
  ResetEvent(*(HANDLE *)(param_1 + 0x810));
  return 0;
}


