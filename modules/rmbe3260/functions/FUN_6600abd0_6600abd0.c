/* Module: rmbe3260.dll
   Function: FUN_6600abd0
   Address: 6600abd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6600abd0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 uVar12;
  char *pcVar13;
  char local_540 [260];
  int local_43c [3];
  int local_430 [3];
  int local_424 [3];
  int local_418 [3];
  int local_40c [3];
  int local_400 [3];
  int local_3f4 [3];
  int local_3e8 [3];
  int local_3dc [3];
  int local_3d0 [3];
  int local_3c4 [3];
  int local_3b8 [3];
  int local_3ac [3];
  int local_3a0 [3];
  int local_394 [3];
  int local_388 [3];
  int local_37c [3];
  int local_370 [3];
  int local_364 [3];
  int local_358 [3];
  int local_34c [3];
  int local_340 [3];
  int local_334 [3];
  int local_328 [3];
  int local_31c [3];
  int local_310 [3];
  int local_304 [3];
  int local_2f8 [3];
  int local_2ec [3];
  int local_2e0 [3];
  int local_2d4 [3];
  int local_2c8 [3];
  int local_2bc [3];
  int local_2b0 [3];
  int local_2a4 [3];
  int local_298 [3];
  int local_28c [3];
  int local_280 [3];
  int local_274 [3];
  int local_268 [3];
  int local_25c [3];
  int local_250 [3];
  int local_244 [3];
  int local_238 [3];
  int local_22c [3];
  int local_220 [3];
  int local_214 [3];
  int local_208 [3];
  int local_1fc [3];
  int local_1f0 [3];
  int local_1e4 [3];
  int local_1d8 [3];
  int local_1cc [3];
  int local_1c0 [3];
  int local_1b4 [3];
  int local_1a8 [3];
  int local_19c [3];
  int local_190 [3];
  int local_184 [3];
  int local_178 [3];
  int local_16c [3];
  int local_160 [3];
  int local_154 [3];
  int local_148 [3];
  int local_13c [3];
  int local_130 [3];
  int local_124 [3];
  int local_118 [3];
  int local_10c [3];
  char local_100 [4];
  int local_fc [3];
  char local_f0 [4];
  int local_ec [3];
  int local_e0 [3];
  int local_d4 [3];
  int local_c8 [3];
  int local_bc [3];
  int local_b0 [3];
  int local_a4 [3];
  int local_98 [3];
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  byte *local_80 [3];
  byte *local_74 [3];
  undefined4 local_68 [3];
  int local_5c [3];
  int *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10 [3];
  
  piVar8 = (int *)0x0;
  local_38 = (int *)0x0;
  local_14 = (int *)0x0;
  local_3c = (int *)0x0;
  local_50 = (int *)0x0;
  local_40 = (int *)0x0;
  local_30 = (int *)0x0;
  local_28 = (int *)0x0;
  local_4c = (int *)0x0;
  local_34 = (int *)0x0;
  local_48 = (int *)0x0;
  FUN_6605b7e0(local_80,&DAT_66075004);
  pcVar13 = local_540;
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13 = pcVar13 + 4;
  }
  local_1c = (int *)0x0;
  local_20 = 0;
  iVar7 = (**(code **)*param_2)(param_2,&DAT_66065e98,&local_14);
  if ((((iVar7 < 0) || (iVar7 = (**(code **)(*local_14 + 0x24))(local_14,&local_34), iVar7 < 0)) ||
      (local_34 == (int *)0x0)) ||
     (iVar7 = (**(code **)(*local_34 + 0xc))(local_34,&local_18), iVar7 < 0)) goto LAB_6600ca0c;
  if (local_18 == 0) {
LAB_6600b1df:
    if (*(int *)(local_80[0] + -8) != 0) {
      param_2 = (undefined4 *)0x0;
      iVar7 = FUN_6605cad0((void *)(param_1 + 0x50),local_80[0],(int *)&param_2);
      if (iVar7 == 0) {
        puVar6 = operator_new(4);
        *puVar6 = *(undefined4 *)(param_1 + 0x6c);
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
        FUN_6605c9a0((void *)(param_1 + 0x50),local_80[0],(int)puVar6);
      }
    }
    param_2 = (undefined4 *)0x0;
    local_44 = 1;
    FUN_6605b650(local_10);
    puVar6 = *(undefined4 **)(param_1 + 0x20);
    if (puVar6 != (undefined4 *)0x0) {
      iVar7 = (**(code **)*puVar6)(puVar6,&DAT_66065e58,&local_40);
      if ((iVar7 < 0) || (iVar7 = (**(code **)(*local_40 + 0x1c))(local_40,&local_2c), iVar7 < 0))
      goto LAB_6600ca07;
      if (local_40 != (int *)0x0) {
        (**(code **)(*local_40 + 8))(local_40);
        local_40 = (int *)0x0;
      }
    }
    iVar7 = (**(code **)(*local_14 + 0xc))(local_14,&local_88);
    if (-1 < iVar7) {
      switch(local_88) {
      case 0:
        if (local_540[0] != '\0') {
          puVar6 = operator_new(0xc);
          if (puVar6 == (undefined4 *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = FUN_6605b650(puVar6);
          }
          FUN_6605b970(piVar8,s_<fill_6606c558);
          iVar7 = (**(code **)(*local_14 + 0x14))(local_14,&param_2);
          if (iVar7 < 0) break;
          if (local_2c == 0) {
            FUN_6605bfd0(local_10,&DAT_6606c2f8);
            pcVar13 = &DAT_6606c554;
            puVar6 = FUN_6605bab0(local_bc,s_start___6606c54c,local_10);
            puVar6 = FUN_6605ba50(local_98,puVar6,pcVar13);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_98);
            piVar3 = local_bc;
LAB_6600b3e2:
            FUN_6605b770(piVar3);
          }
          else if (local_2c == 1) {
            iVar7 = FUN_6600d900((uint)param_2,local_10);
            if (iVar7 < 0) break;
            pcVar13 = &DAT_6606c554;
            puVar6 = FUN_6605bab0(local_a4,s_start___6606c54c,local_10);
            puVar6 = FUN_6605ba50(local_b0,puVar6,pcVar13);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_b0);
            piVar3 = local_a4;
            goto LAB_6600b3e2;
          }
          FUN_6605b970(local_10,local_540);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_c8,s_color__6606c544,local_10);
          puVar6 = FUN_6605ba50(local_d4,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_d4);
          FUN_6605b770(local_c8);
          iVar7 = (**(code **)(*local_14 + 0x2c))(local_14,&local_18,&local_24,&local_20,&local_1c);
          if (iVar7 < 0) break;
          if ((((local_18 != 0) || (local_24 != 0)) || (local_20 != 0)) || (local_1c != (int *)0x0))
          {
            FUN_6605bfd0(local_10,s_dstx___d__dsty___d__dstw___d__ds_6606c51c);
            puVar6 = FUN_6605ba50(local_e0,local_10,&DAT_6606c518);
            FUN_6605bbe0(piVar8,puVar6);
            piVar3 = local_e0;
LAB_6600c629:
            FUN_6605b770(piVar3);
          }
LAB_6600c62e:
          FUN_6605bba0(piVar8,&DAT_6606c408);
          FUN_6605bba0(piVar8,&DAT_6606c404);
LAB_6600c9db:
          FUN_6605c550((void *)(param_1 + 0x7c),piVar8);
          piVar8 = (int *)0x0;
          FUN_6605b770(local_10);
          if (*(int *)(param_1 + 0x28) == 0) {
            *(undefined4 *)(param_1 + 0x28) = 1;
          }
          goto LAB_6600ca0c;
        }
      default:
switchD_6600b2c3_default:
        iVar7 = -0x7fffbffb;
        break;
      case 1:
        puVar6 = operator_new(0xc);
        if (puVar6 == (undefined4 *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = FUN_6605b650(puVar6);
        }
        FUN_6605b970(piVar8,s_<fadein_6606c50c);
        iVar7 = (**(code **)(*local_14 + 0x14))(local_14,&param_2);
        if (iVar7 < 0) break;
        if (local_2c == 0) {
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_418,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_400,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_400);
          piVar3 = local_418;
LAB_6600b5c8:
          FUN_6605b770(piVar3);
        }
        else if (local_2c == 1) {
          iVar7 = FUN_6600d900((uint)param_2,local_10);
          if (iVar7 < 0) break;
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_31c,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_74,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770((int *)local_74);
          piVar3 = local_31c;
          goto LAB_6600b5c8;
        }
        iVar7 = (**(code **)(*local_14 + 0x1c))(local_14,&param_2);
        if (-1 < iVar7) {
          if (local_2c == 0) {
            FUN_6605bfd0(local_10,&DAT_6606c2f8);
            pcVar13 = &DAT_6606c554;
            puVar6 = FUN_6605bab0(local_13c,s_duration___6606c500,local_10);
            puVar6 = FUN_6605ba50(local_2bc,puVar6,pcVar13);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_2bc);
            piVar3 = local_13c;
LAB_6600b6b0:
            FUN_6605b770(piVar3);
          }
          else if (local_2c == 1) {
            iVar7 = FUN_6600d900((uint)param_2,local_10);
            if (iVar7 < 0) break;
            pcVar13 = &DAT_6606c554;
            puVar6 = FUN_6605bab0(local_124,s_duration___6606c500,local_10);
            puVar6 = FUN_6605ba50(local_430,puVar6,pcVar13);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_430);
            piVar3 = local_124;
            goto LAB_6600b6b0;
          }
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_154,s_target___6606c4f4,local_10);
          puVar6 = FUN_6605ba50(local_43c,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_43c);
          FUN_6605b770(local_154);
          iVar7 = (**(code **)(*local_14 + 0x2c))(local_14,&local_24,&local_18,&local_1c,&local_20);
          if (-1 < iVar7) {
            if (((local_24 != 0) || (local_18 != 0)) ||
               ((local_1c != (int *)0x0 || (local_20 != 0)))) {
              FUN_6605bfd0(local_10,s_dstx___d__dsty___d__dstw___d__ds_6606c51c);
              puVar6 = FUN_6605ba50(local_2d4,local_10,&DAT_6606c518);
              FUN_6605bbe0(piVar8,puVar6);
              FUN_6605b770(local_2d4);
            }
            iVar7 = (**(code **)(*local_14 + 0x34))
                              (local_14,&local_24,&local_18,&local_1c,&local_20);
            if (-1 < iVar7) {
              if (((local_24 != 0) || (local_18 != 0)) ||
                 ((local_1c != (int *)0x0 || (local_20 != 0)))) {
                FUN_6605bfd0(local_10,s_srcx___d__srcy___d__srcw___d__sr_6606c4cc);
                puVar6 = FUN_6605ba50(local_16c,local_10,&DAT_6606c518);
                FUN_6605bbe0(piVar8,puVar6);
                FUN_6605b770(local_16c);
              }
              uVar12 = 0x103;
              iVar7 = *local_14;
              iVar2 = FUN_6605bc10(local_10,0x104);
              iVar7 = (**(code **)(iVar7 + 0x3c))(local_14,iVar2,uVar12);
              FUN_6605bc90(local_10,-1);
              if (-1 < iVar7) {
                if (*(int *)(local_10[0] + -8) != 0) {
                  pcVar13 = &DAT_6606c554;
                  puVar6 = FUN_6605bab0(local_184,s_url___6606c4c4,local_10);
                  puVar6 = FUN_6605ba50(local_394,puVar6,pcVar13);
                  FUN_6605bbe0(piVar8,puVar6);
                  FUN_6605b770(local_394);
                  FUN_6605b770(local_184);
                }
                iVar7 = (**(code **)(*local_14 + 0x44))(local_14,&local_44);
                if (-1 < iVar7) {
                  if (local_44 == 1) {
                    pcVar13 = s_aspect__true__6606c4b4;
                  }
                  else {
                    pcVar13 = s_aspect__false__6606c4a4;
                  }
                  FUN_6605bba0(piVar8,pcVar13);
                  iVar7 = (**(code **)(*local_14 + 0x4c))(local_14,&param_2);
                  if (-1 < iVar7) {
                    if (param_2 != (undefined4 *)0x0) {
                      FUN_6605bfd0(local_10,&DAT_6606c2f8);
                      pcVar13 = &DAT_6606c554;
                      puVar6 = FUN_6605bab0(local_19c,s_maxfps___6606c498,local_10);
                      puVar6 = FUN_6605ba50(local_2ec,puVar6,pcVar13);
                      FUN_6605bbe0(piVar8,puVar6);
                      FUN_6605b770(local_2ec);
                      piVar3 = local_19c;
                      goto LAB_6600c629;
                    }
                    goto LAB_6600c62e;
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        puVar6 = operator_new(0xc);
        if (puVar6 == (undefined4 *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = FUN_6605b650(puVar6);
        }
        FUN_6605b970(piVar8,s_<fadeout_6606c48c);
        iVar7 = (**(code **)(*local_14 + 0x14))(local_14,&param_2);
        if (iVar7 < 0) break;
        if (local_2c == 0) {
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_1cc,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_304,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_304);
          piVar3 = local_1cc;
LAB_6600ba51:
          FUN_6605b770(piVar3);
        }
        else if (local_2c == 1) {
          iVar7 = FUN_6600d900((uint)param_2,local_10);
          if (iVar7 < 0) break;
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_1b4,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_3f4,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_3f4);
          piVar3 = local_1b4;
          goto LAB_6600ba51;
        }
        iVar7 = (**(code **)(*local_14 + 0x1c))(local_14,&param_2);
        if (-1 < iVar7) {
          if (local_2c == 0) {
            FUN_6605bfd0(local_10,&DAT_6606c2f8);
            pcVar13 = &DAT_6606c554;
            puVar6 = FUN_6605bab0(local_1fc,s_duration___6606c500,local_10);
            puVar6 = FUN_6605ba50(local_10c,puVar6,pcVar13);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_10c);
            piVar3 = local_1fc;
LAB_6600bb39:
            FUN_6605b770(piVar3);
          }
          else if (local_2c == 1) {
            iVar7 = FUN_6600d900((uint)param_2,local_10);
            if (iVar7 < 0) break;
            pcVar13 = &DAT_6606c554;
            puVar6 = FUN_6605bab0(local_1e4,s_duration___6606c500,local_10);
            puVar6 = FUN_6605ba50(local_3ac,puVar6,pcVar13);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_3ac);
            piVar3 = local_1e4;
            goto LAB_6600bb39;
          }
          FUN_6605b970(local_10,local_540);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_214,s_color__6606c544,local_10);
          puVar6 = FUN_6605ba50(local_424,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_424);
          FUN_6605b770(local_214);
          iVar7 = (**(code **)(*local_14 + 0x2c))(local_14,&local_18,&local_24,&local_20,&local_1c);
          if (-1 < iVar7) {
            if ((((local_18 != 0) || (local_24 != 0)) || (local_20 != 0)) ||
               (local_1c != (int *)0x0)) {
              FUN_6605bfd0(local_10,s_dstx___d__dsty___d__dstw___d__ds_6606c51c);
              puVar6 = FUN_6605ba50(local_334,local_10,&DAT_6606c518);
              FUN_6605bbe0(piVar8,puVar6);
              FUN_6605b770(local_334);
            }
            iVar7 = (**(code **)(*local_14 + 0x4c))(local_14,&param_2);
            if (-1 < iVar7) {
              if (param_2 != (undefined4 *)0x0) {
                FUN_6605bfd0(local_10,&DAT_6606c2f8);
                pcVar13 = &DAT_6606c554;
                puVar6 = FUN_6605bab0(local_3c4,s_maxfps___6606c498,local_10);
                puVar6 = FUN_6605ba50(local_22c,puVar6,pcVar13);
                FUN_6605bbe0(piVar8,puVar6);
                FUN_6605b770(local_22c);
                piVar3 = local_3c4;
                goto LAB_6600c629;
              }
              goto LAB_6600c62e;
            }
          }
        }
        break;
      case 3:
        puVar6 = operator_new(0xc);
        if (puVar6 == (undefined4 *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = FUN_6605b650(puVar6);
        }
        FUN_6605b970(piVar8,s_<crossfade_6606c480);
        iVar7 = (**(code **)(*local_14 + 0x14))(local_14,&param_2);
        if (iVar7 < 0) break;
        if (local_2c == 0) {
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_40c,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_25c,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_25c);
          piVar3 = local_40c;
LAB_6600bda0:
          FUN_6605b770(piVar3);
        }
        else if (local_2c == 1) {
          iVar7 = FUN_6600d900((uint)param_2,local_10);
          if (iVar7 < 0) break;
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_34c,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_244,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_244);
          piVar3 = local_34c;
          goto LAB_6600bda0;
        }
        iVar7 = (**(code **)(*local_14 + 0x1c))(local_14,&param_2);
        if (-1 < iVar7) {
          if (local_2c == 0) {
            FUN_6605bfd0(local_10,&DAT_6606c2f8);
            pcVar13 = &DAT_6606c554;
            puVar6 = FUN_6605bab0(local_3dc,s_duration___6606c500,local_10);
            puVar6 = FUN_6605ba50(local_28c,puVar6,pcVar13);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_28c);
            piVar3 = local_3dc;
LAB_6600be88:
            FUN_6605b770(piVar3);
          }
          else if (local_2c == 1) {
            iVar7 = FUN_6600d900((uint)param_2,local_10);
            if (iVar7 < 0) break;
            pcVar13 = &DAT_6606c554;
            puVar6 = FUN_6605bab0(local_364,s_duration___6606c500,local_10);
            puVar6 = FUN_6605ba50(local_274,puVar6,pcVar13);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_274);
            piVar3 = local_364;
            goto LAB_6600be88;
          }
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_37c,s_target___6606c4f4,local_10);
          puVar6 = FUN_6605ba50(local_2a4,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_2a4);
          FUN_6605b770(local_37c);
          iVar7 = (**(code **)(*local_14 + 0x2c))(local_14,&local_18,&local_24,&local_20,&local_1c);
          if (-1 < iVar7) {
            if (((local_18 != 0) || (local_24 != 0)) ||
               ((local_20 != 0 || (local_1c != (int *)0x0)))) {
              FUN_6605bfd0(local_10,s_dstx___d__dsty___d__dstw___d__ds_6606c51c);
              puVar6 = FUN_6605ba50(local_118,local_10,&DAT_6606c518);
              FUN_6605bbe0(piVar8,puVar6);
              FUN_6605b770(local_118);
            }
            iVar7 = (**(code **)(*local_14 + 0x34))
                              (local_14,&local_18,&local_24,&local_20,&local_1c);
            if (-1 < iVar7) {
              if (((local_18 != 0) || (local_24 != 0)) ||
                 ((local_20 != 0 || (local_1c != (int *)0x0)))) {
                FUN_6605bfd0(local_10,s_srcx___d__srcy___d__srcw___d__sr_6606c4cc);
                puVar6 = FUN_6605ba50(local_130,local_10,&DAT_6606c518);
                FUN_6605bbe0(piVar8,puVar6);
                FUN_6605b770(local_130);
              }
              uVar12 = 0x103;
              iVar7 = *local_14;
              iVar2 = FUN_6605bc10(local_10,0x104);
              iVar7 = (**(code **)(iVar7 + 0x3c))(local_14,iVar2,uVar12);
              FUN_6605bc90(local_10,-1);
              if (-1 < iVar7) {
                if (*(int *)(local_10[0] + -8) != 0) {
                  pcVar13 = &DAT_6606c554;
                  puVar6 = FUN_6605bab0(local_160,s_url___6606c4c4,local_10);
                  puVar6 = FUN_6605ba50(local_148,puVar6,pcVar13);
                  FUN_6605bbe0(piVar8,puVar6);
                  FUN_6605b770(local_148);
                  FUN_6605b770(local_160);
                }
                iVar7 = (**(code **)(*local_14 + 0x44))(local_14,&local_44);
                if (-1 < iVar7) {
                  if (local_44 == 1) {
                    pcVar13 = s_aspect__true__6606c4b4;
                  }
                  else {
                    pcVar13 = s_aspect__false__6606c4a4;
                  }
                  FUN_6605bba0(piVar8,pcVar13);
                  iVar7 = (**(code **)(*local_14 + 0x4c))(local_14,&param_2);
                  if (-1 < iVar7) {
                    if (param_2 != (undefined4 *)0x0) {
                      FUN_6605bfd0(local_10,&DAT_6606c2f8);
                      pcVar13 = &DAT_6606c554;
                      puVar6 = FUN_6605bab0(local_190,s_maxfps___6606c498,local_10);
                      puVar6 = FUN_6605ba50(local_178,puVar6,pcVar13);
                      FUN_6605bbe0(piVar8,puVar6);
                      FUN_6605b770(local_178);
                      piVar3 = local_190;
                      goto LAB_6600c629;
                    }
                    goto LAB_6600c62e;
                  }
                }
              }
            }
          }
        }
        break;
      case 4:
        puVar6 = operator_new(0xc);
        if (puVar6 == (undefined4 *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = FUN_6605b650(puVar6);
        }
        FUN_6605b970(piVar8,s_<wipe_6606c478);
        iVar7 = (**(code **)(*local_14 + 0x14))(local_14,&param_2);
        if (iVar7 < 0) break;
        if (local_2c == 0) {
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_1f0,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_1d8,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_1d8);
          piVar3 = local_1f0;
LAB_6600c229:
          FUN_6605b770(piVar3);
        }
        else if (local_2c == 1) {
          iVar7 = FUN_6600d900((uint)param_2,local_10);
          if (iVar7 < 0) break;
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_1c0,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_1a8,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_1a8);
          piVar3 = local_1c0;
          goto LAB_6600c229;
        }
        iVar7 = (**(code **)(*local_14 + 0x1c))(local_14,&param_2);
        if (iVar7 < 0) break;
        if (local_2c == 0) {
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_250,s_duration___6606c500,local_10);
          puVar6 = FUN_6605ba50(local_238,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_238);
          piVar3 = local_250;
LAB_6600c311:
          FUN_6605b770(piVar3);
        }
        else if (local_2c == 1) {
          iVar7 = FUN_6600d900((uint)param_2,local_10);
          if (iVar7 < 0) break;
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_220,s_duration___6606c500,local_10);
          puVar6 = FUN_6605ba50(local_208,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_208);
          piVar3 = local_220;
          goto LAB_6600c311;
        }
        FUN_6605bfd0(local_10,&DAT_6606c2f8);
        pcVar13 = &DAT_6606c554;
        puVar6 = FUN_6605bab0(local_280,s_target___6606c4f4,local_10);
        puVar6 = FUN_6605ba50(local_268,puVar6,pcVar13);
        FUN_6605bbe0(piVar8,puVar6);
        FUN_6605b770(local_268);
        FUN_6605b770(local_280);
        iVar7 = (**(code **)(*local_14 + 0x54))(local_14,&local_84);
        if (-1 < iVar7) {
          if (local_84 == 0) {
            pcVar13 = s_type__push__6606c458;
          }
          else {
            if (local_84 != 1) goto switchD_6600b2c3_default;
            pcVar13 = s_type__normal__6606c468;
          }
          FUN_6605bba0(piVar8,pcVar13);
          iVar7 = (**(code **)(*local_14 + 0x5c))(local_14,&local_8c);
          if (-1 < iVar7) {
            switch(local_8c) {
            case 0:
              pcVar13 = s_direction__up__6606c448;
              break;
            case 1:
              pcVar13 = s_direction__down__6606c434;
              break;
            case 2:
              pcVar13 = s_direction__left__6606c420;
              break;
            case 3:
              pcVar13 = s_direction__right__6606c40c;
              break;
            default:
              goto switchD_6600b2c3_default;
            }
            FUN_6605bba0(piVar8,pcVar13);
            iVar7 = (**(code **)(*local_14 + 0x2c))
                              (local_14,&local_18,&local_24,&local_20,&local_1c);
            if (-1 < iVar7) {
              if (((local_18 != 0) || (local_24 != 0)) ||
                 ((local_20 != 0 || (local_1c != (int *)0x0)))) {
                FUN_6605bfd0(local_10,s_dstx___d__dsty___d__dstw___d__ds_6606c51c);
                puVar6 = FUN_6605ba50(local_298,local_10,&DAT_6606c518);
                FUN_6605bbe0(piVar8,puVar6);
                FUN_6605b770(local_298);
              }
              iVar7 = (**(code **)(*local_14 + 0x34))
                                (local_14,&local_18,&local_24,&local_20,&local_1c);
              if (-1 < iVar7) {
                if ((((local_18 != 0) || (local_24 != 0)) || (local_20 != 0)) ||
                   (local_1c != (int *)0x0)) {
                  FUN_6605bfd0(local_10,s_srcx___d__srcy___d__srcw___d__sr_6606c4cc);
                  puVar6 = FUN_6605ba50(local_2b0,local_10,&DAT_6606c518);
                  FUN_6605bbe0(piVar8,puVar6);
                  FUN_6605b770(local_2b0);
                }
                uVar12 = 0x103;
                iVar7 = *local_14;
                iVar2 = FUN_6605bc10(local_10,0x104);
                iVar7 = (**(code **)(iVar7 + 0x3c))(local_14,iVar2,uVar12);
                FUN_6605bc90(local_10,-1);
                if (-1 < iVar7) {
                  if (*(int *)(local_10[0] + -8) != 0) {
                    pcVar13 = &DAT_6606c554;
                    puVar6 = FUN_6605bab0(local_2e0,s_url___6606c4c4,local_10);
                    puVar6 = FUN_6605ba50(local_2c8,puVar6,pcVar13);
                    FUN_6605bbe0(piVar8,puVar6);
                    FUN_6605b770(local_2c8);
                    FUN_6605b770(local_2e0);
                  }
                  iVar7 = (**(code **)(*local_14 + 0x44))(local_14,&local_44);
                  if (-1 < iVar7) {
                    if (local_44 == 1) {
                      pcVar13 = s_aspect__true__6606c4b4;
                    }
                    else {
                      pcVar13 = s_aspect__false__6606c4a4;
                    }
                    FUN_6605bba0(piVar8,pcVar13);
                    iVar7 = (**(code **)(*local_14 + 0x4c))(local_14,&param_2);
                    if (-1 < iVar7) {
                      if (param_2 != (undefined4 *)0x0) {
                        FUN_6605bfd0(local_10,&DAT_6606c2f8);
                        pcVar13 = &DAT_6606c554;
                        puVar6 = FUN_6605bab0(local_310,s_maxfps___6606c498,local_10);
                        puVar6 = FUN_6605ba50(local_2f8,puVar6,pcVar13);
                        FUN_6605bbe0(piVar8,puVar6);
                        FUN_6605b770(local_2f8);
                        piVar3 = local_310;
                        goto LAB_6600c629;
                      }
                      goto LAB_6600c62e;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case 5:
        puVar6 = operator_new(0xc);
        if (puVar6 == (undefined4 *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = FUN_6605b650(puVar6);
        }
        FUN_6605b970(piVar8,s_<viewchange_6606c3f4);
        iVar7 = (**(code **)(*local_14 + 0x14))(local_14,&param_2);
        if (iVar7 < 0) break;
        if (local_2c == 0) {
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_370,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_358,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_358);
          piVar3 = local_370;
LAB_6600c75c:
          FUN_6605b770(piVar3);
        }
        else if (local_2c == 1) {
          iVar7 = FUN_6600d900((uint)param_2,local_10);
          if (iVar7 < 0) break;
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_340,s_start___6606c54c,local_10);
          puVar6 = FUN_6605ba50(local_328,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_328);
          piVar3 = local_340;
          goto LAB_6600c75c;
        }
        iVar7 = (**(code **)(*local_14 + 0x1c))(local_14,&param_2);
        if (iVar7 < 0) break;
        if (local_2c == 0) {
          FUN_6605bfd0(local_10,&DAT_6606c2f8);
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_3d0,s_duration___6606c500,local_10);
          puVar6 = FUN_6605ba50(local_3b8,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_3b8);
          piVar3 = local_3d0;
LAB_6600c844:
          FUN_6605b770(piVar3);
        }
        else if (local_2c == 1) {
          iVar7 = FUN_6600d900((uint)param_2,local_10);
          if (iVar7 < 0) break;
          pcVar13 = &DAT_6606c554;
          puVar6 = FUN_6605bab0(local_3a0,s_duration___6606c500,local_10);
          puVar6 = FUN_6605ba50(local_388,puVar6,pcVar13);
          FUN_6605bbe0(piVar8,puVar6);
          FUN_6605b770(local_388);
          piVar3 = local_3a0;
          goto LAB_6600c844;
        }
        iVar7 = (**(code **)(*local_14 + 0x2c))(local_14,&local_18,&local_24,&local_20,&local_1c);
        if (-1 < iVar7) {
          if ((((local_18 != 0) || (local_24 != 0)) || (local_20 != 0)) || (local_1c != (int *)0x0))
          {
            FUN_6605bfd0(local_10,s_dstx___d__dsty___d__dstw___d__ds_6606c51c);
            puVar6 = FUN_6605ba50(local_3e8,local_10,&DAT_6606c518);
            FUN_6605bbe0(piVar8,puVar6);
            FUN_6605b770(local_3e8);
          }
          iVar7 = (**(code **)(*local_14 + 0x34))(local_14,&local_18,&local_24,&local_20,&local_1c);
          if (-1 < iVar7) {
            if (((local_18 != 0) || (local_24 != 0)) ||
               ((local_20 != 0 || (local_1c != (int *)0x0)))) {
              FUN_6605bfd0(local_10,s_srcx___d__srcy___d__srcw___d__sr_6606c4cc);
              puVar6 = FUN_6605ba50(local_5c,local_10,&DAT_6606c518);
              FUN_6605bbe0(piVar8,puVar6);
              FUN_6605b770(local_5c);
            }
            iVar7 = (**(code **)(*local_14 + 0x4c))(local_14,&param_2);
            if (-1 < iVar7) {
              if (param_2 != (undefined4 *)0x0) {
                FUN_6605bfd0(local_10,&DAT_6606c2f8);
                pcVar13 = &DAT_6606c554;
                puVar6 = FUN_6605bab0(local_ec,s_maxfps___6606c498,local_10);
                puVar6 = FUN_6605ba50(local_fc,puVar6,pcVar13);
                FUN_6605bbe0(piVar8,puVar6);
                FUN_6605b770(local_fc);
                FUN_6605b770(local_ec);
              }
              FUN_6605bba0(piVar8,&DAT_6606c408);
              FUN_6605bba0(piVar8,&DAT_6606c404);
              goto LAB_6600c9db;
            }
          }
        }
      }
    }
  }
  else if (local_18 == 1) {
    FUN_6605b650(local_10);
    FUN_6605b650(local_74);
    uVar12 = 0x104;
    iVar7 = *local_34;
    iVar2 = FUN_6605bc10(local_10,0x104);
    iVar7 = (**(code **)(iVar7 + 0x1c))(local_34,iVar2,uVar12);
    if (-1 < iVar7) {
      FUN_6605bc90(local_10,-1);
      piVar3 = FUN_6604fb50(0);
      if (piVar3 == (int *)0x0) {
        iVar7 = -0x7ff8fff2;
      }
      else {
        iVar7 = (**(code **)(*piVar3 + 0x10))(local_10[0],0x8000,0);
        if (-1 < iVar7) {
          (**(code **)(*piVar3 + 0x1c))();
          (**(code **)(*piVar3 + 0x18))();
          (**(code **)*piVar3)(1);
          iVar7 = FUN_6605bf70(local_10,'.');
          piVar8 = FUN_6605be40(local_10,local_98,iVar7 + 1);
          FUN_6605b900(local_74,piVar8);
          FUN_6605b770(local_98);
          pbVar9 = &DAT_6606c5ec;
          pbVar5 = local_74[0];
          do {
            bVar1 = *pbVar5;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_6600b0d2:
              iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_6600b0d7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_6600b0d2;
            pbVar5 = pbVar5 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_6600b0d7:
          if (iVar7 == 0) {
LAB_6600b18a:
            iVar7 = FUN_6605bf70(local_10,'\\');
            FUN_6605be40(local_10,local_b0,iVar7 + 1);
            FUN_6605bfd0(local_80,s_<image_handle___d__name___s__siz_6606c5a8);
            piVar8 = local_b0;
LAB_6600b1c7:
            FUN_6605b770(piVar8);
          }
          else {
            pbVar9 = &DAT_6606c5a0;
            pbVar5 = local_74[0];
            do {
              bVar1 = *pbVar5;
              bVar11 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_6600b10a:
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_6600b10f;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar11 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_6600b10a;
              pbVar5 = pbVar5 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_6600b10f:
            if (iVar7 == 0) goto LAB_6600b18a;
            pbVar5 = &DAT_6606c59c;
            do {
              bVar1 = *local_74[0];
              bVar11 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_6600b13e:
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_6600b143;
              }
              if (bVar1 == 0) break;
              bVar1 = local_74[0][1];
              bVar11 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_6600b13e;
              local_74[0] = local_74[0] + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_6600b143:
            if (iVar7 == 0) {
              iVar7 = FUN_6605bf70(local_10,'\\');
              FUN_6605be40(local_10,local_a4,iVar7 + 1);
              FUN_6605bfd0(local_80,s_<image_handle___d__name___s__siz_6606c560);
              piVar8 = local_a4;
              goto LAB_6600b1c7;
            }
          }
          FUN_6605b770((int *)local_74);
          FUN_6605b770(local_10);
          piVar8 = local_1c;
          goto LAB_6600b1df;
        }
      }
    }
    FUN_6605b770((int *)local_74);
  }
  else {
    if (local_18 != 2) {
      iVar7 = -0x7fffbffb;
      goto LAB_6600ca0c;
    }
    param_2 = (undefined4 *)0x0;
    FUN_6605b650(local_10);
    FUN_660516d0(local_68);
    iVar7 = (**(code **)(*local_34 + 0x14))(local_34,&local_3c);
    if (-1 < iVar7) {
      uVar12 = 0x104;
      iVar7 = *local_34;
      iVar2 = FUN_6605bc10(local_10,0x104);
      iVar7 = (**(code **)(iVar7 + 0x1c))(local_34,iVar2,uVar12);
      if (iVar7 < 0) {
        thunk_FUN_6605b610(local_10);
      }
      FUN_6605bc90(local_10,-1);
      iVar7 = FUN_6604ee00(local_68,3,s_RMACreateMediaHandlerFactory_6606c5f4,(int)&local_38);
      if (((-1 < iVar7) && (iVar7 = (**(code **)(*local_3c + 0x14))(local_3c,&local_48), -1 < iVar7)
          ) && ((iVar7 = (**(code **)(*local_48 + 0xc))(local_48,local_100), -1 < iVar7 &&
                (iVar7 = (**(code **)(*local_48 + 0x10))(local_48,local_f0), -1 < iVar7)))) {
        iVar7 = 0x10;
        bVar11 = true;
        pcVar13 = local_100;
        pcVar10 = &DAT_66065d48;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar11 = *pcVar13 == *pcVar10;
          pcVar13 = pcVar13 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar11);
        if (bVar11) {
          iVar7 = 0x10;
          bVar11 = true;
          pcVar13 = local_f0;
          pcVar10 = &DAT_66065df8;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar11 = *pcVar13 == *pcVar10;
            pcVar13 = pcVar13 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar11);
          if (bVar11) {
            iVar7 = (**(code **)(*local_38 + 0xc))(local_38,&DAT_66065f48,0,&DAT_66065ca8,&local_30)
            ;
            if ((-1 < iVar7) && (local_30 != (int *)0x0)) {
              iVar7 = (**(code **)(*local_30 + 0x28))(local_30,&param_2);
              if (-1 < iVar7) {
                if (param_2 == (undefined4 *)0x1) {
                  iVar7 = (**(code **)(*local_30 + 0x2c))(local_30,&local_3c,1);
                  if (((-1 < iVar7) &&
                      (iVar7 = (**(code **)(*local_30 + 0x24))(local_30,0), -1 < iVar7)) &&
                     (iVar7 = (**(code **)(*local_30 + 0x30))(local_30,&param_2), -1 < iVar7)) {
                    if (param_2 != (undefined4 *)0x1) goto LAB_6600afc6;
                    iVar7 = (**(code **)(*local_30 + 0x34))(local_30,&local_50);
                    if (-1 < iVar7) {
                      if (local_3c != (int *)0x0) {
                        (**(code **)(*local_3c + 8))(local_3c);
                        local_3c = (int *)0x0;
                      }
                      if (local_4c != (int *)0x0) {
                        (**(code **)(*local_4c + 8))(local_4c);
                        local_4c = (int *)0x0;
                      }
                      if (local_30 != (int *)0x0) {
                        (**(code **)(*local_30 + 8))(local_30);
                        local_30 = (int *)0x0;
                      }
                      iVar7 = (**(code **)(*local_38 + 0xc))
                                        (local_38,&DAT_66066058,0,&DAT_66065cb8,&local_28);
                      if ((iVar7 < 0) || (local_28 == (int *)0x0)) goto LAB_6600cc87;
                      piVar3 = FUN_6604fb50(0);
                      if (piVar3 == (int *)0x0) {
                        iVar7 = -0x7ff8fff2;
                      }
                      else {
                        if (*(int *)(local_10[0] + -8) == 0) {
                          iVar7 = *piVar3;
                          iVar2 = FUN_6605bc10(local_10,0x104);
                          (**(code **)(iVar7 + 8))(&DAT_6606c5f0,iVar2);
                          FUN_6605bc90(local_10,-1);
                          iVar7 = FUN_6605bf70(local_10,'\\');
                          piVar4 = FUN_6605be40(local_10,local_e0,iVar7 + 1);
                          FUN_6605b900(local_10,piVar4);
                          FUN_6605b770(local_e0);
                          FUN_6605bcf0(local_10,&DAT_6606c5e8,&DAT_6606c5ec,0);
                        }
                        iVar7 = (**(code **)(*local_28 + 0x10))(local_28,local_10[0]);
                        if ((-1 < iVar7) &&
                           (iVar7 = (**(code **)(*local_28 + 0x18))(local_28,&local_50,1),
                           -1 < iVar7)) {
                          if (local_28 != (int *)0x0) {
                            (**(code **)(*local_28 + 8))(local_28);
                            local_28 = (int *)0x0;
                          }
                          iVar7 = (**(code **)(*piVar3 + 0x10))(local_10[0],0x8000,0);
                          if (-1 < iVar7) {
                            iVar7 = FUN_6605bf70(local_10,'\\');
                            FUN_6605be40(local_10,local_c8,iVar7 + 1);
                            (**(code **)(*piVar3 + 0x1c))();
                            FUN_6605bfd0(local_80,s_<image_handle___d__name___s__siz_6606c5a8);
                            piVar4 = local_c8;
                            goto LAB_6600cc4a;
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_6600afc6:
                  if (-1 < iVar7) goto LAB_6600afca;
                }
              }
              goto LAB_6600afcf;
            }
          }
          else {
            iVar7 = 0x10;
            bVar11 = true;
            pcVar13 = local_f0;
            pcVar10 = &DAT_66065e08;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar11 = *pcVar13 == *pcVar10;
              pcVar13 = pcVar13 + 1;
              pcVar10 = pcVar10 + 1;
            } while (bVar11);
            if (!bVar11) goto LAB_6600afca;
            iVar7 = (**(code **)(*local_38 + 0xc))(local_38,&DAT_66066068,0,&DAT_66065cb8,&local_28)
            ;
            if ((-1 < iVar7) && (local_28 != (int *)0x0)) {
              piVar3 = FUN_6604fb50(0);
              if (piVar3 == (int *)0x0) {
                iVar7 = -0x7ff8fff2;
              }
              else {
                if (*(int *)(local_10[0] + -8) == 0) {
                  iVar7 = *piVar3;
                  iVar2 = FUN_6605bc10(local_10,0x104);
                  (**(code **)(iVar7 + 8))(&DAT_6606c5f0,iVar2);
                  FUN_6605bc90(local_10,-1);
                  iVar7 = FUN_6605bf70(local_10,'\\');
                  piVar4 = FUN_6605be40(local_10,local_d4,iVar7 + 1);
                  FUN_6605b900(local_10,piVar4);
                  FUN_6605b770(local_d4);
                  FUN_6605bcf0(local_10,&DAT_6606c5e8,&DAT_6606c59c,0);
                }
                iVar7 = (**(code **)(*local_28 + 0x10))(local_28,local_10[0]);
                if ((-1 < iVar7) &&
                   (iVar7 = (**(code **)(*local_28 + 0x18))(local_28,&local_3c,1), -1 < iVar7)) {
                  if (local_28 != (int *)0x0) {
                    (**(code **)(*local_28 + 8))(local_28);
                    local_28 = (int *)0x0;
                  }
                  iVar7 = (**(code **)(*piVar3 + 0x10))(local_10[0],0x8000,0);
                  if (-1 < iVar7) {
                    iVar7 = FUN_6605bf70(local_10,'\\');
                    FUN_6605be40(local_10,local_bc,iVar7 + 1);
                    (**(code **)(*piVar3 + 0x1c))();
                    FUN_6605bfd0(local_80,s_<image_handle___d__name___s__siz_6606c560);
                    piVar4 = local_bc;
LAB_6600cc4a:
                    FUN_6605b770(piVar4);
                    (**(code **)(*piVar3 + 0x18))();
                    (**(code **)*piVar3)(1);
                    if (local_38 != (int *)0x0) {
                      (**(code **)(*local_38 + 8))(local_38);
                      local_38 = (int *)0x0;
                    }
                    FUN_66051720(local_68);
                    FUN_6605b770(local_10);
                    goto LAB_6600b1df;
                  }
                }
              }
              goto LAB_6600afcf;
            }
          }
LAB_6600cc87:
          iVar7 = -0x7ff8fff2;
        }
        else {
LAB_6600afca:
          iVar7 = -0x7fffbffb;
        }
      }
    }
LAB_6600afcf:
    FUN_66051720(local_68);
  }
LAB_6600ca07:
  FUN_6605b770(local_10);
LAB_6600ca0c:
  if (local_48 != (int *)0x0) {
    (**(code **)(*local_48 + 8))(local_48);
    local_48 = (int *)0x0;
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
    local_14 = (int *)0x0;
  }
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 8))(local_50);
    local_50 = (int *)0x0;
  }
  if (piVar8 != (int *)0x0) {
    FUN_6605b770(piVar8);
    operator_delete(piVar8);
  }
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))(local_30);
    local_30 = (int *)0x0;
  }
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
    local_28 = (int *)0x0;
  }
  if (local_4c != (int *)0x0) {
    (**(code **)(*local_4c + 8))(local_4c);
    local_4c = (int *)0x0;
  }
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 8))(local_3c);
    local_3c = (int *)0x0;
  }
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))(local_34);
    local_34 = (int *)0x0;
  }
  if (local_40 != (int *)0x0) {
    (**(code **)(*local_40 + 8))(local_40);
    local_40 = (int *)0x0;
  }
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))(local_38);
    local_38 = (int *)0x0;
  }
  FUN_6605b770((int *)local_80);
  return iVar7;
}


