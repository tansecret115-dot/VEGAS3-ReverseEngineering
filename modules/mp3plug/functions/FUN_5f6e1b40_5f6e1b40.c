/* Module: mp3plug.dll
   Function: FUN_5f6e1b40
   Address: 5f6e1b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e1b40(int param_1,int param_2)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (param_2 - *(int *)(param_1 + 0x1c));
  return;
}


