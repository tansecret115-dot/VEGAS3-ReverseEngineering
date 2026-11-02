/* Module: sfppack3.dll
   Function: FUN_5cc429f0
   Address: 5cc429f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc429f0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return 0;
  }
  return 1;
}


