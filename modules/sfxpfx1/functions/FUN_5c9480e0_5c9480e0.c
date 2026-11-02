/* Module: sfxpfx1.dll
   Function: FUN_5c9480e0
   Address: 5c9480e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c9480e0(int param_1)

{
  if (*(int *)(param_1 + 0x24) < -800) {
    *(undefined4 *)(param_1 + 0x24) = 0xfffffce0;
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return 0;
  }
  return 1;
}


