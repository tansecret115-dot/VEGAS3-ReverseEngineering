/* Module: mp3plug.dll
   Function: FUN_5f6fc3f0
   Address: 5f6fc3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6fc3f0(int param_1,int param_2,int param_3)

{
  return param_3 * 4 + ((param_2 + *(int *)(param_1 + 0x5100)) % 0x750) * 8 + param_1;
}


