/* Module: sfxpfx2.dll
   Function: FUN_5c8a0420
   Address: 5c8a0420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c8a0420(int param_1)

{
  if (*(int *)(param_1 + 0x34) < 3) {
    *(undefined4 *)(param_1 + 0x34) = 3;
    return 0;
  }
  if (0x19 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0x19;
    return 0;
  }
  return 1;
}


