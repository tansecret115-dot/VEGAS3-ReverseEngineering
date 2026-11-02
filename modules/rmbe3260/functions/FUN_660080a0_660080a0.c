/* Module: rmbe3260.dll
   Function: FUN_660080a0
   Address: 660080a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660080a0(int param_1)

{
  if (*(int **)(param_1 + 0x1ec) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1ec) + 0xbc))();
    if (*(undefined4 **)(param_1 + 0x1ec) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1ec))(1);
    }
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  FUN_660072f0(param_1);
  return;
}


