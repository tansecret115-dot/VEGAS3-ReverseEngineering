/* Module: sfppack1.dll
   Function: FUN_5cdcf300
   Address: 5cdcf300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdcf300(int param_1)

{
  if (*(int *)(param_1 + 0x44) < 100) {
    *(undefined4 *)(param_1 + 0x44) = 100;
    return 0;
  }
  if (15000 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 15000;
    return 0;
  }
  return 1;
}


