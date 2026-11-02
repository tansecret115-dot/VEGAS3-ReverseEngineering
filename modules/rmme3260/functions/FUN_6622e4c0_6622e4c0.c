/* Module: rmme3260.dll
   Function: FUN_6622e4c0
   Address: 6622e4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622e4c0(int param_1,int *param_2)

{
  int *piVar1;
  
  (**(code **)(**(int **)(param_1 + 0x60) + 4))();
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(int **)(param_1 + 0x10) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x10))
            (*(undefined4 **)(param_1 + 0x10),&DAT_6626a708,(undefined4 *)(param_1 + 0x5c));
  (**(code **)(**(int **)(param_1 + 0x60) + 8))();
  return 0;
}


