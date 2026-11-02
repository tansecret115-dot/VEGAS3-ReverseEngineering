/* Module: encn3260.dll
   Function: FUN_664bc430
   Address: 664bc430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_664bc430(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined2 *param_5,undefined1 *param_6,undefined2 *param_7)

{
  int *piVar1;
  
  *param_4 = *(undefined4 *)(param_1 + 0x19);
  *param_2 = *(undefined4 *)(param_1 + 8);
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  *param_5 = *(undefined2 *)(param_1 + 0x10);
  *param_6 = *(undefined1 *)(param_1 + 0x12);
  *param_7 = *(undefined2 *)(param_1 + 0x13);
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}


