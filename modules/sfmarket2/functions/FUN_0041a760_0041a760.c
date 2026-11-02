/* Module: sfmarket2.dll
   Function: FUN_0041a760
   Address: 0041a760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041a760(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_0041a960(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_0041f1d0();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


