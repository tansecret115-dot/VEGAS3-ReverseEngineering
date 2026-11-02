/* Module: vidcap30.exe
   Function: FUN_00574560
   Address: 00574560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00574560(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_00574760();
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_00579010();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


