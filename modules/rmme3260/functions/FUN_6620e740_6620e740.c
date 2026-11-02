/* Module: rmme3260.dll
   Function: FUN_6620e740
   Address: 6620e740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6620e740(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint local_8;
  
  local_8 = 0;
  *param_1 = &PTR_FUN_6626b640;
  if (param_1[0x3d] != 0) {
    iVar5 = 0;
    do {
      if ((param_1[0x40] != 0) &&
         (pvVar1 = *(void **)(iVar5 + 4 + param_1[0x40]), pvVar1 != (void *)0x0)) {
        operator_delete(pvVar1);
        *(undefined4 *)(iVar5 + 4 + param_1[0x40]) = 0;
      }
      iVar2 = param_1[0x40];
      if (((iVar2 != 0) &&
          (puVar3 = *(undefined4 **)(iVar5 + 8 + iVar2), puVar3 != (undefined4 *)0x0)) &&
         (*(int *)(iVar5 + 0xc + iVar2) != 0)) {
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        *(undefined4 *)(iVar5 + 8 + param_1[0x40]) = 0;
      }
      if ((param_1[0x40] != 0) &&
         (pvVar1 = *(void **)(iVar5 + 0x10 + param_1[0x40]), pvVar1 != (void *)0x0)) {
        operator_delete(pvVar1);
        *(undefined4 *)(iVar5 + 0x10 + param_1[0x40]) = 0;
      }
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x14;
    } while (local_8 < (uint)param_1[0x3d]);
  }
  local_8 = 0;
  if (param_1[0x41] != 0) {
    iVar5 = 0;
    do {
      if ((param_1[0x42] != 0) &&
         (pvVar1 = *(void **)(iVar5 + param_1[0x42]), pvVar1 != (void *)0x0)) {
        operator_delete(pvVar1);
        *(undefined4 *)(iVar5 + param_1[0x42]) = 0;
      }
      iVar2 = param_1[0x42];
      if (((iVar2 != 0) &&
          (puVar3 = *(undefined4 **)(iVar5 + 4 + iVar2), puVar3 != (undefined4 *)0x0)) &&
         (*(int *)(iVar5 + 8 + iVar2) != 0)) {
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        *(undefined4 *)(iVar5 + 4 + param_1[0x42]) = 0;
      }
      if ((param_1[0x42] != 0) &&
         (pvVar1 = *(void **)(iVar5 + 0xc + param_1[0x42]), pvVar1 != (void *)0x0)) {
        operator_delete(pvVar1);
        *(undefined4 *)(iVar5 + 0xc + param_1[0x42]) = 0;
      }
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x26;
    } while (local_8 < (uint)param_1[0x41]);
  }
  if ((void *)param_1[0x40] != (void *)0x0) {
    operator_delete((void *)param_1[0x40]);
    param_1[0x40] = 0;
  }
  if ((void *)param_1[0x42] != (void *)0x0) {
    operator_delete((void *)param_1[0x42]);
    param_1[0x42] = 0;
  }
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
    param_1[0x36] = 0;
  }
  piVar4 = *(int **)((int)param_1 + 0x2da);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)((int)param_1 + 0x2da) = 0;
  }
  piVar4 = *(int **)((int)param_1 + 0x2d6);
  if (piVar4 != (int *)0x0) {
    FUN_662247d0(piVar4);
    operator_delete(piVar4);
    *(undefined4 *)((int)param_1 + 0x2d6) = 0;
  }
  FUN_6621ae10(param_1 + 0xab);
  FUN_66224b50(param_1 + 0x4a);
  FUN_66250ed0(param_1 + 0x43);
  FUN_6624fd90(param_1 + 0x39);
  FUN_66208db0(param_1);
  return;
}


