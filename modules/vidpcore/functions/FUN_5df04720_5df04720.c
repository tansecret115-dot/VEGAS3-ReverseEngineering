/* Module: vidpcore.dll
   Function: FUN_5df04720
   Address: 5df04720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df04720(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x4a0) = *param_2;
  *(undefined4 *)(param_1 + 0x4a4) = param_2[1];
  *(undefined4 *)(param_1 + 0x4a8) = param_2[2];
  return 1;
}


