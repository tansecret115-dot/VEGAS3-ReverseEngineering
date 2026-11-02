/* Module: erv23260.dll
   Function: FUN_638043b0
   Address: 638043b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_638043b0(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_204 [21];
  int local_1b0 [5];
  undefined1 local_19c [28];
  undefined4 local_180;
  int local_17c [5];
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_15c;
  undefined4 local_150;
  int local_14c;
  int local_148;
  int local_e4 [21];
  undefined1 local_90 [20];
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_58;
  undefined4 local_54;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  FUN_63807430(local_17c);
  FUN_63808900(local_e4);
  local_204[2] = 0;
  local_204[1] = 0;
  if ((((param_1 == (int *)0x0) || (param_2 < 0xac)) || (*param_1 != 0x98)) ||
     (((param_1[1] != 0xbc || (param_1[2] != 0x34)) || (param_1[3] != 0x54)))) {
LAB_638049be:
    iVar3 = 1;
  }
  else {
    uVar1 = param_1[0x2a];
    piVar5 = param_1 + 4;
    piVar2 = local_17c;
    for (iVar3 = 0x26; iVar8 = local_14, iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar2 = piVar2 + 1;
    }
    if (uVar1 == 0) {
      if ((param_2 != 0x19c) || (*(int *)(local_14 + 0x798) == 0)) goto LAB_638049be;
      piVar5 = param_1 + 0x2b;
      piVar2 = local_1b0;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar2 = piVar2 + 1;
      }
      piVar5 = param_1 + 0x38;
      piVar2 = local_e4;
      for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar2 = piVar2 + 1;
      }
    }
    else {
      if ((1 < uVar1) || (param_2 != uVar1 * 0xbc + 0xac)) goto LAB_638049be;
      if (0 < (int)uVar1) {
        piVar5 = local_204;
        piVar2 = param_1 + 0x2b;
        piVar4 = local_e4;
        param_2 = uVar1;
        do {
          piVar6 = piVar2;
          piVar7 = piVar4;
          for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          piVar6 = piVar4;
          piVar7 = piVar5;
          for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          piVar5 = piVar5 + 0x15;
          param_2 = param_2 - 1;
          piVar2 = piVar2 + 0x2f;
          piVar4 = piVar4 + 0x2f;
          iVar8 = local_14;
        } while (param_2 != 0);
      }
    }
    if (local_14c != 0) {
      *(undefined4 *)(iVar8 + 2000) = 1;
    }
    if ((*(int *)(iVar8 + 2000) != 0) && (local_148 != 0)) {
      *(undefined4 *)(iVar8 + 0x7d4) = 1;
    }
    if ((local_17c[0] == 0) ||
       (iVar3 = (**(code **)(*(int *)(iVar8 + -0x68) + 0x50))(&local_28), iVar8 = local_14,
       iVar3 == 0)) {
      piVar5 = (int *)(iVar8 + -0x68);
      local_c = (uint)(local_17c[1] != 0);
      local_10 = 0xe;
      local_8 = 0;
      iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
      iVar8 = 0;
      if (iVar3 == 0) {
        local_c = local_15c;
        local_10 = 0x10;
        local_8 = 0;
        iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
        if (iVar3 == 0) {
          if (local_168 != 0) {
            local_1c = local_164;
            local_24 = 8;
            local_20 = 1;
            local_18 = (int *)local_160;
            iVar3 = (**(code **)(*piVar5 + 0x40))(&local_24);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          iVar3 = (**(code **)(*(int *)(local_14 + 4) + 8))(local_150);
          if (iVar3 == 0) {
            if (uVar1 == 0) {
              iVar3 = (**(code **)(*piVar5 + 0x28))(local_1b0);
              if (((iVar3 == 0) && (iVar3 = (**(code **)(*piVar5 + 0x2c))(local_19c), iVar3 == 0))
                 && (iVar3 = (**(code **)(*piVar5 + 0x34))(local_180), iVar3 == 0)) {
                local_18 = (int *)local_90;
                local_24 = 0x21;
                local_20 = 3;
                local_1c = 0;
                iVar3 = (**(code **)(*piVar5 + 0x40))(&local_24);
                if (iVar3 == 0) {
                  local_c = (uint)(local_68 != 0);
                  local_10 = 0xc;
                  local_8 = 0;
                  iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                  if (iVar3 == 0) {
                    local_c = (uint)(local_7c != 0);
                    local_10 = 0xd;
                    local_8 = 0;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                    if (iVar3 == 0) {
                      local_c = (uint)(local_78 != 0);
                      local_10 = 2;
                      local_8 = 0;
                      iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                      if (iVar3 == 0) {
                        local_c = (uint)(local_74 != 0);
                        local_10 = 3;
                        local_8 = 0;
                        iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                        if (iVar3 == 0) {
                          local_c = (uint)(local_6c != 0);
                          local_10 = 0xb;
                          local_8 = 0;
                          iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                          if (iVar3 == 0) {
                            local_c = (uint)(local_70 != 0);
                            local_10 = 4;
                            local_8 = 0;
                            iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                            if (iVar3 == 0) {
                              local_c = local_60;
                              local_10 = 0x13;
                              local_8 = 0;
                              iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                              if ((iVar3 == 0) &&
                                 ((local_17c[0] == 0 ||
                                  (iVar3 = (**(code **)(*local_28 + 4))(0,local_64), iVar3 == 0))))
                              {
                                iVar3 = (*(code *)**(undefined4 **)(local_14 + 8))(0,local_58);
                                if (iVar3 == 0) {
                                  if (local_58 == 0) {
                                    return 0;
                                  }
                                  iVar3 = (**(code **)(*(int *)(local_14 + 8) + 8))(0,local_54);
                                  if (iVar3 == 0) {
                                    return 0;
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
            else {
              iVar3 = (*(code *)**(undefined4 **)(local_14 + -4))(uVar1,local_204);
              if (iVar3 == 0) {
                if (0 < (int)uVar1) {
                  piVar2 = &local_68;
                  do {
                    local_18 = piVar2 + -10;
                    local_24 = 0x21;
                    local_20 = 3;
                    local_1c = iVar8;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_24);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    local_c = (uint)(*piVar2 != 0);
                    local_10 = 0xc;
                    local_8 = iVar8;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    local_c = (uint)(piVar2[-5] != 0);
                    local_10 = 0xd;
                    local_8 = iVar8;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    local_c = (uint)(piVar2[-4] != 0);
                    local_10 = 2;
                    local_8 = iVar8;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    local_c = (uint)(piVar2[-3] != 0);
                    local_10 = 3;
                    local_8 = iVar8;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    local_c = (uint)(piVar2[-1] != 0);
                    local_10 = 0xb;
                    local_8 = iVar8;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    local_c = (uint)(piVar2[-2] != 0);
                    local_10 = 4;
                    local_8 = iVar8;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    local_c = piVar2[2];
                    local_10 = 0x13;
                    local_8 = iVar8;
                    iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    if ((local_17c[0] != 0) &&
                       (iVar3 = (**(code **)(*local_28 + 4))(iVar8,piVar2[1]), iVar3 != 0)) {
                      return iVar3;
                    }
                    piVar4 = (int *)(local_14 + 8);
                    iVar3 = (**(code **)*piVar4)(iVar8,piVar2[4]);
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    if ((piVar2[4] != 0) &&
                       (iVar3 = (**(code **)(*piVar4 + 8))(iVar8,piVar2[5]), iVar3 != 0)) {
                      return iVar3;
                    }
                    iVar8 = iVar8 + 1;
                    piVar2 = piVar2 + 0x2f;
                  } while (iVar8 < (int)uVar1);
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}


