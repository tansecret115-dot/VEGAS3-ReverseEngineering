/* Module: sfpagepeel.dll
   Function: FUN_00468360
   Address: 00468360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00468360(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_00468560(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_0046c880();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


