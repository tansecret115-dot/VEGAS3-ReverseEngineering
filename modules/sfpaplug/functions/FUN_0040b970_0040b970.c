/* Module: sfpaplug.dll
   Function: FUN_0040b970
   Address: 0040b970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b970(int param_1)

{
  undefined4 uVar1;
  
  FUN_0042baa0((int *)(param_1 + 0x218),4,-1,-1,0);
  uVar1 = 0x8007000e;
  if (*(int *)(param_1 + 0x218) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


