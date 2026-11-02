/* Module: encn3260.dll
   Function: FUN_664c8510
   Address: 664c8510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c8510(int *param_1)

{
  if (param_1[0x28] == 0) {
    (**(code **)(*param_1 + 0xc))();
  }
  FUN_664c85c0((int)param_1);
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 0x10))(0xffffffff);
  }
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 0x10))(0xffffffff);
  }
  return;
}


