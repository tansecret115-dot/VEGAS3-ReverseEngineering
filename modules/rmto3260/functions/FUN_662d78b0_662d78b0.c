/* Module: rmto3260.dll
   Function: FUN_662d78b0
   Address: 662d78b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d78b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0x80040007;
  }
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return 0;
}


