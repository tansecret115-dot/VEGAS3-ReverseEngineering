/* Module: sfppack1.dll
   Function: FUN_5cdc8920
   Address: 5cdc8920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8920(int param_1)

{
  if (*(int *)(param_1 + 0x70) < -100) {
    *(undefined4 *)(param_1 + 0x70) = 0xffffff9c;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x70)) {
    *(undefined4 *)(param_1 + 0x70) = 100;
    return 0;
  }
  return 1;
}


