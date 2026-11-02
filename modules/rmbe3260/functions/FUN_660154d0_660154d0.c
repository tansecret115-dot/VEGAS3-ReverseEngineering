/* Module: rmbe3260.dll
   Function: FUN_660154d0
   Address: 660154d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660154d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004005;
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


