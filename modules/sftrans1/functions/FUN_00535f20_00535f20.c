/* Module: sftrans1.dll
   Function: FUN_00535f20
   Address: 00535f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00535f20(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_00536120();
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_0053a410();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


