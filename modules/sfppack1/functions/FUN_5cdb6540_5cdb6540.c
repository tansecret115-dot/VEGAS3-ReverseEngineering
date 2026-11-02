/* Module: sfppack1.dll
   Function: FUN_5cdb6540
   Address: 5cdb6540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb6540(int param_1)

{
  if ((*(short *)(param_1 + 2) != 1) && (*(short *)(param_1 + 2) != 2)) {
    return 1;
  }
  return 0;
}


