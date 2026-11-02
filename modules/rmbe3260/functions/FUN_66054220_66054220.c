/* Module: rmbe3260.dll
   Function: FUN_66054220
   Address: 66054220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66054220(void *this,char *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *local_8;
  
  piVar6 = (int *)0x0;
  puVar5 = (undefined4 *)0x0;
  pvVar2 = operator_new(0x1d);
  if (pvVar2 == (void *)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    param_1 = (char *)FUN_660574f0(param_1,'.');
  }
  uVar1 = *(uint *)(param_1 + 0x11);
  pcVar3 = operator_new(uVar1);
  local_8 = *(int **)((int)this + 4);
  *pcVar3 = '\0';
  if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0xc)) {
    do {
      FUN_66057620(param_1,pcVar3,uVar1);
      if (piVar6 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar6 + 0x28))();
        if (iVar4 == 1) {
          (**(code **)(*piVar6 + 0x4c))(&local_8);
        }
      }
      if (local_8 == (int *)0x0) goto LAB_66054312;
      puVar5 = (undefined4 *)(**(code **)(*local_8 + 0x14))(pcVar3);
      if ((puVar5 == (undefined4 *)0x0) || (piVar6 = (int *)*puVar5, piVar6 == (int *)0x0))
      goto LAB_66054312;
      iVar4 = (**(code **)(*piVar6 + 0x5c))();
      if (iVar4 != 0) goto LAB_66054312;
    } while (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0xc));
  }
  if (piVar6 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar6 + 0x28))();
    if (iVar4 == 1) {
      (**(code **)(*piVar6 + 0x4c))(&local_8);
    }
  }
  FUN_66057620(param_1,pcVar3,uVar1);
  iVar4 = (**(code **)(*local_8 + 0x14))(pcVar3);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)this + 0x18))(param_1,pcVar3,param_2,local_8);
    if (pcVar3 != (char *)0x0) {
      operator_delete(pcVar3);
    }
    (*(code *)**(undefined4 **)this)(local_8,iVar4,puVar5,piVar6);
    return *(undefined4 *)(iVar4 + 8);
  }
LAB_66054312:
  if (pcVar3 != (char *)0x0) {
    operator_delete(pcVar3);
  }
  return 0;
}


