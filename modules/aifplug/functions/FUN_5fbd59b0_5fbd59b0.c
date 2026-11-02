/* Module: aifplug.dll
   Function: FUN_5fbd59b0
   Address: 5fbd59b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd59b0(int param_1)

{
  undefined4 uVar1;
  
  FUN_5fbe6400((int *)(param_1 + 0x21c),4,-1,-1,0);
  uVar1 = 0x8007000e;
  if (*(int *)(param_1 + 0x21c) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


