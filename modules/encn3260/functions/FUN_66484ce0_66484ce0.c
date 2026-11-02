/* Module: encn3260.dll
   Function: FUN_66484ce0
   Address: 66484ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66484ce0(int param_1,char *param_2,int param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  void *this;
  char local_50 [32];
  int local_30;
  int *local_2c;
  void *local_28;
  void *local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  uint local_10;
  byte *local_c;
  int *local_8;
  
  local_14 = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  local_8 = operator_new(0x40);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    FUN_664bd560(local_8);
    FUN_664bb2c0(local_8 + 0xd);
    *local_8 = (int)&PTR_FUN_664de028;
  }
  pcVar5 = param_2;
  FUN_664bb5e0(local_8 + 0xd,param_2);
  FUN_664bb5e0((void *)(param_1 + 0x6c),pcVar5);
  this = (void *)(param_1 + -0x30);
  param_2 = (char *)0x0;
  local_28 = this;
  FUN_6648c9d0(local_8,param_5);
  FUN_66489fb0((int)this);
  local_c = (byte *)0x0;
  iVar2 = FUN_66489c50(this,&local_c);
  if ((iVar2 == 0) && (local_20 = FUN_66489e40(this,local_c), local_20 != (int *)0x0)) {
    if (param_4 == (int *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = param_4[4];
    }
    local_1c = operator_new((local_10 & 0xffff) * 4 + 8);
    *local_1c = param_3;
    local_1c[1] = 0;
    local_30 = param_4[1];
    param_5 = (int *)0x2;
    local_2c = param_4;
    if (local_30 != 0) {
      local_24 = (void *)(param_1 + 0xc6);
      do {
        piVar1 = local_1c;
        param_2 = (char *)0x0;
        param_3 = 0;
        local_18 = 0xffffffff;
        param_4 = (int *)0x0;
        if (local_30 == 0) {
          iVar2 = 0;
        }
        else {
          piVar3 = (int *)FUN_664bab80(local_30);
          iVar2 = *piVar3;
        }
        piVar1[(short)param_5] = iVar2;
        piVar1 = piVar1 + (short)param_5;
        puVar4 = operator_new(0x2c);
        if (puVar4 == (undefined2 *)0x0) {
          puVar4 = (undefined2 *)0x0;
        }
        else {
          FUN_664bb2c0((undefined4 *)(puVar4 + 3));
        }
        (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,s_StreamNumber_664e2140,&param_2);
        (**(code **)(*(int *)*piVar1 + 0x10))
                  ((int *)*piVar1,s_NeedReliablePackets_664e23a4,&param_3);
        (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,s_RTPPayloadType_664e2394,&local_18);
        (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1,s_Control_664e238c,&param_4);
        *puVar4 = param_2._0_2_;
        *(uint *)(puVar4 + 1) = (uint)(param_3 != 0);
        puVar4[10] = (undefined2)local_18;
        puVar4[9] = 0;
        if (param_4 == (int *)0x0) {
          sprintf(local_50,s_streamid__u_664e2380,(uint)param_2 & 0xffff);
          FUN_664bb5e0(puVar4 + 3,local_50);
        }
        else {
          pcVar5 = (char *)(**(code **)(*param_4 + 0x1c))(param_4);
          FUN_664bb5e0(puVar4 + 3,pcVar5);
          (**(code **)(*param_4 + 8))(param_4);
          param_4 = (int *)0x0;
        }
        FUN_664baab0(local_24,puVar4);
        FUN_664bab40(&local_30);
        param_5 = (int *)((int)param_5 + 1);
        this = local_28;
      } while (local_30 != 0);
    }
    piVar1 = local_1c;
    (**(code **)(*local_20 + 0x14))(local_20,local_10 + 2,local_1c,&local_14);
    param_2 = (char *)(**(code **)(*local_14 + 0x1c))(local_14);
    (**(code **)(*local_20 + 8))(local_20);
    operator_delete(piVar1);
  }
  if (param_2 == (char *)0x0) {
    uVar6 = 0x80004005;
  }
  else {
    *(undefined4 *)(param_1 + 0x11e) = 1;
    iVar2 = FUN_6648bad0(*(void **)(param_1 + 0x40),(int)this);
    uVar6 = FUN_6648c650(this,local_8,param_2,(char *)local_c,iVar2);
    (**(code **)(*local_14 + 8))(local_14);
  }
  operator_delete(local_c);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar6;
}


