/* Module: encn3260.dll
   Function: FUN_66489450
   Address: 66489450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66489450(void *this,int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  void *pvVar10;
  undefined2 *puVar11;
  uint uVar12;
  ushort uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  bool bVar18;
  char local_ac [32];
  int local_8c [5];
  int local_78 [3];
  int local_6c [3];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  uint local_4c;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  void *local_c;
  undefined4 *local_8;
  
  piVar8 = param_1;
  uVar13 = 0;
  local_38 = 0;
  if (*(int *)((int)this + 0x14e) != 0) {
    return 0x80004005;
  }
  pbVar14 = &DAT_664e2648;
  pbVar15 = (byte *)param_1[0xd];
  pbVar16 = pbVar15;
  do {
    bVar1 = *pbVar16;
    bVar18 = bVar1 < *pbVar14;
    if (bVar1 != *pbVar14) {
LAB_664894ad:
      iVar2 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      goto LAB_664894b2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar16[1];
    bVar18 = bVar1 < pbVar14[1];
    if (bVar1 != pbVar14[1]) goto LAB_664894ad;
    pbVar16 = pbVar16 + 2;
    pbVar14 = pbVar14 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_664894b2:
  local_c = this;
  if (iVar2 == 0) {
    FUN_664bd820((int *)&param_1);
    if (param_1 == (int *)0x0) {
      uVar3 = (**(code **)(**(int **)((int)local_c + 0x68) + 0x14))
                        (*(int **)((int)local_c + 0x68),0x80004005,0);
    }
    else {
      uVar3 = (**(code **)(**(int **)((int)local_c + 0x68) + 0x14))
                        (*(int **)((int)local_c + 0x68),0x800400ce,param_1);
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    return uVar3;
  }
  pbVar14 = &DAT_664e26fc;
  pbVar16 = pbVar15;
  do {
    bVar1 = *pbVar16;
    bVar18 = bVar1 < *pbVar14;
    if (bVar1 != *pbVar14) {
LAB_66489534:
      iVar2 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      goto LAB_66489539;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar16[1];
    bVar18 = bVar1 < pbVar14[1];
    if (bVar1 != pbVar14[1]) goto LAB_66489534;
    pbVar16 = pbVar16 + 2;
    pbVar14 = pbVar14 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_66489539:
  if (iVar2 == 0) {
    uVar3 = (**(code **)(**(int **)((int)this + 0x68) + 0x18))
                      (*(int **)((int)this + 0x68),0x400c3,0,0,0);
    return uVar3;
  }
  if (param_1[0x13] == 0x227) {
    *(undefined4 *)((int)this + 0x18e) = 0;
    uVar3 = (**(code **)(**(int **)((int)this + 0x68) + 0x18))(*(int **)((int)this + 0x68),0,0,0,0);
    return uVar3;
  }
  pbVar16 = &DAT_664e2538;
  do {
    bVar1 = *pbVar15;
    bVar18 = bVar1 < *pbVar16;
    if (bVar1 != *pbVar16) {
LAB_664895b4:
      iVar2 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      goto LAB_664895b9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar15[1];
    bVar18 = bVar1 < pbVar16[1];
    if (bVar1 != pbVar16[1]) goto LAB_664895b4;
    pbVar15 = pbVar15 + 2;
    pbVar16 = pbVar16 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_664895b9:
  if (iVar2 != 0) {
    uVar3 = (**(code **)(**(int **)((int)this + 0x68) + 0x18))
                      (*(int **)((int)this + 0x68),0x80040008,0,0,0);
    return uVar3;
  }
  FUN_664bd6d0(param_1,local_6c,&DAT_664e26f4);
  pvVar10 = local_c;
  if (*(int *)(local_6c[0] + -8) != 0) {
    FUN_664bb570((void *)((int)local_c + 0xe6),local_6c);
  }
  local_1c = (int *)0x0;
  FUN_6648cb20(pvVar10,(int)piVar8,&local_1c);
  if (local_1c != (int *)0x0) {
    local_10 = (int *)0x0;
    iVar2 = (**(code **)*local_1c)(local_1c,&DAT_664dd5a0,&local_10);
    if (iVar2 == 0) {
      (**(code **)(**(int **)((int)pvVar10 + 0x84) + 0x18))(*(int **)((int)pvVar10 + 0x84),local_10)
      ;
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
    }
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))(local_1c);
      local_1c = (int *)0x0;
    }
  }
  iVar2 = FUN_664bd670(piVar8,s_Content_base_664e26e4);
  if (iVar2 != 0) {
    pvVar4 = (void *)FUN_664be4b0(iVar2);
    piVar5 = FUN_664be390(pvVar4,local_78);
    FUN_664bb570((void *)((int)pvVar10 + 0xa8),piVar5);
    FUN_664bb3e0(local_78);
  }
  iVar2 = FUN_664bd670(piVar8,s_Content_type_664e26d4);
  iVar6 = FUN_664bd670(param_1,s_Content_length_664e26c4);
  if ((iVar2 == 0) || (iVar6 == 0)) {
    local_38 = (**(code **)(**(int **)((int)pvVar10 + 0x68) + 0x18))
                         (*(int **)((int)pvVar10 + 0x68),0x80004005,0,0,0);
  }
  else {
    pvVar4 = (void *)FUN_664be4b0(iVar2);
    if (pvVar4 != (void *)0x0) {
      puVar7 = FUN_664be390(pvVar4,local_78);
      piVar8 = FUN_66489e40(pvVar10,(byte *)*puVar7);
      local_50 = piVar8;
      FUN_664bb3e0(local_78);
      if (piVar8 != (int *)0x0) {
        local_8 = (undefined4 *)0x0;
        local_14 = 0;
        puVar7 = operator_new(0x28);
        if (puVar7 == (undefined4 *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)FUN_664bad50(puVar7);
        }
        local_48 = piVar8;
        (**(code **)(*piVar8 + 4))(piVar8);
        uVar12 = 0xffffffff;
        param_1 = (int *)param_1[4];
        piVar5 = param_1;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          iVar2 = *piVar5;
          piVar5 = (int *)((int)piVar5 + 1);
        } while ((char)iVar2 != '\0');
        (**(code **)(*piVar8 + 0x10))(piVar8,param_1,~uVar12);
        piVar5 = local_50;
        iVar2 = (**(code **)(*local_50 + 0x10))(local_50,piVar8,&local_14,&local_8);
        if (iVar2 == 0) {
          FUN_664ba900(local_8c);
          local_28 = (int *)0x0;
          (**(code **)(*(int *)*local_8 + 0x30))((int *)*local_8,s_Control_664e238c,&local_28);
          if (local_28 != (int *)0x0) {
            pcVar9 = (char *)(**(code **)(*local_28 + 0x1c))(local_28);
            FUN_664bb5e0((void *)((int)local_c + 0xb4),pcVar9);
            (**(code **)(*local_28 + 8))(local_28);
          }
          local_30 = 1;
          if (1 < (ushort)local_14) {
            do {
              uVar12 = local_30 & 0xffff;
              local_2c = 0;
              local_3c = 0;
              local_44 = 0xffffffff;
              local_4c = 0;
              local_5c = 0;
              local_58 = 0;
              local_54 = 0;
              local_34 = (int *)0x0;
              local_60 = 0;
              local_40 = 0;
              FUN_664baab0(local_8c,local_8[uVar12]);
              local_18 = (int *)0x0;
              (**(code **)(*(int *)local_8[uVar12] + 0x30))
                        ((int *)local_8[uVar12],s_ASMRuleBook_664e26b8,&local_18);
              if (local_18 != (int *)0x0) {
                pvVar10 = operator_new(10);
                if (pvVar10 == (void *)0x0) {
                  param_1 = (int *)0x0;
                }
                else {
                  pcVar9 = (char *)(**(code **)(*local_18 + 0x1c))(local_18);
                  param_1 = FUN_664d0e90(pvVar10,pcVar9);
                }
                local_20 = (int *)0x0;
                local_24 = (int *)0x0;
                uVar17 = 0;
                if ((short)param_1[1] != 0) {
                  do {
                    local_20 = (int *)0x0;
                    local_24 = (int *)0x0;
                    FUN_664d1130(param_1,uVar17,&local_20);
                    (**(code **)(*local_20 + 0x30))(local_20,s_marker_664e26b0,&local_24);
                    if (local_24 != (int *)0x0) {
                      pcVar9 = (char *)(**(code **)(*local_24 + 0x1c))(local_24);
                      iVar2 = atoi(pcVar9);
                      if (iVar2 == 1) {
                        local_60 = 1;
                        local_40 = uVar17;
                        (**(code **)(*local_24 + 8))(local_24);
                        (**(code **)(*local_20 + 8))(local_20);
                        break;
                      }
                      (**(code **)(*local_24 + 8))(local_24);
                    }
                    (**(code **)(*local_20 + 8))(local_20);
                    uVar17 = uVar17 + 1;
                  } while ((ushort)uVar17 < *(ushort *)(param_1 + 1));
                }
                piVar8 = param_1;
                if (param_1 != (int *)0x0) {
                  FUN_664d10f0(param_1);
                  operator_delete(piVar8);
                }
                if (local_18 != (int *)0x0) {
                  (**(code **)(*local_18 + 8))(local_18);
                  local_18 = (int *)0x0;
                }
              }
              puVar11 = operator_new(0x2c);
              if (puVar11 == (undefined2 *)0x0) {
                puVar11 = (undefined2 *)0x0;
              }
              else {
                FUN_664bb2c0((undefined4 *)(puVar11 + 3));
              }
              (**(code **)(*(int *)local_8[uVar12] + 0x10))
                        ((int *)local_8[uVar12],s_StreamNumber_664e2140,&local_2c);
              (**(code **)(*(int *)local_8[uVar12] + 0x10))
                        ((int *)local_8[uVar12],s_NeedReliablePackets_664e23a4,&local_3c);
              (**(code **)(*(int *)local_8[uVar12] + 0x10))
                        ((int *)local_8[uVar12],s_SamplesPerSecond_664e269c,&local_5c);
              (**(code **)(*(int *)local_8[uVar12] + 0x10))
                        ((int *)local_8[uVar12],s_BitsPerSample_664e268c,&local_4c);
              (**(code **)(*(int *)local_8[uVar12] + 0x30))
                        ((int *)local_8[uVar12],s_Control_664e238c,&local_34);
              (**(code **)(*(int *)local_8[uVar12] + 0x10))
                        ((int *)local_8[uVar12],s_RTPPayloadType_664e2394,&local_44);
              (**(code **)(*(int *)local_8[uVar12] + 0x10))
                        ((int *)local_8[uVar12],s_RTPTimestampConversionFactor_664e266c,&local_58);
              (**(code **)(*(int *)local_8[uVar12] + 0x10))
                        ((int *)local_8[uVar12],s_RMATimestampConversionFactor_664e264c,&local_54);
              if (local_34 == (int *)0x0) {
                sprintf(local_ac,s_streamid__u_664e2380,local_2c & 0xffff);
                FUN_664bb5e0(puVar11 + 3,local_ac);
              }
              else {
                pcVar9 = (char *)(**(code **)(*local_34 + 0x1c))(local_34);
                FUN_664bb5e0(puVar11 + 3,pcVar9);
                (**(code **)(*local_34 + 8))(local_34);
              }
              *puVar11 = (undefined2)local_2c;
              *(uint *)(puVar11 + 1) = (uint)(local_3c != 0);
              puVar11[10] = (undefined2)local_44;
              *(undefined4 *)(puVar11 + 0xe) = local_5c;
              *(uint *)(puVar11 + 0x10) = local_4c >> 3;
              *(undefined4 *)(puVar11 + 0x12) = local_58;
              *(undefined4 *)(puVar11 + 0x14) = local_54;
              *(undefined4 *)(puVar11 + 0xb) = local_60;
              puVar11[0xd] = (undefined2)local_40;
              puVar11[9] = 0;
              FUN_664baab0((void *)((int)local_c + 0xf6),puVar11);
              local_30 = local_30 + 1;
              piVar8 = local_48;
              piVar5 = local_50;
            } while ((ushort)local_30 < (ushort)local_14);
          }
          local_10 = (int *)0x0;
          iVar2 = (**(code **)**(undefined4 **)((int)local_c + 0x84))
                            (*(undefined4 **)((int)local_c + 0x84),&DAT_664dcf90,&local_10);
          if (iVar2 == 0) {
            local_38 = (**(code **)(**(int **)((int)local_c + 0x68) + 0x18))
                                 (*(int **)((int)local_c + 0x68),0,*local_8,local_8c,local_10);
          }
          if (local_10 != (int *)0x0) {
            (**(code **)(*local_10 + 8))(local_10);
            local_10 = (int *)0x0;
          }
          if ((ushort)local_14 != 0) {
            do {
              (**(code **)(*(int *)local_8[uVar13] + 8))((int *)local_8[uVar13]);
              uVar13 = uVar13 + 1;
            } while (uVar13 < (ushort)local_14);
          }
          operator_delete(local_8);
          FUN_664ba950(local_8c);
        }
        (**(code **)(*piVar8 + 8))(piVar8);
        (**(code **)(*piVar5 + 8))(piVar5);
      }
    }
  }
  FUN_664bb3e0(local_6c);
  return local_38;
}


