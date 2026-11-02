/* Module: encn3260.dll
   Function: FUN_664c1a80
   Address: 664c1a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664c1a80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x80040009;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 8);
  *(undefined4 **)(param_1 + 0x10) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = *puVar1;
    piVar2 = *(int **)(*(int *)(param_1 + 0x10) + 4);
    *param_3 = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    return 0;
  }
  return 0x80004005;
}


