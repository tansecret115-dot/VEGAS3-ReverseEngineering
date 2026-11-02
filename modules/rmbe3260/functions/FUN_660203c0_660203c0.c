/* Module: rmbe3260.dll
   Function: FUN_660203c0
   Address: 660203c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660203c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  int local_60 [3];
  int local_54 [3];
  int local_48 [3];
  int *local_3c;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  iVar6 = 0;
  FUN_6605b650(local_60);
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_6605b970(local_60,s_StreamsChanged_6606dcc4);
    piVar3 = (int *)(param_1 + -0x40);
    local_3c = piVar3;
    iVar6 = (**(code **)(*(int *)(param_1 + -0x40) + 0x28))(piVar3);
    if (*(int *)(param_1 + 0x68) == 0) {
      if (-1 < iVar6) {
        piVar2 = (int *)(*(int *)(param_1 + 0x44) + 0x48);
        iVar6 = (**(code **)(*piVar2 + 0x28))(piVar2);
      }
    }
    else if ((-1 < iVar6) &&
            (piVar2 = (int *)(*(int *)(param_1 + 0x44) + 0x48),
            iVar6 = (**(code **)(*piVar2 + 0x24))(piVar2,1), -1 < iVar6)) {
      iVar6 = (**(code **)(**(int **)(param_1 + 0x44) + 0x54))
                        (*(int **)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x16c));
    }
    if (*(int *)(param_1 + 0x6c) == 0) {
      if (-1 < iVar6) {
        piVar2 = (int *)(*(int *)(param_1 + 0x48) + 0x48);
        (**(code **)(*piVar2 + 0x28))(piVar2);
      }
    }
    else if ((-1 < iVar6) &&
            (piVar2 = (int *)(*(int *)(param_1 + 0x48) + 0x48),
            iVar6 = (**(code **)(*piVar2 + 0x24))(piVar2,1), -1 < iVar6)) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x54))
                (*(int **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x16c));
    }
    (**(code **)(**(int **)(param_1 + 0x154) + 0x18))
              (*(int **)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x7c));
    (**(code **)(**(int **)(param_1 + 0x38) + 0x14))(*(int **)(param_1 + 0x38),&local_30);
    (**(code **)(**(int **)(param_1 + 0x154) + 0x1c))(*(int **)(param_1 + 0x154),local_30);
    iVar6 = (**(code **)(*piVar3 + 0x44))(piVar3);
    if (-1 < iVar6) {
      iVar6 = (**(code **)(*piVar3 + 0x48))(piVar3);
    }
    if ((*(int *)(param_1 + 0x68) != 0) || (*(int *)(param_1 + 0x6c) != 0)) {
      iVar8 = 0;
      local_20 = (int *)0x0;
      if ((-1 < iVar6) &&
         (iVar6 = (**(code **)(**(int **)(param_1 + 0x40) + 0x3c))
                            (*(int **)(param_1 + 0x40),&local_20), -1 < iVar6)) {
        local_c = (int *)0x0;
        iVar6 = (**(code **)(*local_20 + 0xc))(local_20,&local_c);
        if (-1 < iVar6) {
          while (iVar6 != 0x40012) {
            local_8 = (int *)0x0;
            iVar6 = (**(code **)*local_c)(local_c,&DAT_66065b38,&local_8);
            if (-1 < iVar6) {
              local_28 = iVar8 + 1;
              FUN_6605b650(local_54);
              FUN_6605b650(local_48);
              FUN_6605bfd0(local_54,s__s__d_6606cd1c);
              iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x10))
                                (*(int **)(param_1 + 0x14c),local_54[0]);
              if (iVar8 == 0) {
                iVar6 = -0x7fffbffb;
              }
              if ((-1 < iVar6) &&
                 (iVar6 = (**(code **)(*local_8 + 0x1c))(local_8,&local_34), -1 < iVar6)) {
                FUN_6605bfd0(local_48,s__s__s_6606cd0c);
                iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x14))
                                  (*(int **)(param_1 + 0x14c),local_48[0],local_34);
                if (iVar8 == 0) {
                  iVar6 = -0x7fffbffb;
                }
                if (-1 < iVar6) {
                  FUN_6605bfd0(local_48,s__s__s_6606cd0c);
                  iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x14))
                                    (*(int **)(param_1 + 0x14c),local_48[0],0);
                  if (iVar8 == 0) {
                    iVar6 = -0x7fffbffb;
                  }
                  if (-1 < iVar6) {
                    if (*(int *)(param_1 + 0x68) != 0) {
                      local_2c = 0;
                      iVar6 = (**(code **)(*local_8 + 0xc))(local_8,&local_2c);
                      local_10 = (int *)0x0;
                      if (-1 < iVar6) {
                        if (local_2c != 0) {
                          piVar3 = (int *)(*(int *)(param_1 + 0x44) + 0x48);
                          iVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,local_2c,&local_10);
                        }
                        if ((-1 < iVar6) && (local_10 != (int *)0x0)) {
                          FUN_6605bfd0(local_48,s__s__s_6606cd0c);
                          local_14 = (int *)0x0;
                          iVar6 = (**(code **)(*(int *)(param_1 + -0x20) + 0xc))
                                            (param_1 + -0x20,&DAT_66064f48,0,&DAT_66064f48,&local_14
                                            );
                          if (iVar6 < 0) goto LAB_6602088e;
                          local_38 = operator_new(*(int *)(local_10[8] + -8) + 1);
                          uVar4 = 0xffffffff;
                          pcVar7 = (char *)local_10[8];
                          do {
                            pcVar9 = pcVar7;
                            if (uVar4 == 0) break;
                            uVar4 = uVar4 - 1;
                            pcVar9 = pcVar7 + 1;
                            cVar1 = *pcVar7;
                            pcVar7 = pcVar9;
                          } while (cVar1 != '\0');
                          uVar4 = ~uVar4;
                          pcVar7 = pcVar9 + -uVar4;
                          pcVar9 = local_38;
                          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                            pcVar7 = pcVar7 + 4;
                            pcVar9 = pcVar9 + 4;
                          }
                          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                            *pcVar9 = *pcVar7;
                            pcVar7 = pcVar7 + 1;
                            pcVar9 = pcVar9 + 1;
                          }
                          (**(code **)(*local_14 + 0x10))
                                    (local_14,local_38,*(int *)(local_10[8] + -8) + 1);
                          iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x28))
                                            (*(int **)(param_1 + 0x14c),local_48[0],local_14);
                          if (iVar8 == 0) {
                            iVar6 = -0x7fffbffb;
                          }
                          operator_delete(local_38);
                          if (local_14 != (int *)0x0) {
                            (**(code **)(*local_14 + 8))(local_14);
                            local_14 = (int *)0x0;
                          }
                        }
                      }
                    }
                    if ((-1 < iVar6) && (*(int *)(param_1 + 0x6c) != 0)) {
                      local_2c = 0;
                      iVar6 = (**(code **)(*local_8 + 0x14))(local_8,&local_2c);
                      local_18 = (int *)0x0;
                      if (-1 < iVar6) {
                        if (local_2c != 0) {
                          piVar3 = (int *)(*(int *)(param_1 + 0x48) + 0x48);
                          iVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,local_2c,&local_18);
                        }
                        if ((-1 < iVar6) && (local_18 != (int *)0x0)) {
                          FUN_6605bfd0(local_48,s__s__s_6606cd0c);
                          local_1c = (int *)0x0;
                          iVar6 = (**(code **)(*(int *)(param_1 + -0x20) + 0xc))
                                            (param_1 + -0x20,&DAT_66064f48,0,&DAT_66064f48,&local_1c
                                            );
                          if (-1 < iVar6) {
                            local_38 = operator_new(*(int *)(local_18[8] + -8) + 1);
                            uVar4 = 0xffffffff;
                            pcVar7 = (char *)local_18[8];
                            do {
                              pcVar9 = pcVar7;
                              if (uVar4 == 0) break;
                              uVar4 = uVar4 - 1;
                              pcVar9 = pcVar7 + 1;
                              cVar1 = *pcVar7;
                              pcVar7 = pcVar9;
                            } while (cVar1 != '\0');
                            uVar4 = ~uVar4;
                            pcVar7 = pcVar9 + -uVar4;
                            pcVar9 = local_38;
                            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                              pcVar7 = pcVar7 + 4;
                              pcVar9 = pcVar9 + 4;
                            }
                            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                              *pcVar9 = *pcVar7;
                              pcVar7 = pcVar7 + 1;
                              pcVar9 = pcVar9 + 1;
                            }
                            (**(code **)(*local_1c + 0x10))
                                      (local_1c,local_38,*(int *)(local_18[8] + -8) + 1);
                            iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x28))
                                              (*(int **)(param_1 + 0x14c),local_48[0],local_1c);
                            if (iVar8 == 0) {
                              iVar6 = -0x7fffbffb;
                            }
                            operator_delete(local_38);
                            if (local_1c != (int *)0x0) {
                              (**(code **)(*local_1c + 8))(local_1c);
                              local_1c = (int *)0x0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_6602088e:
              if (local_8 != (int *)0x0) {
                (**(code **)(*local_8 + 8))(local_8);
                local_8 = (int *)0x0;
              }
              FUN_6605b770(local_48);
              FUN_6605b770(local_54);
              iVar8 = local_28;
            }
            if (local_c != (int *)0x0) {
              (**(code **)(*local_c + 8))(local_c);
              local_c = (int *)0x0;
            }
            if ((iVar6 < 0) ||
               (iVar6 = (**(code **)(*local_20 + 0x10))(local_20,&local_c), iVar6 < 0)) break;
          }
        }
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))(local_20);
          local_20 = (int *)0x0;
        }
      }
      local_24 = (int *)0x0;
      if ((iVar6 < 0) ||
         (iVar6 = (**(code **)(**(int **)(param_1 + 0x40) + 0x40))
                            (*(int **)(param_1 + 0x40),&local_24), iVar6 < 0)) goto LAB_66020d7e;
      local_8 = (int *)0x0;
      iVar6 = (**(code **)(*local_24 + 0xc))(local_24,&local_8);
      if (-1 < iVar6) {
        while (iVar6 != 0x40012) {
          local_c = (int *)0x0;
          iVar6 = (**(code **)*local_8)(local_8,&DAT_66065b38,&local_c);
          if (-1 < iVar6) {
            local_28 = iVar8 + 1;
            FUN_6605b650(local_54);
            FUN_6605b650(local_48);
            FUN_6605bfd0(local_54,s__s__d_6606cd1c);
            iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x10))
                              (*(int **)(param_1 + 0x14c),local_54[0]);
            if (iVar8 == 0) {
              iVar6 = -0x7fffbffb;
            }
            if ((-1 < iVar6) &&
               (iVar6 = (**(code **)(*local_c + 0x1c))(local_c,&local_38), -1 < iVar6)) {
              FUN_6605bfd0(local_48,s__s__s_6606cd0c);
              iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x14))
                                (*(int **)(param_1 + 0x14c),local_48[0],local_38);
              if (iVar8 == 0) {
                iVar6 = -0x7fffbffb;
              }
              if (-1 < iVar6) {
                FUN_6605bfd0(local_48,s__s__s_6606cd0c);
                iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x14))
                                  (*(int **)(param_1 + 0x14c),local_48[0],1);
                if (iVar8 == 0) {
                  iVar6 = -0x7fffbffb;
                }
                if (-1 < iVar6) {
                  if (*(int *)(param_1 + 0x68) != 0) {
                    local_2c = 0;
                    iVar6 = (**(code **)(*local_c + 0xc))(local_c,&local_2c);
                    local_1c = (int *)0x0;
                    if (-1 < iVar6) {
                      if (local_2c != 0) {
                        piVar3 = (int *)(*(int *)(param_1 + 0x44) + 0x48);
                        iVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,local_2c,&local_1c);
                      }
                      if ((-1 < iVar6) && (local_1c != (int *)0x0)) {
                        FUN_6605bfd0(local_48,s__s__s_6606cd0c);
                        local_18 = (int *)0x0;
                        iVar6 = (**(code **)(*(int *)(param_1 + -0x20) + 0xc))
                                          (param_1 + -0x20,&DAT_66064f48,0,&DAT_66064f48,&local_18);
                        if (iVar6 < 0) goto LAB_66020cbd;
                        local_34 = operator_new(*(int *)(local_1c[8] + -8) + 1);
                        uVar4 = 0xffffffff;
                        pcVar7 = (char *)local_1c[8];
                        do {
                          pcVar9 = pcVar7;
                          if (uVar4 == 0) break;
                          uVar4 = uVar4 - 1;
                          pcVar9 = pcVar7 + 1;
                          cVar1 = *pcVar7;
                          pcVar7 = pcVar9;
                        } while (cVar1 != '\0');
                        uVar4 = ~uVar4;
                        pcVar7 = pcVar9 + -uVar4;
                        pcVar9 = local_34;
                        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                          pcVar7 = pcVar7 + 4;
                          pcVar9 = pcVar9 + 4;
                        }
                        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                          *pcVar9 = *pcVar7;
                          pcVar7 = pcVar7 + 1;
                          pcVar9 = pcVar9 + 1;
                        }
                        (**(code **)(*local_18 + 0x10))
                                  (local_18,local_34,*(int *)(local_1c[8] + -8) + 1);
                        iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x28))
                                          (*(int **)(param_1 + 0x14c),local_48[0],local_18);
                        if (iVar8 == 0) {
                          iVar6 = -0x7fffbffb;
                        }
                        operator_delete(local_34);
                        if (local_18 != (int *)0x0) {
                          (**(code **)(*local_18 + 8))(local_18);
                          local_18 = (int *)0x0;
                        }
                      }
                    }
                  }
                  if ((-1 < iVar6) && (*(int *)(param_1 + 0x6c) != 0)) {
                    local_2c = 0;
                    iVar6 = (**(code **)(*local_c + 0x14))(local_c,&local_2c);
                    local_14 = (int *)0x0;
                    if (-1 < iVar6) {
                      if (local_2c != 0) {
                        piVar3 = (int *)(*(int *)(param_1 + 0x48) + 0x48);
                        iVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,local_2c,&local_14);
                      }
                      if ((-1 < iVar6) && (local_14 != (int *)0x0)) {
                        FUN_6605bfd0(local_48,s__s__s_6606cd0c);
                        local_10 = (int *)0x0;
                        iVar6 = (**(code **)(*(int *)(param_1 + -0x20) + 0xc))
                                          (param_1 + -0x20,&DAT_66064f48,0,&DAT_66064f48,&local_10);
                        if (-1 < iVar6) {
                          local_34 = operator_new(*(int *)(local_14[8] + -8) + 1);
                          uVar4 = 0xffffffff;
                          pcVar7 = (char *)local_14[8];
                          do {
                            pcVar9 = pcVar7;
                            if (uVar4 == 0) break;
                            uVar4 = uVar4 - 1;
                            pcVar9 = pcVar7 + 1;
                            cVar1 = *pcVar7;
                            pcVar7 = pcVar9;
                          } while (cVar1 != '\0');
                          uVar4 = ~uVar4;
                          pcVar7 = pcVar9 + -uVar4;
                          pcVar9 = local_34;
                          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                            pcVar7 = pcVar7 + 4;
                            pcVar9 = pcVar9 + 4;
                          }
                          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                            *pcVar9 = *pcVar7;
                            pcVar7 = pcVar7 + 1;
                            pcVar9 = pcVar9 + 1;
                          }
                          (**(code **)(*local_10 + 0x10))
                                    (local_10,local_34,*(int *)(local_14[8] + -8) + 1);
                          iVar8 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x28))
                                            (*(int **)(param_1 + 0x14c),local_48[0],local_10);
                          if (iVar8 == 0) {
                            iVar6 = -0x7fffbffb;
                          }
                          operator_delete(local_34);
                          if (local_10 != (int *)0x0) {
                            (**(code **)(*local_10 + 8))(local_10);
                            local_10 = (int *)0x0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_66020cbd:
            if (local_c != (int *)0x0) {
              (**(code **)(*local_c + 8))(local_c);
              local_c = (int *)0x0;
            }
            FUN_6605b770(local_48);
            FUN_6605b770(local_54);
            iVar8 = local_28;
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          if ((iVar6 < 0) || (iVar6 = (**(code **)(*local_24 + 0x10))(local_24,&local_8), iVar6 < 0)
             ) break;
        }
      }
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))(local_24);
        local_24 = (int *)0x0;
      }
      if (iVar6 < 0) goto LAB_66020d7e;
      iVar6 = (**(code **)(*local_3c + 0x2c))(local_3c,local_60[0]);
    }
  }
  else {
    if (*(int *)(param_1 + 0x68) != 0) {
      piVar3 = (int *)(*(int *)(param_1 + 0x44) + 0x48);
      iVar6 = (**(code **)(*piVar3 + 0x24))(piVar3,0);
    }
    if (iVar6 < 0) goto LAB_66020d7e;
    if (*(int *)(param_1 + 0x6c) != 0) {
      piVar3 = (int *)(*(int *)(param_1 + 0x48) + 0x48);
      iVar6 = (**(code **)(*piVar3 + 0x24))(piVar3,0);
    }
  }
  if (-1 < iVar6) {
    iVar6 = FUN_660216d0((void *)(param_1 + -0x40));
  }
LAB_66020d7e:
  FUN_6605b770(local_60);
  return iVar6;
}


