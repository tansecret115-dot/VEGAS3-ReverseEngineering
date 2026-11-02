/* Module: rmme3260.dll
   Function: FUN_66226f20
   Address: 66226f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66226f20(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined2 uVar5;
  int *piVar6;
  void *pvVar7;
  int iVar8;
  undefined2 extraout_var;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  byte **ppbVar12;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  void *pvVar16;
  uint uVar17;
  char *pcVar18;
  ushort *puVar19;
  bool bVar20;
  undefined4 *in_stack_fffffc88;
  undefined4 in_stack_fffffc8c;
  void *in_stack_fffffc90;
  undefined4 uVar21;
  undefined4 *puVar22;
  int local_354 [3];
  int local_348 [3];
  int local_33c [3];
  int local_330 [3];
  int local_324 [3];
  int local_318 [3];
  int local_30c [3];
  int local_300 [3];
  int local_2f4 [3];
  int local_2e8 [3];
  int local_2dc [3];
  int local_2d0 [3];
  int local_2c4 [3];
  int local_2b8 [3];
  int local_2ac [3];
  int local_2a0 [3];
  int local_294 [3];
  int local_288 [3];
  int local_27c [3];
  int local_270 [3];
  int local_264 [3];
  int local_258 [3];
  int local_24c [3];
  int local_240 [3];
  int local_234 [3];
  int local_228 [3];
  int local_21c [3];
  int local_210 [3];
  int local_204 [3];
  int local_1f8 [3];
  int local_1ec [3];
  int local_1e0 [3];
  int local_1d4 [3];
  int local_1c8 [3];
  int local_1bc [3];
  int local_1b0 [3];
  int local_1a4 [3];
  int local_198 [3];
  int local_18c [3];
  char *local_180 [3];
  char *local_174 [3];
  char *local_168 [3];
  int local_15c [3];
  int local_150 [3];
  char *local_144 [3];
  char *local_138 [3];
  int local_12c [3];
  int local_120 [3];
  char *local_114 [3];
  int local_108 [3];
  char *local_fc [3];
  int local_f0 [3];
  char *local_e4 [3];
  ushort *local_d8;
  int local_d4 [3];
  int local_c8 [3];
  int local_bc [3];
  char *local_b0 [3];
  void *local_a4;
  undefined4 local_a0;
  uint local_9c;
  byte *local_98 [3];
  ushort *local_8c;
  char *local_88 [3];
  int local_7c [3];
  int local_70 [3];
  byte *local_64 [3];
  uint local_58;
  byte *local_54 [3];
  int local_48 [3];
  uint local_3c;
  uint local_38;
  int *local_34;
  int local_30 [3];
  ushort *local_24;
  int local_20;
  uint local_1c;
  ushort *local_18;
  int *local_14;
  void *local_10;
  byte *local_c;
  byte local_5;
  
  uVar9 = *(uint *)(param_1 + 0x1a);
  pcVar15 = (char *)(uVar9 & 0xffff);
  local_d8 = (ushort *)pcVar15;
  local_9c = uVar9;
  local_20 = param_1;
  piVar6 = operator_new((int)pcVar15 * 4);
  local_14 = piVar6;
  local_8c = operator_new((int)pcVar15 * 2);
  if ((short)uVar9 != 0) {
    local_3c = 0;
    local_34 = piVar6;
    local_24 = (ushort *)pcVar15;
    local_18 = local_8c;
    do {
      local_38 = 0;
      pvVar7 = *(void **)(local_3c + *(int *)(local_20 + 0x16));
      local_a4 = pvVar7;
      FUN_66218240(pvVar7,local_98);
      uVar4 = FUN_66219120((int)pvVar7);
      puVar19 = local_18;
      pcVar15 = s_logical_video_x_pn_multirate_rea_6626fa34;
      *local_18 = uVar4;
      pbVar13 = local_98[0];
      do {
        bVar1 = *pbVar13;
        bVar20 = bVar1 < (byte)*pcVar15;
        if (bVar1 != *pcVar15) {
LAB_66226feb:
          iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
          goto LAB_66226ff0;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar13[1];
        bVar20 = bVar1 < (byte)pcVar15[1];
        if (bVar1 != pcVar15[1]) goto LAB_66226feb;
        pbVar13 = pbVar13 + 2;
        pcVar15 = pcVar15 + 2;
      } while (bVar1 != 0);
      iVar14 = 0;
LAB_66226ff0:
      if (iVar14 == 0) {
        if ((*(int *)(local_20 + 0x58) == 0) && (-1 < *(int *)(local_20 + 0x54))) {
          *local_18 = uVar4 - 1;
        }
        if (-1 < *(int *)(local_20 + 0x5c)) {
          *local_18 = *local_18 - 1;
        }
        iVar14 = *(int *)(local_20 + 0x60);
joined_r0x66227081:
        if (-1 < iVar14) {
          *local_18 = *local_18 - 1;
        }
      }
      else {
        pcVar15 = s_logical_audio_x_pn_multirate_rea_6626fa0c;
        pbVar13 = local_98[0];
        do {
          bVar1 = *pbVar13;
          bVar20 = bVar1 < (byte)*pcVar15;
          if (bVar1 != *pcVar15) {
LAB_66227054:
            iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_66227059;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar13[1];
          bVar20 = bVar1 < (byte)pcVar15[1];
          if (bVar1 != pcVar15[1]) goto LAB_66227054;
          pbVar13 = pbVar13 + 2;
          pcVar15 = pcVar15 + 2;
        } while (bVar1 != 0);
        iVar14 = 0;
LAB_66227059:
        if (iVar14 == 0) {
          if ((*(int *)(local_20 + 0x68) == 0) && (-1 < *(int *)(local_20 + 100))) {
            *local_18 = uVar4 - 1;
          }
          iVar14 = *(int *)(local_20 + 0x6c);
          goto joined_r0x66227081;
        }
      }
      pvVar7 = operator_new((uint)*local_18 << 3);
      iVar14 = local_20;
      *local_34 = (int)pvVar7;
      local_1c = 0;
      local_c = (byte *)0x0;
      local_10 = (void *)0x0;
      local_58 = 0;
      if (*puVar19 != 0) {
        do {
          local_1c = 0;
          local_c = (byte *)0x0;
          local_a0 = 0;
          FUN_66219890(local_a4,(uint)local_10 & 0xffff,(undefined2 *)&local_1c,(undefined4 *)0x0);
          pvVar7 = local_a4;
          pcVar15 = s_logical_audio_x_pn_multirate_rea_6626fa0c;
          pbVar13 = local_98[0];
          do {
            bVar1 = *pbVar13;
            bVar20 = bVar1 < (byte)*pcVar15;
            if (bVar1 != *pcVar15) {
LAB_66227112:
              iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              goto LAB_66227117;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar20 = bVar1 < (byte)pcVar15[1];
            if (bVar1 != pcVar15[1]) goto LAB_66227112;
            pbVar13 = pbVar13 + 2;
            pcVar15 = pcVar15 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_66227117:
          pvVar16 = local_10;
          if (iVar8 == 0) {
            while (((local_1c & 0xffff) == *(uint *)(iVar14 + 0x6c) ||
                   ((*(int *)(iVar14 + 0x68) == 0 &&
                    ((local_1c & 0xffff) == *(uint *)(iVar14 + 100)))))) {
              FUN_66219890(pvVar7,(uint)((int)pvVar16 + 1) & 0xffff,(undefined2 *)&local_1c,
                           (undefined4 *)0x0);
              pvVar16 = (void *)((int)pvVar16 + 1);
            }
          }
          else {
            pcVar15 = s_logical_video_x_pn_multirate_rea_6626fa34;
            pbVar13 = local_98[0];
            do {
              bVar1 = *pbVar13;
              bVar20 = bVar1 < (byte)*pcVar15;
              if (bVar1 != *pcVar15) {
LAB_66227192:
                iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_66227197;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar13[1];
              bVar20 = bVar1 < (byte)pcVar15[1];
              if (bVar1 != pcVar15[1]) goto LAB_66227192;
              pbVar13 = pbVar13 + 2;
              pcVar15 = pcVar15 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_66227197:
            if (iVar8 == 0) {
              while (((uVar9 = local_1c & 0xffff, uVar9 == *(uint *)(iVar14 + 0x5c) ||
                      (uVar9 == *(uint *)(iVar14 + 0x60))) ||
                     ((*(int *)(iVar14 + 0x58) == 0 && (uVar9 == *(uint *)(iVar14 + 0x54)))))) {
                FUN_66219890(pvVar7,(uint)((int)pvVar16 + 1) & 0xffff,(undefined2 *)&local_1c,
                             (undefined4 *)0x0);
                pvVar16 = (void *)((int)pvVar16 + 1);
              }
            }
          }
          local_10 = pvVar16;
          pcVar15 = s_logical_audio_x_pn_multirate_rea_6626fa0c;
          pvVar7 = *(void **)(*(int *)(iVar14 + 0x26) + (local_1c & 0xffff) * 4);
          pbVar13 = local_98[0];
          do {
            bVar1 = *pbVar13;
            bVar20 = bVar1 < (byte)*pcVar15;
            if (bVar1 != *pcVar15) {
LAB_66227222:
              iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              goto LAB_66227227;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar20 = bVar1 < (byte)pcVar15[1];
            if (bVar1 != pcVar15[1]) goto LAB_66227222;
            pbVar13 = pbVar13 + 2;
            pcVar15 = pcVar15 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_66227227:
          if (iVar8 == 0) {
            uVar5 = FUN_66218520((int)pvVar7);
            local_a0 = CONCAT22(extraout_var,uVar5);
          }
          FUN_66217fa0(pvVar7,(undefined4 *)0x0,&local_c);
          uVar9 = local_58 & 0xffff;
          iVar8 = uVar9 * 8;
          *(byte **)(*local_34 + 2 + iVar8) = local_c;
          if (local_38 == 0) {
            local_38 = (uint)((local_1c & 0xffff) == *(uint *)(iVar14 + 0x4c));
          }
          if ((local_1c & 0xffff) == *(uint *)(iVar14 + 0x4c)) {
            puVar10 = (undefined4 *)*local_34;
            puVar10[uVar9 * 2] = *puVar10;
            puVar10[uVar9 * 2 + 1] = puVar10[1];
            *(undefined2 *)*local_34 = (undefined2)local_1c;
            *(byte **)(*local_34 + 2) = local_c;
            *(undefined2 *)(*local_34 + 6) = (undefined2)local_a0;
          }
          else {
            *(undefined2 *)(*local_34 + iVar8) = (undefined2)local_1c;
            *(byte **)(*local_34 + 2 + iVar8) = local_c;
            *(undefined2 *)(*local_34 + 6 + iVar8) = (undefined2)local_a0;
          }
          local_58 = local_58 + 1;
          local_10 = (void *)((int)local_10 + 1);
          puVar19 = local_18;
        } while ((ushort)local_58 < *local_18);
      }
      piVar6 = local_34;
      if (local_38 == 0) {
        in_stack_fffffc90 = (void *)*local_34;
        uVar4 = *puVar19;
      }
      else {
        uVar4 = *puVar19 - 1;
        in_stack_fffffc90 = (void *)(*local_34 + 8);
      }
      in_stack_fffffc8c = 0x6622732e;
      qsort(in_stack_fffffc90,(uint)uVar4,8,FUN_66228bf0);
      FUN_66250210((int *)local_98);
      pcVar15 = (char *)(puVar19 + 1);
      local_3c = local_3c + 4;
      local_34 = piVar6 + 1;
      local_24 = (ushort *)((int)local_24 + -1);
      local_18 = (ushort *)pcVar15;
    } while (local_24 != (ushort *)0x0);
    local_24 = (ushort *)0x0;
    uVar9 = local_9c;
  }
  FUN_66250280(local_180,s____Bandwidth_<__lu),_6626f44c);
  FUN_66250280(local_138,s____Bandwidth_>___lu_______Bandwi_6626f420);
  FUN_66250280(local_fc,s____Bandwidth_>___lu___6626f408);
  FUN_66250280(local_88,s_AverageBandwidth__lu_Priority__l_6626f3e4);
  FUN_66250280(local_168,s____Bandwidth_<__lu),TimestampDel_6626f3a4);
  FUN_66250280(local_e4,s_OnDepend___lu__6626f394);
  FUN_66250280(local_354,s_OffDepend___lu__6626f384);
  FUN_66250280(local_b0,s_OnDepend___lu___OffDepend___lu__6626f364);
  local_58 = 0;
  if ((short)uVar9 != 0) {
    do {
      piVar6 = (int *)(local_58 & 0xffff);
      local_10 = *(void **)(*(int *)(local_20 + 0x16) + (int)piVar6 * 4);
      local_34 = piVar6;
      FUN_66218240(local_10,local_64);
      uVar17 = CONCAT22((short)((uint)pcVar15 >> 0x10),local_8c[(int)piVar6]);
      local_3c = uVar17;
      FUN_662500f0(local_48);
      FUN_662500f0(local_30);
      FUN_662500f0(local_70);
      FUN_662500f0(local_7c);
      FUN_662500f0(local_54);
      FUN_662500f0(local_98);
      uVar9 = 0;
      pcVar15 = operator_new((uVar17 * 3 & 0x7fff) << 2);
      if ((ushort *)pcVar15 == (ushort *)0x0) {
LAB_66228b0d:
        FUN_66250210((int *)local_98);
        FUN_66250210((int *)local_54);
        FUN_66250210(local_7c);
        FUN_66250210(local_70);
        FUN_66250210(local_30);
        FUN_66250210(local_48);
        FUN_66250210((int *)local_64);
        break;
      }
      local_c = (byte *)s_logical_application_x_pn_multira_6626f9dc;
      pbVar13 = local_64[0];
      do {
        local_5 = *pbVar13;
        bVar20 = local_5 < *local_c;
        if (local_5 != *local_c) {
LAB_662274b7:
          iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
          goto LAB_662274bc;
        }
        if (local_5 == 0) break;
        local_5 = pbVar13[1];
        bVar20 = local_5 < local_c[1];
        if (local_5 != local_c[1]) goto LAB_662274b7;
        pbVar13 = pbVar13 + 2;
        local_c = local_c + 2;
      } while (local_5 != 0);
      iVar14 = 0;
LAB_662274bc:
      if (iVar14 == 0) {
        FUN_66250280(local_150,s_TimeStampDelivery_T_priority_10__6626f494);
        in_stack_fffffc88 = (undefined4 *)0x662274f0;
        FUN_66250110(&stack0xfffffc90,local_150);
        in_stack_fffffc8c = 0x662274f8;
        FUN_66219690(local_10);
        *(ushort *)pcVar15 = 2;
        puVar10 = operator_new(4);
        iVar14 = 1;
        *(undefined1 *)puVar10 = 0;
        *(byte *)((int)puVar10 + 1) = 1;
        puVar19 = (ushort *)pcVar15;
        pbVar13 = (byte *)((int)puVar10 + 1);
        do {
          pbVar13[1] = *(byte *)((int)puVar19 + 1);
          pbVar13[2] = (byte)*puVar19;
          iVar14 = iVar14 + -1;
          puVar19 = puVar19 + 1;
          pbVar13 = pbVar13 + 2;
        } while (iVar14 != 0);
        uVar9 = 4;
        uVar21 = 1;
        puVar22 = puVar10;
        FUN_66250280(&stack0xfffffc88,s_RMFF_1_0_Flags_6626f138);
        FUN_662191a0(local_10,in_stack_fffffc88,in_stack_fffffc8c,in_stack_fffffc90,uVar21,uVar9,
                     puVar22);
        pcVar18 = s_logical_fileinfo_6626f524;
        pbVar13 = local_64[0];
        do {
          bVar1 = *pbVar13;
          bVar20 = bVar1 < (byte)*pcVar18;
          if (bVar1 != *pcVar18) {
LAB_66227577:
            iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_6622757c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar13[1];
          bVar20 = bVar1 < (byte)pcVar18[1];
          if (bVar1 != pcVar18[1]) goto LAB_66227577;
          pbVar13 = pbVar13 + 2;
          pcVar18 = pcVar18 + 2;
        } while (bVar1 != 0);
        iVar14 = 0;
LAB_6622757c:
        if (iVar14 != 0) {
          in_stack_fffffc88 = (undefined4 *)0x66227599;
          FUN_66250280(&stack0xfffffc90,s_EndTime_6626f9d4);
          in_stack_fffffc8c = 0x662275a1;
          FUN_66219310(local_10);
        }
        operator_delete(pcVar15);
        operator_delete(puVar10);
        FUN_66250210(local_150);
      }
      else {
        local_c = (byte *)s_logical_application_x_pn_multira_6626f9a8;
        pbVar13 = local_64[0];
        do {
          local_5 = *pbVar13;
          bVar20 = local_5 < *local_c;
          if (local_5 != *local_c) {
LAB_66227603:
            iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_66227608;
          }
          if (local_5 == 0) break;
          local_5 = pbVar13[1];
          bVar20 = local_5 < local_c[1];
          if (local_5 != local_c[1]) goto LAB_66227603;
          pbVar13 = pbVar13 + 2;
          local_c = local_c + 2;
        } while (local_5 != 0);
        iVar14 = 0;
LAB_66227608:
        if (iVar14 == 0) {
          FUN_66250280(local_15c,s_TimeStampDelivery_T_priority_10__6626f494);
          in_stack_fffffc88 = (undefined4 *)0x6622763c;
          FUN_66250110(&stack0xfffffc90,local_15c);
          in_stack_fffffc8c = 0x66227644;
          FUN_66219690(local_10);
          *(ushort *)pcVar15 = 2;
          puVar10 = operator_new(4);
          iVar14 = 1;
          *(undefined1 *)puVar10 = 0;
          *(byte *)((int)puVar10 + 1) = 1;
          puVar19 = (ushort *)pcVar15;
          pbVar13 = (byte *)((int)puVar10 + 1);
          do {
            pbVar13[1] = *(byte *)((int)puVar19 + 1);
            pbVar13[2] = (byte)*puVar19;
            iVar14 = iVar14 + -1;
            puVar19 = puVar19 + 1;
            pbVar13 = pbVar13 + 2;
          } while (iVar14 != 0);
          uVar9 = 4;
          uVar21 = 1;
          puVar22 = puVar10;
          FUN_66250280(&stack0xfffffc88,s_RMFF_1_0_Flags_6626f138);
          FUN_662191a0(local_10,in_stack_fffffc88,in_stack_fffffc8c,in_stack_fffffc90,uVar21,uVar9,
                       puVar22);
          pcVar18 = s_logical_fileinfo_6626f524;
          pbVar13 = local_64[0];
          do {
            bVar1 = *pbVar13;
            bVar20 = bVar1 < (byte)*pcVar18;
            if (bVar1 != *pcVar18) {
LAB_662276c3:
              iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              goto LAB_662276c8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar20 = bVar1 < (byte)pcVar18[1];
            if (bVar1 != pcVar18[1]) goto LAB_662276c3;
            pbVar13 = pbVar13 + 2;
            pcVar18 = pcVar18 + 2;
          } while (bVar1 != 0);
          iVar14 = 0;
LAB_662276c8:
          if (iVar14 != 0) {
            in_stack_fffffc88 = (undefined4 *)0x662276e5;
            FUN_66250280(&stack0xfffffc90,s_EndTime_6626f9d4);
            in_stack_fffffc8c = 0x662276ed;
            FUN_66219310(local_10);
          }
          operator_delete(pcVar15);
          operator_delete(puVar10);
          FUN_66250210(local_15c);
        }
        else {
          FUN_66250280(local_144,s_____Bandwidth_>___lu_______OldPN_6626f338);
          FUN_66250280(local_120,s____OldPNMPlayer__6626f324);
          FUN_66250280(local_114,s_AverageBandwidth__lu_priority__l_6626f970);
          FUN_66250280(local_108,s_AverageBandwidth_0_priority_5_PN_6626f93c);
          FUN_66250280(local_174,s_____Bandwidth_<__lu)_&&_(_OldPNM_6626f8d4);
          FUN_662500f0(local_f0);
          FUN_662500f0(local_c8);
          FUN_662500f0(local_bc);
          FUN_662500f0(local_d4);
          FUN_662500f0(local_12c);
          local_24 = *(ushort **)(local_20 + 0x54);
          if ((int)local_24 < 0) {
LAB_662279aa:
            if (-1 < *(int *)(local_20 + 100)) {
              local_c = (byte *)s_logical_audio_x_pn_multirate_rea_6626fa0c;
              pbVar13 = local_64[0];
              do {
                local_5 = *pbVar13;
                bVar20 = local_5 < *local_c;
                if (local_5 != *local_c) {
LAB_662279f8:
                  iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                  goto LAB_662279fd;
                }
                if (local_5 == 0) break;
                local_5 = pbVar13[1];
                bVar20 = local_5 < local_c[1];
                if (local_5 != local_c[1]) goto LAB_662279f8;
                pbVar13 = pbVar13 + 2;
                local_c = local_c + 2;
              } while (local_5 != 0);
              iVar14 = 0;
LAB_662279fd:
              if (iVar14 == 0) {
                if (*(int *)(local_20 + 0x68) == 0) {
                  local_38 = *(uint *)(local_20 + 100);
                }
                else {
                  local_38 = *(uint *)(local_20 + 0x6c);
                }
                if ((int)local_38 < 0) {
                  pvVar7 = (void *)0x0;
                }
                else {
                  pvVar7 = *(void **)(*(int *)(local_20 + 0x26) + (local_38 & 0xffff) * 4);
                }
                if (pvVar7 != (void *)0x0) {
                  local_24 = (ushort *)0x0;
                  FUN_66217fa0(pvVar7,(undefined4 *)0x0,&local_24);
                  FUN_662508c0(local_c8,local_114[0]);
                  piVar11 = local_c8;
                  puVar10 = FUN_662504f0(local_348,local_120,&DAT_6626f254);
                  piVar11 = FUN_662504a0(local_1c8,puVar10,piVar11);
                  FUN_662503a0(local_bc,piVar11);
                  FUN_66250210(local_1c8);
                  FUN_66250210(local_348);
                  FUN_66250110(&stack0xfffffc90,local_bc);
                  FUN_66219690(local_10);
                  piVar11 = local_108;
                  *(ushort *)pcVar15 = 2;
                  puVar10 = FUN_662504f0(local_2a0,local_120,&DAT_6626f254);
                  in_stack_fffffc90 = (void *)0x66227b08;
                  piVar11 = FUN_662504a0(local_1e0,puVar10,piVar11);
                  FUN_662503a0(local_d4,piVar11);
                  FUN_66250210(local_1e0);
                  FUN_66250210(local_2a0);
                  in_stack_fffffc88 = (undefined4 *)0x66227b3f;
                  FUN_66250110(&stack0xfffffc90,local_d4);
                  in_stack_fffffc8c = 0x66227b47;
                  FUN_66219690(local_10);
                  *(ushort *)((int)pcVar15 + 2) = 0;
                  uVar9 = 2;
                }
              }
            }
          }
          else {
            local_c = (byte *)s_logical_video_x_pn_multirate_rea_6626fa34;
            pbVar13 = local_64[0];
            do {
              local_5 = *pbVar13;
              bVar20 = local_5 < *local_c;
              if (local_5 != *local_c) {
LAB_662277dd:
                iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_662277e2;
              }
              if (local_5 == 0) break;
              local_5 = pbVar13[1];
              bVar20 = local_5 < local_c[1];
              if (local_5 != local_c[1]) goto LAB_662277dd;
              pbVar13 = pbVar13 + 2;
              local_c = local_c + 2;
            } while (local_5 != 0);
            iVar14 = 0;
LAB_662277e2:
            if (iVar14 != 0) goto LAB_662279aa;
            if (*(int *)(local_20 + 0x58) != 0) {
              local_24 = *(ushort **)(local_20 + 0x5c);
            }
            if ((int)local_24 < 0) {
              pvVar7 = (void *)0x0;
            }
            else {
              pvVar7 = *(void **)(*(int *)(local_20 + 0x26) + ((uint)local_24 & 0xffff) * 4);
            }
            if (pvVar7 != (void *)0x0) {
              local_c = (byte *)0x0;
              FUN_66217fa0(pvVar7,(undefined4 *)0x0,&local_c);
              FUN_662508c0(local_f0,local_144[0]);
              FUN_662508c0(local_c8,local_114[0]);
              piVar11 = local_c8;
              puVar10 = FUN_662504f0(local_2e8,local_f0,&DAT_6626f254);
              piVar11 = FUN_662504a0(local_258,puVar10,piVar11);
              FUN_662503a0(local_bc,piVar11);
              FUN_66250210(local_258);
              FUN_66250210(local_2e8);
              FUN_66250110(&stack0xfffffc90,local_bc);
              FUN_66219690(local_10);
              piVar11 = local_108;
              *(ushort *)pcVar15 = 2;
              puVar10 = FUN_662504f0(local_288,local_f0,&DAT_6626f254);
              in_stack_fffffc90 = (void *)0x66227907;
              piVar11 = FUN_662504a0(local_1b0,puVar10,piVar11);
              FUN_662503a0(local_d4,piVar11);
              FUN_66250210(local_1b0);
              FUN_66250210(local_288);
              in_stack_fffffc88 = (undefined4 *)0x6622793e;
              FUN_66250110(&stack0xfffffc90,local_d4);
              in_stack_fffffc8c = 0x66227946;
              FUN_66219690(local_10);
              *(ushort *)((int)pcVar15 + 2) = 0;
              uVar9 = 2;
              if (-1 < *(int *)(local_20 + 0x60)) {
                in_stack_fffffc90 = (void *)0x66227976;
                FUN_662508c0(local_12c,local_174[0]);
                in_stack_fffffc88 = (undefined4 *)0x66227992;
                FUN_66250110(&stack0xfffffc90,local_12c);
                in_stack_fffffc8c = 0x6622799a;
                FUN_66219690(local_10);
                *(ushort *)((int)pcVar15 + 4) = 0;
                uVar9 = 3;
              }
            }
          }
          FUN_66250210(local_12c);
          FUN_66250210(local_d4);
          FUN_66250210(local_bc);
          FUN_66250210(local_c8);
          FUN_66250210(local_f0);
          FUN_66250210((int *)local_174);
          FUN_66250210(local_108);
          FUN_66250210((int *)local_114);
          FUN_66250210(local_120);
          FUN_66250210((int *)local_144);
          local_38 = 0;
          if (local_8c[(int)piVar6] != 0) {
            do {
              if ((short)local_38 == 0) {
                local_c = (byte *)s_logical_video_x_pn_multirate_rea_6626fa34;
                pbVar13 = local_64[0];
                do {
                  local_5 = *pbVar13;
                  bVar20 = local_5 < *local_c;
                  if (local_5 != *local_c) {
LAB_66227c1a:
                    iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                    goto LAB_66227c1f;
                  }
                  if (local_5 == 0) break;
                  local_5 = pbVar13[1];
                  bVar20 = local_5 < local_c[1];
                  if (local_5 != local_c[1]) goto LAB_66227c1a;
                  pbVar13 = pbVar13 + 2;
                  local_c = local_c + 2;
                } while (local_5 != 0);
                iVar14 = 0;
LAB_66227c1f:
                if (iVar14 == 0) {
                  if ((local_3c & 0xffff) != 1 && -1 < (int)((local_3c & 0xffff) - 1)) {
                    in_stack_fffffc90 = (void *)0x66227d8f;
                    FUN_662508c0(local_98,local_168[0]);
                    ppbVar12 = local_98;
LAB_66228777:
                    in_stack_fffffc88 = (undefined4 *)0x6622877d;
                    FUN_66250110(&stack0xfffffc90,(int *)ppbVar12);
                    in_stack_fffffc8c = 0x66228785;
                    FUN_66219690(local_10);
                    *(ushort *)((int)pcVar15 + (uVar9 & 0xffff) * 2) = 2;
                    goto LAB_662288cc;
                  }
                  FUN_662508c0(local_48,local_fc[0]);
                  FUN_662508c0(local_30,local_88[0]);
                  piVar11 = FUN_662504a0(local_1f8,local_48,local_30);
                  FUN_662503a0(local_7c,piVar11);
                  FUN_66250210(local_1f8);
                  FUN_66250110(&stack0xfffffc90,local_7c);
                  FUN_66219690(local_10);
                  *(ushort *)((int)pcVar15 + (uVar9 & 0xffff) * 2) = 2;
                  FUN_662508c0(local_30,local_88[0]);
                  local_18 = (ushort *)(uVar9 + 1 & 0xffff);
                  FUN_662508c0(local_70,local_e4[0]);
                  piVar11 = local_70;
                  pcVar18 = &DAT_6626f254;
                  puVar10 = FUN_662504a0(local_2b8,local_48,local_30);
                  puVar10 = FUN_662504f0(local_210,puVar10,pcVar18);
                  in_stack_fffffc90 = (void *)0x66227d40;
                  piVar11 = FUN_662504a0(local_300,puVar10,piVar11);
                  FUN_662503a0(local_54,piVar11);
                  FUN_66250210(local_300);
                  FUN_66250210(local_210);
                  FUN_66250210(local_2b8);
LAB_662288ad:
                  in_stack_fffffc88 = (undefined4 *)0x662288bb;
                  FUN_66250110(&stack0xfffffc90,(int *)local_54);
                  in_stack_fffffc8c = 0x662288c3;
                  FUN_66219690(local_10);
                  puVar19 = local_18;
                }
                else {
                  local_c = (byte *)s_logical_audio_x_pn_multirate_rea_6626fa0c;
                  pbVar13 = local_64[0];
                  do {
                    local_5 = *pbVar13;
                    bVar20 = local_5 < *local_c;
                    if (local_5 != *local_c) {
LAB_66227dec:
                      iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                      goto LAB_66227df1;
                    }
                    if (local_5 == 0) break;
                    local_5 = pbVar13[1];
                    bVar20 = local_5 < local_c[1];
                    if (local_5 != local_c[1]) goto LAB_66227dec;
                    pbVar13 = pbVar13 + 2;
                    local_c = local_c + 2;
                  } while (local_5 != 0);
                  iVar14 = 0;
LAB_66227df1:
                  if (iVar14 != 0) goto LAB_662288cd;
                  if ((local_3c & 0xffff) == 1 || (int)((local_3c & 0xffff) - 1) < 0) {
                    FUN_662508c0(local_7c,local_88[0]);
                    FUN_662508c0(local_30,local_88[0]);
                    local_18 = (ushort *)(uVar9 & 0xffff);
                    FUN_662508c0(local_70,local_b0[0]);
                    piVar11 = local_70;
                    pcVar18 = &DAT_6626f254;
                    puVar10 = FUN_662504a0(local_240,local_48,local_30);
                    puVar10 = FUN_662504f0(local_330,puVar10,pcVar18);
                    in_stack_fffffc90 = (void *)0x66227e9d;
                    piVar11 = FUN_662504a0(local_228,puVar10,piVar11);
                    FUN_662503a0(local_54,piVar11);
                    FUN_66250210(local_228);
                    FUN_66250210(local_330);
                    FUN_66250210(local_240);
                    FUN_66250110(&stack0xfffffc90,local_7c);
                    FUN_66219690(local_10);
                    *(ushort *)((int)pcVar15 + local_18 * 2) = 2;
                    in_stack_fffffc88 = (undefined4 *)0x66227f0c;
                    FUN_66250110(&stack0xfffffc90,(int *)local_54);
                    in_stack_fffffc8c = 0x66227f14;
                    FUN_66219690(local_10);
                    puVar19 = (ushort *)(uVar9 + 1 & 0xffff);
                  }
                  else {
                    FUN_662508c0(local_48,local_180[0]);
                    if (*(short *)(local_14[(int)piVar6] + 6) == 1) {
                      FUN_662508c0(local_30,local_88[0]);
                      in_stack_fffffc90 = (void *)0x66227f77;
                      piVar11 = FUN_662504a0(local_2d0,local_48,local_30);
                      FUN_662503a0(local_54,piVar11);
                      FUN_66250210(local_2d0);
LAB_66228354:
                      in_stack_fffffc88 = (undefined4 *)0x66228363;
                      FUN_66250110(&stack0xfffffc90,(int *)local_54);
                      in_stack_fffffc8c = 0x6622836b;
                      FUN_66219690(local_10);
                      *(ushort *)((int)pcVar15 + (uVar9 & 0xffff) * 2) = 2;
                      goto LAB_662288cc;
                    }
                    FUN_662508c0(local_30,local_88[0]);
                    piVar11 = FUN_662504a0(local_18c,local_48,local_30);
                    FUN_662503a0(local_7c,piVar11);
                    FUN_66250210(local_18c);
                    FUN_662508c0(local_30,local_88[0]);
                    local_18 = (ushort *)(uVar9 & 0xffff);
                    FUN_662508c0(local_70,local_b0[0]);
                    piVar11 = local_70;
                    pcVar18 = &DAT_6626f254;
                    puVar10 = FUN_662504a0(local_198,local_48,local_30);
                    puVar10 = FUN_662504f0(local_270,puVar10,pcVar18);
                    in_stack_fffffc90 = (void *)0x66228042;
                    piVar11 = FUN_662504a0(local_318,puVar10,piVar11);
                    FUN_662503a0(local_54,piVar11);
                    FUN_66250210(local_318);
                    FUN_66250210(local_270);
                    FUN_66250210(local_198);
                    FUN_66250110(&stack0xfffffc90,local_7c);
                    FUN_66219690(local_10);
                    *(ushort *)((int)pcVar15 + local_18 * 2) = 2;
                    in_stack_fffffc88 = (undefined4 *)0x662280b1;
                    FUN_66250110(&stack0xfffffc90,(int *)local_54);
                    in_stack_fffffc8c = 0x662280b9;
                    FUN_66219690(local_10);
                    puVar19 = (ushort *)(uVar9 + 1 & 0xffff);
                  }
                }
                uVar9 = uVar9 + 1;
                *(ushort *)((int)pcVar15 + puVar19 * 2) = 0;
LAB_662288cc:
                uVar9 = uVar9 + 1;
              }
              else {
                local_18 = (ushort *)(local_38 & 0xffff);
                if ((int)((local_3c & 0xffff) - 1) <= (int)local_18) {
                  local_c = (byte *)s_logical_video_x_pn_multirate_rea_6626fa34;
                  pbVar13 = local_64[0];
                  do {
                    local_5 = *pbVar13;
                    bVar20 = local_5 < *local_c;
                    if (local_5 != *local_c) {
LAB_6622811f:
                      iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                      goto LAB_66228124;
                    }
                    if (local_5 == 0) break;
                    local_5 = pbVar13[1];
                    bVar20 = local_5 < local_c[1];
                    if (local_5 != local_c[1]) goto LAB_6622811f;
                    pbVar13 = pbVar13 + 2;
                    local_c = local_c + 2;
                  } while (local_5 != 0);
                  iVar14 = 0;
LAB_66228124:
                  if (iVar14 == 0) {
                    local_1c = (int)local_18 * 8;
                    FUN_662508c0(local_48,local_fc[0]);
                    FUN_662508c0(local_30,local_88[0]);
                    piVar11 = FUN_662504a0(local_1a4,local_48,local_30);
                    FUN_662503a0(local_7c,piVar11);
                    FUN_66250210(local_1a4);
                    FUN_66250110(&stack0xfffffc90,local_7c);
                    FUN_66219690(local_10);
                    *(ushort *)((int)pcVar15 + (uVar9 & 0xffff) * 2) = 2;
                    FUN_662508c0(local_30,local_88[0]);
                    local_18 = (ushort *)(uVar9 + 1 & 0xffff);
                    FUN_662508c0(local_70,local_e4[0]);
                    piVar11 = local_70;
                    pcVar18 = &DAT_6626f254;
                    puVar10 = FUN_662504a0(local_1ec,local_48,local_30);
                    puVar10 = FUN_662504f0(local_1d4,puVar10,pcVar18);
                    in_stack_fffffc90 = (void *)0x6622824a;
                    piVar11 = FUN_662504a0(local_1bc,puVar10,piVar11);
                    FUN_662503a0(local_54,piVar11);
                    FUN_66250210(local_1bc);
                    FUN_66250210(local_1d4);
                    piVar11 = local_1ec;
                  }
                  else {
                    local_c = (byte *)s_logical_audio_x_pn_multirate_rea_6626fa0c;
                    pbVar13 = local_64[0];
                    do {
                      local_5 = *pbVar13;
                      bVar20 = local_5 < *local_c;
                      if (local_5 != *local_c) {
LAB_662282b7:
                        iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                        goto LAB_662282bc;
                      }
                      if (local_5 == 0) break;
                      local_5 = pbVar13[1];
                      bVar20 = local_5 < local_c[1];
                      if (local_5 != local_c[1]) goto LAB_662282b7;
                      pbVar13 = pbVar13 + 2;
                      local_c = local_c + 2;
                    } while (local_5 != 0);
                    iVar14 = 0;
LAB_662282bc:
                    if (iVar14 != 0) goto LAB_662288cd;
                    local_1c = (int)local_18 * 8;
                    FUN_662508c0(local_48,local_fc[0]);
                    if (*(short *)(local_1c + 6 + local_14[(int)piVar6]) == 1) {
                      FUN_662508c0(local_30,local_88[0]);
                      in_stack_fffffc90 = (void *)0x66228330;
                      piVar11 = FUN_662504a0(local_204,local_48,local_30);
                      FUN_662503a0(local_54,piVar11);
                      FUN_66250210(local_204);
                      goto LAB_66228354;
                    }
                    FUN_662508c0(local_30,local_88[0]);
                    piVar11 = FUN_662504a0(local_21c,local_48,local_30);
                    FUN_662503a0(local_7c,piVar11);
                    FUN_66250210(local_21c);
                    FUN_66250110(&stack0xfffffc90,local_7c);
                    FUN_66219690(local_10);
                    *(ushort *)((int)pcVar15 + (uVar9 & 0xffff) * 2) = 2;
                    FUN_662508c0(local_30,local_88[0]);
                    local_18 = (ushort *)(uVar9 + 1 & 0xffff);
                    FUN_662508c0(local_70,local_b0[0]);
                    piVar11 = local_70;
                    pcVar18 = &DAT_6626f254;
                    puVar10 = FUN_662504a0(local_264,local_48,local_30);
                    puVar10 = FUN_662504f0(local_24c,puVar10,pcVar18);
                    in_stack_fffffc90 = (void *)0x66228465;
                    piVar11 = FUN_662504a0(local_234,puVar10,piVar11);
                    FUN_662503a0(local_54,piVar11);
                    FUN_66250210(local_234);
                    FUN_66250210(local_24c);
                    piVar11 = local_264;
                  }
                  uVar9 = uVar9 + 1;
                  FUN_66250210(piVar11);
                  in_stack_fffffc88 = (undefined4 *)0x662284ae;
                  FUN_66250110(&stack0xfffffc90,(int *)local_54);
                  in_stack_fffffc8c = 0x662284b6;
                  FUN_66219690(local_10);
                  *(ushort *)((int)pcVar15 + local_18 * 2) = 0;
                  goto LAB_662288cc;
                }
                local_c = (byte *)s_logical_video_x_pn_multirate_rea_6626fa34;
                pbVar13 = local_64[0];
                do {
                  local_5 = *pbVar13;
                  bVar20 = local_5 < *local_c;
                  if (local_5 != *local_c) {
LAB_66228504:
                    iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                    goto LAB_66228509;
                  }
                  if (local_5 == 0) break;
                  local_5 = pbVar13[1];
                  bVar20 = local_5 < local_c[1];
                  if (local_5 != local_c[1]) goto LAB_66228504;
                  pbVar13 = pbVar13 + 2;
                  local_c = local_c + 2;
                } while (local_5 != 0);
                iVar14 = 0;
LAB_66228509:
                if (iVar14 == 0) {
                  FUN_662508c0(local_48,local_138[0]);
                  FUN_662508c0(local_30,local_88[0]);
                  piVar6 = FUN_662504a0(local_27c,local_48,local_30);
                  FUN_662503a0(local_7c,piVar6);
                  FUN_66250210(local_27c);
                  FUN_66250110(&stack0xfffffc90,local_7c);
                  FUN_66219690(local_10);
                  *(ushort *)((int)pcVar15 + (uVar9 & 0xffff) * 2) = 2;
                  FUN_662508c0(local_30,local_88[0]);
                  local_18 = (ushort *)(uVar9 + 1 & 0xffff);
                  FUN_662508c0(local_70,local_e4[0]);
                  piVar6 = local_70;
                  pcVar18 = &DAT_6626f254;
                  puVar10 = FUN_662504a0(local_2c4,local_48,local_30);
                  puVar10 = FUN_662504f0(local_2ac,puVar10,pcVar18);
                  in_stack_fffffc90 = (void *)0x66228637;
                  piVar6 = FUN_662504a0(local_294,puVar10,piVar6);
                  FUN_662503a0(local_54,piVar6);
                  FUN_66250210(local_294);
                  FUN_66250210(local_2ac);
                  FUN_66250210(local_2c4);
                  in_stack_fffffc88 = (undefined4 *)0x66228680;
                  FUN_66250110(&stack0xfffffc90,(int *)local_54);
                  in_stack_fffffc8c = 0x66228688;
                  FUN_66219690(local_10);
                  uVar9 = uVar9 + 2;
                  *(ushort *)((int)pcVar15 + local_18 * 2) = 0;
                  piVar6 = local_34;
                }
                else {
                  local_c = (byte *)s_logical_audio_x_pn_multirate_rea_6626fa0c;
                  pbVar13 = local_64[0];
                  do {
                    local_5 = *pbVar13;
                    bVar20 = local_5 < *local_c;
                    if (local_5 != *local_c) {
LAB_662286d0:
                      iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                      goto LAB_662286d5;
                    }
                    if (local_5 == 0) break;
                    local_5 = pbVar13[1];
                    bVar20 = local_5 < local_c[1];
                    if (local_5 != local_c[1]) goto LAB_662286d0;
                    pbVar13 = pbVar13 + 2;
                    local_c = local_c + 2;
                  } while (local_5 != 0);
                  iVar14 = 0;
LAB_662286d5:
                  if (iVar14 == 0) {
                    local_1c = (int)local_18 * 8;
                    FUN_662508c0(local_48,local_138[0]);
                    if (*(short *)(local_14[(int)piVar6] + local_1c + 6) == 1) {
                      FUN_662508c0(local_30,local_88[0]);
                      in_stack_fffffc90 = (void *)0x6622874a;
                      piVar11 = FUN_662504a0(local_2dc,local_48,local_30);
                      FUN_662503a0(local_54,piVar11);
                      FUN_66250210(local_2dc);
                      ppbVar12 = local_54;
                      goto LAB_66228777;
                    }
                    FUN_662508c0(local_30,local_88[0]);
                    piVar11 = FUN_662504a0(local_2f4,local_48,local_30);
                    FUN_662503a0(local_7c,piVar11);
                    FUN_66250210(local_2f4);
                    FUN_66250110(&stack0xfffffc90,local_7c);
                    FUN_66219690(local_10);
                    *(ushort *)((int)pcVar15 + (uVar9 & 0xffff) * 2) = 2;
                    FUN_662508c0(local_30,local_88[0]);
                    local_18 = (ushort *)(uVar9 + 1 & 0xffff);
                    FUN_662508c0(local_70,local_b0[0]);
                    piVar11 = local_70;
                    pcVar18 = &DAT_6626f254;
                    puVar10 = FUN_662504a0(local_33c,local_48,local_30);
                    puVar10 = FUN_662504f0(local_324,puVar10,pcVar18);
                    in_stack_fffffc90 = (void *)0x66228872;
                    piVar11 = FUN_662504a0(local_30c,puVar10,piVar11);
                    FUN_662503a0(local_54,piVar11);
                    FUN_66250210(local_30c);
                    FUN_66250210(local_324);
                    FUN_66250210(local_33c);
                    goto LAB_662288ad;
                  }
                }
              }
LAB_662288cd:
              local_38 = local_38 + 1;
            } while ((ushort)local_38 < local_8c[(int)piVar6]);
          }
          local_3c = uVar9 * 2 + 2;
          puVar19 = operator_new(local_3c & 0xffff);
          local_24 = puVar19;
          if (puVar19 == (ushort *)0x0) goto LAB_66228b0d;
          *(byte *)puVar19 = (byte)(uVar9 >> 8);
          *(byte *)((int)puVar19 + 1) = (byte)uVar9;
          puVar2 = (ushort *)pcVar15;
          puVar3 = puVar19;
          for (uVar9 = uVar9 & 0xffff; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(byte *)(puVar3 + 1) = *(byte *)((int)puVar2 + 1);
            *(byte *)((int)puVar3 + 3) = (byte)*puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          pcVar18 = s_logical_fileinfo_6626f524;
          pbVar13 = local_64[0];
          do {
            bVar1 = *pbVar13;
            bVar20 = bVar1 < (byte)*pcVar18;
            if (bVar1 != *pcVar18) {
LAB_66228960:
              iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              goto LAB_66228965;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar20 = bVar1 < (byte)pcVar18[1];
            if (bVar1 != pcVar18[1]) goto LAB_66228960;
            pbVar13 = pbVar13 + 2;
            pcVar18 = pcVar18 + 2;
          } while (bVar1 != 0);
          iVar14 = 0;
LAB_66228965:
          pvVar7 = local_10;
          if (iVar14 != 0) {
            uVar21 = 1;
            uVar9 = local_3c;
            FUN_66250280(&stack0xfffffc88,s_RMFF_1_0_Flags_6626f138);
            pvVar7 = local_10;
            FUN_662191a0(local_10,in_stack_fffffc88,in_stack_fffffc8c,in_stack_fffffc90,uVar21,uVar9
                         ,(undefined4 *)puVar19);
          }
          operator_delete(pcVar15);
          operator_delete(local_24);
          pcVar15 = s_logical_video_x_pn_multirate_rea_6626fa34;
          pbVar13 = local_64[0];
          do {
            bVar1 = *pbVar13;
            bVar20 = bVar1 < (byte)*pcVar15;
            if (bVar1 != *pcVar15) {
LAB_662289d4:
              iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              goto LAB_662289d9;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar20 = bVar1 < (byte)pcVar15[1];
            if (bVar1 != pcVar15[1]) goto LAB_662289d4;
            pbVar13 = pbVar13 + 2;
            pcVar15 = pcVar15 + 2;
          } while (bVar1 != 0);
          iVar14 = 0;
LAB_662289d9:
          if (iVar14 == 0) {
            FUN_66250280(&stack0xfffffc90,s_SeekGreaterOnSwitch_6626f200);
            FUN_66219310(pvVar7);
LAB_66228a4d:
            in_stack_fffffc88 = (undefined4 *)0x66228a5c;
            FUN_66250280(&stack0xfffffc90,s_MinimumSwitchOverlap_6626f1e8);
            in_stack_fffffc8c = 0x66228a63;
            FUN_66219310(pvVar7);
          }
          else {
            pcVar15 = s_logical_audio_x_pn_multirate_rea_6626fa0c;
            pbVar13 = local_64[0];
            do {
              bVar1 = *pbVar13;
              bVar20 = bVar1 < (byte)*pcVar15;
              if (bVar1 != *pcVar15) {
LAB_66228a28:
                iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_66228a2d;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar13[1];
              bVar20 = bVar1 < (byte)pcVar15[1];
              if (bVar1 != pcVar15[1]) goto LAB_66228a28;
              pbVar13 = pbVar13 + 2;
              pcVar15 = pcVar15 + 2;
            } while (bVar1 != 0);
            iVar14 = 0;
LAB_66228a2d:
            if (iVar14 == 0) {
              FUN_66250280(&stack0xfffffc90,s_SeekGreaterOnSwitch_6626f200);
              FUN_66219310(pvVar7);
              goto LAB_66228a4d;
            }
          }
          pcVar15 = s_logical_fileinfo_6626f524;
          pbVar13 = local_64[0];
          do {
            bVar1 = *pbVar13;
            bVar20 = bVar1 < (byte)*(ushort *)pcVar15;
            if (bVar1 != (byte)*(ushort *)pcVar15) {
LAB_66228a93:
              iVar14 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              goto LAB_66228a98;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar20 = bVar1 < *(byte *)((int)pcVar15 + 1);
            if (bVar1 != *(byte *)((int)pcVar15 + 1)) goto LAB_66228a93;
            pbVar13 = pbVar13 + 2;
            pcVar15 = (char *)((int)pcVar15 + 2);
          } while (bVar1 != 0);
          iVar14 = 0;
LAB_66228a98:
          if (iVar14 != 0) {
            in_stack_fffffc88 = (undefined4 *)0x66228ab5;
            FUN_66250280(&stack0xfffffc90,s_EndTime_6626f9d4);
            in_stack_fffffc8c = 0x66228abc;
            FUN_66219310(pvVar7);
          }
        }
      }
      FUN_66250210((int *)local_98);
      FUN_66250210((int *)local_54);
      FUN_66250210(local_7c);
      FUN_66250210(local_70);
      FUN_66250210(local_30);
      FUN_66250210(local_48);
      FUN_66250210((int *)local_64);
      local_58 = local_58 + 1;
    } while ((ushort)local_58 < (ushort)local_9c);
  }
  piVar6 = local_14;
  puVar19 = local_d8;
  if ((ushort)local_9c != 0) {
    do {
      operator_delete((void *)*piVar6);
      *piVar6 = 0;
      puVar19 = (ushort *)((int)puVar19 + -1);
      piVar6 = piVar6 + 1;
    } while (puVar19 != (ushort *)0x0);
  }
  operator_delete(local_14);
  operator_delete(local_8c);
  FUN_66250210((int *)local_b0);
  FUN_66250210(local_354);
  FUN_66250210((int *)local_e4);
  FUN_66250210((int *)local_168);
  FUN_66250210((int *)local_88);
  FUN_66250210((int *)local_fc);
  FUN_66250210((int *)local_138);
  FUN_66250210((int *)local_180);
  return;
}


