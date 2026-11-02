/* Module: rmme3260.dll
   Function: FUN_6622db10
   Address: 6622db10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6622db10(int *param_1)

{
  int *piVar1;
  
  *param_1 = (int)&PTR_FUN_6626bdd0;
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
  FUN_6625a6f0(param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  return;
}


