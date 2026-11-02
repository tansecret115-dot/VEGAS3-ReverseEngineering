/* Module: rmme3260.dll
   Function: FUN_6622b5e0
   Address: 6622b5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6622b5e0(void *param_1)

{
  byte bVar1;
  short *psVar2;
  void *pvVar3;
  int iVar4;
  undefined1 *puVar5;
  short sVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined4 local_2c;
  undefined1 local_28;
  byte *local_24 [3];
  uint local_18;
  uint local_14;
  undefined1 *local_10;
  uint local_c;
  undefined1 *local_8;
  
  iVar12 = 0;
  local_c = *(int *)((int)param_1 + 0x1a8) + 0xd;
  if (*(int *)((int)param_1 + 0x19c) == 0) {
    *(undefined4 *)((int)param_1 + 0x19c) = 1;
  }
  switch(*(undefined4 *)((int)param_1 + 0x19c)) {
  case 1:
    *(short *)(*(int *)((int)param_1 + 0x1a0) + 2) = (short)local_c;
    if (*(int *)((int)param_1 + 0x10) < 0) {
      FUN_6622b340((int)param_1);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x19c) = 2;
      FUN_6622b5e0(param_1);
    }
    break;
  case 2:
    local_8 = (undefined1 *)0x0;
    *(int *)((int)param_1 + 0x1b8) = *(int *)(*(int *)((int)param_1 + 0x1a0) + 6);
    FUN_662296f0(param_1,*(int *)((int)param_1 + 0x1a0),*(int *)((int)param_1 + 0x1a8),
                 (int *)((int)param_1 + 0x1b8));
    if (*(int *)((int)param_1 + 0x178) == 0) {
      local_8 = operator_new(local_c);
      psVar2 = *(short **)((int)param_1 + 0x1a0);
      *local_8 = *(undefined1 *)((int)psVar2 + 1);
      local_8[1] = (char)*psVar2;
      if (*psVar2 == 1) {
        local_8[2] = *(undefined1 *)((int)psVar2 + 3);
        local_8[3] = (char)psVar2[1];
        local_8[4] = *(undefined1 *)((int)psVar2 + 5);
        local_8[5] = (char)psVar2[2];
        local_8[6] = (char)((uint)*(undefined4 *)(psVar2 + 3) >> 0x18);
        local_8[7] = (char)((uint)*(undefined4 *)(psVar2 + 3) >> 0x10);
        local_8[8] = (char)((uint)*(undefined4 *)(psVar2 + 3) >> 8);
        local_8[9] = (char)psVar2[3];
        local_8[10] = *(undefined1 *)((int)psVar2 + 0xb);
        local_8[0xb] = (char)psVar2[5];
        local_8[0xc] = (char)psVar2[6];
      }
      uVar8 = *(uint *)((int)param_1 + 0x1a8);
      puVar7 = (undefined4 *)
               (**(code **)(**(int **)((int)param_1 + 0x1a4) + 0x1c))
                         (*(int **)((int)param_1 + 0x1a4));
      puVar13 = (undefined4 *)(local_8 + 0xd);
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar13 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar10 = uVar8 & 3; local_18 = uVar8, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
LAB_6622b830:
      uVar8 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x1a0) + 4);
      if ((int)uVar8 < *(int *)((int)param_1 + 0xb4)) {
        pvVar3 = *(void **)(*(int *)((int)param_1 + 0xb0) + uVar8 * 4);
        if (pvVar3 != (void *)0x0) {
          FUN_66219de0(pvVar3,*(int *)((int)param_1 + 0x1a0),*(undefined4 *)((int)param_1 + 0x18c),
                       *(int *)((int)param_1 + 0x1a8),0);
        }
        puVar7 = *(undefined4 **)((int)param_1 + 0x1a0);
        if ((((uint)*(ushort *)(puVar7 + 1) == *(uint *)((int)param_1 + 0x50)) &&
            (*(short *)((int)puVar7 + 10) == 0)) &&
           (pvVar3 = *(void **)(*(int *)((int)param_1 + 0xb0) + *(int *)((int)param_1 + 0x4c) * 4),
           pvVar3 != (void *)0x0)) {
          local_34 = *puVar7;
          local_2c = puVar7[2];
          local_28 = *(undefined1 *)(puVar7 + 3);
          uStack_2e = (undefined2)((uint)puVar7[1] >> 0x10);
          _local_30 = CONCAT22(uStack_2e,*(undefined2 *)((int)param_1 + 0x4c));
          FUN_66219de0(pvVar3,(int)&local_34,*(undefined4 *)((int)param_1 + 0x18c),
                       *(int *)((int)param_1 + 0x1a8),0);
        }
        if (((*(int *)((int)param_1 + 0x58) != 0) &&
            (puVar7 = *(undefined4 **)((int)param_1 + 0x1a0),
            (uint)*(ushort *)(puVar7 + 1) == *(uint *)((int)param_1 + 0x54))) &&
           ((*(short *)((int)puVar7 + 10) == 0 &&
            (pvVar3 = *(void **)(*(int *)((int)param_1 + 0xb0) + *(int *)((int)param_1 + 0x5c) * 4),
            pvVar3 != (void *)0x0)))) {
          local_34 = *puVar7;
          local_2c = puVar7[2];
          local_28 = *(undefined1 *)(puVar7 + 3);
          uStack_2e = (undefined2)((uint)puVar7[1] >> 0x10);
          _local_30 = CONCAT22(uStack_2e,*(undefined2 *)((int)param_1 + 0x5c));
          FUN_66219de0(pvVar3,(int)&local_34,*(undefined4 *)((int)param_1 + 0x18c),
                       *(int *)((int)param_1 + 0x1a8),0);
        }
        if (((*(int *)((int)param_1 + 0x68) != 0) &&
            (puVar7 = *(undefined4 **)((int)param_1 + 0x1a0),
            (uint)*(ushort *)(puVar7 + 1) == *(uint *)((int)param_1 + 100))) &&
           ((*(short *)((int)puVar7 + 10) == 0 &&
            (pvVar3 = *(void **)(*(int *)((int)param_1 + 0xb0) + *(int *)((int)param_1 + 0x6c) * 4),
            pvVar3 != (void *)0x0)))) {
          local_34 = *puVar7;
          local_2c = puVar7[2];
          local_28 = *(undefined1 *)(puVar7 + 3);
          uStack_2e = (undefined2)((uint)puVar7[1] >> 0x10);
          _local_30 = CONCAT22(uStack_2e,*(undefined2 *)((int)param_1 + 0x6c));
          FUN_66219de0(pvVar3,(int)&local_34,*(undefined4 *)((int)param_1 + 0x18c),
                       *(int *)((int)param_1 + 0x1a8),0);
        }
        puVar7 = *(undefined4 **)((int)param_1 + 0x1a0);
        if ((((uint)*(ushort *)(puVar7 + 1) == *(uint *)((int)param_1 + 0x54)) &&
            (*(short *)((int)puVar7 + 10) == 0)) &&
           (pvVar3 = *(void **)(*(int *)((int)param_1 + 0xb0) + *(int *)((int)param_1 + 0x60) * 4),
           pvVar3 != (void *)0x0)) {
          local_34 = *puVar7;
          local_2c = puVar7[2];
          local_28 = *(undefined1 *)(puVar7 + 3);
          uStack_2e = (undefined2)((uint)puVar7[1] >> 0x10);
          _local_30 = CONCAT22(uStack_2e,*(undefined2 *)((int)param_1 + 0x60));
          FUN_66219de0(pvVar3,(int)&local_34,*(undefined4 *)((int)param_1 + 0x18c),
                       *(int *)((int)param_1 + 0x1a8),0);
        }
        uVar8 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x1a0) + 4);
        if ((int)uVar8 < *(int *)((int)param_1 + 0x2a)) {
          local_10 = *(undefined1 **)(*(int *)((int)param_1 + 0x26) + uVar8 * 4);
          if (local_10 == (undefined1 *)0x0) {
            iVar12 = -0x7fffbffb;
          }
          else if (local_8 == (undefined1 *)0x0) {
            iVar12 = -0x7ff8fff2;
          }
          else {
            FUN_66218240(local_10,local_24);
            pcVar14 = s_application_x_pn_multirate_image_6626f818;
            pbVar11 = local_24[0];
            do {
              bVar1 = *pbVar11;
              bVar15 = bVar1 < (byte)*pcVar14;
              if (bVar1 != *pcVar14) {
LAB_6622ba89:
                iVar12 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_6622ba8e;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar11[1];
              bVar15 = bVar1 < (byte)pcVar14[1];
              if (bVar1 != pcVar14[1]) goto LAB_6622ba89;
              pbVar11 = pbVar11 + 2;
              pcVar14 = pcVar14 + 2;
            } while (bVar1 != 0);
            iVar12 = 0;
LAB_6622ba8e:
            if ((iVar12 == 0) && (piVar9 = *(int **)((int)param_1 + 0x1a4), piVar9 != (int *)0x0)) {
              iVar12 = (**(code **)(*piVar9 + 0x1c))(piVar9);
              iVar12 = FUN_662647b0(*(uint *)(iVar12 + 8));
              *(int *)((int)param_1 + 0x1b8) = iVar12;
            }
            else {
              pcVar14 = s_audio_x_pn_multirate_realaudio_6626f7a4;
              do {
                bVar1 = *local_24[0];
                bVar15 = bVar1 < (byte)*pcVar14;
                if (bVar1 != *pcVar14) {
LAB_6622bae8:
                  iVar12 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_6622baed;
                }
                if (bVar1 == 0) break;
                bVar1 = local_24[0][1];
                bVar15 = bVar1 < (byte)pcVar14[1];
                if (bVar1 != pcVar14[1]) goto LAB_6622bae8;
                local_24[0] = local_24[0] + 2;
                pcVar14 = pcVar14 + 2;
              } while (bVar1 != 0);
              iVar12 = 0;
LAB_6622baed:
              if (iVar12 == 0) {
                pvVar3 = *(void **)(*(int *)((int)param_1 + 0xb0) +
                                   (uint)*(ushort *)(*(int *)((int)param_1 + 0x1a0) + 4) * 4);
                sVar6 = FUN_66218520((int)local_10);
                if ((sVar6 == 1) && (*(short *)(*(int *)((int)param_1 + 0x1a0) + 10) != 0)) {
                  if (pvVar3 != (void *)0x0) {
                    FUN_66219de0(pvVar3,*(int *)((int)param_1 + 0x1a0),
                                 *(undefined4 *)((int)param_1 + 0x18c),
                                 *(int *)((int)param_1 + 0x1a8),1);
                  }
                  if (((*(int *)((int)param_1 + 0x68) != 0) &&
                      (puVar7 = *(undefined4 **)((int)param_1 + 0x1a0),
                      (uint)*(ushort *)(puVar7 + 1) == *(uint *)((int)param_1 + 100))) &&
                     (pvVar3 = *(void **)(*(int *)((int)param_1 + 0xb0) +
                                         *(int *)((int)param_1 + 0x6c) * 4), pvVar3 != (void *)0x0))
                  {
                    local_34 = *puVar7;
                    local_2c = puVar7[2];
                    local_28 = *(undefined1 *)(puVar7 + 3);
                    uStack_2e = (undefined2)((uint)puVar7[1] >> 0x10);
                    _local_30 = CONCAT22(uStack_2e,*(undefined2 *)((int)param_1 + 0x6c));
                    FUN_66219de0(pvVar3,(int)&local_34,*(undefined4 *)((int)param_1 + 0x18c),
                                 *(int *)((int)param_1 + 0x1a8),0);
                  }
                }
              }
            }
            if (*(uint *)((int)param_1 + 0x168) < *(uint *)((int)param_1 + 0x1b8)) {
              FUN_66218020(local_10,*(uint *)((int)param_1 + 0x1b8));
              *(undefined4 *)((int)param_1 + 0x168) = *(undefined4 *)((int)param_1 + 0x1b8);
            }
            puVar7 = operator_new(0x28);
            if (puVar7 == (undefined4 *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)FUN_662522d0(puVar7);
            }
            (**(code **)(*piVar9 + 4))(piVar9);
            (**(code **)(*piVar9 + 0x10))(piVar9,local_8,local_c);
            if (local_8 != (undefined1 *)0x0) {
              operator_delete(local_8);
              local_8 = (undefined1 *)0x0;
            }
            *(uint *)((int)param_1 + 0x18c) = *(int *)((int)param_1 + 0x18c) + local_c;
            iVar12 = (**(code **)(**(int **)((int)param_1 + 0x184) + 0x1c))
                               (*(int **)((int)param_1 + 0x184),piVar9);
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 8))(piVar9);
            }
            FUN_66250210((int *)local_24);
          }
        }
        else {
          iVar12 = -0x7fffbffb;
        }
      }
      else {
        iVar12 = -0x7fffbffb;
      }
      break;
    }
    local_18 = local_c;
    local_10 = operator_new(local_c);
    psVar2 = *(short **)((int)param_1 + 0x1a0);
    *local_10 = *(undefined1 *)((int)psVar2 + 1);
    local_10[1] = (char)*psVar2;
    if (*psVar2 == 1) {
      local_10[2] = *(undefined1 *)((int)psVar2 + 3);
      local_10[3] = (char)psVar2[1];
      local_10[4] = *(undefined1 *)((int)psVar2 + 5);
      local_10[5] = (char)psVar2[2];
      local_10[6] = (char)((uint)*(undefined4 *)(psVar2 + 3) >> 0x18);
      local_10[7] = (char)((uint)*(undefined4 *)(psVar2 + 3) >> 0x10);
      local_10[8] = (char)((uint)*(undefined4 *)(psVar2 + 3) >> 8);
      local_10[9] = (char)psVar2[3];
      local_10[10] = *(undefined1 *)((int)psVar2 + 0xb);
      local_10[0xb] = (char)psVar2[5];
      local_10[0xc] = (char)psVar2[6];
    }
    uVar8 = *(uint *)((int)param_1 + 0x1a8);
    puVar7 = (undefined4 *)
             (**(code **)(**(int **)((int)param_1 + 0x1a4) + 0x1c))(*(int **)((int)param_1 + 0x1a4))
    ;
    puVar5 = local_10;
    puVar13 = (undefined4 *)(local_10 + 0xd);
    for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar13 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar10 = uVar8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    local_14 = uVar8;
    iVar12 = FUN_66225e90(param_1,local_10,local_18,
                          (uint)(*(short *)(*(int *)((int)param_1 + 0x1a0) + 10) == 0),&local_8,
                          &local_c);
    if (puVar5 != (undefined1 *)0x0) {
      operator_delete(puVar5);
    }
    if (-1 < iVar12) {
      *(uint *)((int)param_1 + 0x1a8) = local_c - 0xd;
      *(short *)(*(int *)((int)param_1 + 0x1a0) + 2) = (short)local_c;
      goto LAB_6622b830;
    }
    goto LAB_6622bd5f;
  case 3:
    if (*(int *)((int)param_1 + 0x10) < *(int *)((int)param_1 + 0x94)) {
      iVar4 = *(int *)(*(int *)((int)param_1 + 0x90) + *(int *)((int)param_1 + 0x10) * 4);
      if (iVar4 == 0) {
        iVar12 = -0x7fffbffb;
      }
      else {
        *(int *)(iVar4 + 0x12) = *(int *)(iVar4 + 0x12) + 1;
        *(int *)(*(int *)((int)param_1 + 0xa0) +
                (uint)*(ushort *)(*(int *)((int)param_1 + 0x1a0) + 4) * 4) = iVar4;
        if ((uint)*(ushort *)(*(int *)((int)param_1 + 0x1a0) + 4) == *(uint *)((int)param_1 + 0x50))
        {
          *(int *)(*(int *)((int)param_1 + 0xa0) + *(int *)((int)param_1 + 0x4c) * 4) = iVar4;
        }
        if ((*(int *)((int)param_1 + 0x68) != 0) &&
           ((uint)*(ushort *)(*(int *)((int)param_1 + 0x1a0) + 4) == *(uint *)((int)param_1 + 100)))
        {
          *(int *)(*(int *)((int)param_1 + 0xa0) + *(int *)((int)param_1 + 0x6c) * 4) = iVar4;
        }
        if ((uint)*(ushort *)(*(int *)((int)param_1 + 0x1a0) + 4) == *(uint *)((int)param_1 + 0x54))
        {
          if (*(int *)((int)param_1 + 0x58) != 0) {
            *(int *)(*(int *)((int)param_1 + 0xa0) + *(int *)((int)param_1 + 0x5c) * 4) = iVar4;
          }
          *(int *)(*(int *)((int)param_1 + 0xa0) + *(int *)((int)param_1 + 0x60) * 4) = iVar4;
        }
        *(int *)((int)param_1 + 0x14a) = *(int *)((int)param_1 + 0x14a) + 1;
        if (*(uint *)((int)param_1 + 0x14e) < *(uint *)((int)param_1 + 0x1a8)) {
          *(uint *)((int)param_1 + 0x14e) = *(uint *)((int)param_1 + 0x1a8);
        }
        *(undefined4 *)((int)param_1 + 0x19c) = 4;
        FUN_6622b5e0(param_1);
      }
    }
    else {
      iVar12 = -0x7fffbffb;
    }
    break;
  case 4:
    *(undefined4 *)((int)param_1 + 400) = 0;
    *(undefined4 *)((int)param_1 + 0x19c) = 0;
    FUN_66217410(*(void **)((int)param_1 + 0x180),0);
    break;
  default:
    iVar12 = -0x7ffbfff7;
  }
  if (iVar12 < 0) {
LAB_6622bd5f:
    FUN_66217410(*(void **)((int)param_1 + 0x180),iVar12);
  }
  return 0;
}


