/* Module: rmme3260.dll
   Function: FUN_66253b30
   Address: 66253b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66253b30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = **(undefined4 **)(param_1 + 4);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    *param_2 = **(undefined4 **)(param_1 + 8);
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
    *param_3 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80004005;
}


