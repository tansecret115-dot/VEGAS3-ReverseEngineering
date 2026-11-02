/* Module: rmbe3260.dll
   Function: FUN_66011c60
   Address: 66011c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66011c60(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char local_134 [256];
  int local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c [3];
  int *local_10;
  int *local_c;
  int local_8;
  
  piVar3 = param_1;
  iVar4 = (**(code **)(*param_1 + 0x58))(param_1);
  if (-1 < iVar4) {
    if (piVar3[0x29] == 0) {
      iVar4 = FUN_660130d0(piVar3 + 0x29);
    }
    if (-1 < iVar4) {
      iVar4 = (**(code **)(piVar3[0x12] + 0x28))(piVar3 + 0x12);
    }
  }
  FUN_6605b650(local_1c);
  if (-1 < iVar4) {
    iVar5 = (**(code **)(*(int *)piVar3[0x1f] + 0x14))
                      ((int *)piVar3[0x1f],s_currentaudiotime_6606cd24,0);
    piVar3[0x1e] = iVar5;
    if (iVar5 == 0) {
      iVar4 = -0x7fffbffb;
    }
    if ((-1 < iVar4) && (iVar5 = 0, 0 < piVar3[0x16])) {
      do {
        local_8 = *(int *)(piVar3[0x15] + iVar5 * 4);
        local_10 = (int *)0x0;
        if (-1 < iVar4) {
          iVar4 = (**(code **)**(undefined4 **)(local_8 + 4))
                            (*(undefined4 **)(local_8 + 4),&DAT_66065b08,&local_10);
        }
        local_34 = iVar5 + 1;
        puVar1 = (undefined4 *)(local_8 + 0x20);
        FUN_6605bfd0(puVar1,s__s__d_6606cd1c);
        iVar5 = (**(code **)(*(int *)piVar3[0x1f] + 0x10))((int *)piVar3[0x1f],*puVar1);
        if (iVar5 == 0) {
          iVar4 = -0x7fffbffb;
        }
        if (-1 < iVar4) {
          iVar4 = (**(code **)(*local_10 + 0x10))(local_10,&local_2c);
          param_1 = (int *)0x0;
          if (-1 < iVar4) {
            iVar4 = (**(code **)(*(int *)(piVar3[2] + 0x20) + 0xc))
                              ((int *)(piVar3[2] + 0x20),&DAT_66064f48,0,&DAT_66064f48,&param_1);
            if (-1 < iVar4) {
              FUN_6605bfd0(local_1c,s__s__s_6606cd0c);
              (**(code **)(*param_1 + 0x10))(param_1,&local_2c,8);
              iVar5 = (**(code **)(*(int *)piVar3[0x1f] + 0x3c))
                                ((int *)piVar3[0x1f],local_1c[0],param_1);
              if (iVar5 == 0) {
                iVar4 = -0x7fffbffb;
              }
            }
          }
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
            param_1 = (int *)0x0;
          }
          if (-1 < iVar4) {
            local_c = (int *)0x0;
            iVar4 = (**(code **)(*(int *)piVar3[0x29] + 0x14))
                              ((int *)piVar3[0x29],local_2c,local_28,&local_c);
            if (-1 < iVar4) {
              iVar4 = (**(code **)(*(int *)(piVar3[2] + 0x20) + 0xc))
                                ((int *)(piVar3[2] + 0x20),&DAT_66064f48,0,&DAT_66064f48,&param_1);
              if (-1 < iVar4) {
                (**(code **)(*local_c + 0x10))(local_c,local_134,0xff);
                FUN_6605bfd0(local_1c,s__s__s_6606cd0c);
                uVar6 = 0xffffffff;
                pcVar7 = local_134;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar2 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar2 != '\0');
                (**(code **)(*param_1 + 0x10))(param_1,local_134,~uVar6);
                (**(code **)(*(int *)piVar3[0x1f] + 0x28))((int *)piVar3[0x1f],local_1c[0],param_1);
              }
            }
            if (param_1 != (int *)0x0) {
              (**(code **)(*param_1 + 8))(param_1);
              param_1 = (int *)0x0;
            }
            local_20 = (int *)0x0;
            iVar4 = (**(code **)*local_c)(local_c,&DAT_66065908,&local_20);
            if (-1 < iVar4) {
              (**(code **)(*local_20 + 0x20))(local_20,&local_24);
              FUN_6605bfd0(local_1c,s__s__s_6606cd0c);
              iVar5 = (**(code **)(*(int *)piVar3[0x1f] + 0x14))
                                ((int *)piVar3[0x1f],local_1c[0],local_24);
              if (iVar5 == 0) {
                iVar4 = -0x7fffbffb;
              }
            }
            if (local_c != (int *)0x0) {
              (**(code **)(*local_c + 8))(local_c);
              local_c = (int *)0x0;
            }
            if (local_20 != (int *)0x0) {
              (**(code **)(*local_20 + 8))(local_20);
              local_20 = (int *)0x0;
            }
            if (-1 < iVar4) {
              iVar4 = (**(code **)(*local_10 + 0x18))(local_10,local_30);
              local_c = (int *)ftol();
              if (-1 < iVar4) {
                FUN_6605bfd0(local_1c,s__s__s_6606cd0c);
                iVar5 = (**(code **)(*(int *)piVar3[0x1f] + 0x14))
                                  ((int *)piVar3[0x1f],local_1c[0],local_c);
                if (iVar5 == 0) {
                  iVar4 = -0x7fffbffb;
                }
                if (-1 < iVar4) {
                  FUN_6605bfd0(local_1c,s__s__s_6606cd0c);
                  iVar5 = (**(code **)(*(int *)piVar3[0x1f] + 0x14))
                                    ((int *)piVar3[0x1f],local_1c[0],*(undefined4 *)(local_8 + 0x2c)
                                    );
                  *(int *)(local_8 + 0x30) = iVar5;
                  if (iVar5 == 0) {
                    iVar4 = -0x7fffbffb;
                  }
                  if (-1 < iVar4) {
                    FUN_6605bfd0(local_1c,s__s__s_6606cd0c);
                    iVar5 = (**(code **)(*(int *)piVar3[0x1f] + 0x14))
                                      ((int *)piVar3[0x1f],local_1c[0],
                                       *(undefined4 *)(local_8 + 0x34));
                    *(int *)(local_8 + 0x38) = iVar5;
                    if (iVar5 == 0) {
                      iVar4 = -0x7fffbffb;
                    }
                    if (-1 < iVar4) {
                      local_8 = 0;
                      iVar4 = (**(code **)(*local_10 + 0x28))(local_10,&local_8);
                      FUN_6605bfd0(local_1c,s__s__s_6606cd0c);
                      iVar5 = (**(code **)(*(int *)piVar3[0x1f] + 0x14))
                                        ((int *)piVar3[0x1f],local_1c[0],local_8);
                      if (iVar5 == 0) {
                        iVar4 = -0x7fffbffb;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 8))(local_10);
          local_10 = (int *)0x0;
        }
        iVar5 = local_34;
      } while (local_34 < piVar3[0x16]);
    }
  }
  FUN_6605b770(local_1c);
  return iVar4;
}


