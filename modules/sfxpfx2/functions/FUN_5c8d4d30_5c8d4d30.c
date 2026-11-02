/* Module: sfxpfx2.dll
   Function: FUN_5c8d4d30
   Address: 5c8d4d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8d4d30(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_5c8d4f30(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_5c8d9240();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


