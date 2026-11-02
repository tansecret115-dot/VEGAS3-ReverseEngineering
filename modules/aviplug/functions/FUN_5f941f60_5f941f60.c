/* Module: aviplug.dll
   Function: FUN_5f941f60
   Address: 5f941f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f941f60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x158 + param_2 * 4) = param_3;
  *(undefined4 *)(param_1 + 0x168 + param_2 * 4) = param_4;
  InterlockedIncrement((LONG *)(param_3 + 0x1c));
  *(undefined4 *)(param_1 + 0xfc + param_2 * 0x18) = *(undefined4 *)(param_3 + 8);
  return;
}


