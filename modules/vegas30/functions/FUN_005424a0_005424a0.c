/* Module: vegas30.exe
   Function: FUN_005424a0
   Address: 005424a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005424a0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  return;
}


