/* Module: sfppack2.dll
   Function: FUN_5cd02510
   Address: 5cd02510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd02510(int param_1)

{
  if ((*(short *)(param_1 + 2) != 1) && (*(short *)(param_1 + 2) != 2)) {
    return 1;
  }
  return 0;
}


