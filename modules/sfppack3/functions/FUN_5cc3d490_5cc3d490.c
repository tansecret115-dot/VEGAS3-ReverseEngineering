/* Module: sfppack3.dll
   Function: FUN_5cc3d490
   Address: 5cc3d490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc3d490(undefined4 param_1,int param_2)

{
  if ((*(short *)(param_2 + 2) != 1) && (*(short *)(param_2 + 2) != 2)) {
    return 1;
  }
  return 0;
}


