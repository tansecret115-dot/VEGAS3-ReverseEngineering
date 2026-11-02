/* Module: sdpp3260.dll
   Function: FUN_10002bf0
   Address: 10002bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_10002bf0(void *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar7;
  char *pcVar8;
  long lVar9;
  void *this_00;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  char **ppcVar14;
  int iVar15;
  undefined *puVar16;
  bool bVar17;
  char local_450;
  undefined4 local_44f;
  undefined1 local_350 [8];
  int local_348 [3];
  int local_33c [4];
  int local_32c [4];
  int local_31c [4];
  int local_30c [4];
  int local_2fc [4];
  int local_2ec [4];
  int local_2dc [4];
  int local_2cc [4];
  int local_2bc [4];
  int local_2ac [4];
  int local_29c [4];
  int local_28c [4];
  int local_27c [4];
  int local_26c [4];
  int local_25c [4];
  int local_24c [4];
  int local_23c [4];
  int local_22c [4];
  int local_21c [4];
  int local_20c [4];
  int local_1fc [4];
  int local_1ec [4];
  int local_1dc [4];
  int local_1cc [4];
  int local_1bc [4];
  int local_1ac [4];
  int local_19c [4];
  int local_18c [4];
  int local_17c [4];
  int local_16c [4];
  int local_15c [4];
  int local_14c [4];
  int local_13c [4];
  int local_12c [2];
  int local_124 [3];
  int local_118 [3];
  undefined4 local_10c [5];
  int local_f8 [2];
  int local_f0 [3];
  int local_e4 [2];
  int local_dc [3];
  char *local_d0 [3];
  char *local_c4 [3];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4 [3];
  int local_98 [3];
  char *local_8c [3];
  char *local_80 [3];
  int local_74 [3];
  char *local_68 [3];
  char *local_5c [3];
  uint local_50;
  int local_4c;
  char **local_48;
  int local_44 [7];
  int local_28;
  int local_24;
  void *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  byte *local_14 [3];
  int local_8;
  
  uVar10 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_20 = this;
  FUN_10007020(local_10c,(undefined4 *)param_1,~uVar10 - 1);
  FUN_10007160(local_44,local_10c);
  FUN_10006770(local_14,&DAT_10009744);
  iVar15 = 0;
  local_8 = 0xffffffff;
  local_24 = 0;
  local_50 = 0;
  local_1c = (undefined4 *)0x0;
  FUN_100065e0(local_5c);
  FUN_100065e0(local_68);
  FUN_100065e0(local_80);
  local_28 = 0;
  param_1 = (char *)0x0;
  puVar3 = operator_new(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_10005b50(puVar3);
  }
  *(undefined4 **)((int)this + 8) = puVar3;
  piVar4 = FUN_100071a0(local_44,&local_a8,&DAT_10009404);
  FUN_10006890(local_14,piVar4);
  local_8 = piVar4[3];
  FUN_10006700(&local_a8);
  while (cVar1 = (char)local_8, (char)local_8 == '\n') {
    piVar4 = FUN_100071a0(local_44,&local_a8,&DAT_10009404);
    FUN_10006890(local_14,piVar4);
    local_8 = piVar4[3];
    FUN_10006700(&local_a8);
  }
  do {
    if (cVar1 == -1) {
      if (*(int *)(local_5c[0] + -8) != 0) {
        pvVar5 = operator_new(0x18);
        if (pvVar5 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_10006fd0(pvVar5,s_SDPData_100093e4,local_5c[0]);
        }
        FUN_10005bc0(local_1c,puVar3);
      }
      pvVar5 = operator_new(0x10);
      if (pvVar5 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_10006e60(pvVar5,s_StreamCount_100091f4,local_50);
      }
      FUN_10005bc0(*(void **)((int)this + 8),puVar3);
      if (*(int *)(local_68[0] + -8) != 0) {
        pvVar5 = operator_new(0x18);
        if (pvVar5 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_10006fd0(pvVar5,s_SDPData_100093e4,local_68[0]);
        }
        FUN_10005bc0(*(void **)((int)this + 8),puVar3);
      }
      FUN_10006700((int *)local_80);
      FUN_10006700((int *)local_68);
      FUN_10006700((int *)local_5c);
      FUN_10006700((int *)local_14);
      FUN_10007180(local_44);
      FUN_10007070(local_10c);
      return 0;
    }
    if (iVar15 < 0) {
LAB_100042da:
      FUN_10006700((int *)local_80);
      FUN_10006700((int *)local_68);
      FUN_10006700((int *)local_5c);
      FUN_10006700((int *)local_14);
      FUN_10007180(local_44);
      FUN_10007070(local_10c);
      return 0x80004005;
    }
    if (iVar15 < 3) {
      pbVar13 = &DAT_10009400;
      pbVar11 = local_14[0];
      do {
        bVar2 = *pbVar11;
        bVar17 = bVar2 < *pbVar13;
        if (bVar2 != *pbVar13) {
LAB_10002d52:
          iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_10002d57;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar11[1];
        bVar17 = bVar2 < pbVar13[1];
        if (bVar2 != pbVar13[1]) goto LAB_10002d52;
        pbVar11 = pbVar11 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar2 != 0);
      iVar15 = 0;
LAB_10002d57:
      if (iVar15 == 0) {
        piVar4 = FUN_100071a0(local_44,local_18c,&DAT_100093fc);
        FUN_10006890(local_14,piVar4);
        local_8 = piVar4[3];
        FUN_10006700(local_18c);
        pbVar13 = &DAT_100093f8;
        pbVar11 = local_14[0];
        do {
          bVar2 = *pbVar11;
          bVar17 = bVar2 < *pbVar13;
          if (bVar2 != *pbVar13) {
LAB_10002dcf:
            local_24 = (-(uint)(1 - bVar17 != (uint)(bVar17 != 0)) & 0x3e6) + 1;
            goto LAB_100041ca;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar11[1];
          bVar17 = bVar2 < pbVar13[1];
          if (bVar2 != pbVar13[1]) goto LAB_10002dcf;
          pbVar11 = pbVar11 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar2 != 0);
        local_24 = 1;
      }
      else {
        pbVar13 = &DAT_100093f4;
        pbVar11 = local_14[0];
        do {
          bVar2 = *pbVar11;
          bVar17 = bVar2 < *pbVar13;
          if (bVar2 != *pbVar13) {
LAB_10002e11:
            iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_10002e16;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar11[1];
          bVar17 = bVar2 < pbVar13[1];
          if (bVar2 != pbVar13[1]) goto LAB_10002e11;
          pbVar11 = pbVar11 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar2 != 0);
        iVar15 = 0;
LAB_10002e16:
        if (iVar15 == 0) {
          piVar4 = FUN_100071a0(local_44,local_29c,&DAT_100093fc);
          FUN_10006890(local_14,piVar4);
          local_8 = piVar4[3];
          FUN_10006700(local_29c);
          local_24 = 2;
        }
        else {
          pbVar13 = &DAT_100093f0;
          pbVar11 = local_14[0];
          do {
            bVar2 = *pbVar11;
            bVar17 = bVar2 < *pbVar13;
            if (bVar2 != *pbVar13) {
LAB_10002e81:
              iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_10002e86;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar11[1];
            bVar17 = bVar2 < pbVar13[1];
            if (bVar2 != pbVar13[1]) goto LAB_10002e81;
            pbVar11 = pbVar11 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar2 != 0);
          iVar15 = 0;
LAB_10002e86:
          if (iVar15 != 0) {
            local_24 = 3;
            piVar4 = FUN_100071a0(local_44,local_2dc,&DAT_100093fc);
            FUN_10006890(local_14,piVar4);
            local_8 = piVar4[3];
            FUN_10006700(local_2dc);
            goto LAB_10002ef5;
          }
          piVar4 = FUN_100071a0(local_44,local_2bc,&DAT_100093fc);
          FUN_10006890(local_14,piVar4);
          local_8 = piVar4[3];
          FUN_10006700(local_2bc);
          local_24 = 3;
        }
      }
    }
    else {
      if (iVar15 != 3) goto LAB_100042da;
LAB_10002ef5:
      uVar10 = local_50;
      pbVar13 = &DAT_100093ec;
      pbVar11 = local_14[0];
      do {
        bVar2 = *pbVar11;
        bVar17 = bVar2 < *pbVar13;
        if (bVar2 != *pbVar13) {
LAB_10002f27:
          iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_10002f2c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar11[1];
        bVar17 = bVar2 < pbVar13[1];
        if (bVar2 != pbVar13[1]) goto LAB_10002f27;
        pbVar11 = pbVar11 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar2 != 0);
      iVar15 = 0;
LAB_10002f2c:
      if (iVar15 == 0) {
        local_50 = local_50 + 1;
        piVar4 = FUN_100071a0(local_44,local_2fc,&DAT_100091d8);
        FUN_10006890(local_14,piVar4);
        local_8 = piVar4[3];
        FUN_10006700(local_2fc);
        FUN_10006890(local_80,(int *)local_14);
        piVar4 = FUN_100071a0(local_44,local_32c,&DAT_100091d8);
        FUN_10006890(local_14,piVar4);
        local_8 = piVar4[3];
        FUN_10006700(local_32c);
        local_4c = strtol((char *)local_14[0],(char **)0x0,10);
        piVar4 = FUN_100071a0(local_44,local_31c,&DAT_100091d8);
        FUN_10006890(local_14,piVar4);
        local_8 = piVar4[3];
        FUN_10006700(local_31c);
        piVar4 = FUN_100071a0(local_44,local_16c,&DAT_100093fc);
        FUN_10006890(local_14,piVar4);
        local_8 = piVar4[3];
        FUN_10006700(local_16c);
        pbVar13 = (byte *)strtok((char *)local_14[0],&DAT_100091d8);
        pbVar11 = local_14[0];
        if (pbVar13 != (byte *)0x0) {
          pbVar11 = pbVar13;
        }
        param_1 = (char *)strtol((char *)pbVar11,(char **)0x0,10);
        if (*(int *)(local_5c[0] + -8) != 0) {
          pvVar5 = operator_new(0x18);
          if (pvVar5 == (void *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_10006fd0(pvVar5,s_SDPData_100093e4,local_5c[0]);
          }
          FUN_10005bc0(local_1c,puVar3);
          thunk_FUN_100065a0((int *)local_5c);
        }
        puVar3 = operator_new(8);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_10005b50(puVar3);
        }
        local_1c = puVar3;
        FUN_10002770(*(void **)((int)local_20 + 4),puVar3);
        pvVar5 = operator_new(0x10);
        if (pvVar5 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_10006e60(pvVar5,s_StreamNumber_100093d4,uVar10 & 0xffff);
        }
        FUN_10005bc0(puVar3,puVar6);
        pvVar5 = operator_new(0x10);
        if (pvVar5 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_10006e60(pvVar5,s_RTPPayloadType_100093c4,param_1);
        }
        FUN_10005bc0(puVar3,puVar6);
        iVar15 = local_28;
        if (local_28 != 0) {
          pvVar5 = operator_new(0x10);
          if (pvVar5 == (void *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = FUN_10006e60(pvVar5,s_Duration_100093b8,iVar15);
          }
          FUN_10005bc0(puVar3,puVar6);
        }
        iVar15 = local_4c;
        if (local_4c != 0) {
          pvVar5 = operator_new(0x10);
          if (pvVar5 == (void *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = FUN_10006e60(pvVar5,&DAT_100093b0,iVar15);
          }
          FUN_10005bc0(puVar3,puVar6);
        }
        if (param_1 < (char *)0x23) {
          bVar17 = FUN_10002a60((int)param_1);
          if ((CONCAT31(extraout_var,bVar17) == 0) ||
             (iVar15 = (int)param_1 * 0x16, *(int *)(&DAT_1000875c + iVar15) != 0)) {
            pvVar5 = operator_new(0x18);
            if (pvVar5 == (void *)0x0) goto LAB_10003245;
            puVar6 = FUN_10006fd0(pvVar5,s_ASMRuleBook_1000935c,
                                  s_marker_0_timestampdelivery_1_mar_10009320);
          }
          else {
            pvVar5 = operator_new(0x10);
            if (pvVar5 == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = FUN_10006e60(pvVar5,s_AvgBitRate_100093a4,
                                    *(undefined4 *)(&DAT_10008760 + iVar15));
            }
            FUN_10005bc0(puVar3,puVar6);
            local_450 = '\0';
            puVar6 = &local_44f;
            for (iVar12 = 0x3f; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            *(undefined2 *)puVar6 = 0;
            *(undefined1 *)((int)puVar6 + 2) = 0;
            uVar10 = *(uint *)(&DAT_10008760 + iVar15) >> 1;
            sprintf(&local_450,s_marker_0_AverageBandwidth__d_mar_10009368,
                    *(uint *)(&DAT_10008760 + iVar15) - uVar10,uVar10);
            pvVar5 = operator_new(0x18);
            if (pvVar5 == (void *)0x0) {
LAB_10003245:
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = FUN_10006fd0(pvVar5,s_ASMRuleBook_1000935c,&local_450);
            }
          }
          FUN_10005bc0(puVar3,puVar6);
          bVar17 = FUN_10002a60((int)param_1);
          if (CONCAT31(extraout_var_00,bVar17) != 0) {
            pvVar5 = operator_new(0x18);
            if (pvVar5 == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = FUN_10006fd0(pvVar5,s_MimeType_10009314,
                                    (&PTR_s_audio_PCMU_100086c0)[(int)param_1]);
            }
            FUN_10005bc0(puVar3,puVar6);
            pvVar5 = operator_new(0x10);
            if (pvVar5 == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = FUN_10006e60(pvVar5,s_RTPTimestampConversionFactor_100092f4,
                                    *(undefined4 *)(&DAT_10008754 + (int)param_1 * 0x16));
            }
            FUN_10005bc0(puVar3,puVar6);
            pvVar5 = operator_new(0x10);
            if (pvVar5 == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = FUN_10006e60(pvVar5,s_RMATimestampConversionFactor_100092d4,
                                    *(undefined4 *)(&DAT_10008758 + (int)param_1 * 0x16));
            }
            FUN_10005bc0(puVar3,puVar6);
            pvVar5 = operator_new(0x10);
            if (pvVar5 == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              uStack_ac = 0;
              uStack_b4 = 0;
              local_b0 = *(undefined4 *)(&DAT_10008754 + (int)param_1 * 0x16);
              local_b8 = *(undefined4 *)(&DAT_10008758 + (int)param_1 * 0x16);
              uVar7 = ftol();
              puVar6 = FUN_10006e60(pvVar5,s_SamplesPerSecond_100091dc,uVar7);
            }
            FUN_10005bc0(puVar3,puVar6);
            pvVar5 = operator_new(0x10);
            if (pvVar5 == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = FUN_10006e60(pvVar5,s_Channels_100091cc,
                                    (uint)*(ushort *)(&DAT_10008764 + (int)param_1 * 0x16));
            }
            FUN_10005bc0(puVar3,puVar6);
          }
          puVar16 = (undefined *)0x0;
          uVar7 = 0;
          if (param_1 == (char *)0x3) {
            puVar16 = &DAT_10008660;
            uVar7 = 0x16;
          }
          if (puVar16 != (undefined *)0x0) {
            puVar3 = operator_new(0x28);
            if (puVar3 == (undefined4 *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)FUN_10005ca0(puVar3);
            }
            (**(code **)(*piVar4 + 4))(piVar4);
            (**(code **)(*piVar4 + 0x10))(piVar4,puVar16,uVar7);
            pvVar5 = operator_new(0x10);
            if (pvVar5 == (void *)0x0) {
              FUN_10005bc0(local_1c,0);
              (**(code **)(*piVar4 + 8))(piVar4);
            }
            else {
              puVar3 = FUN_10006ed0(pvVar5,s_OpaqueData_100092c8,piVar4);
              FUN_10005bc0(local_1c,puVar3);
              (**(code **)(*piVar4 + 8))(piVar4);
            }
          }
        }
      }
      else {
        pbVar13 = &DAT_100092c4;
        pbVar11 = local_14[0];
        do {
          bVar2 = *pbVar11;
          bVar17 = bVar2 < *pbVar13;
          if (bVar2 != *pbVar13) {
LAB_1000345b:
            iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_10003460;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar11[1];
          bVar17 = bVar2 < pbVar13[1];
          if (bVar2 != pbVar13[1]) goto LAB_1000345b;
          pbVar11 = pbVar11 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar2 != 0);
        iVar15 = 0;
LAB_10003460:
        if (iVar15 == 0) {
          local_18 = (undefined4 *)0x0;
          local_48 = (char **)0x0;
          piVar4 = FUN_100071a0(local_44,local_26c,&DAT_100092c0);
          FUN_10006890(local_14,piVar4);
          local_8 = piVar4[3];
          FUN_10006700(local_26c);
          puVar3 = local_1c;
          if (local_1c == (undefined4 *)0x0) {
            local_48 = local_68;
            local_18 = *(undefined4 **)((int)local_20 + 8);
          }
          else {
            iVar15 = _stricmp((char *)local_14[0],s_rtpmap_100092b8);
            if (iVar15 == 0) {
              piVar4 = FUN_100071a0(local_44,local_13c,&DAT_100091d8);
              FUN_10006890(local_14,piVar4);
              local_8 = piVar4[3];
              FUN_10006700(local_13c);
              pcVar8 = (char *)strtol((char *)local_14[0],(char **)0x0,10);
              piVar4 = FUN_100071a0(local_44,local_2ec,&DAT_100093fc);
              FUN_10006890(local_14,piVar4);
              local_8 = piVar4[3];
              FUN_10006700(local_2ec);
              if (pcVar8 == param_1) {
                FUN_10002a80((char *)local_14[0],(int *)local_80,puVar3);
                iVar15 = FUN_10005be0(puVar3,s_MimeType_10009314);
                if (iVar15 == 0) {
                  pvVar5 = operator_new(0x18);
                  if (pvVar5 == (void *)0x0) goto LAB_100036d0;
                  puVar6 = FUN_10006fd0(pvVar5,s_MimeType_10009314,local_80[0]);
                  FUN_10005bc0(puVar3,puVar6);
                }
              }
            }
            else {
              iVar15 = _stricmp((char *)local_14[0],&DAT_100092b0);
              if (iVar15 == 0) {
                piVar4 = FUN_100071a0(local_44,local_1ac,&DAT_100091d8);
                FUN_10006890(local_14,piVar4);
                local_8 = piVar4[3];
                FUN_10006700(local_1ac);
                pcVar8 = (char *)strtol((char *)local_14[0],(char **)0x0,10);
                piVar4 = FUN_100071a0(local_44,local_28c,&DAT_100093fc);
                FUN_10006890(local_14,piVar4);
                local_8 = piVar4[3];
                FUN_10006700(local_28c);
                if (pcVar8 == param_1) {
                  pvVar5 = operator_new(0x18);
                  if (pvVar5 == (void *)0x0) {
LAB_100036d0:
                    FUN_10005bc0(puVar3,0);
                  }
                  else {
                    puVar6 = FUN_10006fd0(pvVar5,s_PayloadParameters_1000929c,(char *)local_14[0]);
                    FUN_10005bc0(puVar3,puVar6);
                  }
                }
              }
              else {
                iVar15 = _stricmp((char *)local_14[0],s_ptime_10009294);
                if (iVar15 == 0) {
                  piVar4 = FUN_100071a0(local_44,local_1cc,&DAT_100093fc);
                  FUN_10006890(local_14,piVar4);
                  local_8 = piVar4[3];
                  FUN_10006700(local_1cc);
                  pvVar5 = operator_new(0x10);
                  if (pvVar5 == (void *)0x0) goto LAB_100036d0;
                  lVar9 = strtol((char *)local_14[0],(char **)0x0,10);
                  puVar6 = FUN_10006e60(pvVar5,s_Ptime_1000928c,lVar9);
                  FUN_10005bc0(puVar3,puVar6);
                }
                else {
                  local_18 = puVar3;
                  local_48 = local_5c;
                }
              }
            }
          }
          if ((local_18 != (undefined4 *)0x0) && (local_48 != (char **)0x0)) {
            iVar15 = _stricmp((char *)local_14[0],s_Length_10009284);
            if (iVar15 == 0) {
              piVar4 = FUN_100071a0(local_44,local_33c,&DAT_10009404);
              FUN_10006890(local_14,piVar4);
              local_8 = piVar4[3];
              FUN_10006700(local_33c);
              iVar15 = _stricmp((char *)local_14[0],&DAT_10009280);
              if (iVar15 == 0) {
                piVar4 = FUN_100071a0(local_44,local_1ec,&DAT_100093fc);
                FUN_10006890(local_14,piVar4);
                local_8 = piVar4[3];
                FUN_10006700(local_1ec);
                FUN_10007810(local_12c,(char *)local_14[0]);
                iVar15 = thunk_FUN_100078d0(local_12c);
                FUN_10006700(local_124);
              }
              else {
                iVar15 = strtol((char *)local_14[0],(char **)0x0,10);
              }
              pvVar5 = operator_new(0x10);
              if (pvVar5 == (void *)0x0) {
                puVar3 = (undefined4 *)0x0;
              }
              else {
                puVar3 = FUN_10006e60(pvVar5,s_Duration_100093b8,iVar15);
              }
              FUN_10005bc0(local_18,puVar3);
              if (local_28 == 0) {
                local_28 = iVar15;
              }
            }
            else {
              iVar15 = _stricmp((char *)local_14[0],s_Range_10009278);
              if (iVar15 == 0) {
                iVar12 = 0;
                bVar17 = true;
                piVar4 = FUN_100071a0(local_44,local_2ac,&DAT_10009404);
                FUN_10006890(local_14,piVar4);
                local_8 = piVar4[3];
                FUN_10006700(local_2ac);
                iVar15 = _stricmp((char *)local_14[0],&DAT_10009280);
                if (iVar15 == 0) {
                  piVar4 = FUN_100071a0(local_44,local_20c,&DAT_100093fc);
                  FUN_10006890(local_14,piVar4);
                  local_8 = piVar4[3];
                  FUN_10006700(local_20c);
                  FUN_10006600(local_74,(int *)local_14);
                  uVar10 = FUN_10006c70(local_74,'-');
                  if (uVar10 == 0xffffffff) {
                    bVar17 = false;
                    FUN_10006700(local_74);
                  }
                  else {
                    puVar3 = FUN_10006da0(local_74,local_118,uVar10);
                    FUN_10007810(local_e4,(char *)*puVar3);
                    FUN_10006700(local_118);
                    puVar3 = FUN_10006d40(local_74,local_a4,
                                          (*(int *)(local_74[0] + -8) - uVar10) - 1);
                    FUN_10007810(local_f8,(char *)*puVar3);
                    FUN_10006700(local_a4);
                    iVar15 = FUN_100078a0(local_e4,local_f8);
                    if (iVar15 < 1) {
                      piVar4 = FUN_10007bd0(local_f8,local_350,local_e4);
                      iVar12 = thunk_FUN_100078d0(piVar4);
                      FUN_10006700(local_348);
                    }
                    else {
                      iVar12 = thunk_FUN_100078d0(local_e4);
                    }
                    FUN_10006700(local_f0);
                    FUN_10006700(local_dc);
                    FUN_10006700(local_74);
                  }
                }
                else {
                  iVar12 = strtol((char *)local_14[0],(char **)0x0,10);
                }
                if (bVar17) {
                  if (local_28 == 0) {
                    local_28 = iVar12;
                  }
                  pvVar5 = operator_new(0x10);
                  if (pvVar5 == (void *)0x0) {
LAB_10003a5e:
                    FUN_10005bc0(local_18,0);
                  }
                  else {
                    puVar3 = FUN_10006e60(pvVar5,s_Duration_100093b8,iVar12);
                    FUN_10005bc0(local_18,puVar3);
                  }
                }
              }
              else {
                iVar15 = _stricmp((char *)local_14[0],s_control_10009270);
                if (iVar15 == 0) {
                  piVar4 = FUN_100071a0(local_44,local_30c,&DAT_100093fc);
                  FUN_10006890(local_14,piVar4);
                  local_8 = piVar4[3];
                  FUN_10006700(local_30c);
                  pvVar5 = operator_new(0x18);
                  if (pvVar5 == (void *)0x0) goto LAB_10003a5e;
                  puVar3 = FUN_10006fd0(pvVar5,s_Control_10009268,(char *)local_14[0]);
                  FUN_10005bc0(local_18,puVar3);
                }
                else {
                  local_4c = 1;
                  FUN_10006600(local_8c,(int *)local_14);
                  FUN_100065e0(local_98);
                  if ((char)local_8 != '\n') {
                    FUN_10006ca0(local_98);
                    piVar4 = FUN_100071a0(local_44,local_22c,&DAT_10009264);
                    FUN_10006890(local_14,piVar4);
                    local_8 = piVar4[3];
                    FUN_10006700(local_22c);
                  }
                  ppcVar14 = local_48;
                  pcVar8 = s_integer_1000925c;
                  pbVar11 = local_14[0];
                  do {
                    bVar2 = *pbVar11;
                    bVar17 = bVar2 < (byte)*pcVar8;
                    if (bVar2 != *pcVar8) {
LAB_10003b04:
                      iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_10003b09;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar11[1];
                    bVar17 = bVar2 < (byte)pcVar8[1];
                    if (bVar2 != pcVar8[1]) goto LAB_10003b04;
                    pbVar11 = pbVar11 + 2;
                    pcVar8 = pcVar8 + 2;
                  } while (bVar2 != 0);
                  iVar15 = 0;
LAB_10003b09:
                  if (iVar15 == 0) {
                    piVar4 = FUN_100071a0(local_44,local_2cc,(char *)0x0);
                    FUN_10006890(local_14,piVar4);
                    local_8 = piVar4[3];
                    FUN_10006700(local_2cc);
                    lVar9 = strtol((char *)local_14[0],(char **)0x0,10);
                    pvVar5 = operator_new(0x10);
                    if (pvVar5 == (void *)0x0) {
LAB_10003c0d:
                      FUN_10005bc0(local_18,0);
                    }
                    else {
                      puVar3 = FUN_10006e60(pvVar5,local_8c[0],lVar9);
                      FUN_10005bc0(local_18,puVar3);
                    }
                  }
                  else {
                    pcVar8 = s_string_10009254;
                    pbVar11 = local_14[0];
                    do {
                      bVar2 = *pbVar11;
                      bVar17 = bVar2 < (byte)*pcVar8;
                      if (bVar2 != *pcVar8) {
LAB_10003baa:
                        iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                        goto LAB_10003baf;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar11[1];
                      bVar17 = bVar2 < (byte)pcVar8[1];
                      if (bVar2 != pcVar8[1]) goto LAB_10003baa;
                      pbVar11 = pbVar11 + 2;
                      pcVar8 = pcVar8 + 2;
                    } while (bVar2 != 0);
                    iVar15 = 0;
LAB_10003baf:
                    if (iVar15 == 0) {
                      piVar4 = FUN_100071a0(local_44,local_24c,(char *)0x0);
                      FUN_10006890(local_14,piVar4);
                      local_8 = piVar4[3];
                      FUN_10006700(local_24c);
                      pvVar5 = operator_new(0x18);
                      if (pvVar5 == (void *)0x0) goto LAB_10003c0d;
                      puVar3 = FUN_10006fd0(pvVar5,local_8c[0],(char *)local_14[0]);
                      FUN_10005bc0(local_18,puVar3);
                    }
                    else {
                      pcVar8 = s_buffer_1000924c;
                      pbVar11 = local_14[0];
                      do {
                        bVar2 = *pbVar11;
                        bVar17 = bVar2 < (byte)*pcVar8;
                        if (bVar2 != *pcVar8) {
LAB_10003c4c:
                          iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                          goto LAB_10003c51;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar11[1];
                        bVar17 = bVar2 < (byte)pcVar8[1];
                        if (bVar2 != pcVar8[1]) goto LAB_10003c4c;
                        pbVar11 = pbVar11 + 2;
                        pcVar8 = pcVar8 + 2;
                      } while (bVar2 != 0);
                      iVar15 = 0;
LAB_10003c51:
                      if (iVar15 == 0) {
                        piVar4 = FUN_100071a0(local_44,local_14c,(char *)0x0);
                        FUN_10006890(local_14,piVar4);
                        local_8 = piVar4[3];
                        FUN_10006700(local_14c);
                        FUN_10006600(local_c4,(int *)local_14);
                        uVar10 = 0xffffffff;
                        pcVar8 = local_c4[0];
                        do {
                          if (uVar10 == 0) break;
                          uVar10 = uVar10 - 1;
                          cVar1 = *pcVar8;
                          pcVar8 = pcVar8 + 1;
                        } while (cVar1 != '\0');
                        pvVar5 = operator_new(~uVar10 - 1);
                        uVar10 = 0xffffffff;
                        pcVar8 = local_c4[0];
                        do {
                          if (uVar10 == 0) break;
                          uVar10 = uVar10 - 1;
                          cVar1 = *pcVar8;
                          pcVar8 = pcVar8 + 1;
                        } while (cVar1 != '\0');
                        iVar15 = FUN_10007630((int)local_c4[0],~uVar10 - 1,(int)pvVar5);
                        if (iVar15 == -1) {
                          local_24 = 999;
                        }
                        else {
                          puVar3 = operator_new(0x28);
                          if (puVar3 == (undefined4 *)0x0) {
                            piVar4 = (int *)0x0;
                          }
                          else {
                            piVar4 = (int *)FUN_10005ca0(puVar3);
                          }
                          (**(code **)(*piVar4 + 4))(piVar4);
                          (**(code **)(*piVar4 + 0x10))(piVar4,pvVar5,iVar15);
                          this_00 = operator_new(0x10);
                          if (this_00 == (void *)0x0) {
                            FUN_10005bc0(local_18,0);
                            (**(code **)(*piVar4 + 8))(piVar4);
                          }
                          else {
                            puVar3 = FUN_10006ed0(this_00,local_8c[0],piVar4);
                            FUN_10005bc0(local_18,puVar3);
                            (**(code **)(*piVar4 + 8))(piVar4);
                          }
                        }
                        operator_delete(pvVar5);
                        FUN_10006700((int *)local_c4);
                      }
                      else {
                        FUN_10006b30(local_48,&DAT_10009248);
                        if (*(int *)(local_98[0] + -8) != 0) {
                          FUN_10006b90(ppcVar14,local_8c);
                          FUN_10006b90(ppcVar14,local_98);
                        }
                        FUN_10006b90(ppcVar14,local_14);
                        if ((char)local_8 != '\n') {
                          FUN_10006b70(ppcVar14);
                          piVar4 = FUN_100071a0(local_44,local_15c,&DAT_100093fc);
                          FUN_10006890(local_14,piVar4);
                          local_8 = piVar4[3];
                          FUN_10006700(local_15c);
                          FUN_10006b90(ppcVar14,local_14);
                        }
                        FUN_10006b30(ppcVar14,&DAT_100093fc);
                        local_4c = 0;
                      }
                    }
                  }
                  if (local_4c == 1) {
                    piVar4 = FUN_100071a0(local_44,local_17c,&DAT_100093fc);
                    FUN_10006890(local_14,piVar4);
                    local_8 = piVar4[3];
                    FUN_10006700(local_17c);
                  }
                  FUN_10006700(local_98);
                  FUN_10006700((int *)local_8c);
                }
              }
            }
          }
        }
        else {
          pbVar13 = &DAT_10009244;
          pbVar11 = local_14[0];
          do {
            bVar2 = *pbVar11;
            bVar17 = bVar2 < *pbVar13;
            if (bVar2 != *pbVar13) {
LAB_10003e7d:
              iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_10003e82;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar11[1];
            bVar17 = bVar2 < pbVar13[1];
            if (bVar2 != pbVar13[1]) goto LAB_10003e7d;
            pbVar11 = pbVar11 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar2 != 0);
          iVar15 = 0;
LAB_10003e82:
          if (iVar15 == 0) {
            puVar3 = local_1c;
            if (local_1c == (undefined4 *)0x0) {
              puVar3 = *(undefined4 **)((int)local_20 + 8);
            }
            piVar4 = FUN_100071a0(local_44,local_19c,&DAT_100091d8);
            FUN_10006890(local_14,piVar4);
            local_8 = piVar4[3];
            FUN_10006700(local_19c);
            pbVar13 = &DAT_10009240;
            pbVar11 = local_14[0];
            do {
              bVar2 = *pbVar11;
              bVar17 = bVar2 < *pbVar13;
              if (bVar2 != *pbVar13) {
LAB_10003ef3:
                iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                goto LAB_10003ef8;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar11[1];
              bVar17 = bVar2 < pbVar13[1];
              if (bVar2 != pbVar13[1]) goto LAB_10003ef3;
              pbVar11 = pbVar11 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar2 != 0);
            iVar15 = 0;
LAB_10003ef8:
            if (iVar15 == 0) {
              piVar4 = FUN_100071a0(local_44,local_1bc,&DAT_100091d8);
              FUN_10006890(local_14,piVar4);
              local_8 = piVar4[3];
              FUN_10006700(local_1bc);
              pbVar13 = &DAT_1000923c;
              pbVar11 = local_14[0];
              do {
                bVar2 = *pbVar11;
                bVar17 = bVar2 < *pbVar13;
                if (bVar2 != *pbVar13) {
LAB_10003f5c:
                  iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                  goto LAB_10003f61;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar11[1];
                bVar17 = bVar2 < pbVar13[1];
                if (bVar2 != pbVar13[1]) goto LAB_10003f5c;
                pbVar11 = pbVar11 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar2 != 0);
              iVar15 = 0;
LAB_10003f61:
              if (iVar15 == 0) {
                piVar4 = FUN_100071a0(local_44,local_1dc,&DAT_100091f0);
                FUN_10006890(local_14,piVar4);
                local_8 = piVar4[3];
                FUN_10006700(local_1dc);
                bVar17 = false;
                iVar15 = 0;
                if (0 < *(int *)(local_14[0] + -8)) {
                  do {
                    iVar12 = isspace((int)(char)local_14[0][iVar15]);
                    if (iVar12 == 0) {
                      bVar17 = true;
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < *(int *)(local_14[0] + -8));
                }
                if (bVar17) {
                  FUN_10006600(local_d0,(int *)local_14);
                  pvVar5 = operator_new(0x18);
                  if (pvVar5 == (void *)0x0) {
                    puVar6 = (undefined4 *)0x0;
                  }
                  else {
                    puVar6 = FUN_10006fd0(pvVar5,s_MulticastAddress_10009228,local_d0[0]);
                  }
                  FUN_10005bc0(puVar3,puVar6);
                  piVar4 = FUN_100071a0(local_44,local_1fc,&DAT_10009224);
                  FUN_10006890(local_14,piVar4);
                  local_8 = piVar4[3];
                  FUN_10006700(local_1fc);
                  pvVar5 = operator_new(0x10);
                  if (pvVar5 == (void *)0x0) {
                    puVar6 = (undefined4 *)0x0;
                  }
                  else {
                    lVar9 = strtol((char *)local_14[0],(char **)0x0,10);
                    puVar6 = FUN_10006e60(pvVar5,s_MulticastTTL_10009214,lVar9);
                  }
                  FUN_10005bc0(puVar3,puVar6);
                  if ((char)local_8 != '\n') {
                    piVar4 = FUN_100071a0(local_44,local_21c,(char *)0x0);
                    FUN_10006890(local_14,piVar4);
                    local_8 = piVar4[3];
                    FUN_10006700(local_21c);
                    pvVar5 = operator_new(0x10);
                    if (pvVar5 == (void *)0x0) {
                      puVar6 = (undefined4 *)0x0;
                    }
                    else {
                      lVar9 = strtol((char *)local_14[0],(char **)0x0,10);
                      puVar6 = FUN_10006e60(pvVar5,s_MulticastRange_10009204,lVar9);
                    }
                    FUN_10005bc0(puVar3,puVar6);
                  }
                  FUN_10006700((int *)local_d0);
                }
              }
            }
          }
          else {
            pbVar13 = &DAT_10009200;
            pbVar11 = local_14[0];
            do {
              bVar2 = *pbVar11;
              bVar17 = bVar2 < *pbVar13;
              if (bVar2 != *pbVar13) {
LAB_10004121:
                iVar15 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                goto LAB_10004126;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar11[1];
              bVar17 = bVar2 < pbVar13[1];
              if (bVar2 != pbVar13[1]) goto LAB_10004121;
              pbVar11 = pbVar11 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar2 != 0);
            iVar15 = 0;
LAB_10004126:
            if (iVar15 == 0) {
              piVar4 = FUN_100071a0(local_44,local_23c,&DAT_100093fc);
              FUN_10006890(local_14,piVar4);
              local_8 = piVar4[3];
              FUN_10006700(local_23c);
            }
            else {
              ppcVar14 = local_5c;
              if (local_1c == (undefined4 *)0x0) {
                ppcVar14 = local_68;
              }
              FUN_10006b90(ppcVar14,local_14);
              if ((char)local_8 != '\n') {
                FUN_10006b70(ppcVar14);
                piVar4 = FUN_100071a0(local_44,local_25c,&DAT_100093fc);
                FUN_10006890(local_14,piVar4);
                local_8 = piVar4[3];
                FUN_10006700(local_25c);
                FUN_10006b90(ppcVar14,local_14);
                FUN_10006b30(ppcVar14,&DAT_100093fc);
              }
            }
          }
        }
      }
    }
LAB_100041ca:
    piVar4 = FUN_100071a0(local_44,local_27c,&DAT_10009404);
    FUN_10006890(local_14,piVar4);
    local_8 = piVar4[3];
    FUN_10006700(local_27c);
    iVar15 = local_24;
    this = local_20;
    cVar1 = (char)local_8;
  } while( true );
}


