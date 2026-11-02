/* Module: sfppack1.dll
   Function: FUN_5cdc8800
   Address: 5cdc8800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8800(int param_1)

{
  if (*(int *)(param_1 + 0x38) < 1) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    return 0;
  }
  if (0x9c4 < *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 0x9c4;
    return 0;
  }
  return 1;
}


