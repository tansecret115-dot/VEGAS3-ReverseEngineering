/* Module: sfppack1.dll
   Function: FUN_5cdc8830
   Address: 5cdc8830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8830(int param_1)

{
  if (*(int *)(param_1 + 0x5c) < -100) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff9c;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 100;
    return 0;
  }
  return 1;
}


