/* Module: sdpp3260.dll
   Function: FUN_100043e0
   Address: 100043e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_100043e0(void *this,void *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  byte **ppbVar11;
  uint uVar12;
  byte *pbVar13;
  code *pcVar14;
  bool bVar15;
  char *pcVar16;
  char **ppcVar17;
  char *pcVar18;
  int local_358 [2];
  int local_350 [3];
  int local_344 [3];
  int local_338 [3];
  int local_32c [3];
  int local_320 [3];
  int local_314 [3];
  int local_308 [3];
  int local_2fc [3];
  int local_2f0 [3];
  int local_2e4 [3];
  int local_2d8 [3];
  int local_2cc [3];
  int local_2c0 [3];
  int local_2b4 [3];
  int local_2a8 [3];
  int local_29c [3];
  int local_290 [3];
  int local_284 [3];
  int local_278 [3];
  int local_26c [3];
  int local_260 [3];
  int local_254 [3];
  int local_248 [3];
  int local_23c [3];
  int local_230 [3];
  int local_224 [3];
  int local_218 [3];
  int local_20c [3];
  int local_200 [3];
  int local_1f4 [3];
  int local_1e8 [3];
  int local_1dc [3];
  int local_1d0 [3];
  int local_1c4 [3];
  int local_1b8 [3];
  int local_1ac [3];
  int local_1a0 [3];
  int local_194 [3];
  int local_188 [3];
  int local_17c [3];
  int local_170 [2];
  int local_168 [3];
  int local_15c [3];
  int local_150 [3];
  int local_144 [3];
  int local_138 [3];
  int local_12c [3];
  int local_120 [3];
  int local_114 [3];
  int local_108 [3];
  int local_fc [3];
  int local_f0 [3];
  int local_e4 [3];
  char *local_d8 [3];
  byte *local_cc [3];
  int local_c0 [3];
  byte *local_b4 [3];
  int local_a8 [3];
  byte *local_9c [3];
  int local_90 [3];
  int local_84 [3];
  int local_78 [3];
  byte *local_6c [3];
  int *local_60;
  int local_5c [3];
  int local_50;
  int local_4c;
  int local_48 [3];
  int local_3c [3];
  int local_30 [3];
  int local_24 [3];
  int *local_18;
  int *local_14;
  int local_10 [3];
  
  local_14 = this;
  FUN_100065e0(local_10);
  local_60 = (int *)0x0;
  FUN_100065e0(local_138);
  puVar6 = *(undefined4 **)this;
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)*puVar6)(puVar6,&DAT_10008450,&local_60);
  }
  if (local_60 != (int *)0x0) {
    local_18 = (int *)0x0;
    iVar3 = (**(code **)(*local_60 + 0x2c))(local_60,s_server_sdpconfig_hostaddr_10009594,&local_18)
    ;
    if ((iVar3 == 0) && (local_18 != (int *)0x0)) {
      pcVar4 = (char *)(**(code **)(*local_18 + 0x1c))(local_18);
      FUN_10006900(local_138,pcVar4);
      (**(code **)(*local_18 + 8))(local_18);
    }
    (**(code **)(*local_60 + 8))(local_60);
  }
  iVar3 = Ordinal_10(local_138[0]);
  FUN_100065e0(local_120);
  FUN_100065e0(local_114);
  if (*(void **)((int)this + 0xc) == (void *)0x0) {
    piVar5 = FUN_100057e0(local_24,iVar3);
    FUN_10006890(local_120,piVar5);
  }
  else {
    piVar5 = (int *)FUN_10005be0(*(void **)((int)this + 0xc),s_LastModified_10009584);
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)(**(code **)(*piVar5 + 4))(local_24);
      FUN_10006890(local_120,piVar5);
      FUN_10006700(local_24);
    }
    piVar5 = (int *)FUN_10005be0(*(void **)((int)this + 0xc),s_Control_10009268);
    if (piVar5 == (int *)0x0) goto LAB_1000450c;
    piVar5 = (int *)(**(code **)(*piVar5 + 4))(local_24);
    FUN_10006890(local_114,piVar5);
  }
  FUN_10006700(local_24);
LAB_1000450c:
  FUN_10006900(local_10,&DAT_1000957c);
  piVar5 = local_138;
  pcVar18 = &DAT_100093fc;
  piVar8 = local_120;
  pcVar16 = s_IN_IP4_10009570;
  pcVar4 = &DAT_100091d8;
  puVar6 = FUN_10006a40(local_9c,&DAT_10009568,local_120);
  puVar6 = FUN_100069e0(local_b4,puVar6,pcVar4);
  puVar6 = FUN_10006990(local_6c,puVar6,piVar8);
  puVar6 = FUN_100069e0(local_5c,puVar6,pcVar16);
  puVar6 = FUN_10006990(local_3c,puVar6,piVar5);
  puVar6 = FUN_100069e0(local_24,puVar6,pcVar18);
  FUN_10006b90(local_10,puVar6);
  FUN_10006700(local_24);
  FUN_10006700(local_3c);
  FUN_10006700(local_5c);
  FUN_10006700((int *)local_6c);
  FUN_10006700((int *)local_b4);
  FUN_10006700((int *)local_9c);
  FUN_10006770(local_144,s_<No_title>_1000955c);
  FUN_10006770(local_15c,s_<No_author>_10009550);
  FUN_10006770(local_150,s_<No_copyright>_10009540);
  FUN_100065e0(local_e4);
  FUN_100065e0(local_12c);
  FUN_100065e0(local_78);
  FUN_100065e0(local_a8);
  FUN_100065e0(local_84);
  FUN_100065e0(local_90);
  piVar5 = (int *)FUN_10005c60(*(int **)((int)this + 8));
  pcVar14 = _stricmp_exref;
  while (piVar5 != (int *)0x0) {
    bVar15 = true;
    (**(code **)(*piVar5 + 4))(local_48);
    uVar7 = FUN_100059c0((int)piVar5);
    iVar3 = (*pcVar14)(uVar7,s_Title_10009538);
    if (iVar3 == 0) {
      piVar8 = FUN_10004320(local_24,piVar5);
      FUN_10006890(local_144,piVar8);
      FUN_10006700(local_24);
    }
    else {
      uVar7 = FUN_100059c0((int)piVar5);
      iVar3 = (*pcVar14)(uVar7,s_Author_10009530);
      if (iVar3 == 0) {
        piVar8 = FUN_10004320(local_3c,piVar5);
        FUN_10006890(local_15c,piVar8);
        FUN_10006700(local_3c);
      }
      else {
        uVar7 = FUN_100059c0((int)piVar5);
        iVar3 = (*pcVar14)(uVar7,s_Copyright_10009524);
        if (iVar3 == 0) {
          piVar8 = FUN_10004320(local_5c,piVar5);
          FUN_10006890(local_150,piVar8);
          FUN_10006700(local_5c);
        }
        else {
          uVar7 = FUN_100059c0((int)piVar5);
          iVar3 = (*pcVar14)(uVar7,s_MulticastAddress_10009228);
          if (iVar3 == 0) {
            piVar8 = FUN_10004320(local_6c,piVar5);
            FUN_10006890(local_a8,piVar8);
            ppbVar11 = local_6c;
          }
          else {
            uVar7 = FUN_100059c0((int)piVar5);
            iVar3 = (*pcVar14)(uVar7,s_MulticastTTL_10009214);
            if (iVar3 == 0) {
              piVar8 = (int *)(**(code **)(*piVar5 + 4))(local_b4);
              FUN_10006890(local_84,piVar8);
              ppbVar11 = local_b4;
            }
            else {
              uVar7 = FUN_100059c0((int)piVar5);
              iVar3 = (*pcVar14)(uVar7,s_MulticastRange_10009204);
              if (iVar3 != 0) {
                uVar7 = FUN_100059c0((int)piVar5);
                iVar3 = (*pcVar14)(uVar7,s_Duration_100093b8);
                if (iVar3 == 0) {
                  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 4))(local_f0);
                  lVar10 = strtol((char *)*puVar6,(char **)0x0,10);
                  FUN_10006700(local_f0);
                  FUN_100077f0(local_170,lVar10);
                  pcVar4 = (char *)thunk_FUN_10007940(local_170);
                  FUN_10006900(local_12c,pcVar4);
                  pcVar4 = &DAT_100093fc;
                  puVar6 = FUN_10006a40(local_c0,s_a_range_npt_0__10009514,local_12c);
                  puVar6 = FUN_100069e0(local_fc,puVar6,pcVar4);
                  FUN_10006b90(local_e4,puVar6);
                  FUN_10006700(local_fc);
                  FUN_10006700(local_c0);
                  bVar15 = false;
                  FUN_10006700(local_168);
                }
                else {
                  uVar7 = FUN_100059c0((int)piVar5);
                  iVar3 = (*pcVar14)(uVar7,s_SDPData_100093e4);
                  if (iVar3 == 0) {
                    piVar8 = (int *)(**(code **)(*piVar5 + 4))(local_cc);
                    FUN_10006890(local_78,piVar8);
                    ppbVar11 = local_cc;
                    goto LAB_100048c2;
                  }
                }
                goto LAB_100048c9;
              }
              piVar8 = (int *)(**(code **)(*piVar5 + 4))(local_9c);
              FUN_10006890(local_90,piVar8);
              ppbVar11 = local_9c;
            }
          }
LAB_100048c2:
          FUN_10006700((int *)ppbVar11);
          bVar15 = false;
        }
      }
    }
LAB_100048c9:
    if (bVar15) {
      iVar3 = *(int *)(local_48[0] + -8);
      pcVar4 = (char *)FUN_100059c0((int)piVar5);
      uVar12 = 0xffffffff;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = operator_new(~uVar12 + 0x27 + iVar3);
      iVar9 = FUN_100058b0((int)piVar5);
      iVar3 = local_48[0];
      if (iVar9 == 0) {
        uVar7 = FUN_100059c0((int)piVar5);
        pcVar16 = s_a__s_integer__s_100094d8;
LAB_10004942:
        sprintf(pcVar4,pcVar16,uVar7,iVar3);
        FUN_10006b30(local_e4,pcVar4);
      }
      else {
        if (iVar9 == 1) {
          uVar7 = FUN_100059c0((int)piVar5);
          pcVar16 = s_a__s_buffer___s__100094ec;
          goto LAB_10004942;
        }
        if (iVar9 == 2) {
          uVar7 = FUN_100059c0((int)piVar5);
          pcVar16 = s_a__s_string___s__10009500;
          goto LAB_10004942;
        }
      }
      operator_delete(pcVar4);
      pcVar14 = _stricmp_exref;
    }
    piVar5 = (int *)FUN_10005c80(local_14[2]);
    FUN_10006700(local_48);
    this = local_14;
  }
  pcVar4 = &DAT_100093fc;
  puVar6 = FUN_10006a40(local_3c,&DAT_100094d4,local_144);
  puVar6 = FUN_100069e0(local_24,puVar6,pcVar4);
  FUN_10006b90(local_10,puVar6);
  FUN_10006700(local_24);
  FUN_10006700(local_3c);
  piVar5 = local_150;
  pcVar16 = &DAT_100093fc;
  pcVar4 = &DAT_100091d8;
  puVar6 = FUN_10006a40(local_6c,&DAT_100094d0,local_15c);
  puVar6 = FUN_100069e0(local_5c,puVar6,pcVar4);
  puVar6 = FUN_10006990(local_3c,puVar6,piVar5);
  puVar6 = FUN_100069e0(local_24,puVar6,pcVar16);
  FUN_10006b90(local_10,puVar6);
  FUN_10006700(local_24);
  FUN_10006700(local_3c);
  FUN_10006700(local_5c);
  FUN_10006700((int *)local_6c);
  if ((0 < *(int *)(local_a8[0] + -8)) && (0 < *(int *)(local_84[0] + -8))) {
    piVar5 = local_84;
    pcVar4 = &DAT_100091f0;
    puVar6 = FUN_10006a40(local_5c,s_c_IN_IP4_100094c4,local_a8);
    puVar6 = FUN_100069e0(local_3c,puVar6,pcVar4);
    puVar6 = FUN_10006990(local_24,puVar6,piVar5);
    FUN_10006b90(local_10,puVar6);
    FUN_10006700(local_24);
    FUN_10006700(local_3c);
    FUN_10006700(local_5c);
    if (0 < *(int *)(local_90[0] + -8)) {
      puVar6 = FUN_10006a40(local_24,&DAT_100091f0,local_90);
      FUN_10006b90(local_10,puVar6);
      FUN_10006700(local_24);
    }
    FUN_10006b30(local_10,&DAT_100093fc);
  }
  FUN_10006b90(local_10,local_e4);
  FUN_10006b30(local_10,s_t_0_0_100094bc);
  if (*(int *)(local_78[0] + -8) != 0) {
    FUN_10006b90(local_10,local_78);
    thunk_FUN_100065a0(local_78);
  }
  local_4c = *(int *)((int)this + 4);
  local_50 = *(int *)(local_4c + 4);
  if (local_50 == 0) {
LAB_10005738:
    FUN_10006600(param_1,local_10);
    FUN_10006700(local_90);
    FUN_10006700(local_84);
    FUN_10006700(local_a8);
    FUN_10006700(local_78);
    FUN_10006700(local_12c);
    FUN_10006700(local_e4);
    FUN_10006700(local_150);
    FUN_10006700(local_15c);
    FUN_10006700(local_144);
    FUN_10006700(local_114);
    FUN_10006700(local_120);
    FUN_10006700(local_138);
    FUN_10006700(local_10);
    return param_1;
  }
  pcVar14 = _stricmp_exref;
  if (local_50 != 0) goto LAB_10004b5d;
  piVar5 = (int *)0x0;
  do {
    local_14 = piVar5;
    if (piVar5 != (int *)0x0) {
      FUN_100065e0(local_c0);
      FUN_100065e0(local_3c);
      FUN_100065e0(local_48);
      FUN_100065e0(local_cc);
      FUN_100065e0(local_5c);
      FUN_100065e0(local_d8);
      FUN_100065e0(local_168);
      FUN_100065e0(local_320);
      FUN_100065e0(local_308);
      FUN_100065e0(local_108);
      FUN_100065e0(local_24);
      FUN_100065e0(local_6c);
      FUN_100065e0(local_b4);
      FUN_100065e0(local_9c);
      FUN_100065e0(local_f0);
      FUN_100065e0(local_fc);
      thunk_FUN_100065a0(local_a8);
      thunk_FUN_100065a0(local_84);
      thunk_FUN_100065a0(local_90);
      FUN_10006900(local_9c,&DAT_100093f8);
      piVar5 = (int *)FUN_10005c60(piVar5);
      local_18 = piVar5;
      while (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(local_30);
        pcVar4 = (char *)FUN_100059c0((int)piVar5);
        iVar3 = (*pcVar14)(pcVar4,s_MimeType_10009314);
        if (iVar3 == 0) {
          FUN_10006890(local_48,local_30);
          uVar12 = FUN_10006df0(local_48,&DAT_100091f0);
          if (-1 < (int)uVar12) {
            piVar5 = FUN_10006da0(local_48,local_1ac,uVar12);
            FUN_10006890(local_cc,piVar5);
            FUN_10006700(local_1ac);
            piVar5 = FUN_10006cc0(local_48,local_338,uVar12 + 1);
            FUN_10006890(local_5c,piVar5);
            FUN_10006700(local_338);
          }
        }
        pcVar14 = _stricmp_exref;
        pcVar16 = s_application_100094b0;
        pbVar13 = local_cc[0];
        do {
          bVar2 = *pbVar13;
          bVar15 = bVar2 < (byte)*pcVar16;
          if (bVar2 != *pcVar16) {
LAB_10004d15:
            iVar3 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_10004d1a;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar13[1];
          bVar15 = bVar2 < (byte)pcVar16[1];
          if (bVar2 != pcVar16[1]) goto LAB_10004d15;
          pbVar13 = pbVar13 + 2;
          pcVar16 = pcVar16 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_10004d1a:
        if (iVar3 == 0) {
LAB_10005035:
          FUN_10006900(local_cc,&DAT_10009484);
          pcVar14 = _stricmp_exref;
        }
        else {
          pcVar16 = s_image_100094a8;
          pbVar13 = local_cc[0];
          do {
            bVar2 = *pbVar13;
            bVar15 = bVar2 < (byte)*pcVar16;
            if (bVar2 != *pcVar16) {
LAB_10004d4d:
              iVar3 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_10004d52;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar13[1];
            bVar15 = bVar2 < (byte)pcVar16[1];
            if (bVar2 != pcVar16[1]) goto LAB_10004d4d;
            pbVar13 = pbVar13 + 2;
            pcVar16 = pcVar16 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_10004d52:
          if (iVar3 == 0) goto LAB_10005035;
          pcVar16 = s_image_map_1000949c;
          pbVar13 = local_cc[0];
          do {
            bVar2 = *pbVar13;
            bVar15 = bVar2 < (byte)*pcVar16;
            if (bVar2 != *pcVar16) {
LAB_10004d85:
              iVar3 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_10004d8a;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar13[1];
            bVar15 = bVar2 < (byte)pcVar16[1];
            if (bVar2 != pcVar16[1]) goto LAB_10004d85;
            pbVar13 = pbVar13 + 2;
            pcVar16 = pcVar16 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_10004d8a:
          if (iVar3 == 0) goto LAB_10005035;
          iVar3 = _stricmp(pcVar4,s_StreamNumber_100093d4);
          if (iVar3 == 0) {
            FUN_10006890(local_3c,local_30);
          }
          else {
            iVar3 = _stricmp(pcVar4,s_Duration_100093b8);
            if (iVar3 == 0) {
              puVar6 = (undefined4 *)(**(code **)(*local_18 + 4))(local_194);
              lVar10 = strtol((char *)*puVar6,(char **)0x0,10);
              FUN_10006700(local_194);
              FUN_100077f0(local_358,lVar10);
              pcVar4 = (char *)thunk_FUN_10007940(local_358);
              FUN_10006900(local_108,pcVar4);
              FUN_10006700(local_350);
            }
            else {
              iVar3 = _stricmp(pcVar4,s_RTPPayloadType_100093c4);
              if (iVar3 == 0) {
                FUN_10006890(local_d8,local_30);
              }
              else {
                iVar3 = _stricmp(pcVar4,s_BitsPerSample_1000948c);
                if (iVar3 == 0) {
                  FUN_10006890(local_24,local_30);
                }
                else {
                  iVar3 = _stricmp(pcVar4,s_SamplesPerSecond_100091dc);
                  if (iVar3 == 0) {
                    FUN_10006890(local_6c,local_30);
                  }
                  else {
                    iVar3 = _stricmp(pcVar4,s_Channels_100091cc);
                    if (iVar3 == 0) {
                      FUN_10006890(local_b4,local_30);
                    }
                    else {
                      iVar3 = _stricmp(pcVar4,s_MulticastAddress_10009228);
                      if (iVar3 == 0) {
                        FUN_10006890(local_a8,local_30);
                      }
                      else {
                        iVar3 = _stricmp(pcVar4,s_MulticastTTL_10009214);
                        if (iVar3 == 0) {
                          FUN_10006890(local_84,local_30);
                        }
                        else {
                          iVar3 = _stricmp(pcVar4,s_MulticastRange_10009204);
                          if (iVar3 == 0) {
                            FUN_10006890(local_90,local_30);
                          }
                          else {
                            iVar3 = _stricmp(pcVar4,&DAT_100093b0);
                            if (iVar3 == 0) {
                              FUN_10006890(local_9c,local_30);
                            }
                            else {
                              iVar3 = _stricmp(pcVar4,s_Control_10009268);
                              if (iVar3 == 0) {
                                FUN_10006890(local_114,local_30);
                              }
                              else {
                                iVar3 = _stricmp(pcVar4,s_ptime_10009294);
                                if (iVar3 == 0) {
                                  FUN_10006890(local_f0,local_30);
                                }
                                else {
                                  iVar3 = _stricmp(pcVar4,s_PayloadParameters_1000929c);
                                  if (iVar3 == 0) {
                                    FUN_10006890(local_fc,local_30);
                                  }
                                  else {
                                    iVar3 = _stricmp(pcVar4,s_SDPData_100093e4);
                                    if (iVar3 == 0) {
                                      FUN_10006890(local_78,local_30);
                                    }
                                    else {
                                      uVar12 = 0xffffffff;
                                      pcVar16 = pcVar4;
                                      do {
                                        if (uVar12 == 0) break;
                                        uVar12 = uVar12 - 1;
                                        cVar1 = *pcVar16;
                                        pcVar16 = pcVar16 + 1;
                                      } while (cVar1 != '\0');
                                      pcVar16 = operator_new(~uVar12 + 0x27 +
                                                             *(int *)(local_30[0] + -8));
                                      iVar3 = FUN_100058b0((int)local_18);
                                      if (iVar3 == 0) {
                                        pcVar18 = s_a__s_integer__s_100094d8;
LAB_10005014:
                                        sprintf(pcVar16,pcVar18,pcVar4,local_30[0]);
                                        FUN_10006b30(local_c0,pcVar16);
                                      }
                                      else {
                                        if (iVar3 == 1) {
                                          pcVar18 = s_a__s_buffer___s__100094ec;
                                          goto LAB_10005014;
                                        }
                                        if (iVar3 == 2) {
                                          pcVar18 = s_a__s_string___s__10009500;
                                          goto LAB_10005014;
                                        }
                                      }
                                      operator_delete(pcVar16);
                                      pcVar14 = _stricmp_exref;
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
        piVar5 = (int *)FUN_10005c80((int)local_14);
        local_18 = piVar5;
        FUN_10006700(local_30);
      }
      if (*(int *)(local_d8[0] + -8) == 0) {
        FUN_10006e20(local_d8,&DAT_10009480);
        uVar12 = 0x65;
      }
      else {
        uVar12 = strtol(local_d8[0],(char **)0x0,10);
      }
      ppcVar17 = local_d8;
      pcVar18 = &DAT_100093fc;
      ppbVar11 = local_9c;
      pcVar16 = s_RTP_AVP_10009474;
      pcVar4 = &DAT_100091d8;
      puVar6 = FUN_10006a40(local_1dc,&DAT_10009470,local_cc);
      puVar6 = FUN_100069e0(local_344,puVar6,pcVar4);
      puVar6 = FUN_10006990(local_1c4,puVar6,ppbVar11);
      puVar6 = FUN_100069e0(local_284,puVar6,pcVar16);
      puVar6 = FUN_10006990(local_17c,puVar6,ppcVar17);
      puVar6 = FUN_100069e0(local_2e4,puVar6,pcVar18);
      FUN_10006b90(local_10,puVar6);
      FUN_10006700(local_2e4);
      FUN_10006700(local_17c);
      FUN_10006700(local_284);
      FUN_10006700(local_1c4);
      FUN_10006700(local_344);
      FUN_10006700(local_1dc);
      pcVar4 = &DAT_100093fc;
      if (*(int *)(local_114[0] + -8) == 0) {
        puVar6 = FUN_10006a40(local_1f4,s_a_control_streamid__1000945c,local_3c);
        puVar6 = FUN_100069e0(local_29c,puVar6,pcVar4);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_29c);
        piVar5 = local_1f4;
      }
      else {
        puVar6 = FUN_10006a40(local_20c,s_a_control__10009450,local_114);
        puVar6 = FUN_100069e0(local_2fc,puVar6,pcVar4);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_2fc);
        piVar5 = local_20c;
      }
      FUN_10006700(piVar5);
      pcVar4 = &DAT_100093fc;
      if (*(int *)(local_108[0] + -8) == 0) {
        puVar6 = FUN_10006a40(local_224,s_a_length_npt__10009440,local_12c);
        puVar6 = FUN_100069e0(local_2b4,puVar6,pcVar4);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_2b4);
        FUN_10006700(local_224);
        pcVar4 = &DAT_100093fc;
        puVar6 = FUN_10006a40(local_23c,s_a_range_npt_0__10009514,local_12c);
        puVar6 = FUN_100069e0(local_32c,puVar6,pcVar4);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_32c);
        piVar5 = local_23c;
      }
      else {
        puVar6 = FUN_10006a40(local_254,s_a_length_npt__10009440,local_108);
        puVar6 = FUN_100069e0(local_2cc,puVar6,pcVar4);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_2cc);
        FUN_10006700(local_254);
        pcVar4 = &DAT_100093fc;
        puVar6 = FUN_10006a40(local_26c,s_a_range_npt_0__10009514,local_108);
        puVar6 = FUN_100069e0(local_314,puVar6,pcVar4);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_314);
        piVar5 = local_26c;
      }
      FUN_10006700(piVar5);
      if (0x22 < uVar12) {
        piVar5 = local_5c;
        pcVar4 = &DAT_100091d8;
        puVar6 = FUN_10006a40(local_1b8,s_a_rtpmap__10009434,local_d8);
        puVar6 = FUN_100069e0(local_1a0,puVar6,pcVar4);
        puVar6 = FUN_10006990(local_188,puVar6,piVar5);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_188);
        FUN_10006700(local_1a0);
        FUN_10006700(local_1b8);
        if (*(int *)(local_6c[0] + -8) != 0) {
          puVar6 = FUN_10006a40(local_1d0,&DAT_100091f0,local_6c);
          FUN_10006b90(local_10,puVar6);
          FUN_10006700(local_1d0);
        }
        if (*(int *)(local_b4[0] + -8) != 0) {
          puVar6 = FUN_10006a40(local_1e8,&DAT_100091f0,local_b4);
          FUN_10006b90(local_10,puVar6);
          FUN_10006700(local_1e8);
        }
        FUN_10006b30(local_10,&DAT_100093fc);
      }
      if (*(int *)(local_fc[0] + -8) != 0) {
        piVar5 = local_fc;
        pcVar16 = &DAT_100093fc;
        pcVar4 = &DAT_100091d8;
        puVar6 = FUN_10006a40(local_248,s_a_fmtp__1000942c,local_d8);
        puVar6 = FUN_100069e0(local_230,puVar6,pcVar4);
        puVar6 = FUN_10006990(local_218,puVar6,piVar5);
        puVar6 = FUN_100069e0(local_200,puVar6,pcVar16);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_200);
        FUN_10006700(local_218);
        FUN_10006700(local_230);
        FUN_10006700(local_248);
      }
      if (*(int *)(local_f0[0] + -8) != 0) {
        puVar6 = FUN_10006a40(local_260,s_a_ptime__10009420,local_f0);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_260);
      }
      pcVar4 = &DAT_1000941c;
      puVar6 = FUN_10006a40(local_290,s_a_mimetype_string___10009408,local_48);
      puVar6 = FUN_100069e0(local_278,puVar6,pcVar4);
      FUN_10006b90(local_10,puVar6);
      FUN_10006700(local_278);
      FUN_10006700(local_290);
      if ((0 < *(int *)(local_a8[0] + -8)) && (0 < *(int *)(local_84[0] + -8))) {
        piVar5 = local_84;
        pcVar4 = &DAT_100091f0;
        puVar6 = FUN_10006a40(local_2d8,s_c_IN_IP4_100094c4,local_a8);
        puVar6 = FUN_100069e0(local_2c0,puVar6,pcVar4);
        puVar6 = FUN_10006990(local_2a8,puVar6,piVar5);
        FUN_10006b90(local_10,puVar6);
        FUN_10006700(local_2a8);
        FUN_10006700(local_2c0);
        FUN_10006700(local_2d8);
        if (0 < *(int *)(local_90[0] + -8)) {
          puVar6 = FUN_10006a40(local_2f0,&DAT_100091f0,local_90);
          FUN_10006b90(local_10,puVar6);
          FUN_10006700(local_2f0);
        }
        FUN_10006b30(local_10,&DAT_100093fc);
      }
      FUN_10006b90(local_10,local_c0);
      if (*(int *)(local_78[0] + -8) != 0) {
        FUN_10006b90(local_10,local_78);
        thunk_FUN_100065a0(local_78);
      }
      FUN_10006700(local_fc);
      FUN_10006700(local_f0);
      FUN_10006700((int *)local_9c);
      FUN_10006700((int *)local_b4);
      FUN_10006700((int *)local_6c);
      FUN_10006700(local_24);
      FUN_10006700(local_108);
      FUN_10006700(local_308);
      FUN_10006700(local_320);
      FUN_10006700(local_168);
      FUN_10006700((int *)local_d8);
      FUN_10006700(local_5c);
      FUN_10006700((int *)local_cc);
      FUN_10006700(local_48);
      FUN_10006700(local_3c);
      FUN_10006700(local_c0);
    }
    FUN_10002800(&local_50);
    if (local_50 == 0) goto LAB_10005738;
LAB_10004b5d:
    puVar6 = (undefined4 *)FUN_10002820(local_50);
    piVar5 = (int *)*puVar6;
  } while( true );
}


