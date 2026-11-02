/* Module: mcplugrw.dll
   Function: FUN_00416820
   Address: 00416820
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00416820(int param_1)

{
  if (((*(int *)(param_1 + 0x7f4) != 0) && (*(int *)(param_1 + 0x7ec) != 0)) &&
     (*(short *)(param_1 + 0x7e8) == 0)) {
    if (*(int *)(param_1 + 0x7fc) != 0) {
      FUN_00416a20(param_1);
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    FUN_0041b300();
    *(undefined4 *)(param_1 + 0x7ec) = 0;
  }
  return;
}


