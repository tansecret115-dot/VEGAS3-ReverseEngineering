/* Module: sfxpfx1.dll
   Function: FUN_5c948080
   Address: 5c948080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c948080(int param_1)

{
  if (*(int *)(param_1 + 0x1c) < -800) {
    *(undefined4 *)(param_1 + 0x1c) = 0xfffffce0;
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 1;
}


