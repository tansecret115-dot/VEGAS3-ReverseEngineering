/* Module: sfxpfx1.dll
   Function: FUN_5c9481a0
   Address: 5c9481a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c9481a0(int param_1)

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


