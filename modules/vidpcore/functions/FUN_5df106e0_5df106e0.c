/* Module: vidpcore.dll
   Function: FUN_5df106e0
   Address: 5df106e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5df106e0(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_5df108e0();
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_5df14c00();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


