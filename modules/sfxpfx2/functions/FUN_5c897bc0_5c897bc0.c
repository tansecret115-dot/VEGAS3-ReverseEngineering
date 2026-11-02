/* Module: sfxpfx2.dll
   Function: FUN_5c897bc0
   Address: 5c897bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c897bc0(int param_1)

{
  if (*(int *)(param_1 + 0x28) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  if (1000 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 1000;
    return 0;
  }
  return 1;
}


