/* Module: sctplug.dll
   Function: FUN_00409020
   Address: 00409020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409020(int param_1)

{
  undefined4 uVar1;
  
  FUN_0041cba0((int *)(param_1 + 0x214),4,-1,-1,0);
  uVar1 = 0x8007000e;
  if (*(int *)(param_1 + 0x214) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


