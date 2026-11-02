/* Module: rmbe3260.dll
   Function: FUN_6600f350
   Address: 6600f350
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6600f350(int *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  uint3 uVar4;
  short sVar5;
  bool bVar6;
  char *pcVar7;
  CPNTimer **ppCVar8;
  void *this;
  CPNTimer *pCVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  char *pcVar17;
  bool bVar18;
  char *pcVar19;
  char local_ac [80];
  int *local_5c;
  undefined4 local_58;
  int local_54;
  byte *local_50;
  int local_4c;
  undefined2 local_48;
  undefined1 local_44;
  undefined1 uStack_43;
  byte bStack_42;
  byte bStack_41;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined4 uStack_36;
  byte *local_30;
  int local_2c;
  undefined2 local_28;
  byte *local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined1 uStack_1b;
  byte bStack_1a;
  byte bStack_19;
  undefined2 uStack_18;
  byte bStack_16;
  byte bStack_15;
  undefined2 uStack_14;
  undefined1 local_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined4 local_e;
  char *local_8;
  
  FUN_6602f240(&local_30);
  local_8 = (char *)0x0;
  local_20 = (undefined4 *)0x0;
  local_24 = (byte *)0x0;
  local_58 = 0;
  if (param_1[9] == 0) {
    local_54 = -0x7ffbfda8;
    goto LAB_6600faf3;
  }
  if (param_2 == (int *)0x0) {
    local_54 = -0x7ff8ffa9;
    goto LAB_6600faf3;
  }
  if ((param_1[0x22] == 0) && (param_1[0x24] == 0)) {
    local_54 = -0x7ffbfff9;
    goto LAB_6600faf3;
  }
  iVar14 = param_1[0x11];
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x10) != 0)) && (*(int *)(iVar14 + 0x14) == 0)) {
    return 0x40267;
  }
  if (param_1[0xe] == 1) {
    return 0;
  }
  local_54 = 0;
  if (param_1[0x2b] == 0) {
    if (param_1[0x23] == 0) {
      local_54 = -0x7fffbffb;
    }
    else {
      local_54 = (**(code **)(*param_1 + 0x48))(param_1);
    }
  }
  if (local_54 < 0) goto LAB_6600faf3;
  local_54 = (**(code **)(*param_2 + 0x10))(param_2,&local_20,&local_8,&local_24,&local_58);
  if (local_54 < 0) goto LAB_6600faf3;
  if (param_1[10] == 0) {
    iVar14 = param_1[0x11];
    if ((iVar14 != 0) && (*(int *)(iVar14 + 0x10) != 0)) {
      pbVar10 = *(byte **)(iVar14 + 0x18);
      if (local_24 < pbVar10) goto LAB_6600f469;
      pbVar10 = local_24 + -(int)pbVar10;
      goto LAB_6600f46c;
    }
  }
  else {
    pbVar10 = (byte *)param_1[0xb];
    if (local_24 < pbVar10) {
LAB_6600f469:
      pbVar10 = local_24 + (-1 - (int)pbVar10);
    }
    else {
      pbVar10 = local_24 + -(int)pbVar10;
    }
LAB_6600f46c:
    if ((byte *)0x5265c00 < pbVar10) {
      local_54 = 0x40267;
      goto LAB_6600faf3;
    }
  }
  param_1[0xb] = (int)local_24;
  if (param_1[0xd] == 0) {
    param_1[0xc] = (int)local_24;
    param_1[0xd] = 1;
    param_1[0x2e] = (int)local_24;
    param_1[0x2f] = (int)local_24;
  }
  local_e = (char *)CONCAT22(local_e._2_2_,(undefined2)local_e);
  if ((local_20 == (undefined4 *)0x0) || (local_8 == (char *)0x0)) {
    uVar13 = CONCAT22(uStack_18,CONCAT11(bStack_19,bStack_1a));
    uVar12 = CONCAT22(uStack_14,CONCAT11(bStack_15,bStack_16));
  }
  else {
    bStack_19 = *(byte *)(local_20 + 1);
    uVar12 = (uint)*(byte *)((int)local_20 + 2) << 0x18 | (uint)*(byte *)((int)local_20 + 3) << 0x10
    ;
    bStack_1a = *(byte *)((int)local_20 + 5);
    uVar13 = uVar12 | (uint)bStack_19 << 8 | (uint)bStack_1a;
    uStack_18 = (undefined2)(uVar12 >> 0x10);
    uVar11 = (uint)*(byte *)((int)local_20 + 6) << 0x18 | (uint)*(byte *)((int)local_20 + 7) << 0x10
    ;
    bStack_15 = *(byte *)(local_20 + 2);
    bStack_16 = *(byte *)((int)local_20 + 9);
    uVar12 = uVar11 | (uint)bStack_15 << 8 | (uint)bStack_16;
    uStack_14 = (undefined2)(uVar11 >> 0x10);
    uStack_11 = *(undefined1 *)((int)local_20 + 10);
    local_12 = *(undefined1 *)((int)local_20 + 0xb);
    uStack_f = *(undefined1 *)(local_20 + 3);
    uStack_10 = *(undefined1 *)((int)local_20 + 0xd);
    if ((int)((char *)((int)local_20 + 0xe) +
             ((CONCAT12(uStack_10,CONCAT11(uStack_11,local_12)) & 0xffff) - (int)local_20) + -2) <=
        (int)local_8) {
      local_e = (char *)((int)local_20 + 0xe);
    }
  }
  sVar5 = CONCAT11(uStack_f,uStack_10);
  local_1c = (undefined1)*(undefined2 *)((int)param_1 + 0xaa);
  uStack_1b = (undefined1)((ushort)*(undefined2 *)((int)param_1 + 0xaa) >> 8);
  if (((sVar5 == 1) || (sVar5 == 0)) || (sVar5 == 2)) {
    bStack_16 = 0xff;
    bStack_15 = 0xff;
    uStack_14 = 0xffff;
  }
  else if ((0 < (int)uVar12) && (uVar13 = uVar13 + 2, uVar12 < uVar13)) {
    bStack_16 = (byte)uVar13;
    bStack_15 = (byte)(uVar13 >> 8);
    uStack_14 = (undefined2)(uVar13 >> 0x10);
    local_54 = 0x403c2;
  }
  *(undefined1 *)local_20 = uStack_1b;
  *(undefined1 *)((int)local_20 + 1) = local_1c;
  uVar4 = CONCAT12(uStack_10,CONCAT11(uStack_11,local_12));
  *(char *)((int)local_20 + 2) = (char)((ushort)uStack_18 >> 8);
  uVar12 = uVar4 & 0xffff;
  *(char *)((int)local_20 + 3) = (char)uStack_18;
  *(byte *)(local_20 + 1) = bStack_19;
  *(byte *)((int)local_20 + 5) = bStack_1a;
  *(char *)((int)local_20 + 6) = (char)((ushort)uStack_14 >> 8);
  *(char *)((int)local_20 + 7) = (char)uStack_14;
  *(byte *)(local_20 + 2) = bStack_15;
  *(byte *)((int)local_20 + 9) = bStack_16;
  *(undefined1 *)((int)local_20 + 10) = uStack_11;
  *(undefined1 *)((int)local_20 + 0xb) = local_12;
  *(undefined1 *)(local_20 + 3) = uStack_f;
  *(undefined1 *)((int)local_20 + 0xd) = uStack_10;
  pcVar19 = local_e;
  pcVar17 = (char *)((int)local_20 + 0xe);
  for (uVar13 = uVar12 - 2 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar19;
    pcVar19 = pcVar19 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar12 - 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    pcVar17 = pcVar17 + 1;
  }
  local_30 = local_24;
  if (local_24 == (byte *)0x0) {
    local_30 = (byte *)0x1;
  }
  local_2c = (uint)*(ushort *)((int)param_1 + 0xaa) << 0x10;
  local_28 = (undefined2)local_58;
  if (param_1[0x22] != 0) {
    FUN_6605b7e0(&local_50,&DAT_66075004);
    if (CONCAT11(uStack_f,uStack_10) == 0x20) {
      pcVar7 = operator_new(uVar12 + 1);
      pcVar19 = local_e;
      pcVar17 = pcVar7;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar13 = uVar4 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar17 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar17 = pcVar17 + 1;
      }
      pcVar7[uVar12] = '\0';
      FUN_6600ef50(pcVar7,(void *)0x0,&local_50);
      if (pcVar7 != (char *)0x0) {
        operator_delete(pcVar7);
      }
    }
    if (DAT_66075068 != 0) {
      FUN_6605b430(0,s_CEventPin__Encode__m_aEventRepea_6606c94c);
      iVar14 = 0;
      if (0 < param_1[0x36]) {
        do {
          piVar2 = *(int **)(param_1[0x35] + iVar14 * 4);
          if (piVar2 == (int *)0x0) {
            pcVar19 = s_CEventPin__Encode__m_aEventRepea_6606c8c8;
LAB_6600f72e:
            FUN_6605b430(0,pcVar19);
          }
          else {
            if (*piVar2 == 0) {
              pcVar19 = s_CEventPin__Encode___m_aEventRepe_6606c8f4;
              goto LAB_6600f72e;
            }
            sprintf(local_ac,s_CEventPin__Encode___m_aEventRepe_6606c920,iVar14);
            iVar16 = *piVar2;
            FUN_6600f010(local_ac,*(undefined4 *)(iVar16 + 0x2c),*(int *)(iVar16 + 0x30),
                         *(int *)(iVar16 + 0x34));
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < param_1[0x36]);
      }
    }
    iVar14 = param_1[0x36] + -1;
    if (-1 < iVar14) {
      local_5c = param_1 + 0x35;
      do {
        piVar2 = *(int **)(*local_5c + iVar14 * 4);
        if (piVar2 != (int *)0x0) {
          iVar16 = *piVar2;
          bVar6 = false;
          if (iVar16 == 0) {
            bVar6 = true;
          }
          else if (*(short *)(iVar16 + 0x40) == CONCAT11(uStack_f,uStack_10)) {
            if (CONCAT11(uStack_f,uStack_10) == 0x20) {
              FUN_6605b670(&local_40,(int *)(iVar16 + 0x42));
              pbVar10 = (byte *)CONCAT13(local_40._3_1_,
                                         CONCAT12(local_40._2_1_,(undefined2)local_40));
              pbVar15 = local_50;
              do {
                bVar1 = *pbVar10;
                bVar18 = bVar1 < *pbVar15;
                if (bVar1 != *pbVar15) {
LAB_6600f7c6:
                  iVar16 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                  goto LAB_6600f7cb;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar10[1];
                bVar18 = bVar1 < pbVar15[1];
                if (bVar1 != pbVar15[1]) goto LAB_6600f7c6;
                pbVar10 = pbVar10 + 2;
                pbVar15 = pbVar15 + 2;
              } while (bVar1 != 0);
              iVar16 = 0;
LAB_6600f7cb:
              FUN_6605b770(&local_40);
              if (iVar16 == 0) goto LAB_6600f7d7;
            }
            else {
LAB_6600f7d7:
              bVar6 = true;
            }
            if (!bVar6) goto LAB_6600f864;
            if (DAT_66075068 != 0) {
              sprintf(local_ac,s_CEventPin__Encode__REMOVE__m_aEv_6606c898,iVar14);
              iVar16 = *piVar2;
              FUN_6600f010(local_ac,*(undefined4 *)(iVar16 + 0x2c),*(int *)(iVar16 + 0x30),
                           *(int *)(iVar16 + 0x34));
            }
            XPNTimer::SetPending((XPNTimer *)*piVar2,0);
            piVar3 = (int *)*piVar2;
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))(piVar3);
              *piVar2 = 0;
            }
          }
          if (bVar6) {
            FUN_6605d000(local_5c,iVar14,1);
            operator_delete(piVar2);
          }
        }
LAB_6600f864:
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    ppCVar8 = operator_new(4);
    this = operator_new(0x52);
    if (this == (void *)0x0) {
      pCVar9 = (CPNTimer *)0x0;
    }
    else {
      pCVar9 = FUN_6600fd20(this,3000,1,ppCVar8);
    }
    *ppCVar8 = pCVar9;
    FUN_6605cf30(param_1 + 0x35,param_1[0x36],ppCVar8);
    if (*ppCVar8 != (CPNTimer *)0x0) {
      FUN_6600fdd0(*ppCVar8,&local_30,local_20,(uint)local_8,param_1[0x22],
                   (CONCAT22(uStack_14,CONCAT11(bStack_15,bStack_16)) -
                   CONCAT22(uStack_18,CONCAT11(bStack_19,bStack_1a))) * 10,
                   CONCAT11(uStack_f,uStack_10),(int *)&local_50);
      if (DAT_66075068 != 0) {
        sprintf(local_ac,s_CEventPin__Encode__ADD__m_aEvent_6606c86c);
        pCVar9 = *ppCVar8;
        FUN_6600f010(local_ac,*(undefined4 *)(pCVar9 + 0x2c),*(int *)(pCVar9 + 0x30),
                     *(int *)(pCVar9 + 0x34));
      }
    }
    FUN_6605b770((int *)&local_50);
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 0x2c))(&local_30,local_20,local_8);
  }
  if (param_1[0x24] != 0) {
    local_4c = local_2c;
    local_48 = local_28;
    local_44 = local_1c;
    uStack_43 = uStack_1b;
    bStack_42 = bStack_1a;
    bStack_41 = bStack_19;
    local_40._0_2_ = uStack_18;
    local_40._2_1_ = bStack_16;
    local_40._3_1_ = bStack_15;
    local_3c = uStack_14;
    uStack_3a = local_12;
    uStack_39 = uStack_11;
    local_38 = uStack_10;
    uStack_37 = uStack_f;
    iVar14 = param_1[0x11];
    local_50 = local_30;
    if (((iVar14 != 0) && (*(int *)(iVar14 + 0x10) != 0)) && (*(int *)(iVar14 + 0x14) != 0)) {
      pbVar10 = *(byte **)(iVar14 + 0x18);
      if (local_30 < pbVar10) {
        iVar16 = -1 - (int)pbVar10;
      }
      else {
        iVar16 = -(int)pbVar10;
      }
      local_50 = (byte *)(-(uint)(local_30 + iVar16 < (byte *)0x5265c00) & (uint)(local_30 + iVar16)
                         );
      uVar13 = *(uint *)(iVar14 + 0x18);
      uVar12 = CONCAT22(uStack_18,CONCAT11(bStack_19,bStack_1a)) * 100;
      if (uVar12 < uVar13) {
        uVar12 = (uVar12 - uVar13) - 1;
      }
      else {
        uVar12 = uVar12 - uVar13;
      }
      uVar12 = uVar12 / 100;
      bStack_42 = (byte)uVar12;
      bStack_41 = (byte)(uVar12 >> 8);
      local_40._0_2_ = (undefined2)(uVar12 >> 0x10);
      uVar11 = CONCAT22(uStack_14,CONCAT11(bStack_15,bStack_16)) * 100;
      if (uVar11 < uVar13) {
        uVar11 = (uVar11 - uVar13) - 1;
      }
      else {
        uVar11 = uVar11 - uVar13;
      }
      uVar11 = uVar11 / 100;
      *(undefined1 *)local_20 = uStack_1b;
      local_40._2_1_ = (byte)uVar11;
      local_40._3_1_ = (byte)(uVar11 >> 8);
      local_3c = (undefined2)(uVar11 >> 0x10);
      *(undefined1 *)((int)local_20 + 1) = local_1c;
      *(char *)((int)local_20 + 2) = (char)(uVar12 >> 0x18);
      *(char *)((int)local_20 + 3) = (char)(uVar12 >> 0x10);
      *(byte *)(local_20 + 1) = bStack_41;
      *(byte *)((int)local_20 + 5) = bStack_42;
      *(char *)((int)local_20 + 6) = (char)(uVar11 >> 0x18);
      *(char *)((int)local_20 + 7) = (char)(uVar11 >> 0x10);
      *(byte *)(local_20 + 2) = local_40._3_1_;
      *(byte *)((int)local_20 + 9) = local_40._2_1_;
      *(undefined1 *)((int)local_20 + 10) = uStack_11;
      *(undefined1 *)((int)local_20 + 0xb) = local_12;
      *(undefined1 *)(local_20 + 3) = uStack_f;
      *(undefined1 *)((int)local_20 + 0xd) = uStack_10;
      uVar11 = CONCAT12(uStack_10,CONCAT11(uStack_11,local_12)) & 0xffff;
      uVar13 = uVar11 - 2;
      pcVar19 = local_e;
      pcVar17 = (char *)((int)local_20 + 0xe);
      for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar17 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar17 = pcVar17 + 1;
      }
      local_8 = (char *)((int)local_20 + 0xe) + uVar11 + (-2 - (int)local_20);
    }
    uStack_36 = local_e;
    (**(code **)(*(int *)param_1[0x24] + 0x2c))(&local_50,local_20,local_8);
  }
  *(short *)((int)param_1 + 0xaa) = *(short *)((int)param_1 + 0xaa) + 1;
  *(byte **)((int)param_1 + 0xa6) = local_24;
  (**(code **)(*param_1 + 0x5c))(param_1,local_24,local_8);
LAB_6600faf3:
  if (((param_1[10] == 0) && (-1 < local_54)) && (local_54 != 0x40267)) {
    param_1[10] = 1;
  }
  return local_54;
}


