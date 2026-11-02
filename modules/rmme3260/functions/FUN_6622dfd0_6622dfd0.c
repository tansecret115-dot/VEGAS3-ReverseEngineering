/* Module: rmme3260.dll
   Function: FUN_6622dfd0
   Address: 6622dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6622dfd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = (int)&PTR_FUN_6626be00;
  param_1[1] = (int)&PTR_LAB_6626bdf0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x10;
  param_1[2] = (int)&PTR_FUN_6626bde8;
  (**(code **)(*(int *)param_1[0x18] + 4))();
  if ((void *)param_1[0x13] != (void *)0x0) {
    FUN_6622f2a0((void *)param_1[0x13],(int *)param_1[0x12]);
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    FUN_6622f2a0((void *)param_1[0x14],(int *)param_1[0x12]);
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    FUN_6622f2a0((void *)param_1[0x15],(int *)param_1[0x12]);
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x42) + 4) = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0xc))();
    (**(code **)(*(int *)param_1[5] + 0x20))();
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  if (*(void **)((int)param_1 + 0x42) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x42));
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  if (*(int **)((int)param_1 + 0x22) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x22) + 4))(1);
    *(undefined4 *)((int)param_1 + 0x22) = 0;
  }
  if (*(int **)((int)param_1 + 0x26) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x26) + 4))(1);
    *(undefined4 *)((int)param_1 + 0x26) = 0;
  }
  if (*(void **)((int)param_1 + 0x3e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x3e));
    *(undefined4 *)((int)param_1 + 0x3e) = 0;
  }
  piVar1 = (int *)((int)param_1 + 0x2a);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x3a);
    }
    if (iVar2 < 1) break;
    piVar3 = (int *)FUN_66250ae0(piVar1);
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  if (param_1[0x13] != 0) {
    *(undefined4 *)(param_1[0x13] + 8) = 0;
    (**(code **)(*(int *)param_1[0x13] + 8))((int *)param_1[0x13]);
    param_1[0x13] = 0;
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1[0x14] + 8) = 0;
    (**(code **)(*(int *)param_1[0x14] + 8))((int *)param_1[0x14]);
    param_1[0x14] = 0;
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 8) = 0;
    (**(code **)(*(int *)param_1[0x15] + 8))((int *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  piVar3 = (int *)param_1[0x16];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0x16] = 0;
  }
  piVar3 = (int *)param_1[0x17];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0x17] = 0;
  }
  piVar3 = (int *)param_1[0x12];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0x12] = 0;
  }
  (**(code **)(*(int *)param_1[0x18] + 8))();
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
    param_1[0x18] = 0;
  }
  FUN_6625a6f0(param_1);
  piVar3 = (int *)param_1[0x19];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0x19] = 0;
  }
  piVar3 = (int *)param_1[0x1a];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    param_1[0x1a] = 0;
  }
  FUN_66250a40(piVar1);
  return;
}


