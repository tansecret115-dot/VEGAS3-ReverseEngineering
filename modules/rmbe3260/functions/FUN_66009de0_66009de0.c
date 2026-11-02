/* Module: rmbe3260.dll
   Function: FUN_66009de0
   Address: 66009de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66009de0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x134))();
    (**(code **)(**(int **)(param_1 + 0x108) + 0x50))(*(int **)(param_1 + 0x108),uVar1);
    (**(code **)(**(int **)(param_1 + 0x108) + 0x58))(*(int **)(param_1 + 0x108),uVar1);
  }
  return 1;
}


