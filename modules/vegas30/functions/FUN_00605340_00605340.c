/* Module: vegas30.exe
   Function: FUN_00605340
   Address: 00605340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00605340(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_00605540();
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_00609df0();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


