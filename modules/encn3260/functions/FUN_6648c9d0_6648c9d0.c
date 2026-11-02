/* Module: encn3260.dll
   Function: FUN_6648c9d0
   Address: 6648c9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6648c9d0(void *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *local_10;
  char *local_c;
  int *local_8;
  
  piVar1 = param_2;
  local_c = (char *)0x0;
  local_8 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_664dd5a0,&local_10);
    if (iVar2 == 0) {
      param_2 = (int *)0x0;
      (**(code **)(*local_10 + 0x10))(local_10,&param_2);
      iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&local_c,&local_8);
      while (iVar2 == 0) {
        pvVar3 = operator_new(0x28);
        if (pvVar3 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_664be3d0(pvVar3,local_c);
        }
        pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
        FUN_664be470(puVar4,pcVar5);
        FUN_664bd5f0(param_1,puVar4,0);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&local_c,&local_8);
      }
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,&local_c,&local_8);
      while (iVar2 == 0) {
        pvVar3 = operator_new(0x28);
        if (pvVar3 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_664be3d0(pvVar3,local_c);
        }
        pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
        FUN_664be470(puVar4,pcVar5);
        FUN_664bd5f0(param_1,puVar4,0);
        (**(code **)(*local_8 + 8))(local_8);
        iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,&local_c,&local_8);
      }
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
    }
  }
  return;
}


