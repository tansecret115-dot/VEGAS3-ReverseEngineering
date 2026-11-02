/* Module: sfppack2.dll
   Function: FUN_5cce3a70
   Address: 5cce3a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce3a70(int param_1)

{
  if (*(int *)(param_1 + 0x50) < 0x14) {
    *(undefined4 *)(param_1 + 0x50) = 0x14;
    return 0;
  }
  if (15000 < *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0x50) = 15000;
    return 0;
  }
  return 1;
}


