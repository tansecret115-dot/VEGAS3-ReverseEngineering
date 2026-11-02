/* Module: rmbe3260.dll
   Function: FUN_660608b0
   Address: 660608b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_660608b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    puVar1 = operator_new(0x28);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_6605c060(puVar1);
    }
    *(int **)(param_1 + 0x14) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))
            (*(int **)(param_1 + 0x14),*(int *)(param_1 + 0x18) + param_2);
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}


