/* Module: rmme3260.dll
   Function: FUN_66230b00
   Address: 66230b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66230b00(int param_1,int *param_2)

{
  int *piVar1;
  
  (**(code **)(**(int **)(param_1 + 0x91) + 4))();
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(int **)(param_1 + 0x14) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  piVar1 = *(int **)(param_1 + 0x8d);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x8d) = 0;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x14))
            (*(undefined4 **)(param_1 + 0x14),&DAT_6626a708,(undefined4 *)(param_1 + 0x8d));
  (**(code **)(**(int **)(param_1 + 0x91) + 8))();
  return 0;
}


