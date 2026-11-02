/* Module: sfppack2.dll
   Function: FUN_5ccf2d20
   Address: 5ccf2d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccf2d20(int param_1)

{
  if ((*(short *)(param_1 + 2) != 1) && (*(short *)(param_1 + 2) != 2)) {
    return 1;
  }
  return 0;
}


