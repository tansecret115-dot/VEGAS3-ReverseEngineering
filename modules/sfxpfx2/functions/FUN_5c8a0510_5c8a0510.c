/* Module: sfxpfx2.dll
   Function: FUN_5c8a0510
   Address: 5c8a0510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c8a0510(int param_1)

{
  if (*(int *)(param_1 + 0x48) < 0x14) {
    *(undefined4 *)(param_1 + 0x48) = 0x14;
    return 0;
  }
  if (20000 < *(int *)(param_1 + 0x48)) {
    *(undefined4 *)(param_1 + 0x48) = 20000;
    return 0;
  }
  return 1;
}


