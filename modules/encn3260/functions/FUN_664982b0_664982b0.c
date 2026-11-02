/* Module: encn3260.dll
   Function: FUN_664982b0
   Address: 664982b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664982b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  *(int **)(param_1 + 0x14) = param_2;
  (**(code **)(*param_2 + 0x1c))();
  (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))();
  if (*(void **)(param_1 + 0x42) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x42));
    *(undefined4 *)(param_1 + 0x42) = 0;
  }
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_664de928;
  }
  *(undefined4 **)(param_1 + 0x42) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar1[1] = param_1;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(*(undefined4 *)(param_1 + 0x42));
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 10;
  return 0;
}


