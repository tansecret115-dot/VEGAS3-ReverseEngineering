/* Module: sfppack1.dll
   Function: FUN_5ce09a20
   Address: 5ce09a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ce09a20(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_5ce09c20(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_5ce0df30();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


