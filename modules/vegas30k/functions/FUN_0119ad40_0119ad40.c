/* Module: vegas30k.dll
   Function: FUN_0119ad40
   Address: 0119ad40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0119ad40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84 + *(int *)(param_1 + 0x284) * 4) = param_2;
  *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
  return;
}


