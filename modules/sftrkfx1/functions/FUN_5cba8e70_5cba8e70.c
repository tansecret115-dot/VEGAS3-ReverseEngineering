/* Module: sftrkfx1.dll
   Function: FUN_5cba8e70
   Address: 5cba8e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8e70(int param_1)

{
  if (*(int *)(param_1 + 0x58) < 0x14) {
    *(undefined4 *)(param_1 + 0x58) = 0x14;
    return 0;
  }
  if (20000 < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x58) = 20000;
    return 0;
  }
  return 1;
}


