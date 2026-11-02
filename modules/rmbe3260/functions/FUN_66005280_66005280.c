/* Module: rmbe3260.dll
   Function: FUN_66005280
   Address: 66005280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66005280(int param_1)

{
  if (*(int **)(param_1 + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x104) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x104) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x104))(1);
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int **)(param_1 + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x108) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x108))(1);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x10c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x10c))(1);
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return;
}


