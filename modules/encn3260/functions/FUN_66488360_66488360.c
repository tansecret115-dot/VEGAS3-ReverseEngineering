/* Module: encn3260.dll
   Function: FUN_66488360
   Address: 66488360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66488360(void *this,int *param_1)

{
  byte *pbVar1;
  int *this_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  char *pcVar6;
  int *local_8;
  
  this_00 = param_1;
  local_8 = this;
  if (param_1[0x13] == 0x227) {
    uVar2 = (**(code **)(**(int **)((int)this + 0x68) + 0x10))
                      (*(int **)((int)this + 0x68),0x8004005b,0);
    return uVar2;
  }
  if (param_1[0x13] != 200) {
    uVar2 = (**(code **)(**(int **)((int)this + 0x68) + 0x10))
                      (*(int **)((int)this + 0x68),0x80004005,0);
    return uVar2;
  }
  param_1 = (int *)0x0;
  FUN_6648cb20(this,(int)this_00,&param_1);
  if (param_1 != (int *)0x0) {
    local_8 = (int *)0x0;
    iVar3 = (**(code **)*param_1)(param_1,&DAT_664dd5a0,&local_8);
    if (iVar3 == 0) {
      (**(code **)(**(int **)((int)this + 0x84) + 0x18))(*(int **)((int)this + 0x84),local_8);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  if (*(int *)(*(int *)((int)this + 0x70) + 0x28) == 0) {
    iVar3 = FUN_664bd670(this_00,s_RealChallenge1_664e25d0);
    if (iVar3 != 0) {
      iVar3 = FUN_664be4b0(iVar3);
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)FUN_664be280(iVar3);
        if (puVar4 != (undefined4 *)0x0) {
          pbVar1 = (byte *)*puVar4;
          if (*(int *)(*(int *)((int)this + 0x70) + 0x30) == 0) {
            pvVar5 = operator_new(0x53);
            if (pvVar5 == (void *)0x0) {
              pcVar6 = (char *)0x0;
            }
            else {
              pcVar6 = FUN_664cb870();
            }
            *(char **)(*(int *)((int)this + 0x70) + 0x30) = pcVar6;
          }
          FUN_664cb940(*(void **)(*(int *)((int)this + 0x70) + 0x30),pbVar1,&DAT_664dfd08,
                       DAT_664dfcf4,DAT_664dfcf8);
        }
      }
    }
  }
  uVar2 = (**(code **)(**(int **)((int)this + 0x68) + 0x10))(*(int **)((int)this + 0x68),0,param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return uVar2;
}


