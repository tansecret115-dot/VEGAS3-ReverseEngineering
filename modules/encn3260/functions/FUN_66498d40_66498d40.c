/* Module: encn3260.dll
   Function: FUN_66498d40
   Address: 66498d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66498d40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_664de958;
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1[6] + 4) = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0xc))();
    if ((int *)param_1[5] != (int *)0x0) {
      (**(code **)(*(int *)param_1[5] + 0x20))();
      param_1[5] = 0;
    }
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
    param_1[6] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  return;
}


