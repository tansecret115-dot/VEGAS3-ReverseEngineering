/* Module: sfcd.cdd
   Function: FUN_004192a0
   Address: 004192a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004192a0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_1 + 0x24);
  return 0;
}


