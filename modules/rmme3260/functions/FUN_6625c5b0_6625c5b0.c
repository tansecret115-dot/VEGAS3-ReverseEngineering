/* Module: rmme3260.dll
   Function: FUN_6625c5b0
   Address: 6625c5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625c5b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  *param_1 = (int)&PTR_FUN_6626d298;
  if (param_1[0x31] != 0) {
    *(undefined4 *)(param_1[0x31] + 4) = 0;
  }
  if (*(int **)((int)param_1 + 0x36) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x36) + 0xc))();
    (**(code **)(**(int **)((int)param_1 + 0x36) + 0x20))();
    *(undefined4 *)((int)param_1 + 0x36) = 0;
  }
  if ((void *)param_1[0x31] != (void *)0x0) {
    operator_delete((void *)param_1[0x31]);
    param_1[0x31] = 0;
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete((void *)param_1[0x22]);
    param_1[0x22] = 0;
  }
  if ((int *)param_1[0x20] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x20] + 4))(1);
    param_1[0x20] = 0;
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))(1);
    param_1[0x21] = 0;
  }
  while( true ) {
    if (param_1 + 0x1b == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1[0x1f];
    }
    if (iVar4 < 1) break;
    puVar3 = (undefined4 *)FUN_66250ae0(param_1 + 0x1b);
    (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3);
    operator_delete(puVar3);
  }
  piVar1 = param_1 + 0x16;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1[0x1a];
    }
    if (iVar4 < 1) break;
    piVar5 = (int *)FUN_66250ae0(piVar1);
    piVar2 = (int *)*piVar5;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar5 = 0;
    }
    if (piVar5 != (int *)0x0) {
      operator_delete(piVar5);
    }
  }
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x11])(1);
    param_1[0x11] = 0;
  }
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
    param_1[0x12] = 0;
  }
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13])(1);
    param_1[0x13] = 0;
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
    param_1[0x14] = 0;
  }
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x15])(1);
    param_1[0x15] = 0;
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
    param_1[0x30] = 0;
  }
  FUN_66250a40(param_1 + 0x1b);
  FUN_66250a40(piVar1);
  FUN_66258310(param_1);
  return;
}


