/* Module: sfppack2.dll
   Function: FUN_5ccd4410
   Address: 5ccd4410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4410(int param_1)

{
  if (*(uint *)(param_1 + 0x270) < 2) {
    *(undefined4 *)(param_1 + 0x270) = 2;
    return 0;
  }
  if (0x40 < *(uint *)(param_1 + 0x270)) {
    *(undefined4 *)(param_1 + 0x270) = 0x40;
    return 0;
  }
  return 1;
}


