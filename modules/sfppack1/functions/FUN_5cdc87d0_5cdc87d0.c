/* Module: sfppack1.dll
   Function: FUN_5cdc87d0
   Address: 5cdc87d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc87d0(int param_1)

{
  if (*(int *)(param_1 + 0x34) < 1) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    return 0;
  }
  if (0x9c4 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0x9c4;
    return 0;
  }
  return 1;
}


