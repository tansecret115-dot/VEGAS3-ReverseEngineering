/* Module: rmme3260.dll
   Function: FUN_6622fe90
   Address: 6622fe90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6622fe90(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(**(int **)(param_1 + 0x78) + 4))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x60))(param_2);
  if (*(int *)(param_1 + 0x41) != 0) {
    do {
      piVar3 = (int *)FUN_66250ae0((int *)(param_1 + 0x31));
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      if (piVar3 != (int *)0x0) {
        operator_delete(piVar3);
      }
    } while (*(int *)(param_1 + 0x41) != 0);
  }
  iVar2 = FUN_6622d650(iVar2);
  (**(code **)(**(int **)(param_1 + 0x78) + 8))();
  return iVar2;
}


