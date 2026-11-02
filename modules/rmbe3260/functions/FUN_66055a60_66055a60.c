/* Module: rmbe3260.dll
   Function: FUN_66055a60
   Address: 66055a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66055a60(void *this,int *param_1,int *param_2,char *param_3)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *local_8;
  
  local_8 = this;
  pvVar2 = operator_new(0x1d);
  if (pvVar2 == (void *)0x0) {
    param_3 = (char *)0x0;
  }
  else {
    param_3 = (char *)FUN_660574f0(param_3,'.');
  }
  uVar1 = *(uint *)(param_3 + 0x11);
  pcVar3 = operator_new(uVar1);
  local_8 = *(int **)((int)this + 4);
  *pcVar3 = '\0';
  iVar4 = FUN_66057620(param_3,pcVar3,uVar1);
  do {
    if (iVar4 == 0) {
      if ((*param_1 == 0) || (*param_2 == 0)) {
LAB_66055b17:
        uVar6 = 0x80004005;
      }
      else {
        uVar6 = 0;
      }
LAB_66055b1c:
      if (pcVar3 != (char *)0x0) {
        operator_delete(pcVar3);
      }
      if (param_3 != (char *)0x0) {
        operator_delete(*(void **)param_3);
        operator_delete(*(void **)(param_3 + 0x19));
        operator_delete(param_3);
      }
      return uVar6;
    }
    if (local_8 == (int *)0x0) goto LAB_66055b17;
    piVar5 = (int *)(**(code **)(*local_8 + 0x14))(pcVar3);
    *param_1 = (int)piVar5;
    if (piVar5 == (int *)0x0) {
      uVar6 = 0x80040281;
      goto LAB_66055b1c;
    }
    piVar5 = (int *)*piVar5;
    *param_2 = (int)piVar5;
    if (piVar5 == (int *)0x0) goto LAB_66055b17;
    iVar4 = (**(code **)(*piVar5 + 0x28))();
    if (iVar4 == 1) {
      (**(code **)(*(int *)*param_2 + 0x4c))(&local_8);
    }
    iVar4 = FUN_66057620(param_3,pcVar3,uVar1);
  } while( true );
}


