/* Module: rmme3260.dll
   Function: FUN_66212fa0
   Address: 66212fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66212fa0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_6626b7d8;
  param_1[0x36] = &PTR_FUN_6626b7b0;
  if ((void *)param_1[0x42] != (void *)0x0) {
    operator_delete((void *)param_1[0x42]);
    param_1[0x42] = 0;
  }
  if ((void *)param_1[0x44] != (void *)0x0) {
    operator_delete((void *)param_1[0x44]);
    param_1[0x44] = 0;
  }
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x38])(1);
    param_1[0x38] = 0;
  }
  piVar1 = (int *)param_1[0xca];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xca] = 0;
  }
  piVar1 = (int *)param_1[0xcb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xcb] = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x346);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x346) = 0;
  }
  piVar1 = (int *)param_1[0xd9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xd9] = 0;
  }
  if (*(int *)((int)param_1 + 0x36e) != 0) {
    FUN_662687a0(*(int *)((int)param_1 + 0x36e));
    piVar1 = *(int **)((int)param_1 + 0x36e);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)param_1 + 0x36e) = 0;
    }
  }
  piVar1 = *(int **)((int)param_1 + 0x376);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x376) = 0;
  }
  piVar1 = (int *)param_1[0xe8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xe8] = 0;
  }
  piVar1 = (int *)param_1[0xf3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xf3] = 0;
  }
  piVar1 = (int *)param_1[0xf4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xf4] = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x3ee);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x3ee) = 0;
  }
  FUN_66250210(param_1 + 0xd6);
  FUN_6621ae10((undefined4 *)((int)param_1 + 0x2fe));
  FUN_6622a890(param_1 + 0x45);
  FUN_6624fd90(param_1 + 0x3b);
  FUN_66208db0(param_1);
  return;
}


