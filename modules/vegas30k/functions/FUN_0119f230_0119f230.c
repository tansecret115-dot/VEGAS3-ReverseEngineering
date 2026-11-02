/* Module: vegas30k.dll
   Function: FUN_0119f230
   Address: 0119f230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0119f230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 0x1b0) = param_3;
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  *(undefined4 *)(param_1 + 0x1b4) = param_4;
  *(undefined4 *)(param_1 + 0x1b8) = param_5;
  *(undefined4 *)(param_1 + 0x1bc) = param_6;
  return 0;
}


