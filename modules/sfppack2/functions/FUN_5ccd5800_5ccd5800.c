/* Module: sfppack2.dll
   Function: FUN_5ccd5800
   Address: 5ccd5800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd5800(int param_1)

{
  if ((*(short *)(param_1 + 2) != 1) && (*(short *)(param_1 + 2) != 2)) {
    return 1;
  }
  return 0;
}


