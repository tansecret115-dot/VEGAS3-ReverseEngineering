/* Module: mpgvout.001
   Function: FUN_1000be64
   Address: 1000be64
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_1000be64(int param_1,int param_2,int param_3,undefined8 *param_4,int param_5,uint param_6,
            uint param_7,int param_8,int param_9,int param_10,uint param_11,int param_12,
            uint param_13,int param_14,int *param_15,int *param_16)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  short sVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c0;
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
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  iVar1 = param_3 + *(int *)(param_2 + 0xc);
  iVar4 = param_3 + *(int *)(param_2 + 0x18);
  local_1c = param_6 - param_8;
  local_20 = param_8 + param_6;
  if ((int)local_1c < (int)param_11) {
    local_1c = param_11;
  }
  if (param_12 < local_20) {
    local_20 = param_12;
  }
  local_28 = param_7 + param_9;
  local_24 = param_7 - param_9;
  if ((int)local_24 < (int)param_13) {
    local_24 = param_13;
  }
  if (param_14 < local_28) {
    local_28 = param_14;
  }
  iVar5 = *(int *)(param_1 + 0x534);
  if (param_10 == 0x10) {
    uVar9 = (undefined1)((uint)(iVar5 + 0x7f) >> 8);
  }
  else {
    uVar9 = (undefined1)(iVar5 + 0x3f >> 7);
  }
  uVar23 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
  uVar22 = CONCAT44(uVar23,uVar23);
  uVar20 = 0;
  uVar24 = 0;
  iVar13 = param_5 * param_7;
  puVar7 = param_4;
  iVar16 = param_10;
  if (0 < param_10) {
    do {
      uVar18 = psubusb(uVar22,*puVar7);
      uVar17 = psubusb(*puVar7,uVar22);
      uVar17 = uVar17 | uVar18;
      uVar20 = paddusw(uVar20,(ulonglong)
                              CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)(uVar17
                                                                                             >> 0x18
                                                  ) << 0x30) >> 0x28),(char)(uVar17 >> 0x10)) <<
                                                  0x20) >> 0x18),(char)(uVar17 >> 8)),
                                       (ushort)(byte)uVar17));
      uVar21 = paddusw(uVar20,(ulonglong)
                              CONCAT16((char)(uVar17 >> 0x38),
                                       (uint6)CONCAT14((char)(uVar17 >> 0x30),
                                                       (uint)CONCAT12((char)(uVar17 >> 0x28),
                                                                      (ushort)(byte)(uVar17 >> 0x20)
                                                                     ))));
      uVar20 = psubusb(uVar17,uVar24);
      uVar25 = paddusb(uVar24,uVar20);
      uVar17 = psubusb(uVar22,puVar7[1]);
      uVar24 = psubusb(puVar7[1],uVar22);
      uVar24 = uVar24 | uVar17;
      uVar3 = (ushort)(((uint7)(byte)(uVar24 >> 0x18) << 0x30) >> 0x28);
      uVar20 = CONCAT26((short)((ulonglong)uVar21 >> 0x30) + (uVar3 >> 8) +
                        (ushort)(byte)(uVar24 >> 0x38),
                        CONCAT24((short)((ulonglong)uVar21 >> 0x20) +
                                 (short)CONCAT21(uVar3,(char)(uVar24 >> 0x10)) +
                                 (ushort)(byte)(uVar24 >> 0x30),
                                 CONCAT22((short)((ulonglong)uVar21 >> 0x10) +
                                          (ushort)(byte)(uVar24 >> 8) +
                                          (ushort)(byte)(uVar24 >> 0x28),
                                          (short)uVar21 + ((ushort)uVar24 & 0xff) +
                                          (ushort)(byte)(uVar24 >> 0x20))));
      uVar21 = psubusb(uVar24,uVar25);
      uVar24 = paddusb(uVar25,uVar21);
      iVar16 = iVar16 + -1;
      puVar7 = (undefined8 *)((int)puVar7 + param_5);
    } while (iVar16 != 0);
  }
  sVar19 = (short)((ulonglong)uVar20 >> 0x20);
  sVar2 = (short)((ulonglong)uVar20 >> 0x30);
  iVar16 = CONCAT22(sVar2 + (short)((ulonglong)uVar20 >> 0x10),sVar19 + (short)uVar20);
  uVar20 = CONCAT26(sVar2,CONCAT24(sVar19,iVar16));
  uVar22 = paddusw(CONCAT44((int)((ulonglong)uVar20 >> 0x20) << 0x10,iVar16 << 0x10),uVar20);
  uVar20 = psubusb(uVar24,uVar24 >> 0x20);
  uVar20 = paddusb(uVar24 >> 0x20,uVar20);
  uVar21 = CONCAT44((int)((ulonglong)uVar20 >> 0x20) << 0x10,(int)uVar20 << 0x10);
  uVar20 = psubusb(uVar20,uVar21);
  uVar20 = paddusb(uVar21,uVar20);
  uVar21 = CONCAT44((int)((ulonglong)uVar20 >> 0x20) << 8,(int)uVar20 << 8);
  uVar20 = psubusb(uVar20,uVar21);
  uVar20 = paddusb(uVar21,uVar20);
  uVar10 = (uint)((ulonglong)uVar20 >> 0x18) & 0xff;
  iVar5 = iVar5 + 0x3f >> 7;
  if (param_10 != 8) {
    uVar10 = (int)uVar10 >> 1;
  }
  if ((int)uVar10 < *(int *)(param_1 + 0x2d4)) {
    local_2c = (**(code **)(param_1 + 0x504))
                         (iVar1 + param_6 + iVar13,param_4,param_5,0,0,param_10,0xffff);
    *param_15 = param_6 * 2;
    *param_16 = param_7 * 2;
  }
  else {
    iVar8 = ((int)(((uint)((ulonglong)uVar22 >> 0x10) & 0xffff) + 0x3f) >> 7) * 3 + 7 >> 4;
    local_14 = param_6;
    iVar16 = iVar8 + 1;
    local_18 = param_7;
    local_2c = 0xffff;
    if (param_10 == 0x10) {
      local_3c = 0x200;
      local_40 = 1;
      local_44 = 1;
      local_48 = 0;
      if (param_9 < param_8) {
        param_9 = param_8;
      }
      local_54 = 0x7fff;
      local_c0 = param_9 * 4 + 1;
      local_58 = 0xffff;
      local_50 = 0x7fff;
      while( true ) {
        iVar8 = local_40;
        if ((int)param_7 < (int)local_24) {
          local_44 = local_44 + -1;
          param_7 = param_7 + 1;
          iVar13 = iVar13 + param_5;
          uVar10 = param_6 + local_40;
        }
        else {
          uVar12 = local_40 + param_6;
          uVar10 = uVar12;
          if (((param_7 & 1) == 0) && (uVar10 = param_6, (int)param_6 < (int)uVar12)) {
            iVar15 = iVar1 + iVar13 + param_6;
            do {
              if (((param_7 ^ param_6) & 3) == 0) {
                iVar6 = ((uint)*(byte *)(param_6 + iVar4 + iVar13 + param_5) +
                        (uint)*(byte *)(param_6 + iVar4 + iVar13)) - iVar5;
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (iVar6 < local_3c) {
                  local_3c = iVar6 + iVar16;
                  iVar6 = (**(code **)(param_1 + 0x504))(iVar15,param_4,param_5,0,0,0x10,local_58);
                  if (iVar6 < local_58) {
                    local_58 = iVar6;
                    local_18 = param_7;
                    local_14 = param_6;
                  }
                }
              }
              iVar15 = iVar15 + 1;
              param_6 = param_6 + 1;
              uVar10 = param_6;
            } while ((int)param_6 < (int)uVar12);
          }
        }
        iVar15 = local_44;
        local_c8 = local_40 + 1;
        local_40 = local_c8;
        if (local_c0 == 1) break;
        if (local_20 < (int)uVar10) {
          uVar10 = uVar10 - 1;
          iVar13 = iVar13 + local_44 * param_5;
          param_7 = param_7 + local_44;
          local_40 = iVar8;
        }
        else {
          uVar12 = local_44 + param_7;
          if ((uVar10 & 1) == 0) {
            if ((int)param_7 < (int)uVar12) {
              pbVar14 = (byte *)(iVar4 + uVar10 + iVar13);
              do {
                if (((param_7 ^ uVar10) & 3) == 0) {
                  iVar8 = ((uint)pbVar14[param_5] + (uint)*pbVar14) - iVar5;
                  if (iVar8 < 0) {
                    iVar8 = -iVar8;
                  }
                  if (iVar8 < local_3c) {
                    local_3c = iVar8 + iVar16;
                    iVar8 = (**(code **)(param_1 + 0x504))
                                      (iVar1 + uVar10 + iVar13,param_4,param_5,0,0,0x10,local_58);
                    if (iVar8 < local_58) {
                      local_58 = iVar8;
                      local_18 = param_7;
                      local_14 = uVar10;
                    }
                  }
                }
                param_7 = param_7 + 1;
                pbVar14 = pbVar14 + param_5;
                iVar13 = iVar13 + param_5;
              } while ((int)param_7 < (int)uVar12);
            }
          }
          else {
            iVar13 = iVar13 + param_5 * local_44;
            param_7 = uVar12;
          }
        }
        iVar8 = local_40;
        local_cc = local_44 + 1;
        local_44 = local_cc;
        if (local_c0 == 2) break;
        if (local_28 < (int)param_7) {
          param_7 = param_7 - 1;
          iVar13 = iVar13 - param_5;
          param_6 = uVar10 - local_40;
          local_44 = iVar15;
        }
        else {
          uVar12 = uVar10 - local_40;
          param_6 = uVar12;
          if (((param_7 & 1) == 0) && (param_6 = uVar10, (int)uVar12 < (int)uVar10)) {
            iVar15 = iVar1 + iVar13 + uVar10;
            do {
              if (((param_7 ^ uVar10) & 3) == 0) {
                iVar6 = ((uint)*(byte *)(uVar10 + iVar4 + iVar13 + param_5) +
                        (uint)*(byte *)(uVar10 + iVar4 + iVar13)) - iVar5;
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (iVar6 < local_3c) {
                  local_3c = iVar6 + iVar16;
                  iVar6 = (**(code **)(param_1 + 0x504))(iVar15,param_4,param_5,0,0,0x10,local_58);
                  if (iVar6 < local_58) {
                    local_58 = iVar6;
                    local_18 = param_7;
                    local_14 = uVar10;
                  }
                }
              }
              iVar15 = iVar15 + -1;
              uVar10 = uVar10 - 1;
              param_6 = uVar10;
            } while ((int)uVar12 < (int)uVar10);
          }
        }
        local_c8 = local_40 + 1;
        local_40 = local_c8;
        if (local_c0 == 3) break;
        if ((int)param_6 < (int)local_1c) {
          param_6 = param_6 + 1;
          iVar13 = iVar13 - local_44 * param_5;
          param_7 = param_7 - local_44;
          local_40 = iVar8;
        }
        else {
          uVar10 = param_7 - local_44;
          if ((param_6 & 1) == 0) {
            for (; (int)uVar10 < (int)param_7; param_7 = param_7 - 1) {
              if (((param_7 ^ param_6) & 3) == 0) {
                iVar8 = ((uint)*(byte *)(param_6 + iVar4 + iVar13 + param_5) +
                        (uint)*(byte *)(param_6 + iVar4 + iVar13)) - iVar5;
                if (iVar8 < 0) {
                  iVar8 = -iVar8;
                }
                if (iVar8 < local_3c) {
                  local_3c = iVar8 + iVar16;
                  iVar8 = (**(code **)(param_1 + 0x504))
                                    (iVar1 + param_6 + iVar13,param_4,param_5,0,0,0x10,local_58);
                  if (iVar8 < local_58) {
                    local_58 = iVar8;
                    local_18 = param_7;
                    local_14 = param_6;
                  }
                }
              }
              iVar13 = iVar13 - param_5;
            }
          }
          else {
            iVar13 = iVar13 - param_5 * local_44;
            param_7 = uVar10;
          }
        }
        local_c0 = local_c0 + -4;
        local_cc = local_44 + 1;
        local_44 = local_cc;
        if (local_c0 == 0) break;
        if ((local_50 != local_14) || (local_54 != local_18)) {
          local_2c = local_58;
          local_50 = local_14;
          local_54 = local_18;
          local_48 = 0;
        }
        if (((param_9 + 1 >> 1) + 1 < local_48) || (local_58 < 0x18)) break;
        local_58 = local_58 + -0x18;
        local_48 = local_48 + 1;
      }
      if ((int)local_24 < (int)(local_18 - 2)) {
        local_24 = local_18 - 2;
      }
      if ((int)(local_18 + 2) < local_28) {
        local_28 = local_18 + 2;
      }
      if ((int)local_1c < (int)(local_14 - 2)) {
        local_1c = local_14 - 2;
      }
      if ((int)(local_14 + 2) < local_20) {
        local_20 = local_14 + 2;
      }
      iVar13 = local_24 * param_5;
      while (uVar10 = local_24, iVar8 = iVar13, (int)uVar10 <= local_28) {
        iVar13 = param_5 + iVar8;
        local_24 = uVar10 + 1;
        if ((int)local_1c <= local_20) {
          iVar15 = iVar8 + iVar1 + local_1c;
          uVar12 = local_1c;
          do {
            iVar6 = ((uint)*(byte *)(uVar12 + param_5 + iVar4 + iVar8) +
                    (uint)*(byte *)(uVar12 + iVar4 + iVar8)) - iVar5;
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            if (iVar6 < local_3c) {
              local_3c = iVar6 + iVar16;
              iVar6 = (**(code **)(param_1 + 0x504))(iVar15,param_4,param_5,0,0,0x10,local_2c);
              if (iVar6 < local_2c) {
                local_2c = iVar6;
                local_18 = uVar10;
                local_14 = uVar12;
              }
            }
            iVar15 = iVar15 + 1;
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 <= local_20);
        }
      }
    }
    else {
      local_80 = 0x100;
      local_84 = 1;
      local_88 = 1;
      local_8c = 0;
      if (param_9 < param_8) {
        param_9 = param_8;
      }
      iVar16 = iVar8 + 2 >> 1;
      local_c0 = param_9 * 4 + 1;
      local_98 = 0x7fff;
      local_94 = 0x7fff;
      local_9c = 0xffff;
      while( true ) {
        iVar8 = local_84;
        if ((int)param_7 < (int)local_24) {
          local_88 = local_88 + -1;
          param_7 = param_7 + 1;
          iVar13 = iVar13 + param_5;
          uVar10 = param_6 + local_84;
        }
        else {
          uVar12 = local_84 + param_6;
          uVar10 = uVar12;
          if (((param_7 & 1) == 0) && (uVar10 = param_6, (int)param_6 < (int)uVar12)) {
            iVar15 = iVar1 + iVar13 + param_6;
            do {
              if (((param_7 ^ param_6) & 3) == 0) {
                iVar6 = (uint)*(byte *)(param_6 + iVar4 + iVar13) - iVar5;
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (iVar6 < local_80) {
                  local_80 = iVar6 + iVar16;
                  iVar6 = (**(code **)(param_1 + 0x504))
                                    (iVar15,param_4,param_5,0,0,param_10,local_9c);
                  if (iVar6 < local_9c) {
                    local_9c = iVar6;
                    local_18 = param_7;
                    local_14 = param_6;
                  }
                }
              }
              iVar15 = iVar15 + 1;
              param_6 = param_6 + 1;
              uVar10 = param_6;
            } while ((int)param_6 < (int)uVar12);
          }
        }
        iVar15 = local_88;
        local_d0 = local_84 + 1;
        local_84 = local_d0;
        if (local_c0 == 1) break;
        if (local_20 < (int)uVar10) {
          uVar10 = uVar10 - 1;
          iVar13 = iVar13 + local_88 * param_5;
          param_7 = param_7 + local_88;
          local_84 = iVar8;
        }
        else {
          uVar12 = local_88 + param_7;
          if ((uVar10 & 1) == 0) {
            for (; (int)param_7 < (int)uVar12; param_7 = param_7 + 1) {
              if (((param_7 ^ uVar10) & 3) == 0) {
                iVar8 = (uint)*(byte *)(uVar10 + iVar4 + iVar13) - iVar5;
                if (iVar8 < 0) {
                  iVar8 = -iVar8;
                }
                if (iVar8 < local_80) {
                  local_80 = iVar8 + iVar16;
                  iVar8 = (**(code **)(param_1 + 0x504))
                                    (iVar1 + uVar10 + iVar13,param_4,param_5,0,0,param_10,local_9c);
                  if (iVar8 < local_9c) {
                    local_9c = iVar8;
                    local_18 = param_7;
                    local_14 = uVar10;
                  }
                }
              }
              iVar13 = iVar13 + param_5;
            }
          }
          else {
            iVar13 = iVar13 + param_5 * local_88;
            param_7 = uVar12;
          }
        }
        iVar8 = local_84;
        local_d4 = local_88 + 1;
        local_88 = local_d4;
        if (local_c0 == 2) break;
        if (local_28 < (int)param_7) {
          param_7 = param_7 - 1;
          iVar13 = iVar13 - param_5;
          param_6 = uVar10 - local_84;
          local_88 = iVar15;
        }
        else {
          uVar12 = uVar10 - local_84;
          param_6 = uVar12;
          if (((param_7 & 1) == 0) && (param_6 = uVar10, (int)uVar12 < (int)uVar10)) {
            iVar15 = iVar1 + iVar13 + uVar10;
            do {
              if (((param_7 ^ uVar10) & 3) == 0) {
                iVar6 = (uint)*(byte *)(uVar10 + iVar4 + iVar13) - iVar5;
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (iVar6 < local_80) {
                  local_80 = iVar6 + iVar16;
                  iVar6 = (**(code **)(param_1 + 0x504))
                                    (iVar15,param_4,param_5,0,0,param_10,local_9c);
                  if (iVar6 < local_9c) {
                    local_9c = iVar6;
                    local_18 = param_7;
                    local_14 = uVar10;
                  }
                }
              }
              iVar15 = iVar15 + -1;
              uVar10 = uVar10 - 1;
              param_6 = uVar10;
            } while ((int)uVar12 < (int)uVar10);
          }
        }
        local_d0 = local_84 + 1;
        local_84 = local_d0;
        if (local_c0 == 3) break;
        if ((int)param_6 < (int)local_1c) {
          param_6 = param_6 + 1;
          iVar13 = iVar13 - local_88 * param_5;
          param_7 = param_7 - local_88;
          local_84 = iVar8;
        }
        else {
          uVar10 = param_7 - local_88;
          if ((param_6 & 1) == 0) {
            for (; (int)uVar10 < (int)param_7; param_7 = param_7 - 1) {
              if (((param_7 ^ param_6) & 3) == 0) {
                iVar8 = (uint)*(byte *)(param_6 + iVar4 + iVar13) - iVar5;
                if (iVar8 < 0) {
                  iVar8 = -iVar8;
                }
                if (iVar8 < local_80) {
                  local_80 = iVar8 + iVar16;
                  iVar8 = (**(code **)(param_1 + 0x504))
                                    (iVar1 + param_6 + iVar13,param_4,param_5,0,0,param_10,local_9c)
                  ;
                  if (iVar8 < local_9c) {
                    local_9c = iVar8;
                    local_18 = param_7;
                    local_14 = param_6;
                  }
                }
              }
              iVar13 = iVar13 - param_5;
            }
          }
          else {
            iVar13 = iVar13 - param_5 * local_88;
            param_7 = uVar10;
          }
        }
        local_c0 = local_c0 + -4;
        local_d4 = local_88 + 1;
        local_88 = local_d4;
        if (local_c0 == 0) break;
        if ((local_94 != local_14) || (local_98 != local_18)) {
          local_2c = local_9c;
          local_94 = local_14;
          local_98 = local_18;
          local_8c = 0;
        }
        if (((param_9 * 3 + 3 >> 2) + 1 < local_8c) || (local_9c < 0x18)) break;
        local_9c = local_9c + -0x18;
        local_8c = local_8c + 1;
      }
      uVar12 = local_14;
      uVar10 = local_18;
      if (local_20 < (int)(local_14 + 3) ||
          ((int)local_14 < (int)(local_1c + 3) ||
          (local_28 < (int)(local_18 + 3) || (int)local_18 < (int)(local_24 + 3)))) {
        if ((int)local_24 < (int)(local_18 - 2)) {
          local_24 = local_18 - 2;
        }
        if ((int)(local_18 + 2) < local_28) {
          local_28 = local_18 + 2;
        }
        if ((int)local_1c < (int)(local_14 - 2)) {
          local_1c = local_14 - 2;
        }
        iVar13 = local_14 + 2;
      }
      else {
        iVar8 = 0;
        iVar15 = 3;
        iVar13 = local_18 * param_5 + local_14;
        do {
          iVar11 = iVar13 + *(int *)((int)&DAT_10033260 + iVar8) +
                   param_5 * *(int *)((int)&DAT_10033264 + iVar8);
          iVar6 = (uint)*(byte *)(iVar11 + iVar4) - iVar5;
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if (iVar6 < local_80) {
            local_80 = iVar6 + iVar16;
            iVar6 = (**(code **)(param_1 + 0x504))
                              (iVar1 + iVar11,param_4,param_5,0,0,param_10,local_2c);
            if (iVar6 < local_2c) {
              local_14 = uVar12 + *(int *)((int)&DAT_10033260 + iVar8);
              local_18 = uVar10 + *(int *)((int)&DAT_10033264 + iVar8);
              local_2c = iVar6;
            }
          }
          iVar8 = iVar8 + 8;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
        if ((int)local_24 < (int)(local_18 - 1)) {
          local_24 = local_18 - 1;
        }
        if ((int)(local_18 + 1) < local_28) {
          local_28 = local_18 + 1;
        }
        if ((int)local_1c < (int)(local_14 - 1)) {
          local_1c = local_14 - 1;
        }
        iVar13 = local_14 + 1;
      }
      if (iVar13 < local_20) {
        local_20 = iVar13;
      }
      iVar13 = local_24 * param_5;
      while (uVar10 = local_24, iVar8 = iVar13, (int)uVar10 <= local_28) {
        iVar13 = param_5 + iVar8;
        local_24 = uVar10 + 1;
        if ((int)local_1c <= local_20) {
          iVar15 = iVar8 + iVar1 + local_1c;
          uVar12 = local_1c;
          do {
            iVar6 = (uint)*(byte *)(uVar12 + iVar4 + iVar8) - iVar5;
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            if (iVar6 < local_80) {
              local_80 = iVar6 + iVar16;
              iVar6 = (**(code **)(param_1 + 0x504))(iVar15,param_4,param_5,0,0,param_10,local_2c);
              if (iVar6 < local_2c) {
                local_2c = iVar6;
                local_18 = uVar10;
                local_14 = uVar12;
              }
            }
            iVar15 = iVar15 + 1;
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 <= local_20);
        }
      }
    }
    *param_15 = local_14 * 2;
    *param_16 = local_18 * 2;
  }
  return local_2c;
}


