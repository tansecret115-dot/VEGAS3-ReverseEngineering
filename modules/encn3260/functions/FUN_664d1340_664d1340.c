/* Module: encn3260.dll
   Function: FUN_664d1340
   Address: 664d1340
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664d1340(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  char local_10c;
  undefined4 local_10b;
  int local_c;
  int *local_8;
  
  local_10c = '\0';
  *(undefined4 *)this = 0;
  puVar3 = &local_10b;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  local_c = 0;
  local_8 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    *(int **)((int)this + 4) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    *(int *)((int)this + 8) = param_2;
    iVar4 = (**(code **)(**(int **)((int)this + 4) + 0x6c))
                      (*(int **)((int)this + 4),param_2,&local_8);
    if (iVar4 == 0) {
      uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
      sprintf(&local_10c,s__s_Normal_664f03c4,uVar1);
      pvVar2 = operator_new(0x10);
      if (pvVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
      }
      *(undefined4 **)((int)this + 0x10) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
        sprintf(&local_10c,s__s_Recovered_664f03b4,uVar1);
        pvVar2 = operator_new(0x10);
        if (pvVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
        }
        *(undefined4 **)((int)this + 0x14) = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
          sprintf(&local_10c,s__s_Received_664f03a8,uVar1);
          pvVar2 = operator_new(0x10);
          if (pvVar2 == (void *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
          }
          *(undefined4 **)((int)this + 0x18) = puVar3;
          if (puVar3 != (undefined4 *)0x0) {
            uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
            sprintf(&local_10c,s__s_Lost_664f03a0,uVar1);
            pvVar2 = operator_new(0x10);
            if (pvVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
            }
            *(undefined4 **)((int)this + 0x1c) = puVar3;
            if (puVar3 != (undefined4 *)0x0) {
              uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
              sprintf(&local_10c,s__s_Late_664f0398,uVar1);
              pvVar2 = operator_new(0x10);
              if (pvVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)0x0;
              }
              else {
                puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
              }
              *(undefined4 **)((int)this + 0x20) = puVar3;
              if (puVar3 != (undefined4 *)0x0) {
                uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                sprintf(&local_10c,s__s_Total_664f038c,uVar1);
                pvVar2 = operator_new(0x10);
                if (pvVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)0x0;
                }
                else {
                  puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
                }
                *(undefined4 **)((int)this + 0x24) = puVar3;
                if (puVar3 != (undefined4 *)0x0) {
                  uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                  sprintf(&local_10c,s__s_Lost30_664f0380,uVar1);
                  pvVar2 = operator_new(0x10);
                  if (pvVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)0x0;
                  }
                  else {
                    puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
                  }
                  *(undefined4 **)((int)this + 0x28) = puVar3;
                  if (puVar3 != (undefined4 *)0x0) {
                    uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                    sprintf(&local_10c,s__s_Total30_664f0374,uVar1);
                    pvVar2 = operator_new(0x10);
                    if (pvVar2 == (void *)0x0) {
                      puVar3 = (undefined4 *)0x0;
                    }
                    else {
                      puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
                    }
                    *(undefined4 **)((int)this + 0x2c) = puVar3;
                    if (puVar3 != (undefined4 *)0x0) {
                      uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                      sprintf(&local_10c,s__s_ResendRequested_664f0360,uVar1);
                      pvVar2 = operator_new(0x10);
                      if (pvVar2 == (void *)0x0) {
                        puVar3 = (undefined4 *)0x0;
                      }
                      else {
                        puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
                      }
                      *(undefined4 **)((int)this + 0x30) = puVar3;
                      if (puVar3 != (undefined4 *)0x0) {
                        uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                        sprintf(&local_10c,s__s_ResendReceived_664f034c,uVar1);
                        pvVar2 = operator_new(0x10);
                        if (pvVar2 == (void *)0x0) {
                          puVar3 = (undefined4 *)0x0;
                        }
                        else {
                          puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
                        }
                        *(undefined4 **)((int)this + 0x34) = puVar3;
                        if (puVar3 != (undefined4 *)0x0) {
                          uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                          sprintf(&local_10c,s__s_ClipBandwidth_664f0338,uVar1);
                          pvVar2 = operator_new(0x10);
                          if (pvVar2 == (void *)0x0) {
                            puVar3 = (undefined4 *)0x0;
                          }
                          else {
                            puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65);
                          }
                          *(undefined4 **)((int)this + 0x38) = puVar3;
                          if (puVar3 != (undefined4 *)0x0) {
                            uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                            sprintf(&local_10c,s__s_AverageBandwidth_664f0324,uVar1);
                            pvVar2 = operator_new(0x10);
                            if (pvVar2 == (void *)0x0) {
                              puVar3 = (undefined4 *)0x0;
                            }
                            else {
                              puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,0x65)
                              ;
                            }
                            *(undefined4 **)((int)this + 0x3c) = puVar3;
                            if (puVar3 != (undefined4 *)0x0) {
                              uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                              sprintf(&local_10c,s__s_CurrentBandwidth_664f0310,uVar1);
                              pvVar2 = operator_new(0x10);
                              if (pvVar2 == (void *)0x0) {
                                puVar3 = (undefined4 *)0x0;
                              }
                              else {
                                puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,
                                                      0x65);
                              }
                              *(undefined4 **)((int)this + 0x40) = puVar3;
                              if (puVar3 != (undefined4 *)0x0) {
                                uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                                sprintf(&local_10c,s__s_HighLatency_664f0300,uVar1);
                                pvVar2 = operator_new(0x10);
                                if (pvVar2 == (void *)0x0) {
                                  puVar3 = (undefined4 *)0x0;
                                }
                                else {
                                  puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c,
                                                        0x65);
                                }
                                *(undefined4 **)((int)this + 0x44) = puVar3;
                                if (puVar3 != (undefined4 *)0x0) {
                                  uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                                  sprintf(&local_10c,s__s_LowLatency_664f02f0,uVar1);
                                  pvVar2 = operator_new(0x10);
                                  if (pvVar2 == (void *)0x0) {
                                    puVar3 = (undefined4 *)0x0;
                                  }
                                  else {
                                    puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),&local_10c
                                                          ,0x65);
                                  }
                                  *(undefined4 **)((int)this + 0x48) = puVar3;
                                  if (puVar3 != (undefined4 *)0x0) {
                                    uVar1 = (**(code **)(*local_8 + 0x1c))(local_8);
                                    sprintf(&local_10c,s__s_AverageLatency_664f02dc,uVar1);
                                    pvVar2 = operator_new(0x10);
                                    if (pvVar2 == (void *)0x0) {
                                      puVar3 = (undefined4 *)0x0;
                                    }
                                    else {
                                      puVar3 = FUN_664d1200(pvVar2,*(int **)((int)this + 4),
                                                            &local_10c,0x65);
                                    }
                                    *(undefined4 **)((int)this + 0x4c) = puVar3;
                                    if (puVar3 != (undefined4 *)0x0) goto LAB_664d189b;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_c = -0x7ff8fff2;
    }
  }
LAB_664d189b:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (local_c == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    return this;
  }
  *(int *)this = local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}


