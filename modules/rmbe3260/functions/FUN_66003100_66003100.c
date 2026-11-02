/* Module: rmbe3260.dll
   Function: FUN_66003100
   Address: 66003100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66003100(int param_1)

{
  FUN_660013b0(param_1);
  if (*(int **)(param_1 + 0x152) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x152) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x152) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x152))(1);
    }
  }
  if (*(int **)(param_1 + 0x156) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x156) + 0xc))();
    if (*(undefined4 **)(param_1 + 0x156) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x156))(1);
    }
  }
  return;
}


