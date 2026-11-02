/* Module: vegas30.exe
   Function: FUN_00543420
   Address: 00543420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00543420(int param_1,undefined4 *param_2)

{
  GetCurrentThreadId();
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  param_2[1] = *(undefined4 *)(param_1 + 0x38);
  return;
}


