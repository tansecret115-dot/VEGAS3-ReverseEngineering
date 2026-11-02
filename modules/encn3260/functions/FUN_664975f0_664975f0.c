/* Module: encn3260.dll
   Function: FUN_664975f0
   Address: 664975f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664975f0(int *param_1)

{
  int *piVar1;
  
  *param_1 = (int)&PTR_FUN_664de870;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0xc))();
    (**(code **)(*(int *)param_1[5] + 0x20))();
    param_1[5] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  FUN_664c7020(param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  return;
}


