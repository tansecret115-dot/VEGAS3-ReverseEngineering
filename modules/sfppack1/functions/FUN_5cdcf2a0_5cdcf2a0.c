/* Module: sfppack1.dll
   Function: FUN_5cdcf2a0
   Address: 5cdcf2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdcf2a0(int param_1)

{
  if (*(int *)(param_1 + 0x40) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 1;
    return 0;
  }
  return 1;
}


