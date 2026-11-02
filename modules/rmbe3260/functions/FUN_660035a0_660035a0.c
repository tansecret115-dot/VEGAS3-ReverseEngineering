/* Module: rmbe3260.dll
   Function: FUN_660035a0
   Address: 660035a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660035a0(int param_1)

{
  FUN_660013b0(param_1);
  if (*(int **)(param_1 + 0x152) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x152) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x152) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x152))(1);
    }
  }
  if (*(int **)(param_1 + 0x156) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x156) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x156) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x156))(1);
    }
  }
  if (*(int **)(param_1 + 0x15e) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x15e) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x15e) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x15e))(1);
    }
  }
  if (*(int **)(param_1 + 0x15a) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x15a) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x15a) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x15a))(1);
    }
  }
  return;
}


