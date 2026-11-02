/* Module: sfppack3.dll
   Function: FUN_5cc33040
   Address: 5cc33040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc33040(int param_1)

{
  if (*(int *)(param_1 + 0x2c) < 1) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 100;
    return 0;
  }
  return 1;
}


