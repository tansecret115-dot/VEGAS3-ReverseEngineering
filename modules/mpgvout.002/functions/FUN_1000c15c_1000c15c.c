/* Module: mpgvout.002
   Function: FUN_1000c15c
   Address: 1000c15c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_1000c15c(int param_1,int param_2,int param_3,undefined8 *param_4,int param_5,uint param_6,
            uint param_7,int param_8,int param_9,int param_10,uint param_11,int param_12,
            uint param_13,int param_14,int *param_15,int *param_16)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  short sVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_b8;
  int local_b4;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_58;
  uint local_54;
  uint local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  iVar1 = param_3 + *(int *)(param_2 + 0xc);
  iVar17 = param_3 + *(int *)(param_2 + 0x18);
  if ((int)param_11 <= (int)(param_6 - param_8)) {
    param_11 = param_6 - param_8;
  }
  if ((int)(param_8 + param_6) <= param_12) {
    param_12 = param_8 + param_6;
  }
  if ((int)param_13 <= (int)(param_7 - param_9)) {
    param_13 = param_7 - param_9;
  }
  if ((int)(param_7 + param_9) <= param_14) {
    param_14 = param_7 + param_9;
  }
  iVar5 = *(int *)(param_1 + 0x534);
  if (param_10 == 0x10) {
    uVar12 = (undefined1)((uint)(iVar5 + 0x7f) >> 8);
  }
  else {
    uVar12 = (undefined1)(iVar5 + 0x3f >> 7);
  }
  uVar27 = CONCAT22(CONCAT11(uVar12,uVar12),CONCAT11(uVar12,uVar12));
  uVar26 = CONCAT44(uVar27,uVar27);
  uVar24 = 0;
  uVar28 = 0;
  iVar18 = param_5 * param_7;
  puVar9 = param_4;
  iVar16 = param_10;
  if (0 < param_10) {
    do {
      uVar22 = psubusb(uVar26,*puVar9);
      uVar21 = psubusb(*puVar9,uVar26);
      uVar21 = uVar21 | uVar22;
      uVar24 = paddusw(uVar24,(ulonglong)
                              CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)(uVar21
                                                                                             >> 0x18
                                                  ) << 0x30) >> 0x28),(char)(uVar21 >> 0x10)) <<
                                                  0x20) >> 0x18),(char)(uVar21 >> 8)),
                                       (ushort)(byte)uVar21));
      uVar25 = paddusw(uVar24,(ulonglong)
                              CONCAT16((char)(uVar21 >> 0x38),
                                       (uint6)CONCAT14((char)(uVar21 >> 0x30),
                                                       (uint)CONCAT12((char)(uVar21 >> 0x28),
                                                                      (ushort)(byte)(uVar21 >> 0x20)
                                                                     ))));
      uVar24 = psubusb(uVar21,uVar28);
      uVar29 = paddusb(uVar28,uVar24);
      uVar21 = psubusb(uVar26,puVar9[1]);
      uVar28 = psubusb(puVar9[1],uVar26);
      uVar28 = uVar28 | uVar21;
      uVar3 = (ushort)(((uint7)(byte)(uVar28 >> 0x18) << 0x30) >> 0x28);
      uVar24 = CONCAT26((short)((ulonglong)uVar25 >> 0x30) + (uVar3 >> 8) +
                        (ushort)(byte)(uVar28 >> 0x38),
                        CONCAT24((short)((ulonglong)uVar25 >> 0x20) +
                                 (short)CONCAT21(uVar3,(char)(uVar28 >> 0x10)) +
                                 (ushort)(byte)(uVar28 >> 0x30),
                                 CONCAT22((short)((ulonglong)uVar25 >> 0x10) +
                                          (ushort)(byte)(uVar28 >> 8) +
                                          (ushort)(byte)(uVar28 >> 0x28),
                                          (short)uVar25 + ((ushort)uVar28 & 0xff) +
                                          (ushort)(byte)(uVar28 >> 0x20))));
      uVar25 = psubusb(uVar28,uVar29);
      uVar28 = paddusb(uVar29,uVar25);
      iVar16 = iVar16 + -1;
      puVar9 = (undefined8 *)((int)puVar9 + param_5);
    } while (iVar16 != 0);
  }
  sVar23 = (short)((ulonglong)uVar24 >> 0x20);
  sVar2 = (short)((ulonglong)uVar24 >> 0x30);
  iVar16 = CONCAT22(sVar2 + (short)((ulonglong)uVar24 >> 0x10),sVar23 + (short)uVar24);
  uVar24 = CONCAT26(sVar2,CONCAT24(sVar23,iVar16));
  uVar26 = paddusw(CONCAT44((int)((ulonglong)uVar24 >> 0x20) << 0x10,iVar16 << 0x10),uVar24);
  uVar24 = psubusb(uVar28,uVar28 >> 0x20);
  uVar24 = paddusb(uVar28 >> 0x20,uVar24);
  uVar25 = CONCAT44((int)((ulonglong)uVar24 >> 0x20) << 0x10,(int)uVar24 << 0x10);
  uVar24 = psubusb(uVar24,uVar25);
  uVar24 = paddusb(uVar25,uVar24);
  uVar25 = CONCAT44((int)((ulonglong)uVar24 >> 0x20) << 8,(int)uVar24 << 8);
  uVar24 = psubusb(uVar24,uVar25);
  uVar24 = paddusb(uVar25,uVar24);
  uVar13 = (uint)((ulonglong)uVar24 >> 0x18) & 0xff;
  iVar5 = iVar5 + 0x3f >> 7;
  if (param_10 != 8) {
    uVar13 = (int)uVar13 >> 1;
  }
  if ((int)uVar13 < *(int *)(param_1 + 0x2d4)) {
    local_2c = (**(code **)(param_1 + 0x504))
                         (iVar1 + param_6 + iVar18,param_4,param_5,0,0,param_10,0xffff);
    *param_15 = param_6 * 2;
    *param_16 = param_7 * 2;
  }
  else {
    iVar10 = ((int)(((uint)((ulonglong)uVar26 >> 0x10) & 0xffff) + 0x3f) >> 7) * 3 + 7 >> 4;
    local_14 = param_6;
    iVar16 = iVar10 + 1;
    local_18 = param_7;
    local_2c = 0xffff;
    if (param_10 == 0x10) {
      if (param_9 < param_8) {
        param_9 = param_8;
      }
      local_54 = 0x7fff;
      local_cc = param_9 * 4 + 1;
      local_3c = 0x200;
      local_40 = 1;
      local_44 = 1;
      local_48 = 0;
      local_50 = 0x7fff;
      local_58 = 0xffff;
      while( true ) {
        iVar10 = local_40;
        if ((int)param_7 < (int)param_13) {
          local_44 = local_44 + -1;
          param_7 = param_7 + 1;
          iVar18 = iVar18 + param_5;
          uVar13 = param_6 + local_40;
        }
        else {
          uVar11 = local_40 + param_6;
          uVar13 = uVar11;
          if (((param_7 & 1) == 0) && (uVar13 = param_6, (int)param_6 < (int)uVar11)) {
            iVar14 = iVar1 + iVar18 + param_6;
            do {
              if (((param_7 ^ param_6) & 3) == 0) {
                iVar20 = ((uint)*(byte *)(param_6 + iVar17 + iVar18) +
                         (uint)*(byte *)(param_6 + iVar17 + iVar18 + param_5)) - iVar5;
                iVar6 = -iVar20;
                if (-1 < iVar20) {
                  iVar6 = iVar20;
                }
                if (iVar6 < local_3c) {
                  local_3c = iVar6 + iVar16;
                  iVar6 = (**(code **)(param_1 + 0x504))(iVar14,param_4,param_5,0,0,0x10,local_58);
                  if (iVar6 < local_58) {
                    local_58 = iVar6;
                    local_18 = param_7;
                    local_14 = param_6;
                  }
                }
              }
              iVar14 = iVar14 + 1;
              param_6 = param_6 + 1;
              uVar13 = param_6;
            } while ((int)param_6 < (int)uVar11);
          }
        }
        iVar14 = local_44;
        local_d0 = local_40 + 1;
        local_40 = local_d0;
        if (local_cc == 1) break;
        if (param_12 < (int)uVar13) {
          uVar13 = uVar13 - 1;
          iVar18 = iVar18 + local_44 * param_5;
          param_7 = param_7 + local_44;
          local_40 = iVar10;
        }
        else {
          uVar11 = local_44 + param_7;
          if ((uVar13 & 1) == 0) {
            if ((int)param_7 < (int)uVar11) {
              pbVar19 = (byte *)(iVar17 + uVar13 + iVar18);
              do {
                if (((param_7 ^ uVar13) & 3) == 0) {
                  iVar6 = ((uint)*pbVar19 + (uint)pbVar19[param_5]) - iVar5;
                  iVar10 = -iVar6;
                  if (-1 < iVar6) {
                    iVar10 = iVar6;
                  }
                  if (iVar10 < local_3c) {
                    local_3c = iVar10 + iVar16;
                    iVar10 = (**(code **)(param_1 + 0x504))
                                       (iVar1 + uVar13 + iVar18,param_4,param_5,0,0,0x10,local_58);
                    if (iVar10 < local_58) {
                      local_58 = iVar10;
                      local_18 = param_7;
                      local_14 = uVar13;
                    }
                  }
                }
                param_7 = param_7 + 1;
                pbVar19 = pbVar19 + param_5;
                iVar18 = iVar18 + param_5;
              } while ((int)param_7 < (int)uVar11);
            }
          }
          else {
            iVar18 = iVar18 + param_5 * local_44;
            param_7 = uVar11;
          }
        }
        iVar10 = local_40;
        local_d4 = local_44 + 1;
        local_44 = local_d4;
        if (local_cc == 2) break;
        if (param_14 < (int)param_7) {
          param_7 = param_7 - 1;
          iVar18 = iVar18 - param_5;
          param_6 = uVar13 - local_40;
          local_44 = iVar14;
        }
        else {
          uVar11 = uVar13 - local_40;
          param_6 = uVar11;
          if (((param_7 & 1) == 0) && (param_6 = uVar13, (int)uVar11 < (int)uVar13)) {
            iVar14 = iVar1 + iVar18 + uVar13;
            do {
              if (((param_7 ^ uVar13) & 3) == 0) {
                iVar20 = ((uint)*(byte *)(uVar13 + iVar17 + iVar18) +
                         (uint)*(byte *)(uVar13 + iVar17 + iVar18 + param_5)) - iVar5;
                iVar6 = -iVar20;
                if (-1 < iVar20) {
                  iVar6 = iVar20;
                }
                if (iVar6 < local_3c) {
                  local_3c = iVar6 + iVar16;
                  iVar6 = (**(code **)(param_1 + 0x504))(iVar14,param_4,param_5,0,0,0x10,local_58);
                  if (iVar6 < local_58) {
                    local_58 = iVar6;
                    local_18 = param_7;
                    local_14 = uVar13;
                  }
                }
              }
              iVar14 = iVar14 + -1;
              uVar13 = uVar13 - 1;
              param_6 = uVar13;
            } while ((int)uVar11 < (int)uVar13);
          }
        }
        local_d0 = local_40 + 1;
        local_40 = local_d0;
        if (local_cc == 3) break;
        if ((int)param_6 < (int)param_11) {
          param_6 = param_6 + 1;
          iVar18 = iVar18 - local_44 * param_5;
          param_7 = param_7 - local_44;
          local_40 = iVar10;
        }
        else {
          uVar13 = param_7 - local_44;
          if ((param_6 & 1) == 0) {
            for (; (int)uVar13 < (int)param_7; param_7 = param_7 - 1) {
              if (((param_7 ^ param_6) & 3) == 0) {
                iVar14 = ((uint)*(byte *)(param_6 + iVar17 + iVar18) +
                         (uint)*(byte *)(param_6 + iVar17 + iVar18 + param_5)) - iVar5;
                iVar10 = -iVar14;
                if (-1 < iVar14) {
                  iVar10 = iVar14;
                }
                if (iVar10 < local_3c) {
                  local_3c = iVar10 + iVar16;
                  iVar10 = (**(code **)(param_1 + 0x504))
                                     (iVar1 + param_6 + iVar18,param_4,param_5,0,0,0x10,local_58);
                  if (iVar10 < local_58) {
                    local_58 = iVar10;
                    local_18 = param_7;
                    local_14 = param_6;
                  }
                }
              }
              iVar18 = iVar18 - param_5;
            }
          }
          else {
            iVar18 = iVar18 - param_5 * local_44;
            param_7 = uVar13;
          }
        }
        local_cc = local_cc + -4;
        local_d4 = local_44 + 1;
        local_44 = local_d4;
        if (local_cc == 0) break;
        if ((local_50 != local_14) || (local_54 != local_18)) {
          local_48 = 0;
          local_2c = local_58;
          local_50 = local_14;
          local_54 = local_18;
        }
        if (((param_9 + 1 >> 1) + 1 < local_48) || (local_58 < 0x18)) break;
        local_58 = local_58 + -0x18;
        local_48 = local_48 + 1;
      }
      uVar13 = local_18 - 2;
      if ((int)(local_18 - 2) <= (int)param_13) {
        uVar13 = param_13;
      }
      iVar18 = local_18 + 2;
      if (param_14 <= (int)(local_18 + 2)) {
        iVar18 = param_14;
      }
      uVar11 = local_14 - 2;
      if ((int)(local_14 - 2) <= (int)param_11) {
        uVar11 = param_11;
      }
      iVar10 = local_14 + 2;
      if (param_12 <= (int)(local_14 + 2)) {
        iVar10 = param_12;
      }
      iVar14 = uVar13 * param_5;
      while (uVar4 = uVar13, iVar6 = iVar14, (int)uVar4 <= iVar18) {
        iVar14 = param_5 + iVar6;
        uVar13 = uVar4 + 1;
        if ((int)uVar11 <= iVar10) {
          iVar20 = iVar6 + iVar1 + uVar11;
          uVar15 = uVar11;
          do {
            iVar7 = ((uint)*(byte *)(uVar15 + iVar17 + iVar6) +
                    (uint)*(byte *)(uVar15 + param_5 + iVar17 + iVar6)) - iVar5;
            iVar8 = -iVar7;
            if (-1 < iVar7) {
              iVar8 = iVar7;
            }
            if (iVar8 < local_3c) {
              local_3c = iVar8 + iVar16;
              iVar8 = (**(code **)(param_1 + 0x504))(iVar20,param_4,param_5,0,0,0x10,local_2c);
              if (iVar8 < local_2c) {
                local_2c = iVar8;
                local_18 = uVar4;
                local_14 = uVar15;
              }
            }
            iVar20 = iVar20 + 1;
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 <= iVar10);
        }
      }
    }
    else {
      if (param_9 < param_8) {
        param_9 = param_8;
      }
      iVar16 = iVar10 + 2 >> 1;
      local_cc = param_9 * 4 + 1;
      local_98 = 0x7fff;
      local_94 = 0x7fff;
      local_80 = 0x100;
      local_84 = 1;
      local_88 = 1;
      local_8c = 0;
      local_9c = 0xffff;
      while( true ) {
        iVar10 = local_84;
        if ((int)param_7 < (int)param_13) {
          local_88 = local_88 + -1;
          param_7 = param_7 + 1;
          iVar18 = iVar18 + param_5;
          uVar13 = param_6 + local_84;
        }
        else {
          uVar11 = local_84 + param_6;
          uVar13 = uVar11;
          if (((param_7 & 1) == 0) && (uVar13 = param_6, (int)param_6 < (int)uVar11)) {
            iVar14 = iVar1 + iVar18 + param_6;
            do {
              if (((param_7 ^ param_6) & 3) == 0) {
                iVar20 = (uint)*(byte *)(param_6 + iVar17 + iVar18) - iVar5;
                iVar6 = -iVar20;
                if (-1 < iVar20) {
                  iVar6 = iVar20;
                }
                if (iVar6 < local_80) {
                  local_80 = iVar6 + iVar16;
                  iVar6 = (**(code **)(param_1 + 0x504))
                                    (iVar14,param_4,param_5,0,0,param_10,local_9c);
                  if (iVar6 < local_9c) {
                    local_9c = iVar6;
                    local_18 = param_7;
                    local_14 = param_6;
                  }
                }
              }
              iVar14 = iVar14 + 1;
              param_6 = param_6 + 1;
              uVar13 = param_6;
            } while ((int)param_6 < (int)uVar11);
          }
        }
        iVar14 = local_88;
        local_b4 = local_84 + 1;
        local_84 = local_b4;
        if (local_cc == 1) break;
        if (param_12 < (int)uVar13) {
          uVar13 = uVar13 - 1;
          iVar18 = iVar18 + local_88 * param_5;
          param_7 = param_7 + local_88;
          local_84 = iVar10;
        }
        else {
          uVar11 = local_88 + param_7;
          if ((uVar13 & 1) == 0) {
            for (; (int)param_7 < (int)uVar11; param_7 = param_7 + 1) {
              if (((param_7 ^ uVar13) & 3) == 0) {
                iVar6 = (uint)*(byte *)(uVar13 + iVar17 + iVar18) - iVar5;
                iVar10 = -iVar6;
                if (-1 < iVar6) {
                  iVar10 = iVar6;
                }
                if (iVar10 < local_80) {
                  local_80 = iVar10 + iVar16;
                  iVar10 = (**(code **)(param_1 + 0x504))
                                     (iVar1 + uVar13 + iVar18,param_4,param_5,0,0,param_10,local_9c)
                  ;
                  if (iVar10 < local_9c) {
                    local_9c = iVar10;
                    local_18 = param_7;
                    local_14 = uVar13;
                  }
                }
              }
              iVar18 = iVar18 + param_5;
            }
          }
          else {
            iVar18 = iVar18 + param_5 * local_88;
            param_7 = uVar11;
          }
        }
        iVar10 = local_84;
        local_b8 = local_88 + 1;
        local_88 = local_b8;
        if (local_cc == 2) break;
        if (param_14 < (int)param_7) {
          param_7 = param_7 - 1;
          iVar18 = iVar18 - param_5;
          param_6 = uVar13 - local_84;
          local_88 = iVar14;
        }
        else {
          uVar11 = uVar13 - local_84;
          param_6 = uVar11;
          if (((param_7 & 1) == 0) && (param_6 = uVar13, (int)uVar11 < (int)uVar13)) {
            iVar14 = iVar1 + iVar18 + uVar13;
            do {
              if (((param_7 ^ uVar13) & 3) == 0) {
                iVar20 = (uint)*(byte *)(uVar13 + iVar17 + iVar18) - iVar5;
                iVar6 = -iVar20;
                if (-1 < iVar20) {
                  iVar6 = iVar20;
                }
                if (iVar6 < local_80) {
                  local_80 = iVar6 + iVar16;
                  iVar6 = (**(code **)(param_1 + 0x504))
                                    (iVar14,param_4,param_5,0,0,param_10,local_9c);
                  if (iVar6 < local_9c) {
                    local_9c = iVar6;
                    local_18 = param_7;
                    local_14 = uVar13;
                  }
                }
              }
              iVar14 = iVar14 + -1;
              uVar13 = uVar13 - 1;
              param_6 = uVar13;
            } while ((int)uVar11 < (int)uVar13);
          }
        }
        local_b4 = local_84 + 1;
        local_84 = local_b4;
        if (local_cc == 3) break;
        if ((int)param_6 < (int)param_11) {
          param_6 = param_6 + 1;
          iVar18 = iVar18 - local_88 * param_5;
          param_7 = param_7 - local_88;
          local_84 = iVar10;
        }
        else {
          uVar13 = param_7 - local_88;
          if ((param_6 & 1) == 0) {
            for (; (int)uVar13 < (int)param_7; param_7 = param_7 - 1) {
              if (((param_7 ^ param_6) & 3) == 0) {
                iVar14 = (uint)*(byte *)(param_6 + iVar17 + iVar18) - iVar5;
                iVar10 = -iVar14;
                if (-1 < iVar14) {
                  iVar10 = iVar14;
                }
                if (iVar10 < local_80) {
                  local_80 = iVar10 + iVar16;
                  iVar10 = (**(code **)(param_1 + 0x504))
                                     (iVar1 + param_6 + iVar18,param_4,param_5,0,0,param_10,local_9c
                                     );
                  if (iVar10 < local_9c) {
                    local_9c = iVar10;
                    local_18 = param_7;
                    local_14 = param_6;
                  }
                }
              }
              iVar18 = iVar18 - param_5;
            }
          }
          else {
            iVar18 = iVar18 - param_5 * local_88;
            param_7 = uVar13;
          }
        }
        local_b8 = local_88 + 1;
        local_cc = local_cc + -4;
        local_88 = local_b8;
        if (local_cc == 0) break;
        if ((local_94 != local_14) || (local_98 != local_18)) {
          local_8c = 0;
          local_2c = local_9c;
          local_94 = local_14;
          local_98 = local_18;
        }
        if (((param_9 * 3 + 3 >> 2) + 1 < local_8c) || (local_9c < 0x18)) break;
        local_9c = local_9c + -0x18;
        local_8c = local_8c + 1;
      }
      uVar11 = local_14;
      uVar13 = local_18;
      if (param_12 < (int)(local_14 + 3) ||
          ((int)local_14 < (int)(param_11 + 3) ||
          (param_14 < (int)(local_18 + 3) || (int)local_18 < (int)(param_13 + 3)))) {
        local_24 = local_18 - 2;
        if ((int)(local_18 - 2) <= (int)param_13) {
          local_24 = param_13;
        }
        local_28 = local_18 + 2;
        if (param_14 <= (int)(local_18 + 2)) {
          local_28 = param_14;
        }
        local_1c = local_14 - 2;
        if ((int)(local_14 - 2) <= (int)param_11) {
          local_1c = param_11;
        }
        iVar18 = local_14 + 2;
      }
      else {
        iVar10 = 0;
        iVar18 = local_18 * param_5 + local_14;
        iVar14 = 3;
        do {
          iVar6 = param_5 * *(int *)((int)&DAT_10033264 + iVar10) +
                  iVar18 + *(int *)((int)&DAT_10033260 + iVar10);
          iVar8 = (uint)*(byte *)(iVar6 + iVar17) - iVar5;
          iVar20 = -iVar8;
          if (-1 < iVar8) {
            iVar20 = iVar8;
          }
          if (iVar20 < local_80) {
            local_80 = iVar20 + iVar16;
            iVar6 = (**(code **)(param_1 + 0x504))
                              (iVar1 + iVar6,param_4,param_5,0,0,param_10,local_2c);
            if (iVar6 < local_2c) {
              local_14 = uVar11 + *(int *)((int)&DAT_10033260 + iVar10);
              local_18 = uVar13 + *(int *)((int)&DAT_10033264 + iVar10);
              local_2c = iVar6;
            }
          }
          iVar10 = iVar10 + 8;
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
        local_24 = local_18 - 1;
        if ((int)(local_18 - 1) <= (int)param_13) {
          local_24 = param_13;
        }
        local_28 = local_18 + 1;
        if (param_14 <= (int)(local_18 + 1)) {
          local_28 = param_14;
        }
        local_1c = local_14 - 1;
        if ((int)(local_14 - 1) <= (int)param_11) {
          local_1c = param_11;
        }
        iVar18 = local_14 + 1;
      }
      if (param_12 <= iVar18) {
        iVar18 = param_12;
      }
      iVar10 = local_24 * param_5;
      while (uVar13 = local_24, iVar14 = iVar10, (int)uVar13 <= local_28) {
        iVar10 = param_5 + iVar14;
        local_24 = uVar13 + 1;
        if ((int)local_1c <= iVar18) {
          iVar6 = iVar14 + iVar1 + local_1c;
          uVar11 = local_1c;
          do {
            iVar8 = (uint)*(byte *)(uVar11 + iVar17 + iVar14) - iVar5;
            iVar20 = -iVar8;
            if (-1 < iVar8) {
              iVar20 = iVar8;
            }
            if (iVar20 < local_80) {
              local_80 = iVar20 + iVar16;
              iVar20 = (**(code **)(param_1 + 0x504))(iVar6,param_4,param_5,0,0,param_10,local_2c);
              if (iVar20 < local_2c) {
                local_2c = iVar20;
                local_18 = uVar13;
                local_14 = uVar11;
              }
            }
            iVar6 = iVar6 + 1;
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 <= iVar18);
        }
      }
    }
    *param_15 = local_14 * 2;
    *param_16 = local_18 * 2;
  }
  return local_2c;
}


