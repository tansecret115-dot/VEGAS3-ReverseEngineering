/* Module: mp3plug.dll
   Function: FUN_5f6dac70
   Address: 5f6dac70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6dac70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  int local_74 [4];
  int local_64 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  double local_3c;
  uint local_34;
  int local_30;
  int local_2c;
  double local_24;
  int local_1c;
  int local_18;
  
  local_54 = *(int *)(*param_1 + 0x18);
  iVar8 = param_1[1];
  iVar4 = 0;
  if (0 < iVar8) {
    iVar5 = 0;
    iVar7 = local_54 * 0x1200 + 0x50;
    do {
      FUN_5f6e8750(*(int **)((int)param_1 + iVar5 + local_54 * 8 + 0x24),
                   *(int *)(*param_1 + 0x3c + iVar4 * 4),*(int **)(*param_1 + 0x34 + iVar4 * 4));
      FUN_5f6d8cb0(0,(undefined4 *)(iVar7 + (int)param_1),0x240);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + 0x900;
      iVar8 = param_1[1];
    } while (iVar4 < iVar8);
  }
  iVar5 = 0;
  iVar4 = param_1[2];
  if (0 < iVar4) {
    iVar7 = param_1[3];
    local_44 = iVar8;
    do {
      local_50 = 0;
      if (0 < local_44) {
        local_48 = param_1[4];
        do {
          iVar4 = 0;
          iVar8 = -0x80000000;
          if (0 < iVar7) {
            do {
              if (0 < local_48) {
                iVar1 = local_50;
                do {
                  if (iVar8 < *(int *)(param_1[iVar5 * 2 + iVar4 * 2 + iVar1 + 9] + 0x69c)) {
                    iVar8 = *(int *)(param_1[iVar5 * 2 + iVar4 * 2 + iVar1 + 9] + 0x69c);
                  }
                  iVar1 = iVar1 + 1;
                } while (iVar1 < local_50 + local_48);
              }
              iVar4 = iVar4 + 1;
              local_4c = iVar7;
            } while (iVar4 < iVar7);
          }
          iVar4 = 0;
          if (0 < iVar7) {
            do {
              iVar2 = 0;
              iVar1 = local_50;
              if (0 < local_48) {
                do {
                  iVar2 = iVar2 + 1;
                  *(int *)(param_1[iVar5 * 2 + iVar4 * 2 + iVar1 + 9] + 0x69c) = iVar8;
                  local_48 = param_1[4];
                  iVar1 = iVar1 + 1;
                } while (iVar2 < local_48);
                iVar7 = param_1[3];
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar7);
            local_44 = param_1[1];
          }
          local_50 = local_48 + local_50;
        } while (local_50 < local_44);
        iVar4 = param_1[2];
      }
      iVar5 = iVar5 + iVar7;
    } while (iVar5 < iVar4);
  }
  iVar8 = param_1[2];
  param_1[0xda8] = 0;
  if (local_54 == iVar8 + -1) {
    iVar4 = 0;
    if (0 < iVar8) {
      iVar5 = param_1[1];
      do {
        iVar7 = 0;
        if (0 < iVar5) {
          iVar8 = 0;
          do {
            iVar7 = iVar7 + 1;
            *(undefined4 *)((int)param_1 + iVar8 + iVar4 * 8 + 0x14) =
                 *(undefined4 *)(param_2 + iVar8 + iVar4 * 8);
            iVar5 = param_1[1];
            iVar8 = iVar8 + 4;
          } while (iVar7 < iVar5);
          iVar8 = param_1[2];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar8);
    }
    local_1c = 0;
    if (0 < param_1[0xe]) {
      while (iVar8 = FUN_5f6db570(), iVar8 != 0) {
        iVar4 = 0;
        iVar8 = param_1[2];
        if (0 < iVar8) {
          iVar5 = param_1[1];
          do {
            if (0 < iVar5) {
              iVar8 = 0;
              iVar7 = 0;
              do {
                FUN_5f6e84e0(*(int *)((int)param_1 + iVar8 + iVar4 * 8 + 0x24));
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 4;
                iVar5 = param_1[1];
              } while (iVar7 < iVar5);
              iVar8 = param_1[2];
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar8);
        }
        if (local_1c == 0) {
          iVar4 = 0;
          if (0 < iVar8) {
            iVar5 = param_1[1];
            iVar7 = 0;
            do {
              local_30 = 0;
              if (0 < iVar5) {
                local_34 = iVar7 + 0x2450;
                iVar8 = 0;
                local_3c = (double)CONCAT44(local_3c._4_4_,iVar7);
                do {
                  puVar6 = (undefined4 *)(*(int *)((int)param_1 + iVar8 + iVar4 * 8 + 0x24) + 0x538)
                  ;
                  puVar9 = (undefined4 *)(local_34 + (int)param_1);
                  for (iVar5 = 0x125; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar9 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  local_34 = local_34 + 0x494;
                  local_30 = local_30 + 1;
                  iVar8 = iVar8 + 4;
                  iVar5 = param_1[1];
                } while (local_30 < iVar5);
                iVar8 = param_1[2];
                local_2c = iVar4;
              }
              iVar4 = iVar4 + 1;
              iVar7 = iVar7 + 0x928;
            } while (iVar4 < iVar8);
          }
        }
        else {
          iVar4 = 0;
          if (0 < iVar8) {
            iVar5 = param_1[3];
            iVar7 = param_1[1];
            do {
              local_4c = 0;
              if (0 < iVar7) {
                local_3c = (double)CONCAT44(local_3c._4_4_,iVar4);
                do {
                  iVar8 = 0;
                  iVar4 = 0;
                  if (0 < iVar5) {
                    iVar7 = param_1[4];
                    local_2c = 0;
                    do {
                      iVar1 = 0;
                      if (0 < iVar7) {
                        local_34 = local_3c._0_4_ * 0x928;
                        iVar5 = local_4c;
                        iVar2 = local_4c;
                        local_30 = iVar8;
                        do {
                          iVar1 = iVar1 + 1;
                          local_18 = iVar2 + 1;
                          iVar8 = param_1[local_3c._0_4_ * 2 + local_30 * 2 + iVar5 + 9];
                          local_64[iVar4] =
                               iVar2 * 0x494 + local_2c + 0x2790 + local_34 + (int)param_1;
                          local_74[iVar4] = iVar8 + 0x878;
                          iVar7 = param_1[4];
                          iVar4 = iVar4 + 1;
                          iVar5 = iVar5 + 1;
                          iVar2 = local_18;
                        } while (iVar1 < iVar7);
                        iVar5 = param_1[3];
                        iVar8 = local_30;
                      }
                      iVar8 = iVar8 + 1;
                      local_2c = local_2c + 0x928;
                    } while (iVar8 < iVar5);
                  }
                  fVar10 = (float10)FUN_5f6e9020(iVar4,local_74);
                  local_24 = (double)fVar10;
                  fVar10 = (float10)FUN_5f6e9020(iVar4,local_64);
                  if (fVar10 <= (float10)local_24) {
                    iVar8 = param_1[4];
                    iVar5 = param_1[3];
                  }
                  else {
                    iVar4 = 0;
                    iVar5 = param_1[3];
                    if (iVar5 < 1) {
                      iVar8 = param_1[4];
                    }
                    else {
                      local_2c = 0;
                      iVar8 = param_1[4];
                      do {
                        local_44 = 0;
                        if (0 < iVar8) {
                          local_34 = local_3c._0_4_ * 0x928;
                          local_48 = local_4c;
                          iVar5 = local_4c;
                          do {
                            puVar6 = (undefined4 *)
                                     (param_1[local_3c._0_4_ * 2 + iVar4 * 2 + iVar5 + 9] + 0x538);
                            puVar9 = (undefined4 *)
                                     (local_48 * 0x494 + local_2c + 0x2450 + local_34 + (int)param_1
                                     );
                            for (iVar8 = 0x125; iVar8 != 0; iVar8 = iVar8 + -1) {
                              *puVar9 = *puVar6;
                              puVar6 = puVar6 + 1;
                              puVar9 = puVar9 + 1;
                            }
                            local_48 = local_48 + 1;
                            local_44 = local_44 + 1;
                            iVar5 = iVar5 + 1;
                            iVar8 = param_1[4];
                          } while (local_44 < iVar8);
                          iVar5 = param_1[3];
                          local_30 = iVar4;
                        }
                        iVar4 = iVar4 + 1;
                        local_2c = local_2c + 0x928;
                      } while (iVar4 < iVar5);
                    }
                  }
                  local_4c = iVar8 + local_4c;
                  iVar7 = param_1[1];
                } while (local_4c < iVar7);
                iVar8 = param_1[2];
                iVar4 = local_3c._0_4_;
              }
              iVar4 = iVar4 + iVar5;
            } while (iVar4 < iVar8);
          }
        }
        iVar4 = 0;
        local_34 = local_34 & 0xffffff00;
        if (0 < iVar8) {
          local_48 = param_1[3];
          iVar5 = param_1[1];
          do {
            if (0 < iVar5) {
              local_4c = 0;
              local_54 = iVar4;
              do {
                iVar8 = local_54;
                if (param_1[0xd] == 1) {
                  local_3c = (double)_DAT_5f75cbd0;
                  iVar1 = 0;
                  iVar4 = local_54;
                  iVar7 = local_4c;
                  if (0 < local_48) {
                    iVar2 = param_1[4];
                    do {
                      if (0 < iVar2) {
                        local_44 = iVar2 + local_4c;
                        iVar3 = local_4c;
                        do {
                          if (local_3c <
                              (double)*(float *)(param_1[local_54 * 2 + iVar1 * 2 + iVar3 + 9] +
                                                0x9c8)) {
                            iVar4 = local_54 + iVar1;
                            iVar7 = iVar3;
                            local_3c = (double)*(float *)(param_1[local_54 * 2 +
                                                                  iVar1 * 2 + iVar3 + 9] + 0x9c8);
                          }
                          iVar3 = iVar3 + 1;
                          local_50 = iVar2;
                        } while (iVar3 < local_44);
                      }
                      iVar1 = iVar1 + 1;
                    } while (iVar1 < local_48);
                    local_30 = 1;
                    local_2c = iVar5;
                  }
                  if (*(int *)(param_1[iVar4 * 2 + iVar7 + 9] + 0x9bc) < 1) {
                    iVar4 = param_1[4];
                    local_54 = iVar8;
                  }
                  else {
                    iVar8 = FUN_5f6e85b0(param_1[iVar4 * 2 + iVar7 + 9],1);
                    if (iVar8 == 0) {
                      local_48 = param_1[3];
                      iVar4 = param_1[4];
                      iVar5 = param_1[1];
                    }
                    else {
                      local_48 = param_1[3];
                      iVar4 = param_1[4];
                      local_34 = CONCAT31(local_34._1_3_,1);
                      iVar5 = param_1[1];
                    }
                  }
                }
                else {
                  iVar7 = 0;
                  if (local_48 < 1) {
                    iVar4 = param_1[4];
                    local_54 = iVar8;
                  }
                  else {
                    iVar4 = param_1[4];
                    iVar1 = local_48;
                    do {
                      iVar5 = 0;
                      if (0 < iVar4) {
                        local_3c = (double)CONCAT44(local_3c._4_4_,iVar7);
                        iVar7 = local_4c;
                        local_54 = iVar8;
                        do {
                          if (0 < *(int *)(param_1[iVar8 * 2 + local_3c._0_4_ * 2 + iVar7 + 9] +
                                          0x9bc)) {
                            iVar4 = FUN_5f6e85b0(param_1[iVar8 * 2 + local_3c._0_4_ * 2 + iVar7 + 9]
                                                 ,param_1[0xd]);
                            if (iVar4 == 0) {
                              iVar4 = param_1[4];
                            }
                            else {
                              iVar4 = param_1[4];
                              local_34 = CONCAT31(local_34._1_3_,1);
                            }
                          }
                          iVar5 = iVar5 + 1;
                          iVar7 = iVar7 + 1;
                        } while (iVar5 < iVar4);
                        iVar1 = param_1[3];
                        iVar7 = local_3c._0_4_;
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < iVar1);
                    iVar5 = param_1[1];
                    local_54 = iVar8;
                    local_48 = iVar1;
                  }
                }
                local_4c = iVar4 + local_4c;
              } while (local_4c < iVar5);
              iVar8 = param_1[2];
              iVar4 = local_54;
            }
            iVar4 = iVar4 + local_48;
          } while (iVar4 < iVar8);
        }
        if (((char)local_34 == '\0') || (local_1c = local_1c + 1, param_1[0xe] <= local_1c))
        goto LAB_5f6db1b5;
      }
      if (local_1c == 0) {
        return 0;
      }
      iVar8 = param_1[2];
    }
LAB_5f6db1b5:
    local_30 = 0;
    if (0 < iVar8) {
      iVar5 = 0;
      local_1c = 0;
      iVar4 = param_1[1];
      do {
        local_34 = 0;
        if (0 < iVar4) {
          iVar8 = 0;
          local_24 = (double)CONCAT44(local_24._4_4_,iVar5);
          local_48 = 0;
          local_44 = 0;
          do {
            iVar4 = iVar8 + local_30 * 8;
            iVar7 = local_48 + local_24._0_4_;
            local_2c = local_44 + local_1c;
            iVar5 = local_44 + 0x50 + local_1c + (int)param_1;
            local_3c = (double)CONCAT44(local_3c._4_4_,iVar5);
            FUN_5f6e90a0(*(int *)(*(int *)((int)param_1 + iVar4 + 0x24) + 0x51c),
                         *(int *)((int)param_1 + iVar8 + local_30 * 8 + 0x24) + 0x1c,
                         *(int *)((int)param_1 + iVar7 + 0x25b4),
                         local_48 + 0x25b8 + local_24._0_4_ + (int)param_1,iVar5);
            if (param_1[0xf] != 0) {
              iVar5 = *(int *)((int)param_1 + iVar4 + 0x24);
              FUN_5f6ea1b0(local_3c._0_4_,*(int *)(iVar5 + 8),*(undefined4 *)(iVar5 + 4),
                           *(undefined4 *)(iVar5 + 0x51c),
                           *(int *)((int)param_1 + iVar8 + local_30 * 8 + 0x24) + 0x1c,1,
                           (int *)((int)param_1 + iVar7 + 0x2744));
            }
            FUN_5f6eb660(*(undefined4 *)(*(int *)((int)param_1 + iVar4 + 0x24) + 0x51c),
                         (int *)(*(int *)((int)param_1 + iVar8 + local_30 * 8 + 0x24) + 0x1c),
                         local_3c._0_4_);
            local_2c = local_2c + (int)param_1;
            iVar5 = -0x240;
            *(int *)((int)param_1 + iVar4 + 0x40) =
                 *(int *)((int)param_1 + iVar7 + 0x2678) + *(int *)((int)param_1 + iVar7 + 0x278c);
            do {
              if (*(int *)(*(int *)(*(int *)((int)param_1 + iVar4 + 0x24) + 0x14) + 0x900 +
                          iVar5 * 4) != 0) {
                *(int *)(local_2c + 0x50) = -*(int *)(local_2c + 0x50);
              }
              local_2c = local_2c + 4;
              iVar5 = iVar5 + 1;
            } while (iVar5 != 0);
            local_44 = local_44 + 0x900;
            local_48 = local_48 + 0x494;
            local_34 = local_34 + 1;
            iVar8 = iVar8 + 4;
            iVar4 = param_1[1];
          } while ((int)local_34 < iVar4);
          iVar8 = param_1[2];
          iVar5 = local_24._0_4_;
        }
        local_30 = local_30 + 1;
        local_1c = local_1c + 0x1200;
        iVar5 = iVar5 + 0x928;
      } while (local_30 < iVar8);
    }
    param_1[0xda8] = 1;
  }
  return 1;
}


