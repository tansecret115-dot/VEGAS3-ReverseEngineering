/* Module: wmfplug2.dll
   Function: FUN_0040b240
   Address: 0040b240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b240(int param_1,int param_2)

{
  *(int *)(param_1 + 0x38) = param_2;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 3;
  return 0;
}


