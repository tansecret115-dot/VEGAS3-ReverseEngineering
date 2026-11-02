/* Module: sfppack2.dll
   Function: FUN_5ccd42e0
   Address: 5ccd42e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd42e0(int param_1)

{
  if (*(int *)(param_1 + 0x58) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x58) = 0xf0;
    return 0;
  }
  return 1;
}


