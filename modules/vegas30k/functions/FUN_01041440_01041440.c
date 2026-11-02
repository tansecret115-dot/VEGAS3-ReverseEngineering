/* Module: vegas30k.dll
   Function: FUN_01041440
   Address: 01041440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01041440(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))(piVar1,0);
    (**(code **)(**(int **)(param_1 + 0x68) + 8))(*(int **)(param_1 + 0x68));
  }
  *(int **)(param_1 + 0x68) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)(**(int **)(param_1 + 0x68) + 0x6c))(*(int **)(param_1 + 0x68),0,param_1 + 0x30);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x40))
                      (*(int **)(param_1 + 0x68),0,&LAB_01041fa0,param_1);
    (**(code **)(**(int **)(param_1 + 0x68) + 0x44))
              (*(int **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x38));
    (**(code **)(**(int **)(param_1 + 0x68) + 0x60))
              (*(int **)(param_1 + 0x68),param_1 + 8,*(undefined4 *)(param_1 + 0x4c));
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 0;
}


