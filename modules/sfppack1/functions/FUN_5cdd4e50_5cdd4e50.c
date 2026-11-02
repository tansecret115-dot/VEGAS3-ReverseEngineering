/* Module: sfppack1.dll
   Function: FUN_5cdd4e50
   Address: 5cdd4e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdd4e50(int param_1)

{
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 100;
    return 0;
  }
  return 1;
}


