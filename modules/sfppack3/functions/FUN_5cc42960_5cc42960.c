/* Module: sfppack3.dll
   Function: FUN_5cc42960
   Address: 5cc42960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc42960(int param_1)

{
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return 0;
  }
  return 1;
}


