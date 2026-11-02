/* Module: encn3260.dll
   Function: FUN_66499810
   Address: 66499810
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66499810(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(**(int **)(param_1 + 0x78) + 4))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x60))(param_2);
  if (*(int *)(param_1 + 0x41) != 0) {
    do {
      piVar3 = (int *)FUN_664ba9f0((int *)(param_1 + 0x31));
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
  iVar2 = FUN_66497130(iVar2);
  (**(code **)(**(int **)(param_1 + 0x78) + 8))();
  return iVar2;
}


