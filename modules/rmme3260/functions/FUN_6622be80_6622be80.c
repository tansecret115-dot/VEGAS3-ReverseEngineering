/* Module: rmme3260.dll
   Function: FUN_6622be80
   Address: 6622be80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6622be80(void *param_1)

{
  byte bVar1;
  void *pvVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar11;
  undefined1 uVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined1 *puVar16;
  bool bVar17;
  int local_38 [3];
  undefined4 local_2c;
  undefined2 local_28;
  int local_26;
  undefined2 local_22;
  undefined4 local_20;
  void *pvStack_1c;
  uint local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  int local_8;
  undefined1 uVar10;
  
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x19c) == 0) {
    *(undefined4 *)((int)param_1 + 0x19c) = 1;
  }
  switch(*(undefined4 *)((int)param_1 + 0x19c)) {
  case 1:
    if (*(int *)((int)param_1 + 0x10) < 0) {
      FUN_6622b340((int)param_1);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x19c) = 2;
      FUN_6622be80(param_1);
    }
    break;
  case 2:
    piVar7 = *(int **)((int)param_1 + 0x1ac);
    local_10 = (undefined1 *)0x0;
    local_c = 0;
    *(int *)((int)param_1 + 0x1b8) = *piVar7;
    pvStack_1c = *(void **)(*(int *)((int)param_1 + 0x26) + (uint)*(ushort *)(piVar7 + 1) * 4);
    if (pvStack_1c == (void *)0x0) {
      local_8 = -0x7fffbffb;
    }
    else {
      uVar8 = *(int *)((int)param_1 + 0x1b4) + 0xc;
      local_28 = *(ushort *)(piVar7 + 1);
      iVar11 = *piVar7;
      local_22 = *(ushort *)(piVar7 + 2);
      local_2c = (byte *)CONCAT22((short)uVar8,(undefined2)local_2c);
      local_26 = iVar11;
      local_c = uVar8;
      if ((uint)local_28 == *(uint *)((int)param_1 + 0x74)) {
        if (*(int *)((int)param_1 + 0x78) != 0) {
          if ((local_22 & 2) == 0) {
            iVar11 = *(int *)((int)param_1 + 0x7c);
          }
          else {
            *(int *)((int)param_1 + 0x7c) = iVar11;
          }
          *(int *)((int)param_1 + 0x1b8) = iVar11;
          local_26 = iVar11;
        }
        iVar11 = local_26;
        if (*(int *)((int)param_1 + 0x15c) == 0) {
          local_14 = (undefined1 *)0x0;
          local_18 = 0;
          FUN_66217fa0(pvStack_1c,&local_14,&local_18);
          *(uint *)((int)param_1 + 0x15c) = (uint)local_14 >> 3;
        }
        uVar8 = local_c;
        if (*(int *)((int)param_1 + 0x164) != iVar11) {
          *(undefined4 *)((int)param_1 + 0x160) = 0;
          *(int *)((int)param_1 + 0x164) = iVar11;
        }
        *(int *)((int)param_1 + 0x160) =
             *(int *)((int)param_1 + 0x160) + *(int *)((int)param_1 + 0x1b4);
        local_20 = *(undefined4 *)((int)param_1 + 0x15c);
        pvStack_1c = (void *)0x0;
        iVar4 = ftol();
        *(int *)((int)param_1 + 0x1b8) = *(int *)((int)param_1 + 0x1b8) + iVar4;
      }
      piVar7 = *(int **)((int)param_1 + 0x1b0);
      if ((piVar7 != (int *)0x0) &&
         ((uint)*(ushort *)(*(int *)((int)param_1 + 0x1ac) + 4) == *(uint *)((int)param_1 + 0x8c)))
      {
        iVar4 = (**(code **)(*piVar7 + 0x1c))(piVar7);
        iVar4 = FUN_662647b0(*(uint *)(iVar4 + 8));
        *(int *)((int)param_1 + 0x1b8) = iVar4;
        uVar8 = local_c;
      }
      uVar9 = (undefined1)((uint)iVar11 >> 8);
      uVar12 = (undefined1)((uint)iVar11 >> 0x10);
      uVar10 = (undefined1)((uint)iVar11 >> 0x18);
      if (*(int *)((int)param_1 + 0x178) == 0) {
        local_10 = operator_new(uVar8);
        if (local_10 == (undefined1 *)0x0) {
          local_8 = -0x7ff8fff2;
          break;
        }
        *local_10 = 0;
        local_10[1] = 0;
        local_10[2] = local_2c._3_1_;
        local_10[3] = local_2c._2_1_;
        local_10[4] = local_28._1_1_;
        local_10[5] = (undefined1)local_28;
        local_10[6] = uVar10;
        local_10[7] = uVar12;
        local_10[8] = uVar9;
        local_10[9] = (undefined1)local_26;
        local_10[10] = local_22._1_1_;
        local_10[0xb] = (undefined1)local_22;
        pvVar2 = *(void **)((int)param_1 + 0x1b4);
        puVar6 = (undefined4 *)
                 (**(code **)(**(int **)((int)param_1 + 0x1b0) + 0x1c))
                           (*(int **)((int)param_1 + 0x1b0));
        puVar14 = (undefined4 *)(local_10 + 0xc);
        for (uVar8 = (uint)pvVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar14 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar8 = (uint)pvVar2 & 3; pvStack_1c = pvVar2, uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
      }
      else {
        local_18 = uVar8;
        puVar5 = operator_new(uVar8);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = local_2c._3_1_;
        puVar5[3] = local_2c._2_1_;
        puVar5[4] = local_28._1_1_;
        puVar5[5] = (undefined1)local_28;
        puVar5[6] = uVar10;
        puVar5[7] = uVar12;
        puVar5[8] = uVar9;
        puVar5[9] = (undefined1)local_26;
        puVar5[10] = local_22._1_1_;
        puVar5[0xb] = (undefined1)local_22;
        pvVar2 = *(void **)((int)param_1 + 0x1b4);
        local_14 = puVar5;
        puVar6 = (undefined4 *)
                 (**(code **)(**(int **)((int)param_1 + 0x1b0) + 0x1c))
                           (*(int **)((int)param_1 + 0x1b0));
        puVar16 = local_14;
        puVar14 = (undefined4 *)(puVar5 + 0xc);
        for (uVar8 = (uint)pvVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar14 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar8 = (uint)pvVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        pvStack_1c = pvVar2;
        iVar11 = FUN_66225e90(param_1,local_14,local_18,
                              *(byte *)(*(int *)((int)param_1 + 0x1ac) + 8) & 2,&local_10,&local_c);
        local_8 = iVar11;
        if (puVar16 != (undefined1 *)0x0) {
          operator_delete(puVar16);
        }
        if (iVar11 < 0) break;
        *(uint *)((int)param_1 + 0x1b4) = local_c - 0xc;
      }
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)FUN_662522d0(puVar6);
      }
      (**(code **)(*piVar7 + 4))(piVar7);
      (**(code **)(*piVar7 + 0x10))(piVar7,local_10,local_c);
      *(uint *)((int)param_1 + 0x18c) = *(int *)((int)param_1 + 0x18c) + local_c;
      (**(code **)(**(int **)((int)param_1 + 0x184) + 0x1c))(*(int **)((int)param_1 + 0x184),piVar7)
      ;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
      }
      if (local_10 != (undefined1 *)0x0) {
        operator_delete(local_10);
      }
    }
    break;
  case 3:
    puVar16 = *(undefined1 **)
               (*(int *)((int)param_1 + 0x26) +
               (uint)*(ushort *)(*(int *)((int)param_1 + 0x1ac) + 4) * 4);
    local_14 = puVar16;
    FUN_662500f0(&local_2c);
    uVar8 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x1ac) + 4);
    if (((int)uVar8 < *(int *)((int)param_1 + 0xb4)) &&
       (pvVar2 = *(void **)(*(int *)((int)param_1 + 0xb0) + uVar8 * 4), pvStack_1c = pvVar2,
       (int)uVar8 < *(int *)((int)param_1 + 0x2a))) {
      piVar7 = FUN_66218240(puVar16,local_38);
      FUN_662503a0(&local_2c,piVar7);
      FUN_66250210(local_38);
      if (pvVar2 != (void *)0x0) {
        uVar8 = 0;
        pcVar15 = s_audio_x_pn_realaudio_6626f0fc;
        pbVar13 = local_2c;
        do {
          bVar1 = *pbVar13;
          bVar17 = bVar1 < (byte)*pcVar15;
          if (bVar1 != *pcVar15) {
LAB_6622c2b7:
            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_6622c2bc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar13[1];
          bVar17 = bVar1 < (byte)pcVar15[1];
          if (bVar1 != pcVar15[1]) goto LAB_6622c2b7;
          pbVar13 = pbVar13 + 2;
          pcVar15 = pcVar15 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_6622c2bc:
        if (iVar11 == 0) {
          sVar3 = FUN_66218520((int)local_14);
          uVar8 = (uint)(sVar3 == 1);
        }
        FUN_66219e40(pvStack_1c,*(uint **)((int)param_1 + 0x1ac),
                     *(undefined4 *)((int)param_1 + 0x18c),*(int *)((int)param_1 + 0x1b4),uVar8);
        puVar16 = local_14;
      }
      if ((*(int *)((int)param_1 + 0x10) < *(int *)((int)param_1 + 0x94)) &&
         (iVar11 = *(int *)(*(int *)((int)param_1 + 0x90) + *(int *)((int)param_1 + 0x10) * 4),
         iVar11 != 0)) {
        *(int *)(iVar11 + 0x12) = *(int *)(iVar11 + 0x12) + 1;
        *(int *)(*(int *)((int)param_1 + 0xa0) +
                (uint)*(ushort *)(*(int *)((int)param_1 + 0x1ac) + 4) * 4) = iVar11;
        if ((uint)*(ushort *)(*(int *)((int)param_1 + 0x1ac) + 4) == *(uint *)((int)param_1 + 0x50))
        {
          *(int *)(*(int *)((int)param_1 + 0xa0) + *(int *)((int)param_1 + 0x4c) * 4) = iVar11;
        }
        *(int *)((int)param_1 + 0x14a) = *(int *)((int)param_1 + 0x14a) + 1;
        FUN_66218020(puVar16,*(undefined4 *)((int)param_1 + 0x1b8));
        if (*(uint *)((int)param_1 + 0x158) < *(uint *)((int)param_1 + 0x1b8)) {
          *(uint *)((int)param_1 + 0x158) = *(uint *)((int)param_1 + 0x1b8);
        }
        if (*(uint *)((int)param_1 + 0x14e) < *(uint *)((int)param_1 + 0x1b4)) {
          *(uint *)((int)param_1 + 0x14e) = *(uint *)((int)param_1 + 0x1b4);
        }
        *(undefined4 *)((int)param_1 + 0x19c) = 4;
        FUN_6622be80(param_1);
        FUN_66250210(&local_2c);
        break;
      }
    }
    local_8 = -0x7fffbffb;
    FUN_66250210(&local_2c);
    break;
  case 4:
    *(undefined4 *)((int)param_1 + 400) = 0;
    *(undefined4 *)((int)param_1 + 0x19c) = 0;
    FUN_66217410(*(void **)((int)param_1 + 0x180),0);
    break;
  default:
    local_8 = -0x7ffbfff7;
  }
  if (local_8 < 0) {
    FUN_66217410(*(void **)((int)param_1 + 0x180),local_8);
  }
  return 0;
}


