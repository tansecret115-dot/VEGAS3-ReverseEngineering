/* Module: rmbe3260.dll
   Function: FUN_6601b450
   Address: 6601b450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601b450(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *this;
  undefined1 local_3c [56];
  
  piVar1 = param_1;
  iVar2 = FUN_6602db80(param_1 + 0x6f);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(piVar1[8] + 0xc))(piVar1 + 8,&DAT_660659f8,0,&DAT_660659e8,piVar1 + 0x1e);
    if (-1 < iVar2) {
      param_1 = (int *)0x0;
      iVar2 = FUN_66026e50(&param_1);
      if (-1 < iVar2) {
        iVar2 = (**(code **)*param_1)(param_1,&DAT_66065888,piVar1 + 0x1f);
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
        }
        if (-1 < iVar2) {
          iVar2 = FUN_66025350((int)piVar1 + 0x1da,1);
          if (-1 < iVar2) {
            if (DAT_66075170 == (int *)0x0) {
              if (piVar1 == (int *)0x0) {
                DAT_66075170 = (int *)0x0;
              }
              else {
                DAT_66075170 = piVar1 + 4;
              }
            }
            if (-1 < iVar2) {
              iVar2 = FUN_66022210(piVar1 + 0x20);
              if (-1 < iVar2) {
                if (piVar1[0x1d] == 0) {
                  iVar3 = FUN_6603beb0((int)local_3c);
                  if (iVar3 == 0) {
                    piVar1[0x1d] = 1;
                  }
                  else {
                    iVar2 = -0x7ffbfff9;
                  }
                }
                if (-1 < iVar2) {
                  puVar4 = operator_new(0xac);
                  if (puVar4 == (undefined4 *)0x0) {
                    piVar5 = (int *)0x0;
                  }
                  else {
                    piVar5 = FUN_66011020(puVar4);
                  }
                  piVar1[0x21] = (int)piVar5;
                  if (piVar5 == (int *)0x0) {
                    iVar2 = -0x7ff8fff2;
                  }
                  if (-1 < iVar2) {
                    iVar2 = (**(code **)(*piVar5 + 0x1c))(piVar5,piVar1);
                    if (-1 < iVar2) {
                      puVar4 = operator_new(0x22c);
                      if (puVar4 == (undefined4 *)0x0) {
                        piVar5 = (int *)0x0;
                      }
                      else {
                        piVar5 = FUN_660274c0(puVar4);
                      }
                      piVar1[0x22] = (int)piVar5;
                      if (piVar5 == (int *)0x0) {
                        iVar2 = -0x7ff8fff2;
                      }
                      if (-1 < iVar2) {
                        iVar2 = (**(code **)(*piVar5 + 0x1c))(piVar5,piVar1);
                        if (-1 < iVar2) {
                          puVar4 = operator_new(0xe4);
                          if (puVar4 == (undefined4 *)0x0) {
                            piVar5 = (int *)0x0;
                          }
                          else {
                            piVar5 = FUN_6600f1c0(puVar4);
                          }
                          piVar1[0x23] = (int)piVar5;
                          if (piVar5 == (int *)0x0) {
                            iVar2 = -0x7ff8fff2;
                          }
                          if (-1 < iVar2) {
                            iVar2 = (**(code **)(*piVar5 + 0x1c))(piVar5,piVar1);
                            if (-1 < iVar2) {
                              puVar4 = operator_new(0xd4);
                              if (puVar4 == (undefined4 *)0x0) {
                                piVar5 = (int *)0x0;
                              }
                              else {
                                piVar5 = FUN_66010060(puVar4);
                              }
                              piVar1[0x24] = (int)piVar5;
                              if (piVar5 == (int *)0x0) {
                                iVar2 = -0x7ff8fff2;
                              }
                              if (-1 < iVar2) {
                                iVar2 = (**(code **)(*piVar5 + 0x1c))(piVar5,piVar1);
                                if (-1 < iVar2) {
                                  puVar4 = operator_new(0x90);
                                  if (puVar4 == (undefined4 *)0x0) {
                                    piVar5 = (int *)0x0;
                                  }
                                  else {
                                    piVar5 = FUN_6600aa50(puVar4);
                                  }
                                  piVar1[0x25] = (int)piVar5;
                                  if (piVar5 == (int *)0x0) {
                                    iVar2 = -0x7ff8fff2;
                                  }
                                  if (-1 < iVar2) {
                                    iVar2 = (**(code **)(*piVar5 + 0x1c))(piVar5,piVar1);
                                    if (-1 < iVar2) {
                                      piVar5 = piVar1 + 0x26;
                                      FUN_6605cf30(piVar5,piVar1[0x27],piVar1[0x21]);
                                      FUN_6605cf30(piVar5,piVar1[0x27],piVar1[0x22]);
                                      FUN_6605cf30(piVar5,piVar1[0x27],piVar1[0x23]);
                                      FUN_6605cf30(piVar5,piVar1[0x27],piVar1[0x24]);
                                      FUN_6605cf30(piVar5,piVar1[0x27],piVar1[0x25]);
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
      }
    }
  }
  if (-1 < iVar2) {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_6602e350(puVar4);
    }
    piVar1[99] = (int)piVar5;
    (**(code **)(*piVar5 + 4))(piVar5);
    iVar3 = (**(code **)(*(int *)piVar1[99] + 0x10))((int *)piVar1[99],s_TargetStreams_6606db78);
    piVar1[100] = iVar3;
    (**(code **)(*(int *)(piVar1[0x21] + 0x48) + 0x20))((int *)(piVar1[0x21] + 0x48),piVar1[99]);
    (**(code **)(*(int *)(piVar1[0x22] + 0x48) + 0x20))((int *)(piVar1[0x22] + 0x48),piVar1[99]);
    if (-1 < iVar2) {
      piVar5 = (int *)FUN_6602bad0();
      piVar1[0x65] = (int)piVar5;
      (**(code **)(*piVar5 + 4))(piVar5);
      piVar5 = (int *)piVar1[0x65];
      if (piVar5 == (int *)0x0) {
        iVar2 = -0x7ff8fff2;
      }
      else if (piVar1 == (int *)0x0) {
        (**(code **)(*piVar5 + 0x14))(piVar5,uRam0000018c,0);
      }
      else {
        (**(code **)(*piVar5 + 0x14))(piVar5,piVar1[99],piVar1 + 0x10);
      }
      if (-1 < iVar2) {
        FUN_6602d580(piVar1[0x65]);
        if (-1 < iVar2) {
          puVar4 = operator_new(0x10);
          if (puVar4 == (undefined4 *)0x0) {
            this = (void *)0x0;
          }
          else {
            this = (void *)FUN_6604f440(puVar4);
          }
          piVar1[0x6d] = (int)this;
          if (this == (void *)0x0) {
            iVar2 = -0x7ff8fff2;
          }
          else {
            FUN_6604f510(this,2,0x6606db38,1);
          }
          if (-1 < iVar2) {
            iVar2 = FUN_6601d7f0((int)piVar1);
            if (-1 < iVar2) {
              puVar4 = operator_new(0x3c);
              if (puVar4 == (undefined4 *)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                piVar5 = FUN_6605d9c0(puVar4);
              }
              *(int **)((int)piVar1 + 0x1d6) = piVar5;
              if (piVar5 == (int *)0x0) {
                iVar2 = -0x7ff8fff2;
              }
              else {
                (**(code **)(*piVar5 + 4))(piVar5);
                FUN_660216d0(piVar1);
              }
              if (-1 < iVar2) {
                FUN_6601dc30((int)piVar1);
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}


