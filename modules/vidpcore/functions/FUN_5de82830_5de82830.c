/* Module: vidpcore.dll
   Function: FUN_5de82830
   Address: 5de82830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de82830(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xcc);
  param_2[1] = *(undefined4 *)(param_1 + 200);
  return 0;
}


