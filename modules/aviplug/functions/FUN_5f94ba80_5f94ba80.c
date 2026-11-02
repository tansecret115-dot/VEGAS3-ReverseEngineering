/* Module: aviplug.dll
   Function: FUN_5f94ba80
   Address: 5f94ba80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f94ba80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x338) != 0) {
    (**(code **)(**(int **)(param_1 + 0x304) + 0x10))
              (*(int **)(param_1 + 0x304),*(undefined4 *)(param_1 + 0x33c),
               (undefined4 *)(param_1 + 0x308));
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x33c) = 0;
    puVar2 = (undefined4 *)(param_1 + 0x308);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}


