/* Module: encn3260.dll
   Function: FUN_66497e80
   Address: 66497e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66497e80(int param_1,int *param_2)

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
            (*(undefined4 **)(param_1 + 0x10),&DAT_664dc770,(undefined4 *)(param_1 + 0x5c));
  (**(code **)(**(int **)(param_1 + 0x60) + 8))();
  return 0;
}


