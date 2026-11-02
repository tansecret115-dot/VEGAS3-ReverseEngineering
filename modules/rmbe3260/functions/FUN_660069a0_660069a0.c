/* Module: rmbe3260.dll
   Function: FUN_660069a0
   Address: 660069a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660069a0(int param_1)

{
  if (*(int **)(param_1 + 0x118) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x118) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x118))(1);
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if (*(int **)(param_1 + 0x110) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x110) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x110) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x110))(1);
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x114) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x114) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x114))(1);
    }
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  return;
}


