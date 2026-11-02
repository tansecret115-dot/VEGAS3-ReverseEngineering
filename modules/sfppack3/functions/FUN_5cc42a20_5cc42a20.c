/* Module: sfppack3.dll
   Function: FUN_5cc42a20
   Address: 5cc42a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc42a20(int param_1)

{
  if (*(int *)(param_1 + 0x20) < 100) {
    *(undefined4 *)(param_1 + 0x20) = 100;
    return 0;
  }
  if (10000 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 10000;
    return 0;
  }
  return 1;
}


