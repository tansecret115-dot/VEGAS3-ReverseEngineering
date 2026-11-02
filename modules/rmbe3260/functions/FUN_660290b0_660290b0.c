/* Module: rmbe3260.dll
   Function: FUN_660290b0
   Address: 660290b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660290b0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char local_144 [256];
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  undefined1 local_38 [4];
  float local_34;
  float local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20 [3];
  int *local_14;
  int *local_10;
  int local_c;
  undefined4 *local_8;
  
  piVar2 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x58))(param_1);
  local_28 = (int *)0x0;
  if ((-1 < iVar3) && (iVar3 = FUN_660130d0(&local_28), -1 < iVar3)) {
    iVar3 = (**(code **)(piVar2[0x12] + 0x28))(piVar2 + 0x12);
  }
  FUN_6605b650(local_20);
  if (-1 < iVar3) {
    iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                      ((int *)piVar2[0x1f],s_currentvideotime_6606dec8,0);
    piVar2[0x1e] = iVar4;
    if (iVar4 == 0) {
      iVar3 = -0x7fffbffb;
    }
    if ((-1 < iVar3) && (local_10 = (int *)0x0, 0 < piVar2[0x16])) {
      do {
        iVar4 = *(int *)(piVar2[0x15] + (int)local_10 * 4);
        local_14 = (int *)0x0;
        local_2c = (int *)0x0;
        local_c = iVar4;
        if (-1 < iVar3) {
          iVar3 = (**(code **)**(undefined4 **)(iVar4 + 4))
                            (*(undefined4 **)(iVar4 + 4),&DAT_66065b08,&local_14);
        }
        if (-1 < iVar3) {
          iVar3 = (**(code **)*local_14)(local_14,&DAT_66065b28,&local_2c);
        }
        local_3c = (int *)((int)local_10 + 1);
        puVar6 = (undefined4 *)(iVar4 + 0x20);
        local_8 = puVar6;
        FUN_6605bfd0(puVar6,s__s__d_6606cd1c);
        iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x10))((int *)piVar2[0x1f],*puVar6);
        if (iVar4 == 0) {
          iVar3 = -0x7fffbffb;
        }
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*local_14 + 0x10))(local_14,&local_44);
          param_1 = (int *)0x0;
          if ((-1 < iVar3) &&
             (iVar3 = (**(code **)(*(int *)(piVar2[2] + 0x20) + 0xc))
                                ((int *)(piVar2[2] + 0x20),&DAT_66064f48,0,&DAT_66064f48,&param_1),
             -1 < iVar3)) {
            FUN_6605bfd0(local_20,s__s__s_6606cd0c);
            (**(code **)(*param_1 + 0x10))(param_1,&local_44,8);
            iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x3c))
                              ((int *)piVar2[0x1f],local_20[0],param_1);
            if (iVar4 == 0) {
              iVar3 = -0x7fffbffb;
            }
          }
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
            param_1 = (int *)0x0;
          }
          if (-1 < iVar3) {
            local_10 = (int *)0x0;
            iVar3 = (**(code **)(*local_28 + 0x14))(local_28,local_44,local_40,&local_10);
            if ((-1 < iVar3) &&
               (iVar3 = (**(code **)(*(int *)(piVar2[2] + 0x20) + 0xc))
                                  ((int *)(piVar2[2] + 0x20),&DAT_66064f48,0,&DAT_66064f48,&param_1)
               , -1 < iVar3)) {
              (**(code **)(*local_10 + 0x10))(local_10,local_144,0xff);
              FUN_6605bfd0(local_20,s__s__s_6606cd0c);
              uVar5 = 0xffffffff;
              pcVar7 = local_144;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              (**(code **)(*param_1 + 0x10))(param_1,local_144,~uVar5);
              iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x28))
                                ((int *)piVar2[0x1f],local_20[0],param_1);
              if (iVar4 == 0) {
                iVar3 = -0x7fffbffb;
              }
            }
            if (param_1 != (int *)0x0) {
              (**(code **)(*param_1 + 8))(param_1);
              param_1 = (int *)0x0;
            }
            if (local_10 != (int *)0x0) {
              (**(code **)(*local_10 + 8))(local_10);
            }
            if (-1 < iVar3) {
              iVar3 = (**(code **)(*local_14 + 0x18))(local_14,local_38);
              local_8 = (undefined4 *)ftol();
              if (-1 < iVar3) {
                FUN_6605bfd0(local_20,s__s__s_6606cd0c);
                iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                                  ((int *)piVar2[0x1f],local_20[0],local_8);
                if (iVar4 == 0) {
                  iVar3 = -0x7fffbffb;
                }
                if (-1 < iVar3) {
                  FUN_6605bfd0(local_20,s__s__s_6606cd0c);
                  iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                                    ((int *)piVar2[0x1f],local_20[0],local_8);
                  *(int *)(local_c + 0x48) = iVar4;
                  if (iVar4 == 0) {
                    iVar3 = -0x7fffbffb;
                  }
                  if (-1 < iVar3) {
                    local_30 = 15.0;
                    local_34 = 15.0;
                    (**(code **)(*local_2c + 0xc))(local_2c,&local_30);
                    local_24 = (int *)0x0;
                    iVar3 = (*(code *)**(undefined4 **)piVar2[8])
                                      ((undefined4 *)piVar2[8],&DAT_66065a68,&local_24);
                    if ((-1 < iVar3) &&
                       (iVar3 = (**(code **)(*local_24 + 0x2c))(local_24,&local_34),
                       local_24 != (int *)0x0)) {
                      (**(code **)(*local_24 + 8))(local_24);
                      local_24 = (int *)0x0;
                    }
                    if (local_34 < local_30) {
                      local_30 = local_34;
                    }
                    local_8 = (undefined4 *)ftol();
                    if (-1 < iVar3) {
                      FUN_6605bfd0(local_20,s__s__s_6606cd0c);
                      iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                                        ((int *)piVar2[0x1f],local_20[0],local_8);
                      if (iVar4 == 0) {
                        iVar3 = -0x7fffbffb;
                      }
                      if (-1 < iVar3) {
                        FUN_6605bfd0(local_20,s__s__s_6606cd0c);
                        iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                                          ((int *)piVar2[0x1f],local_20[0],local_8);
                        *(int *)(local_c + 0x50) = iVar4;
                        if (iVar4 == 0) {
                          iVar3 = -0x7fffbffb;
                        }
                        if (-1 < iVar3) {
                          FUN_6605bfd0(local_20,s__s__s_6606cd0c);
                          iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                                            ((int *)piVar2[0x1f],local_20[0],
                                             *(undefined4 *)(local_c + 0x2c));
                          *(int *)(local_c + 0x30) = iVar4;
                          if (iVar4 == 0) {
                            iVar3 = -0x7fffbffb;
                          }
                          if (-1 < iVar3) {
                            FUN_6605bfd0(local_20,s__s__s_6606cd0c);
                            iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                                              ((int *)piVar2[0x1f],local_20[0],
                                               *(undefined4 *)(local_c + 0x54));
                            *(int *)(local_c + 0x58) = iVar4;
                            if (iVar4 == 0) {
                              iVar3 = -0x7fffbffb;
                            }
                            if (-1 < iVar3) {
                              FUN_6605bfd0(local_20,s__s__s_6606cd0c);
                              iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                                                ((int *)piVar2[0x1f],local_20[0],
                                                 *(undefined4 *)(local_c + 0x34));
                              *(int *)(local_c + 0x38) = iVar4;
                              if (iVar4 == 0) {
                                iVar3 = -0x7fffbffb;
                              }
                              if (-1 < iVar3) {
                                local_8 = (undefined4 *)0x0;
                                iVar3 = (**(code **)(*local_14 + 0x28))(local_14,&local_8);
                                FUN_6605bfd0(local_20,s__s__s_6606cd0c);
                                iVar4 = (**(code **)(*(int *)piVar2[0x1f] + 0x14))
                                                  ((int *)piVar2[0x1f],local_20[0],local_8);
                                if (iVar4 == 0) {
                                  iVar3 = -0x7fffbffb;
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
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))(local_14);
          local_14 = (int *)0x0;
        }
        if (local_2c != (int *)0x0) {
          (**(code **)(*local_2c + 8))(local_2c);
          local_2c = (int *)0x0;
        }
        local_10 = local_3c;
      } while ((int)local_3c < piVar2[0x16]);
    }
  }
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
    local_28 = (int *)0x0;
  }
  FUN_6605b770(local_20);
  return iVar3;
}


