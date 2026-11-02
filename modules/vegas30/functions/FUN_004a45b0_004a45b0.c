/* Module: vegas30.exe
   Function: FUN_004a45b0
   Address: 004a45b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a45b0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0xb48);
  param_2[1] = *(undefined4 *)(param_1 + 0xb4c);
  *param_3 = *(undefined4 *)(param_1 + 0xb50);
  param_3[1] = *(undefined4 *)(param_1 + 0xb54);
  return 1;
}


