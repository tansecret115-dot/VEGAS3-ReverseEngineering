/* Module: vegas30.exe
   Function: FUN_0047c700
   Address: 0047c700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047c700(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 0x28) = param_3[2];
  *(undefined4 *)(param_1 + 0x2c) = param_3[3];
  return 0;
}


