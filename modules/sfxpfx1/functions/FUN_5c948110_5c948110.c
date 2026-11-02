/* Module: sfxpfx1.dll
   Function: FUN_5c948110
   Address: 5c948110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c948110(int param_1)

{
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 100;
    return 0;
  }
  return 1;
}


