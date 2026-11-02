/* Module: vegas30.exe
   Function: FUN_00538410
   Address: 00538410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00538410(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((-1 < *(int *)(param_1 + 0xb94)) &&
     ((0 < *(int *)(param_1 + 0xb94) || (*(int *)(param_1 + 0xb90) != 0)))) {
    FUN_00458030(param_1,param_2,param_3,1);
    FUN_00455250(param_1,0);
  }
  return;
}


