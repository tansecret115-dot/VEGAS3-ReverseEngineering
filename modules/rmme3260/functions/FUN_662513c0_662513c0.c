/* Module: rmme3260.dll
   Function: FUN_662513c0
   Address: 662513c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_662513c0(int param_1,int *param_2,undefined4 param_3,undefined2 param_4,undefined1 param_5,
            undefined2 param_6)

{
  int *piVar1;
  
  if (1 < *(int *)(param_1 + 4)) {
    return 0x80040009;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 8) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined2 *)(param_1 + 0x10) = param_4;
  *(undefined1 *)(param_1 + 0x12) = param_5;
  *(undefined2 *)(param_1 + 0x13) = param_6;
  return 0;
}


