/* Module: vegas30k.dll
   Function: FUN_01127e40
   Address: 01127e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01127e40(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}


