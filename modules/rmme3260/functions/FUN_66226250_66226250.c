/* Module: rmme3260.dll
   Function: FUN_66226250
   Address: 66226250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66226250(void *param_1)

{
  byte bVar1;
  void *pvVar2;
  ushort uVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 auStackY_98 [8];
  undefined4 uStackY_78;
  undefined4 uStack_70;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  int local_48 [3];
  int local_3c [3];
  byte *local_30 [3];
  void *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  int local_8;
  
  local_14 = 0;
  local_c = param_1;
  FUN_662500f0(local_30);
  local_8 = -1;
  FUN_662500f0(local_3c);
  local_10 = 0xffffffff;
  local_18 = 0;
  if (*(uint *)((int)param_1 + 0x40) == (uint)*(ushort *)((int)param_1 + 0x38)) {
    local_1c = 0;
    if (*(ushort *)((int)param_1 + 0x38) != 0) {
      do {
        pvVar2 = *(void **)(*(int *)((int)param_1 + 0x3c) + local_1c * 4);
        local_24 = pvVar2;
        if (pvVar2 == (void *)0x0) {
          local_14 = 0x80004005;
          goto LAB_6622655c;
        }
        piVar4 = FUN_66218240(pvVar2,local_48);
        FUN_662503a0(local_30,piVar4);
        FUN_66250210(local_48);
        uVar3 = FUN_662182a0((int)pvVar2);
        uVar8 = (uint)uVar3;
        pcVar9 = s_audio_x_pn_multirate_realaudio_6626f7a4;
        pbVar5 = local_30[0];
        do {
          bVar1 = *pbVar5;
          bVar12 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_66226315:
            iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_6622631a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar12 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_66226315;
          pbVar5 = pbVar5 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_6622631a:
        if (iVar6 == 0) {
LAB_662263c2:
          uStack_70 = 0x662263d6;
          FUN_66250110(&stack0xffffff98,(int *)local_30);
          pvVar2 = local_c;
          FUN_66225f40(local_c);
          if (local_8 == -1) {
            FUN_662503a0(local_3c,(int *)local_30);
            FUN_66250640(local_3c,s_logical_stream_6626f884);
            FUN_66250110(auStack_64,(int *)local_30);
            uStackY_78 = 0x6622641f;
            FUN_66250110(&uStack_70,local_3c);
            FUN_66226070(pvVar2);
          }
          uStack_60 = 0x66226432;
          local_14 = FUN_662261b0(pvVar2,uVar8,local_8);
          pcVar9 = s_video_x_pn_multirate_realvideo_6626f864;
          pbVar5 = local_30[0];
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_66226461:
              uVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_66226466;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_66226461;
            pbVar5 = pbVar5 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_66226466:
          if (uVar7 == 0) {
            uStack_60 = 0x6622647b;
            local_20 = uVar7;
            FUN_66217fa0(local_24,(undefined4 *)0x0,&local_20);
            if ((local_20 < local_18) || (local_10 == 0xffffffff)) {
              if (*(int *)((int)local_c + 0x58) == 0) {
                if ((uVar8 != *(uint *)((int)local_c + 0x60)) &&
                   (uVar8 != *(uint *)((int)local_c + 0x54))) {
                  local_18 = local_20;
                  local_10 = uVar8;
                }
              }
              else if ((uVar8 != *(uint *)((int)local_c + 0x60)) &&
                      (uVar8 != *(uint *)((int)local_c + 0x5c))) {
                local_18 = local_20;
                local_10 = uVar8;
              }
            }
          }
        }
        else {
          pcVar9 = s_video_x_pn_multirate_realvideo_6626f864;
          pbVar5 = local_30[0];
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_6622634d:
              iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_66226352;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_6622634d;
            pbVar5 = pbVar5 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_66226352:
          if (iVar6 == 0) goto LAB_662263c2;
          pcVar9 = s_application_x_pn_multirate_reale_6626f83c;
          pbVar5 = local_30[0];
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_66226381:
              iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_66226386;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_66226381;
            pbVar5 = pbVar5 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_66226386:
          if (iVar6 == 0) goto LAB_662263c2;
          pcVar9 = s_application_x_pn_multirate_image_6626f818;
          pbVar5 = local_30[0];
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_662263b5:
              iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_662263ba;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_662263b5;
            pbVar5 = pbVar5 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_662263ba:
          if (iVar6 == 0) goto LAB_662263c2;
        }
        local_1c = local_1c + 1;
        param_1 = local_c;
      } while ((int)local_1c < (int)(uint)*(ushort *)((int)local_c + 0x38));
    }
    if (-1 < (int)local_10) {
      local_1c = 0;
      puVar10 = (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x26) + local_10 * 4) + 0xc);
      puVar11 = auStackY_98;
      for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = *(undefined2 *)puVar10;
      FUN_66224cc0();
      uStack_70 = 0x6622651d;
      FUN_66250280(&stack0xffffff98,s_video_x_pn_multirate_realvideo_6626f864);
      FUN_66225f40(param_1);
      uStack_60 = 0x66226539;
      local_14 = FUN_662261b0(param_1,local_1c & 0xffff,local_8);
      *(uint *)((int)param_1 + 0x4c) = local_1c & 0xffff;
      *(uint *)((int)param_1 + 0x50) = local_10;
    }
    FUN_66226f20((int)param_1);
    FUN_66226c20(param_1);
  }
  else {
    local_14 = 0x80004005;
  }
LAB_6622655c:
  FUN_66250210(local_3c);
  FUN_66250210((int *)local_30);
  return local_14;
}


