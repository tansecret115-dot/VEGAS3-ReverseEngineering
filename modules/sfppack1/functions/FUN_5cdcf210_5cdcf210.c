/* Module: sfppack1.dll
   Function: FUN_5cdcf210
   Address: 5cdcf210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdcf210(int param_1)

{
  if (*(int *)(param_1 + 0x30) < 5) {
    *(undefined4 *)(param_1 + 0x30) = 5;
    return 0;
  }
  if (0x32 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0x32;
    return 0;
  }
  return 1;
}


