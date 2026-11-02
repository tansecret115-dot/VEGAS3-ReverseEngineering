/* Module: rmbe3260.dll
   Function: FUN_66009d60
   Address: 66009d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66009d60(int param_1)

{
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return 0;
}


