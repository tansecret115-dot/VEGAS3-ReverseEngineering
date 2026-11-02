/* Module: encn3260.dll
   Function: FUN_664cc5d0
   Address: 664cc5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664cc5d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    uVar1 = FUN_664cf460(*(int **)(param_1 + 0x30));
    return uVar1;
  }
  return 0;
}


