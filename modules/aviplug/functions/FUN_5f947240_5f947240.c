/* Module: aviplug.dll
   Function: FUN_5f947240
   Address: 5f947240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f947240(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x390) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x350) + 0x10))
              (*(int **)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x388),
               (undefined4 *)(param_1 + 0x358));
    puVar2 = (undefined4 *)(param_1 + 0x358);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x388) = 0;
    *(undefined4 *)(param_1 + 0x390) = 0;
  }
  if ((param_3 != 0) && (*(int *)(param_1 + 0x38c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x34c) + 0x18))
              (*(int **)(param_1 + 0x34c),*(undefined4 *)(param_1 + 0x2b8),
               *(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x200),
               *(int *)(param_1 + 0x1fc),*(undefined4 *)(*(int *)(param_1 + 0x1fc) + 0x14),
               *(undefined4 *)(param_1 + 0x2c0));
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x38c) = 0;
  }
  return;
}


