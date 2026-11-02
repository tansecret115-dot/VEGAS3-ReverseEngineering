/* Module: vegas30.exe
   Function: FUN_004e28d0
   Address: 004e28d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e28d0(int param_1)

{
  if (0 < *(int *)(param_1 + 0xd94)) {
    FUN_00457e90(param_1,*(undefined4 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x604));
    FUN_00454330(param_1,1);
    return;
  }
  FUN_00457e90(param_1,20000000,0);
  FUN_00454330(param_1,1);
  return;
}


