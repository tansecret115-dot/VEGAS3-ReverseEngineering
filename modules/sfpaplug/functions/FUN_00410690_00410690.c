/* Module: sfpaplug.dll
   Function: FUN_00410690
   Address: 00410690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410690(int param_1)

{
  undefined4 uVar1;
  
  FUN_0042baa0((int *)(param_1 + 0x214),4,-1,-1,0);
  uVar1 = 0x8007000e;
  if (*(int *)(param_1 + 0x214) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


