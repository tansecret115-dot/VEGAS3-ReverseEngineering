/* Module: rmbe3260.dll
   Function: FUN_66003fa0
   Address: 66003fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66003fa0(int param_1)

{
  if (*(int **)(param_1 + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x104) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x104) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x104))(1);
    }
  }
  if (*(int **)(param_1 + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x108) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x108))(1);
    }
  }
  if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10c) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x10c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x10c))(1);
    }
  }
  if (*(undefined4 **)(param_1 + 0x110) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x110))(1);
  }
  return;
}


