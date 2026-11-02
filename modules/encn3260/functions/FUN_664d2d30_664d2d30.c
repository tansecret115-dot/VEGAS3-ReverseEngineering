/* Module: encn3260.dll
   Function: FUN_664d2d30
   Address: 664d2d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d2d30(void *this,char *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_1c;
  int local_10;
  int *local_c;
  undefined4 *local_8;
  
  piVar6 = (int *)0x0;
  local_10 = 0;
  puVar5 = (undefined4 *)0x0;
  pvVar2 = operator_new(0x1d);
  if (pvVar2 == (void *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = FUN_664d7e80(param_1,'.');
  }
  uVar1 = *(uint *)((int)local_8 + 0x11);
  pcVar3 = operator_new(uVar1);
  local_1c = 0;
  local_c = *(int **)((int)this + 4);
  *pcVar3 = '\0';
  if ((uint)local_8[1] < (uint)local_8[3]) {
    do {
      FUN_664d7fb0(local_8,pcVar3,uVar1);
      if (piVar6 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar6 + 0x28))();
        if (iVar4 == 1) {
          (**(code **)(*piVar6 + 0x4c))(&local_c);
        }
      }
      if (local_c == (int *)0x0) goto LAB_664d2e5e;
      puVar5 = (undefined4 *)(**(code **)(*local_c + 0x14))(pcVar3);
      if (puVar5 == (undefined4 *)0x0) {
        iVar4 = FUN_664d2c20(this,pcVar3,param_1);
        if (iVar4 == 0) goto LAB_664d2e5e;
        puVar5 = (undefined4 *)(**(code **)(*local_c + 0x14))(pcVar3);
        if ((iVar4 == 0) || (puVar5 == (undefined4 *)0x0)) goto LAB_664d2e5e;
      }
      piVar6 = (int *)*puVar5;
      if (piVar6 == (int *)0x0) goto LAB_664d2e5e;
      iVar4 = (**(code **)(*piVar6 + 0x5c))();
      if (iVar4 != 0) goto LAB_664d2e5e;
    } while ((uint)local_8[1] < (uint)local_8[3]);
  }
  if (piVar6 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar6 + 0x28))();
    if (iVar4 == 1) {
      (**(code **)(*piVar6 + 0x4c))(&local_c);
    }
  }
  FUN_664d7fb0(local_8,pcVar3,uVar1);
  iVar4 = (**(code **)(*local_c + 0x14))(pcVar3);
  if (iVar4 == 0) {
    local_1c = (**(code **)(*(int *)this + 0x10))(local_8,pcVar3,param_2,local_c);
    (*(code *)**(undefined4 **)this)(local_c,local_1c,puVar5,piVar6);
  }
  else {
LAB_664d2e5e:
    local_10 = -0x7fffbffb;
  }
  if (pcVar3 != (char *)0x0) {
    operator_delete(pcVar3);
  }
  puVar5 = local_8;
  if (local_10 != 0) {
    if (local_8 != (undefined4 *)0x0) {
      operator_delete((void *)*local_8);
      operator_delete(*(void **)((int)puVar5 + 0x19));
      operator_delete(puVar5);
    }
    return 0;
  }
  return *(undefined4 *)(local_1c + 8);
}


