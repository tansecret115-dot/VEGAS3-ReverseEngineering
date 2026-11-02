/* Module: pngu3266.dll
   Function: FUN_6061abd0
   Address: 6061abd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6061abd0(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return 0;
}


