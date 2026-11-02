/* Module: sfppack3.dll
   Function: FUN_5cc471a0
   Address: 5cc471a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc471a0(int param_1)

{
  if (*(int *)(param_1 + 0x28) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    return 0;
  }
  return 1;
}


