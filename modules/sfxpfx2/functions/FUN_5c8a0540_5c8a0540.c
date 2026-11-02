/* Module: sfxpfx2.dll
   Function: FUN_5c8a0540
   Address: 5c8a0540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c8a0540(int param_1)

{
  if (*(int *)(param_1 + 0x24) < -0xfa) {
    *(undefined4 *)(param_1 + 0x24) = 0xffffff06;
    return 0;
  }
  if (0xfa < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0xfa;
    return 0;
  }
  return 1;
}


