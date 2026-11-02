/* Module: rmme3260.dll
   Function: FUN_66258a60
   Address: 66258a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66258a60(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_2c [5];
  int local_18;
  int local_14;
  void *local_10;
  int *local_c;
  int local_8;
  
  (**(code **)(*(int *)param_1[2] + 4))();
  pvVar1 = (void *)param_1[3];
  param_1[5] = 1;
  if ((pvVar1 != (void *)0x0) && (0 < *(int *)((int)pvVar1 + 0xc))) {
    FUN_66258c00(&local_18,pvVar1,-(uint)(*(int *)((int)pvVar1 + 0xc) != 0));
    FUN_66258c00(local_2c,(void *)param_1[3],0);
    if (local_18 != local_2c[0]) {
      do {
        (**(code **)(*local_c + 0x1c))();
        local_18 = local_14;
        if (local_14 != 0) {
          FUN_66251190(local_10,&local_14,&local_8,(int *)&local_c);
        }
        FUN_66258c00(local_2c,(void *)param_1[3],0);
      } while (local_18 != local_2c[0]);
    }
  }
  (**(code **)(*(int *)param_1[2] + 8))();
  pvVar1 = (void *)param_1[3];
  if ((pvVar1 != (void *)0x0) && (0 < *(int *)((int)pvVar1 + 0xc))) {
    local_18 = -(uint)(*(int *)((int)pvVar1 + 0xc) != 0);
    local_c = (int *)0x0;
    local_8 = 0;
    local_10 = pvVar1;
    while( true ) {
      local_14 = local_18;
      if (local_18 != 0) {
        FUN_66251190(local_10,&local_14,&local_8,(int *)&local_c);
      }
      piVar3 = local_c;
      if (local_18 == 0) break;
      FUN_6625c860(local_c);
      (**(code **)(*piVar3 + 0x20))();
      local_18 = local_14;
    }
  }
  if ((int *)*param_1 != (int *)0x0) {
    local_14 = 0x4c8;
    local_10 = (void *)0x0;
    local_c = (int *)0x0;
    local_8 = 0;
    iVar4 = (**(code **)(*(int *)*param_1 + 0x24))(&local_14,0);
    if (iVar4 == 0) {
      (**(code **)(*(int *)param_1[4] + 0x10))(0xffffffff);
    }
    (**(code **)(*(int *)*param_1 + 0x1c))(0);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
    *param_1 = 0;
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    FUN_66250e90(param_1[3]);
    puVar2 = (undefined4 *)param_1[3];
    if (puVar2 != (undefined4 *)0x0) {
      FUN_66250ed0(puVar2);
      operator_delete(puVar2);
    }
    param_1[3] = 0;
  }
  return;
}


