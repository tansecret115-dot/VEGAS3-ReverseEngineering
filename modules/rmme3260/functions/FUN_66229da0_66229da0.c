/* Module: rmme3260.dll
   Function: FUN_66229da0
   Address: 66229da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66229da0(void *param_1)

{
  byte bVar1;
  int *piVar2;
  void *pvVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar14;
  char *pcVar15;
  bool bVar16;
  int *piStack_60;
  int local_44 [3];
  int local_38 [3];
  undefined4 local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = (void *)0x0;
  if (*(int *)((int)param_1 + 0x17c) != 0) {
    return 0;
  }
  if (*(int *)((int)param_1 + 0x13e) != 0) {
    *(undefined4 *)((int)param_1 + 0x13e) = 0;
    piVar7 = (int *)(**(code **)(**(int **)((int)param_1 + 0x142) + 0x24))();
    local_14 = piVar7;
    if (*(int *)((int)param_1 + 0x10) < *(int *)((int)param_1 + 0x94)) {
      piVar2 = *(int **)(*(int *)((int)param_1 + 0x90) + *(int *)((int)param_1 + 0x10) * 4);
      if (piVar2 == (int *)0x0) {
        local_8 = -0x7fffbffb;
      }
      else {
        iVar8 = (**(code **)(*piVar2 + 0x10))();
        piVar2[3] = (int)piVar7 - iVar8;
        *(undefined4 *)((int)piVar2 + 0x16) = 0;
        uVar9 = (**(code **)(*piVar2 + 0xc))();
        local_18 = operator_new(uVar9);
        if (local_18 == (int *)0x0) {
          local_8 = -0x7ff8fff2;
        }
        else {
          local_c = 0;
          if (-1 < *(int *)((int)param_1 + 0x10)) {
            uVar10 = 0;
            do {
              piVar7 = *(int **)(*(int *)((int)param_1 + 0x90) + uVar10 * 4);
              if (piVar7 == (int *)0x0) goto LAB_6622a54f;
              iVar8 = (**(code **)(*piVar7 + 0x10))();
              if (iVar8 != 0) {
                local_8 = (**(code **)(**(int **)((int)param_1 + 0x142) + 0x20))();
                if (local_8 < 0) goto LAB_6622a535;
                (**(code **)(*piVar7 + 0x18))();
                piStack_60 = local_18;
                uVar10 = (**(code **)(**(int **)((int)param_1 + 0x142) + 0x30))();
                if (uVar10 != uVar9) goto LAB_6622a561;
              }
              local_c = local_c + 1;
              uVar10 = local_c & 0xffff;
            } while ((int)uVar10 <= *(int *)((int)param_1 + 0x10));
          }
          operator_delete(local_18);
          piVar7 = local_14;
          (**(code **)(**(int **)((int)param_1 + 0x142) + 0x20))();
          local_18 = (int *)CONCAT22(local_18._2_2_,*(undefined2 *)((int)param_1 + 0x3a));
          local_1c = 0;
          if (*(int *)((int)param_1 + 0xb4) < (int)(uint)*(ushort *)((int)param_1 + 0x36)) {
            local_8 = -0x7fffbffb;
          }
          else {
            local_c = 0;
            if (*(ushort *)((int)param_1 + 0x36) != 0) {
              do {
                pvVar3 = *(void **)(*(int *)((int)param_1 + 0xb0) + (local_c & 0xffff) * 4);
                if (pvVar3 != (void *)0x0) {
                  if ((ushort)local_18 < 2) {
                    piVar7 = (int *)0x0;
                  }
                  else {
                    FUN_66219f50(pvVar3,&local_1c);
                    piVar7 = (int *)((int)piVar7 + local_1c);
                  }
                  FUN_66219f40(pvVar3,piVar7);
                  FUN_66219f70(pvVar3,*(int **)((int)param_1 + 0x142));
                  local_18 = (int *)((int)local_18 + 0xffff);
                }
                local_c = local_c + 1;
              } while ((ushort)local_c < *(ushort *)((int)param_1 + 0x36));
            }
            if (*(int *)((int)param_1 + 0x94) < 1) {
              local_8 = -0x7fffbffb;
            }
            else if ((int *)**(int **)((int)param_1 + 0x90) == (int *)0x0) {
              local_8 = -0x7fffbffb;
            }
            else {
              uVar11 = (**(code **)(*(int *)**(int **)((int)param_1 + 0x90) + 0x10))();
              *(undefined4 *)((int)param_1 + 0x10c) = uVar11;
              *(undefined4 *)((int)param_1 + 0xfc) = *(undefined4 *)((int)param_1 + 0x14a);
              piVar7 = (int *)((int)param_1 + 0xda);
              *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)((int)param_1 + 0x14e);
              *(int **)((int)param_1 + 0x108) = local_14;
              *(undefined4 *)((int)param_1 + 0x100) = *(undefined4 *)((int)param_1 + 0x158);
              iVar8 = **(int **)((int)param_1 + 0x142);
              (**(code **)(*piVar7 + 0x10))();
              (**(code **)(iVar8 + 0x20))();
              uVar9 = (**(code **)(*piVar7 + 0xc))();
              local_24 = operator_new(uVar9);
              if (local_24 == (int *)0x0) {
                local_8 = -0x7ff8fff2;
              }
              else {
                (**(code **)(*piVar7 + 0x18))();
                piVar7 = local_24;
                piStack_60 = local_24;
                uVar10 = (**(code **)(**(int **)((int)param_1 + 0x142) + 0x30))();
                if (uVar10 == uVar9) {
                  operator_delete(piVar7);
                  local_c = 0;
                  if (*(short *)((int)param_1 + 0x38) != 0) {
                    do {
                      piVar7 = *(int **)(*(int *)((int)param_1 + 0x3c) + (local_c & 0xffff) * 4);
                      local_24 = piVar7;
                      if (piVar7 == (int *)0x0) goto LAB_6622a54f;
                      pcVar15 = s_application_x_pn_multirate_image_6626f818;
                      puVar12 = FUN_66218240(piVar7,local_44);
                      pbVar13 = (byte *)*puVar12;
                      do {
                        bVar1 = *pbVar13;
                        bVar16 = bVar1 < (byte)*pcVar15;
                        if (bVar1 != *pcVar15) {
LAB_6622a0ae:
                          iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                          goto LAB_6622a0b3;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar13[1];
                        bVar16 = bVar1 < (byte)pcVar15[1];
                        if (bVar1 != pcVar15[1]) goto LAB_6622a0ae;
                        pbVar13 = pbVar13 + 2;
                        pcVar15 = pcVar15 + 2;
                      } while (bVar1 != 0);
                      iVar8 = 0;
LAB_6622a0b3:
                      if (iVar8 == 0) {
LAB_6622a109:
                        bVar16 = true;
                      }
                      else {
                        pcVar15 = s_application_x_pn_imagemap_6626f0c4;
                        puVar12 = FUN_66218240(piVar7,local_38);
                        pbVar13 = (byte *)*puVar12;
                        do {
                          bVar1 = *pbVar13;
                          bVar16 = bVar1 < (byte)*pcVar15;
                          if (bVar1 != *pcVar15) {
LAB_6622a0f1:
                            iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                            goto LAB_6622a0f6;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar13[1];
                          bVar16 = bVar1 < (byte)pcVar15[1];
                          if (bVar1 != pcVar15[1]) goto LAB_6622a0f1;
                          pbVar13 = pbVar13 + 2;
                          pcVar15 = pcVar15 + 2;
                        } while (bVar1 != 0);
                        iVar8 = 0;
LAB_6622a0f6:
                        FUN_66250210(local_38);
                        bVar16 = false;
                        if (iVar8 == 0) goto LAB_6622a109;
                      }
                      FUN_66250210(local_44);
                      if (bVar16) {
                        FUN_66218020(local_24,*(undefined4 *)((int)param_1 + 0x158));
                      }
                      local_c = local_c + 1;
                    } while ((ushort)local_c < *(ushort *)((int)param_1 + 0x38));
                  }
                  if (*(int *)((int)param_1 + 0x1a) < (int)(uint)*(ushort *)((int)param_1 + 0x14)) {
                    local_8 = -0x7fffbffb;
                  }
                  else {
                    local_c = 0;
                    if (*(ushort *)((int)param_1 + 0x14) != 0) {
                      do {
                        local_18 = (int *)0x0;
                        local_10 = (void *)0x0;
                        piVar7 = *(int **)(*(int *)((int)param_1 + 0x16) + (local_c & 0xffff) * 4);
                        if (piVar7 == (int *)0x0) goto LAB_6622a54f;
                        iVar8 = **(int **)((int)param_1 + 0x142);
                        (**(code **)(*piVar7 + 0x10))();
                        (**(code **)(iVar8 + 0x20))();
                        sVar4 = FUN_66219120((int)piVar7);
                        local_20 = (int *)CONCAT22(extraout_var,sVar4);
                        local_14 = (int *)0x0;
                        local_1c = 0;
                        if (sVar4 != 0) {
                          do {
                            uVar9 = local_1c & 0xffff;
                            piStack_60 = (int *)0x6622a1cb;
                            FUN_66219890(piVar7,uVar9,(undefined2 *)&local_18,(undefined4 *)0x0);
                            if ((*(int *)((int)param_1 + 0xa4) <= (int)((uint)local_18 & 0xffff)) ||
                               (piVar2 = *(int **)(*(int *)((int)param_1 + 0xa0) +
                                                  ((uint)local_18 & 0xffff) * 4),
                               piVar2 == (int *)0x0)) goto LAB_6622a54f;
                            uVar11 = (**(code **)(*piVar2 + 0x10))();
                            piStack_60 = (int *)0x6622a206;
                            FUN_66219860(piVar7,uVar9,(short)local_18,uVar11);
                            pvVar3 = *(void **)(*(int *)((int)param_1 + 0x26) +
                                               ((uint)local_18 & 0xffff) * 4);
                            if (pvVar3 == (void *)0x0) goto LAB_6622a54f;
                            FUN_66218030(pvVar3,&local_24);
                            if (local_14 < local_24) {
                              local_14 = local_24;
                            }
                            local_1c = local_1c + 1;
                          } while ((ushort)local_1c < (ushort)local_20);
                        }
                        FUN_66218020(piVar7,local_14);
                        puVar12 = FUN_66218240(piVar7,local_44);
                        pbVar13 = (byte *)*puVar12;
                        pcVar15 = s_logical_fileinfo_6626f524;
                        do {
                          bVar1 = *pbVar13;
                          bVar16 = bVar1 < (byte)*pcVar15;
                          if (bVar1 != *pcVar15) {
LAB_6622a285:
                            iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                            goto LAB_6622a28a;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar13[1];
                          bVar16 = bVar1 < (byte)pcVar15[1];
                          if (bVar1 != pcVar15[1]) goto LAB_6622a285;
                          pbVar13 = pbVar13 + 2;
                          pcVar15 = pcVar15 + 2;
                        } while (bVar1 != 0);
                        iVar8 = 0;
LAB_6622a28a:
                        FUN_66250210(local_44);
                        if (iVar8 != 0) {
                          FUN_66250280(&piStack_60,s_EndTime_6626f9d4);
                          FUN_66219310(piVar7);
                        }
                        uVar9 = (**(code **)(*piVar7 + 0xc))();
                        local_10 = operator_new(uVar9);
                        if (local_10 == (void *)0x0) goto LAB_6622a558;
                        (**(code **)(*piVar7 + 0x18))();
                        if (*(int *)((int)param_1 + 0x178) == 0) {
                          uVar10 = (**(code **)(**(int **)((int)param_1 + 0x142) + 0x30))();
                          if (uVar10 != uVar9) goto LAB_6622a561;
                        }
                        else {
                          local_8 = FUN_66225de0(param_1,(int)local_10,uVar9);
                          if (local_8 != 0) goto LAB_6622a535;
                        }
                        operator_delete(local_10);
                        local_c = local_c + 1;
                        local_10 = (void *)0x0;
                      } while ((ushort)local_c < *(ushort *)((int)param_1 + 0x14));
                    }
                    if (*(int *)((int)param_1 + 0x40) < (int)(uint)*(ushort *)((int)param_1 + 0x38))
                    {
                      local_8 = -0x7fffbffb;
                    }
                    else {
                      local_c = 0;
                      if (*(ushort *)((int)param_1 + 0x38) != 0) {
                        do {
                          local_10 = (void *)0x0;
                          local_20 = (int *)0x0;
                          piVar7 = *(int **)(*(int *)((int)param_1 + 0x3c) + (local_c & 0xffff) * 4)
                          ;
                          if (piVar7 == (int *)0x0) goto LAB_6622a54f;
                          iVar8 = FUN_66218030(piVar7,&local_28);
                          local_8 = iVar8;
                          if (-1 < iVar8) {
                            uVar5 = FUN_662182a0((int)piVar7);
                            local_2c = CONCAT22(extraout_var_00,uVar5);
                            local_20 = *(int **)(*(int *)((int)param_1 + 0xa0) + (uint)uVar5 * 4);
                            if (local_28 == 0) {
                              local_18 = (int *)0x0;
                              local_10 = (void *)0x0;
                              local_1c = 0;
                              if (*(short *)((int)param_1 + 0x38) != 0) {
                                do {
                                  if ((iVar8 < 0) || (local_10 != (void *)0x0)) break;
                                  pvVar3 = *(void **)(*(int *)((int)param_1 + 0x3c) +
                                                     (local_1c & 0xffff) * 4);
                                  uVar6 = FUN_662182a0((int)pvVar3);
                                  local_14 = (int *)CONCAT22(extraout_var_01,uVar6);
                                  local_8 = FUN_66218030(pvVar3,&local_24);
                                  if (-1 < local_8) {
                                    local_18 = *(int **)(*(int *)((int)param_1 + 0xa0) +
                                                        ((uint)local_14 & 0xffff) * 4);
                                    if (((short)local_14 != (short)local_2c) &&
                                       (local_24 != (int *)0x0)) {
                                      iVar8 = (**(code **)(*local_18 + 0x10))();
                                      iVar14 = (**(code **)(*local_20 + 0x10))();
                                      if (iVar8 == iVar14) {
                                        local_10 = (void *)0x1;
                                        FUN_66218020(piVar7,local_24);
                                      }
                                    }
                                  }
                                  local_1c = local_1c + 1;
                                  iVar8 = local_8;
                                } while ((ushort)local_1c < *(ushort *)((int)param_1 + 0x38));
                              }
                            }
                          }
                          iVar8 = **(int **)((int)param_1 + 0x142);
                          (**(code **)(*piVar7 + 0x10))();
                          (**(code **)(iVar8 + 0x20))();
                          uVar9 = (**(code **)(*piVar7 + 0xc))();
                          local_10 = operator_new(uVar9);
                          if (local_10 == (void *)0x0) goto LAB_6622a558;
                          (**(code **)(*piVar7 + 0x18))();
                          if (*(int *)((int)param_1 + 0x178) == 0) {
                            uVar10 = (**(code **)(**(int **)((int)param_1 + 0x142) + 0x30))();
                            if (uVar10 != uVar9) goto LAB_6622a561;
                          }
                          else {
                            local_8 = FUN_66225de0(param_1,(int)local_10,uVar9);
                            if (local_8 != 0) goto LAB_6622a535;
                          }
                          operator_delete(local_10);
                          local_c = local_c + 1;
                          local_10 = (void *)0x0;
                        } while ((ushort)local_c < *(ushort *)((int)param_1 + 0x38));
                      }
                      (**(code **)(**(int **)((int)param_1 + 0x142) + 0x18))();
                    }
                  }
                }
                else {
LAB_6622a561:
                  local_8 = (**(code **)(**(int **)((int)param_1 + 0x142) + 4))();
                }
              }
            }
          }
        }
      }
    }
    else {
      local_8 = -0x7fffbffb;
    }
  }
LAB_6622a535:
  if (local_10 != (void *)0x0) {
    operator_delete(local_10);
  }
  return local_8;
LAB_6622a54f:
  local_8 = -0x7fffbffb;
  goto LAB_6622a535;
LAB_6622a558:
  local_8 = -0x7ff8fff2;
  goto LAB_6622a535;
}


