/* Module: vfplugs.dll
   Function: FUN_004718d0
   Address: 004718d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004718d0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x4a0);
  param_2[1] = *(undefined4 *)(param_1 + 0x4a4);
  param_2[2] = *(undefined4 *)(param_1 + 0x4a8);
  return 1;
}


