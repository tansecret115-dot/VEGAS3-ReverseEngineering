/* Module: vegas30k.dll
   Function: FUN_01163bb0
   Address: 01163bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01163bb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar4;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4c) != 0)) {
      if (iVar4 == 0) {
        (**(code **)(**(int **)(iVar1 + 0x50) + 8))(*(int **)(iVar1 + 0x50));
        *(undefined4 *)(param_1 + 4) = 1;
      }
      return *(int *)(param_1 + 4);
    }
    if (iVar4 != 0) {
      return iVar4;
    }
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x40) != 0) {
        FUN_01040210(*(int *)(iVar1 + 0x40));
      }
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x40) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x44) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = 0;
      puVar2 = *(undefined4 **)(param_1 + 0x10);
      if (puVar2[0x13] != 0) {
        (**(code **)(*(int *)puVar2[0x14] + 8))((int *)puVar2[0x14]);
        return 0;
      }
      *puVar2 = puVar2[1];
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) =
           *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x48) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = 0;
      piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x10);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10) = 0;
      FUN_0113b310(param_1);
    }
  }
  return 0;
}


