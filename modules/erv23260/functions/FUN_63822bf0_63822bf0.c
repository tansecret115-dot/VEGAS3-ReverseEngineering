/* Module: erv23260.dll
   Function: FUN_63822bf0
   Address: 63822bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63822bf0(ulonglong *param_1,ulonglong *param_2,int param_3,int param_4,int param_5,
                 ulonglong *param_6,int *param_7)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ushort uVar10;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  uint7 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ushort uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  ushort uVar23;
  ushort uVar26;
  ushort uVar27;
  undefined8 uVar24;
  ulonglong uVar25;
  ushort uVar28;
  ulonglong uVar29;
  
  uVar3 = (param_3 - param_4) + 7U & 0xfffffff8;
  iVar6 = param_5 + -2;
  puVar7 = (undefined8 *)((int)param_2 + param_3);
  iVar4 = param_4;
  puVar8 = param_1;
  uVar12 = 0;
LAB_63822c2a:
  do {
    puVar9 = puVar8;
    uVar19 = *(ulonglong *)((int)puVar9 + param_3);
    uVar18 = psubusb(uVar19,*puVar7);
    uVar20 = psubusb(*puVar7,uVar19);
    puVar7 = puVar7 + 1;
    uVar21 = psubusb(uVar20 | uVar18,param_6[5]);
    puVar8 = puVar9 + 1;
    if (0 < (int)((uint)((ulonglong)uVar21 >> 0x20) | (uint)uVar21)) goto LAB_63822c6f;
    iVar5 = iVar4 + -8;
    bVar2 = 7 < iVar4;
    iVar4 = iVar5;
    uVar12 = uVar19;
  } while (iVar5 != 0 && bVar2);
  if (1 < iVar6) goto LAB_63822c21;
  goto LAB_63822feb;
LAB_63822c6f:
  lVar1 = *(longlong *)((int)puVar8 + param_3);
  *param_6 = uVar19;
  uVar12 = uVar19 << 8 | uVar12 >> 0x38;
  uVar24 = psubsb(0,0xffffffffffffffff);
  uVar20 = psubusb(uVar19,uVar12);
  uVar18 = psubusb(uVar12,uVar19);
  uVar21 = psubusb(uVar18 | uVar20,param_6[6]);
  uVar18 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  uVar24 = psubsb(uVar24,uVar18);
  uVar20 = uVar19 >> 8 | lVar1 << 0x38;
  param_6[1] = uVar12 & uVar18;
  uVar12 = *puVar9;
  uVar18 = psubusb(uVar19,uVar20);
  uVar13 = psubusb(uVar20,uVar19);
  uVar21 = psubusb(uVar13 | uVar18,param_6[6]);
  uVar13 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  uVar22 = psubusb(uVar19,uVar12);
  uVar21 = psubsb(uVar24,uVar13);
  uVar18 = psubusb(uVar12,uVar19);
  param_6[2] = uVar20 & uVar13;
  uVar24 = psubusb(uVar22 | uVar18,param_6[6]);
  uVar20 = CONCAT17(-((char)((ulonglong)uVar24 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar24 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar24 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar24 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar24 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar24 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar24 >> 8) ==
                                                                            '\0'),-((char)uVar24 ==
                                                                                   '\0'))))))));
  uVar18 = *(ulonglong *)((int)puVar9 + param_3 * 2);
  uVar21 = psubsb(uVar21,uVar20);
  param_6[3] = uVar12 & uVar20;
  uVar13 = psubusb(uVar19,uVar18);
  uVar12 = *param_6;
  uVar20 = psubusb(uVar18,uVar19);
  uVar19 = param_6[1];
  uVar24 = psubusb(uVar13 | uVar20,param_6[6]);
  uVar13 = CONCAT17(-((char)((ulonglong)uVar24 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar24 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar24 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar24 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar24 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar24 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar24 >> 8) ==
                                                                            '\0'),-((char)uVar24 ==
                                                                                   '\0'))))))));
  uVar24 = psubusb(uVar12,uVar19);
  uVar22 = psubsb(uVar21,uVar13);
  uVar20 = CONCAT17(-((char)((ulonglong)uVar24 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar24 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar24 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar24 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar24 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar24 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar24 >> 8) ==
                                                                            '\0'),-((char)uVar24 ==
                                                                                   '\0'))))))));
  param_6[4] = uVar18 & uVar13;
  uVar18 = ~uVar20 & uVar12 | uVar20 & uVar19;
  uVar21 = psubusb(uVar18,param_6[2]);
  uVar13 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  param_6[1] = uVar20 & uVar12 | ~uVar20 & uVar19;
  uVar12 = ~uVar13 & uVar18 | uVar13 & param_6[2];
  uVar21 = psubusb(uVar12,param_6[3]);
  uVar19 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  param_6[2] = uVar13 & uVar18 | ~uVar13 & param_6[2];
  uVar18 = ~uVar19 & uVar12 | uVar19 & param_6[3];
  uVar21 = psubusb(uVar18,param_6[4]);
  uVar20 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  param_6[3] = uVar19 & uVar12 | ~uVar19 & param_6[3];
  uVar12 = param_6[1];
  *param_6 = ~uVar20 & uVar18 | uVar20 & param_6[4];
  uVar21 = psubusb(uVar12,param_6[2]);
  uVar19 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  param_6[4] = uVar20 & uVar18 | ~uVar20 & param_6[4];
  uVar18 = ~uVar19 & uVar12 | uVar19 & param_6[2];
  uVar21 = psubusb(uVar18,param_6[3]);
  uVar20 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  param_6[2] = uVar19 & uVar12 | ~uVar19 & param_6[2];
  uVar19 = ~uVar20 & uVar18 | uVar20 & param_6[3];
  uVar21 = psubusb(uVar19,param_6[4]);
  uVar13 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  param_6[3] = uVar20 & uVar18 | ~uVar20 & param_6[3];
  uVar12 = param_6[2];
  param_6[1] = ~uVar13 & uVar19 | uVar13 & param_6[4];
  uVar21 = psubusb(uVar12,param_6[3]);
  uVar18 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  param_6[4] = uVar13 & uVar19 | ~uVar13 & param_6[4];
  uVar19 = ~uVar18 & uVar12 | uVar18 & param_6[3];
  uVar21 = psubusb(uVar19,param_6[4]);
  uVar20 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0'))))))));
  param_6[3] = uVar18 & uVar12 | ~uVar18 & param_6[3];
  param_6[2] = ~uVar20 & uVar19 | uVar20 & param_6[4];
  uVar12 = paddsb(0xffffffffffffffff,uVar22);
  param_6[4] = uVar20 & uVar19 | ~uVar20 & param_6[4];
  uVar12 = uVar12 >> 1 & param_6[7];
  uVar20 = uVar22 >> 1 & param_6[7];
  uVar19 = CONCAT17(-((char)(uVar12 >> 0x38) == '\0'),
                    CONCAT16(-((char)(uVar12 >> 0x30) == '\0'),
                             CONCAT15(-((char)(uVar12 >> 0x28) == '\0'),
                                      CONCAT14(-((char)(uVar12 >> 0x20) == '\0'),
                                               CONCAT13(-((char)(uVar12 >> 0x18) == '\0'),
                                                        CONCAT12(-((char)(uVar12 >> 0x10) == '\0'),
                                                                 CONCAT11(-((char)(uVar12 >> 8) ==
                                                                           '\0'),-((char)uVar12 ==
                                                                                  '\0')))))))) &
           *param_6;
  uVar18 = CONCAT17(-((char)(uVar20 >> 0x38) == '\0'),
                    CONCAT16(-((char)(uVar20 >> 0x30) == '\0'),
                             CONCAT15(-((char)(uVar20 >> 0x28) == '\0'),
                                      CONCAT14(-((char)(uVar20 >> 0x20) == '\0'),
                                               CONCAT13(-((char)(uVar20 >> 0x18) == '\0'),
                                                        CONCAT12(-((char)(uVar20 >> 0x10) == '\0'),
                                                                 CONCAT11(-((char)(uVar20 >> 8) ==
                                                                           '\0'),-((char)uVar20 ==
                                                                                  '\0')))))))) &
           *param_6;
  uVar10 = (ushort)(((uint7)(byte)(uVar19 >> 0x18) << 0x30) >> 0x28);
  uVar14 = (ushort)(((uint7)(byte)(uVar18 >> 0x18) << 0x30) >> 0x28);
  uVar12 = paddsb(uVar12,0xffffffffffffffff);
  uVar21 = paddsb(uVar20,0xffffffffffffffff);
  param_6[8] = uVar12;
  uVar13 = CONCAT17(-((char)(uVar12 >> 0x38) == '\0'),
                    CONCAT16(-((char)(uVar12 >> 0x30) == '\0'),
                             CONCAT15(-((char)(uVar12 >> 0x28) == '\0'),
                                      CONCAT14(-((char)(uVar12 >> 0x20) == '\0'),
                                               CONCAT13(-((char)(uVar12 >> 0x18) == '\0'),
                                                        CONCAT12(-((char)(uVar12 >> 0x10) == '\0'),
                                                                 CONCAT11(-((char)(uVar12 >> 8) ==
                                                                           '\0'),-((char)uVar12 ==
                                                                                  '\0')))))))) &
           param_6[1];
  uVar20 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0')))))))) &
           param_6[1];
  uVar16 = (ushort)(((uint7)(byte)(uVar13 >> 0x18) << 0x30) >> 0x28);
  uVar17 = (ushort)(((uint7)(byte)(uVar20 >> 0x18) << 0x30) >> 0x28);
  uVar24 = paddsb(uVar21,0xffffffffffffffff);
  uVar21 = paddsb(param_6[8],0xffffffffffffffff);
  uVar12 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar21 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar21 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar21 >> 8) ==
                                                                            '\0'),-((char)uVar21 ==
                                                                                   '\0')))))))) &
           param_6[2];
  uVar22 = CONCAT17(-((char)((ulonglong)uVar24 >> 0x38) == '\0'),
                    CONCAT16(-((char)((ulonglong)uVar24 >> 0x30) == '\0'),
                             CONCAT15(-((char)((ulonglong)uVar24 >> 0x28) == '\0'),
                                      CONCAT14(-((char)((ulonglong)uVar24 >> 0x20) == '\0'),
                                               CONCAT13(-((char)((ulonglong)uVar24 >> 0x18) == '\0')
                                                        ,CONCAT12(-((char)((ulonglong)uVar24 >> 0x10
                                                                          ) == '\0'),
                                                                  CONCAT11(-((char)((ulonglong)
                                                                                    uVar24 >> 8) ==
                                                                            '\0'),-((char)uVar24 ==
                                                                                   '\0')))))))) &
           param_6[2];
  uVar23 = (ushort)(((uint7)(byte)(uVar12 >> 0x18) << 0x30) >> 0x28);
  uVar26 = (ushort)(((uint7)(byte)(uVar22 >> 0x18) << 0x30) >> 0x28);
  uVar27 = (ushort)((ushort)(byte)uVar12 +
                    ((ushort)uVar19 & 0xff) + ((ushort)uVar18 & 0xff) + ((ushort)uVar13 & 0xff) +
                    ((ushort)uVar20 & 0xff) + ((ushort)uVar22 & 0xff)) >> 1;
  uVar28 = (ushort)((ushort)(byte)(uVar12 >> 8) +
                    (ushort)(byte)(uVar19 >> 8) + (ushort)(byte)(uVar18 >> 8) +
                    (ushort)(byte)(uVar13 >> 8) + (ushort)(byte)(uVar20 >> 8) +
                   (ushort)(byte)(uVar22 >> 8)) >> 1;
  uVar15 = (ushort)((short)CONCAT21(uVar23,(char)(uVar12 >> 0x10)) +
                    (short)CONCAT21(uVar10,(char)(uVar19 >> 0x10)) +
                    (short)CONCAT21(uVar14,(char)(uVar18 >> 0x10)) +
                    (short)CONCAT21(uVar16,(char)(uVar13 >> 0x10)) +
                    (short)CONCAT21(uVar17,(char)(uVar20 >> 0x10)) +
                   (short)CONCAT21(uVar26,(char)(uVar22 >> 0x10))) >> 1;
  uVar10 = (ushort)((uVar23 >> 8) + (uVar10 >> 8) + (uVar14 >> 8) + (uVar16 >> 8) + (uVar17 >> 8) +
                   (uVar26 >> 8)) >> 1;
  uVar14 = (ushort)((ushort)(byte)(uVar19 >> 0x20) + (ushort)(byte)(uVar18 >> 0x20) +
                    (ushort)(byte)(uVar13 >> 0x20) + (ushort)(byte)(uVar20 >> 0x20) +
                    (ushort)(byte)(uVar12 >> 0x20) + (ushort)(byte)(uVar22 >> 0x20)) >> 1;
  uVar16 = (ushort)((ushort)(byte)(uVar19 >> 0x28) + (ushort)(byte)(uVar18 >> 0x28) +
                    (ushort)(byte)(uVar13 >> 0x28) + (ushort)(byte)(uVar20 >> 0x28) +
                    (ushort)(byte)(uVar12 >> 0x28) + (ushort)(byte)(uVar22 >> 0x28)) >> 1;
  uVar17 = (ushort)((ushort)(byte)(uVar19 >> 0x30) + (ushort)(byte)(uVar18 >> 0x30) +
                    (ushort)(byte)(uVar13 >> 0x30) + (ushort)(byte)(uVar20 >> 0x30) +
                    (ushort)(byte)(uVar12 >> 0x30) + (ushort)(byte)(uVar22 >> 0x30)) >> 1;
  uVar23 = (ushort)((ushort)(byte)(uVar19 >> 0x38) + (ushort)(byte)(uVar18 >> 0x38) +
                    (ushort)(byte)(uVar13 >> 0x38) + (ushort)(byte)(uVar20 >> 0x38) +
                    (ushort)(byte)(uVar12 >> 0x38) + (ushort)(byte)(uVar22 >> 0x38)) >> 1;
  uVar11 = CONCAT16((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                    CONCAT15((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                             CONCAT14((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                      (0xff < uVar14),
                                      CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                               (0xff < uVar10),
                                               CONCAT12((uVar15 != 0) * (uVar15 < 0x100) *
                                                        (char)uVar15 - (0xff < uVar15),
                                                        CONCAT11((uVar28 != 0) * (uVar28 < 0x100) *
                                                                 (char)uVar28 - (0xff < uVar28),
                                                                 (uVar27 != 0) * (uVar27 < 0x100) *
                                                                 (char)uVar27 - (0xff < uVar27))))))
                   );
  uVar12 = CONCAT17((uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23),uVar11);
  if (iVar4 == param_4) {
    uVar12 = (ulonglong)uVar11 | *(ulonglong *)((int)puVar9 + param_3) & 0xff00000000000000;
  }
  *(ulonglong *)((int)puVar9 + param_3) = uVar12;
  iVar5 = iVar4 + -8;
  bVar2 = iVar4 < 8;
  iVar4 = iVar5;
  if (iVar5 == 0 || bVar2) {
    uVar19 = -0x100L << (ulonglong)(uint)(iVar5 * -8);
    uVar19 = uVar12 & uVar19 | ~uVar19 & *(ulonglong *)((int)puVar9 + param_3);
    *(ulonglong *)((int)puVar9 + param_3) = uVar19;
    if (iVar6 < 2) {
LAB_63822feb:
      iVar4 = param_4;
      if (*param_7 == 0) {
        while( true ) {
          do {
            uVar12 = psubusb(*param_2,*param_1);
            uVar19 = psubusb(*param_1,*param_2);
            uVar12 = uVar12 | uVar19;
            uVar24 = psubusb(uVar12,param_6[0xc]);
            uVar21 = psubusb(uVar12,param_6[0xd]);
            uVar18 = CONCAT17(-((char)((ulonglong)uVar24 >> 0x38) == '\0'),
                              CONCAT16(-((char)((ulonglong)uVar24 >> 0x30) == '\0'),
                                       CONCAT15(-((char)((ulonglong)uVar24 >> 0x28) == '\0'),
                                                CONCAT14(-((char)((ulonglong)uVar24 >> 0x20) == '\0'
                                                          ),CONCAT13(-((char)((ulonglong)uVar24 >>
                                                                             0x18) == '\0'),
                                                                     CONCAT12(-((char)((ulonglong)
                                                                                       uVar24 >>
                                                                                      0x10) == '\0')
                                                                              ,CONCAT11(-((char)((
                                                  ulonglong)uVar24 >> 8) == '\0'),
                                                  -((char)uVar24 == '\0'))))))));
            uVar19 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                              CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                                       CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                                CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'
                                                          ),CONCAT13(-((char)((ulonglong)uVar21 >>
                                                                             0x18) == '\0'),
                                                                     CONCAT12(-((char)((ulonglong)
                                                                                       uVar21 >>
                                                                                      0x10) == '\0')
                                                                              ,CONCAT11(-((char)((
                                                  ulonglong)uVar21 >> 8) == '\0'),
                                                  -((char)uVar21 == '\0')))))))) &
                     (uVar18 ^ 0xffffffffffffffff);
            uVar21 = psubusb(uVar12,param_6[0xe]);
            uVar22 = uVar18 ^ 0xffffffffffffffff ^ uVar19;
            uVar19 = uVar19 & param_6[0xb];
            uVar13 = CONCAT17(-((char)((ulonglong)uVar21 >> 0x38) == '\0'),
                              CONCAT16(-((char)((ulonglong)uVar21 >> 0x30) == '\0'),
                                       CONCAT15(-((char)((ulonglong)uVar21 >> 0x28) == '\0'),
                                                CONCAT14(-((char)((ulonglong)uVar21 >> 0x20) == '\0'
                                                          ),CONCAT13(-((char)((ulonglong)uVar21 >>
                                                                             0x18) == '\0'),
                                                                     CONCAT12(-((char)((ulonglong)
                                                                                       uVar21 >>
                                                                                      0x10) == '\0')
                                                                              ,CONCAT11(-((char)((
                                                  ulonglong)uVar21 >> 8) == '\0'),
                                                  -((char)uVar21 == '\0')))))))) & uVar22;
            uVar29 = uVar18 & param_6[10] | uVar19 | uVar13 & param_6[9];
            uVar25 = uVar18 & param_6[9] | uVar19 | uVar13 & param_6[10];
            uVar12 = *param_2;
            uVar10 = (ushort)(((uint7)(byte)(uVar25 >> 0x18) << 0x30) >> 0x28);
            uVar19 = *param_1;
            uVar14 = (ushort)(((uint7)(byte)(uVar12 >> 0x18) << 0x30) >> 0x28);
            uVar16 = (ushort)(((uint7)(byte)(uVar19 >> 0x18) << 0x30) >> 0x28);
            uVar18 = *param_2;
            uVar17 = (ushort)(((uint7)(byte)(uVar29 >> 0x18) << 0x30) >> 0x28);
            uVar20 = *param_1;
            uVar21 = paddusw(CONCAT26((uVar14 >> 8) * (uVar10 >> 8),
                                      CONCAT24((short)CONCAT21(uVar14,(char)(uVar12 >> 0x10)) *
                                               (short)CONCAT21(uVar10,(char)(uVar25 >> 0x10)),
                                               CONCAT22((ushort)(byte)(uVar12 >> 8) *
                                                        (ushort)(byte)(uVar25 >> 8),
                                                        ((ushort)uVar12 & 0xff) *
                                                        ((ushort)uVar25 & 0xff)))),
                             CONCAT26((uVar16 >> 8) * (uVar17 >> 8),
                                      CONCAT24((short)CONCAT21(uVar16,(char)(uVar19 >> 0x10)) *
                                               (short)CONCAT21(uVar17,(char)(uVar29 >> 0x10)),
                                               CONCAT22((ushort)(byte)(uVar19 >> 8) *
                                                        (ushort)(byte)(uVar29 >> 8),
                                                        ((ushort)uVar19 & 0xff) *
                                                        ((ushort)uVar29 & 0xff)))));
            uVar10 = (ushort)uVar21 >> 7;
            uVar14 = (ushort)((ulonglong)uVar21 >> 0x10) >> 7;
            uVar16 = (ushort)((ulonglong)uVar21 >> 0x20) >> 7;
            uVar17 = (ushort)((ulonglong)uVar21 >> 0x37);
            puVar8 = param_2 + 1;
            puVar9 = param_1 + 1;
            uVar21 = paddusw(CONCAT26((ushort)(byte)(uVar18 >> 0x38) *
                                      (ushort)(byte)(uVar25 >> 0x38),
                                      CONCAT24((ushort)(byte)(uVar18 >> 0x30) *
                                               (ushort)(byte)(uVar25 >> 0x30),
                                               CONCAT22((ushort)(byte)(uVar18 >> 0x28) *
                                                        (ushort)(byte)(uVar25 >> 0x28),
                                                        (ushort)(byte)(uVar18 >> 0x20) *
                                                        (ushort)(byte)(uVar25 >> 0x20)))),
                             CONCAT26((ushort)(byte)(uVar20 >> 0x38) *
                                      (ushort)(byte)(uVar29 >> 0x38),
                                      CONCAT24((ushort)(byte)(uVar20 >> 0x30) *
                                               (ushort)(byte)(uVar29 >> 0x30),
                                               CONCAT22((ushort)(byte)(uVar20 >> 0x28) *
                                                        (ushort)(byte)(uVar29 >> 0x28),
                                                        (ushort)(byte)(uVar20 >> 0x20) *
                                                        (ushort)(byte)(uVar29 >> 0x20)))));
            uVar23 = (ushort)uVar21 >> 7;
            uVar26 = (ushort)((ulonglong)uVar21 >> 0x10) >> 7;
            uVar27 = (ushort)((ulonglong)uVar21 >> 0x20) >> 7;
            uVar28 = (ushort)((ulonglong)uVar21 >> 0x37);
            uVar12 = CONCAT17((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 - (0xff < uVar28),
                              CONCAT16((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 -
                                       (0xff < uVar27),
                                       CONCAT15((uVar26 != 0) * (uVar26 < 0x100) * (char)uVar26 -
                                                (0xff < uVar26),
                                                CONCAT14((uVar23 != 0) * (uVar23 < 0x100) *
                                                         (char)uVar23 - (0xff < uVar23),
                                                         CONCAT13((uVar17 != 0) * (uVar17 < 0x100) *
                                                                  (char)uVar17 - (0xff < uVar17),
                                                                  CONCAT12((uVar16 != 0) *
                                                                           (uVar16 < 0x100) *
                                                                           (char)uVar16 -
                                                                           (0xff < uVar16),
                                                                           CONCAT11((uVar14 != 0) *
                                                                                    (uVar14 < 0x100)
                                                                                    * (char)uVar14 -
                                                                                    (0xff < uVar14),
                                                                                    (uVar10 != 0) *
                                                                                    (uVar10 < 0x100)
                                                                                    * (char)uVar10 -
                                                                                    (0xff < uVar10))
                                                                          )))))) |
                     (uVar22 ^ uVar13) & *param_1;
            *param_2 = uVar12;
            *param_1 = uVar12;
            iVar6 = iVar4 + -8;
            bVar2 = 7 < iVar4;
            iVar4 = iVar6;
            param_2 = puVar8;
            param_1 = puVar9;
          } while (iVar6 != 0 && bVar2);
          if (param_5 + -1 == 0 || param_5 < 1) break;
          param_2 = (ulonglong *)((int)puVar8 + uVar3);
          param_1 = (ulonglong *)((int)puVar9 + uVar3);
          iVar4 = param_4;
          param_5 = param_5 + -1;
        }
      }
      else {
        *param_7 = 0;
      }
      return;
    }
LAB_63822c21:
    iVar6 = iVar6 + -1;
    puVar7 = (undefined8 *)((int)puVar7 + uVar3);
    iVar4 = param_4;
    puVar8 = (ulonglong *)((int)puVar8 + uVar3);
    uVar12 = uVar19;
  }
  goto LAB_63822c2a;
}


