/* Module: aviplug.dll
   Function: FUN_5f947170
   Address: 5f947170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f947170(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 + 0x394);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x68))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x394) + 8))(*(int **)(param_1 + 0x394));
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    puVar3 = (undefined4 *)(param_1 + 0x1b8);
    puVar4 = (undefined4 *)(param_1 + 0x208);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x290);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x290) + 8))(*(int **)(param_1 + 0x290));
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  return;
}


