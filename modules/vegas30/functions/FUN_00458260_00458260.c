/* Module: vegas30.exe
   Function: FUN_00458260
   Address: 00458260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00458260(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0xb70);
  param_2[1] = *(undefined4 *)(param_1 + 0xb74);
  *param_3 = *(undefined4 *)(param_1 + 0xb78);
  param_3[1] = *(undefined4 *)(param_1 + 0xb7c);
  return;
}


