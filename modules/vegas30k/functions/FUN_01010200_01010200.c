/* Module: vegas30k.dll
   Function: FUN_01010200
   Address: 01010200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01010200(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return 0;
}


