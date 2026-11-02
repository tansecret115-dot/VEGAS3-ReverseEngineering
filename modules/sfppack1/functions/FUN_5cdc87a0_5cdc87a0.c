/* Module: sfppack1.dll
   Function: FUN_5cdc87a0
   Address: 5cdc87a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc87a0(int param_1)

{
  if (*(int *)(param_1 + 0x30) < 1) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    return 0;
  }
  if (0x9c4 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0x9c4;
    return 0;
  }
  return 1;
}


