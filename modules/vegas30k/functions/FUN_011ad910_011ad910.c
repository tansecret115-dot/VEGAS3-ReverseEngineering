/* Module: vegas30k.dll
   Function: FUN_011ad910
   Address: 011ad910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ad910(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 0x698) = 0;
  *(undefined4 *)(param_1 + 0x69c) = 0;
  if (*(int *)(param_1 + 0x688) != 0) {
    for (iVar1 = *(int *)(param_1 + 0x674); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
      if ((((iVar1 != *(int *)(param_1 + 0x688)) &&
           (piVar2 = *(int **)(iVar1 + 4), piVar2 != (int *)0x0)) &&
          (piVar2 != *(int **)(*(int *)(param_1 + 0x688) + 4))) &&
         ((*(byte *)(iVar1 + 0xc) & 1) != 0)) {
        (**(code **)(*piVar2 + 0xf4))(piVar2,param_2);
      }
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x688) + 4);
    if ((*(byte *)(*(int *)(param_1 + 0x688) + 8) & 1) == 0) {
      (**(code **)(*piVar2 + 0x74))(piVar2,param_2);
    }
    else {
      (**(code **)(*piVar2 + 0xf4))(piVar2,param_2);
    }
    *(undefined4 *)(param_1 + 0x698) = *param_2;
    *(undefined4 *)(param_1 + 0x69c) = param_2[1];
  }
  return 0;
}


