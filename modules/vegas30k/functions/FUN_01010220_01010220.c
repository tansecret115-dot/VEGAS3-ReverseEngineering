/* Module: vegas30k.dll
   Function: FUN_01010220
   Address: 01010220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01010220(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return 0;
}


