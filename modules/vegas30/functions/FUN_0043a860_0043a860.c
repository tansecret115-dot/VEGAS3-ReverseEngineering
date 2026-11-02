/* Module: vegas30.exe
   Function: FUN_0043a860
   Address: 0043a860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a860(int param_1,int *param_2)

{
  *param_2 = *param_2 + (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x34));
  param_2[1] = param_2[1] + (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
  return;
}


