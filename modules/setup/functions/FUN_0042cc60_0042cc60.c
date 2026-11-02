/* Module: Setup.exe
   Function: FUN_0042cc60
   Address: 0042cc60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042cc60(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_0042ce60(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_00431420();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


