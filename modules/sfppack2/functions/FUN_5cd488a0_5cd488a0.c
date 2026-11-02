/* Module: sfppack2.dll
   Function: FUN_5cd488a0
   Address: 5cd488a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd488a0(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_5cd48aa0(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_5cd4cdb0();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


