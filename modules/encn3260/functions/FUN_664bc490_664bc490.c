/* Module: encn3260.dll
   Function: FUN_664bc490
   Address: 664bc490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_664bc490(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
            undefined1 param_6,undefined2 param_7)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x19) = param_4;
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
  *(undefined2 *)(param_1 + 0x10) = param_5;
  *(undefined1 *)(param_1 + 0x12) = param_6;
  *(undefined2 *)(param_1 + 0x13) = param_7;
  return 0;
}


