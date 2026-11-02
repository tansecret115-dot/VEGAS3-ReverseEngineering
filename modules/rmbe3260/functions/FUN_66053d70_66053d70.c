/* Module: rmbe3260.dll
   Function: FUN_66053d70
   Address: 66053d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66053d70(void *this,char *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *local_c;
  undefined4 *local_8;
  
  piVar6 = (int *)0x0;
  puVar5 = (undefined4 *)0x0;
  pvVar2 = operator_new(0x1d);
  if (pvVar2 == (void *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = FUN_660574f0(param_1,'.');
  }
  uVar1 = *(uint *)((int)local_8 + 0x11);
  pcVar3 = operator_new(uVar1);
  local_c = *(int **)((int)this + 4);
  *pcVar3 = '\0';
  if ((uint)local_8[1] < (uint)local_8[3]) {
    do {
      FUN_66057620(local_8,pcVar3,uVar1);
      if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 0x28))(), iVar4 == 1)) {
        (**(code **)(*piVar6 + 0x4c))(&local_c);
      }
      if (local_c == (int *)0x0) {
LAB_66053f77:
        if (pcVar3 != (char *)0x0) {
          operator_delete(pcVar3);
        }
        puVar5 = local_8;
        if (local_8 == (undefined4 *)0x0) {
          return 0;
        }
        operator_delete((void *)*local_8);
        pvVar2 = *(void **)((int)puVar5 + 0x19);
        goto LAB_66053ec1;
      }
      puVar5 = (undefined4 *)(**(code **)(*local_c + 0x14))(pcVar3);
      if (puVar5 == (undefined4 *)0x0) {
        iVar4 = FUN_660533f0(this,pcVar3,param_1);
        puVar7 = local_8;
        if (iVar4 == 0) {
          if (local_8 == (undefined4 *)0x0) goto LAB_66053f63;
          operator_delete((void *)*local_8);
          pvVar2 = *(void **)((int)puVar7 + 0x19);
        }
        else {
          puVar5 = (undefined4 *)(**(code **)(*local_c + 0x14))(pcVar3);
          puVar7 = local_8;
          if (puVar5 != (undefined4 *)0x0) goto LAB_66053e3d;
          if (local_8 == (undefined4 *)0x0) goto LAB_66053f63;
          operator_delete((void *)*local_8);
          pvVar2 = *(void **)((int)puVar7 + 0x19);
        }
        operator_delete(pvVar2);
        operator_delete(puVar7);
LAB_66053f63:
        operator_delete(pcVar3);
        return 0;
      }
LAB_66053e3d:
      piVar6 = (int *)*puVar5;
      if (piVar6 == (int *)0x0) goto LAB_66053f77;
      iVar4 = (**(code **)(*piVar6 + 0x5c))();
      if (iVar4 != 0) {
        if (pcVar3 != (char *)0x0) {
          operator_delete(pcVar3);
        }
        puVar5 = local_8;
        if (local_8 == (undefined4 *)0x0) {
          return 0;
        }
        operator_delete((void *)*local_8);
        pvVar2 = *(void **)((int)puVar5 + 0x19);
        goto LAB_66053ec1;
      }
    } while ((uint)local_8[1] < (uint)local_8[3]);
  }
  if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 0x28))(), iVar4 == 1)) {
    (**(code **)(*piVar6 + 0x4c))(&local_c);
  }
  FUN_66057620(local_8,pcVar3,uVar1);
  iVar4 = (**(code **)(*local_c + 0x14))(pcVar3);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)this + 0x14))(local_8,pcVar3,param_2,local_c,5);
    if (pcVar3 != (char *)0x0) {
      operator_delete(pcVar3);
    }
    (*(code *)**(undefined4 **)this)(local_c,iVar4,puVar5,piVar6);
    return *(undefined4 *)(iVar4 + 8);
  }
  if (pcVar3 != (char *)0x0) {
    operator_delete(pcVar3);
  }
  puVar5 = local_8;
  if (local_8 != (undefined4 *)0x0) {
    operator_delete((void *)*local_8);
    pvVar2 = *(void **)((int)puVar5 + 0x19);
LAB_66053ec1:
    operator_delete(pvVar2);
    operator_delete(puVar5);
  }
  return 0;
}


