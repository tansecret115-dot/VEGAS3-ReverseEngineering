/* Module: mp3plug.dll
   Function: FUN_5f6fc420
   Address: 5f6fc420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fc420(int param_1,int param_2)

{
  *(int *)(param_1 + 0x5100) = (param_2 + *(int *)(param_1 + 0x5100)) % 0x750;
  return 0;
}


