/* Module: encn3260.dll
   Function: FUN_6648f230
   Address: 6648f230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6648f230(int param_1)

{
  if (*(int *)(param_1 + 0x84) == 0) {
    *(undefined4 *)(param_1 + 0x84) = 1;
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x74) = 1;
      return 0;
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      FUN_6648f2b0(param_1);
    }
  }
  return 0;
}


