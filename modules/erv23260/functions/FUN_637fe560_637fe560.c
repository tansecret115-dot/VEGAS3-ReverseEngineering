/* Module: erv23260.dll
   Function: FUN_637fe560
   Address: 637fe560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_637fe560(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  undefined2 uVar9;
  int iVar10;
  byte bVar11;
  byte bVar15;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  byte bVar16;
  undefined1 uVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined8 uVar17;
  ulonglong uVar18;
  byte bVar22;
  undefined1 uVar29;
  undefined2 uVar23;
  undefined1 uVar30;
  byte bVar31;
  undefined8 uVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  byte bVar32;
  byte bVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  byte bVar36;
  byte bVar37;
  char cVar38;
  undefined1 uVar40;
  undefined1 uVar41;
  char cVar42;
  ulonglong uVar39;
  undefined4 uVar43;
  undefined2 uVar47;
  undefined6 uVar44;
  undefined8 uVar45;
  ulonglong uVar46;
  byte bVar48;
  byte bVar59;
  undefined4 uVar49;
  byte bVar55;
  char cVar56;
  byte bVar57;
  char cVar58;
  char cVar60;
  char cVar61;
  undefined2 uVar62;
  char cVar63;
  char cVar64;
  undefined8 uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  char cVar65;
  byte bVar66;
  undefined1 uVar68;
  undefined1 uVar69;
  byte bVar70;
  ulonglong uVar67;
  undefined4 uVar24;
  undefined6 uVar25;
  
  iVar10 = 0;
  iVar6 = param_2 * 3;
  do {
    iVar2 = *(int *)(param_1 + 4 + iVar10);
    puVar3 = *(undefined8 **)(param_1 + iVar10);
    if (iVar2 != 0) {
      uVar14 = *puVar3;
      uVar8 = (ushort)(((uint7)(byte)((ulonglong)uVar14 >> 0x18) << 0x30) >> 0x28);
      uVar28 = *(undefined8 *)((int)puVar3 + param_2);
      uVar50 = *(undefined8 *)((int)puVar3 + param_2 * 2);
      uVar17 = psllw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar28 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar28 >> 0x10)) << 0x20) >>
                                                  0x18),
                                              CONCAT12((char)((ulonglong)uVar28 >> 8),(short)uVar28)
                                             ) >> 0x10),(short)uVar28) & 0xffff00ff00ff00ff,2);
      uVar45 = psllw((ulonglong)
                     CONCAT16((char)((ulonglong)uVar28 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar28 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar28 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar28 >>
                                                                           0x20)))),2);
      uVar28 = *(undefined8 *)((int)puVar3 + iVar6);
      uVar26 = psllw((ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)
                                                                                     uVar50 >> 0x18)
                                                                      << 0x30) >> 0x28),
                                                              (char)((ulonglong)uVar50 >> 0x10)) <<
                                             0x20) >> 0x18),(char)((ulonglong)uVar50 >> 8)),
                              (ushort)(byte)uVar50),2);
      uVar50 = psllw((ulonglong)
                     CONCAT16((char)((ulonglong)uVar50 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar50 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar50 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar50 >>
                                                                           0x20)))),2);
      uVar7 = (ushort)(((uint7)(byte)((ulonglong)uVar28 >> 0x18) << 0x30) >> 0x28);
      uVar13 = CONCAT26((((uVar8 >> 8) - (short)((ulonglong)uVar17 >> 0x30)) +
                        (short)((ulonglong)uVar26 >> 0x30)) - (uVar7 >> 8),
                        CONCAT24((((short)CONCAT21(uVar8,(char)((ulonglong)uVar14 >> 0x10)) -
                                  (short)((ulonglong)uVar17 >> 0x20)) +
                                 (short)((ulonglong)uVar26 >> 0x20)) -
                                 (short)CONCAT21(uVar7,(char)((ulonglong)uVar28 >> 0x10)),
                                 CONCAT22((((ushort)(byte)((ulonglong)uVar14 >> 8) -
                                           (short)((ulonglong)uVar17 >> 0x10)) +
                                          (short)((ulonglong)uVar26 >> 0x10)) -
                                          (ushort)(byte)((ulonglong)uVar28 >> 8),
                                          (((ushort)(byte)uVar14 - (short)uVar17) + (short)uVar26) -
                                          ((ushort)uVar28 & 0xff))));
      uVar27 = CONCAT26((((ushort)(byte)((ulonglong)uVar14 >> 0x38) -
                         (short)((ulonglong)uVar45 >> 0x30)) + (short)((ulonglong)uVar50 >> 0x30)) -
                        (ushort)(byte)((ulonglong)uVar28 >> 0x38),
                        CONCAT24((((ushort)(byte)((ulonglong)uVar14 >> 0x30) -
                                  (short)((ulonglong)uVar45 >> 0x20)) +
                                 (short)((ulonglong)uVar50 >> 0x20)) -
                                 (ushort)(byte)((ulonglong)uVar28 >> 0x30),
                                 CONCAT22((((ushort)(byte)((ulonglong)uVar14 >> 0x28) -
                                           (short)((ulonglong)uVar45 >> 0x10)) +
                                          (short)((ulonglong)uVar50 >> 0x10)) -
                                          (ushort)(byte)((ulonglong)uVar28 >> 0x28),
                                          (((ushort)(byte)((ulonglong)uVar14 >> 0x20) -
                                           (short)uVar45) + (short)uVar50) -
                                          (ushort)(byte)((ulonglong)uVar28 >> 0x20))));
      uVar18 = psraw(uVar13,0xf);
      uVar39 = psraw(uVar27,0xf);
      uVar13 = uVar13 ^ uVar18;
      uVar27 = uVar27 ^ uVar39;
      uVar14 = psraw(CONCAT26((short)(uVar13 >> 0x30) - (short)(uVar18 >> 0x30),
                              CONCAT24((short)(uVar13 >> 0x20) - (short)(uVar18 >> 0x20),
                                       CONCAT22((short)(uVar13 >> 0x10) - (short)(uVar18 >> 0x10),
                                                (short)uVar13 - (short)uVar18))),3);
      uVar28 = psraw(CONCAT26((short)(uVar27 >> 0x30) - (short)(uVar39 >> 0x30),
                              CONCAT24((short)(uVar27 >> 0x20) - (short)(uVar39 >> 0x20),
                                       CONCAT22((short)(uVar27 >> 0x10) - (short)(uVar39 >> 0x10),
                                                (short)uVar27 - (short)uVar39))),3);
      uVar14 = packsswb(uVar14,uVar28);
      uVar13 = psubusb(*puVar3,*(undefined8 *)((int)puVar3 + iVar6));
      uVar18 = packsswb(uVar18,uVar39);
      uVar39 = psubusb(*(undefined8 *)((int)puVar3 + iVar6),*puVar3);
      uVar28 = psubusb(uVar14,*(undefined8 *)(&DAT_63829490 + iVar2 * 8));
      uVar46 = CONCAT17(-((char)(uVar13 >> 0x38) == '\0'),
                        CONCAT16(-((char)(uVar13 >> 0x30) == '\0'),
                                 CONCAT15(-((char)(uVar13 >> 0x28) == '\0'),
                                          CONCAT14(-((char)(uVar13 >> 0x20) == '\0'),
                                                   CONCAT13(-((char)(uVar13 >> 0x18) == '\0'),
                                                            CONCAT12(-((char)(uVar13 >> 0x10) ==
                                                                      '\0'),CONCAT11(-((char)(uVar13
                                                                                             >> 8)
                                                                                      == '\0'),
                                                                                     -((char)uVar13
                                                                                      == '\0')))))))
                       );
      uVar27 = psubusb(uVar14,CONCAT17((char)((ulonglong)uVar28 >> 0x38) * '\x02',
                                       CONCAT16((char)((ulonglong)uVar28 >> 0x30) * '\x02',
                                                CONCAT15((char)((ulonglong)uVar28 >> 0x28) * '\x02',
                                                         CONCAT14((char)((ulonglong)uVar28 >> 0x20)
                                                                  * '\x02',CONCAT13((char)((
                                                  ulonglong)uVar28 >> 0x18) * '\x02',
                                                  CONCAT12((char)((ulonglong)uVar28 >> 0x10) *
                                                           '\x02',CONCAT11((char)((ulonglong)uVar28
                                                                                 >> 8) * '\x02',
                                                                           (char)uVar28 * '\x02'))))
                                                  ))));
      uVar51 = (uVar39 | uVar13) >> 2 & _DAT_63829480;
      uVar67 = uVar27 >> 1 & _DAT_63829488;
      uVar39 = paddusb(*(undefined8 *)((int)puVar3 + param_2),uVar27);
      uVar13 = psubusb(*(undefined8 *)((int)puVar3 + param_2),uVar27);
      uVar52 = CONCAT17(-((byte)(uVar67 >> 0x38) < (byte)(uVar51 >> 0x38)),
                        CONCAT16(-((char)(uVar67 >> 0x30) < (char)(uVar51 >> 0x30)),
                                 CONCAT15(-((char)(uVar67 >> 0x28) < (char)(uVar51 >> 0x28)),
                                          CONCAT14(-((char)(uVar67 >> 0x20) < (char)(uVar51 >> 0x20)
                                                    ),CONCAT13(-((char)(uVar67 >> 0x18) <
                                                                (char)(uVar51 >> 0x18)),
                                                               CONCAT12(-((char)(uVar67 >> 0x10) <
                                                                         (char)(uVar51 >> 0x10)),
                                                                        CONCAT11(-((char)(uVar67 >>
                                                                                         8) <
                                                                                  (char)(uVar51 >> 8
                                                                                        )),
                                                                                 -((char)uVar67 <
                                                                                  (char)uVar51))))))
                                ));
      uVar14 = *(undefined8 *)((int)puVar3 + param_2 * 2);
      *(ulonglong *)((int)puVar3 + param_2) = ~uVar18 & uVar39 | uVar13 & uVar18;
      uVar50 = psubsb((~uVar52 & uVar51 | uVar67 & uVar52) ^ uVar46,uVar46);
      uVar28 = *puVar3;
      uVar13 = paddusb(uVar14,uVar27);
      uVar27 = psubusb(uVar14,uVar27);
      cVar38 = (char)((ulonglong)uVar50 >> 8);
      cVar42 = (char)((ulonglong)uVar50 >> 0x10);
      cVar56 = (char)((ulonglong)uVar50 >> 0x18);
      cVar58 = (char)((ulonglong)uVar50 >> 0x20);
      cVar60 = (char)((ulonglong)uVar50 >> 0x28);
      cVar61 = (char)((ulonglong)uVar50 >> 0x30);
      cVar63 = (char)((ulonglong)uVar50 >> 0x38);
      uVar14 = *(undefined8 *)((int)puVar3 + iVar6);
      *puVar3 = CONCAT17((char)((ulonglong)uVar28 >> 0x38) - cVar63,
                         CONCAT16((char)((ulonglong)uVar28 >> 0x30) - cVar61,
                                  CONCAT15((char)((ulonglong)uVar28 >> 0x28) - cVar60,
                                           CONCAT14((char)((ulonglong)uVar28 >> 0x20) - cVar58,
                                                    CONCAT13((char)((ulonglong)uVar28 >> 0x18) -
                                                             cVar56,CONCAT12((char)((ulonglong)
                                                                                    uVar28 >> 0x10)
                                                                             - cVar42,CONCAT11((char
                                                  )((ulonglong)uVar28 >> 8) - cVar38,
                                                  (char)uVar28 - (char)uVar50)))))));
      *(ulonglong *)((int)puVar3 + iVar6) =
           CONCAT17(cVar63 + (char)((ulonglong)uVar14 >> 0x38),
                    CONCAT16(cVar61 + (char)((ulonglong)uVar14 >> 0x30),
                             CONCAT15(cVar60 + (char)((ulonglong)uVar14 >> 0x28),
                                      CONCAT14(cVar58 + (char)((ulonglong)uVar14 >> 0x20),
                                               CONCAT13(cVar56 + (char)((ulonglong)uVar14 >> 0x18),
                                                        CONCAT12(cVar42 + (char)((ulonglong)uVar14
                                                                                >> 0x10),
                                                                 CONCAT11(cVar38 + (char)((ulonglong
                                                                                          )uVar14 >>
                                                                                         8),
                                                                          (char)uVar50 +
                                                                          (char)uVar14)))))));
      *(ulonglong *)((int)puVar3 + param_2 * 2) = ~uVar18 & uVar27 | uVar13 & uVar18;
    }
    iVar10 = iVar10 + 8;
  } while (iVar10 < 0x30);
  do {
    iVar2 = *(int *)(param_1 + 4 + iVar10);
    puVar4 = *(undefined4 **)(param_1 + iVar10);
    if (iVar2 != 0) {
      uVar24 = *(undefined4 *)((int)puVar4 + param_2 + -4);
      uVar12 = *(undefined4 *)((int)puVar4 + param_2 * 2 + -4);
      uVar43 = *(undefined4 *)((int)puVar4 + param_2 * 2);
      uVar49 = *(undefined4 *)((int)puVar4 + iVar6 + -4);
      puVar1 = puVar4 + param_2;
      bVar36 = (byte)((uint)*(undefined4 *)((int)puVar4 + param_2) >> 8);
      bVar15 = (byte)((uint)*puVar4 >> 8);
      uVar35 = (undefined1)*(undefined4 *)((int)puVar4 + param_2);
      uVar34 = (undefined1)((uint)uVar24 >> 0x18);
      uVar9 = CONCAT11(uVar34,(char)((uint)puVar4[-1] >> 0x18));
      bVar11 = (byte)((uint)puVar4[-1] >> 0x10);
      bVar32 = (byte)((uint)uVar24 >> 0x10);
      uVar24 = *(undefined4 *)((int)puVar1 + param_2 + -4);
      uVar5 = *(undefined4 *)((int)puVar1 + param_2 * 2 + -4);
      bVar59 = (byte)((uint)*(undefined4 *)((int)puVar4 + iVar6) >> 8);
      cVar42 = (char)((uint)uVar43 >> 8);
      bVar57 = (byte)*(undefined4 *)((int)puVar4 + iVar6);
      uVar41 = (undefined1)uVar43;
      bVar55 = (byte)((uint)uVar49 >> 0x18);
      uVar40 = (undefined1)((uint)uVar12 >> 0x18);
      cVar38 = (char)((uint)uVar12 >> 0x10);
      bVar48 = (byte)((uint)uVar49 >> 0x10);
      uVar12 = *(undefined4 *)((int)puVar1 + param_2 * 2);
      uVar43 = *(undefined4 *)((int)puVar1 + iVar6 + -4);
      bVar31 = (byte)((uint)*(undefined4 *)((int)puVar1 + param_2) >> 8);
      bVar37 = (byte)((uint)*puVar1 >> 8);
      uVar30 = (undefined1)*(undefined4 *)((int)puVar1 + param_2);
      uVar29 = (undefined1)((uint)uVar24 >> 0x18);
      uVar23 = CONCAT11(uVar29,(char)((uint)puVar1[-1] >> 0x18));
      bVar22 = (byte)((uint)uVar24 >> 0x10);
      bVar33 = (byte)((uint)puVar1[-1] >> 0x10);
      bVar21 = (byte)((uint)*(undefined4 *)((int)puVar1 + iVar6) >> 8);
      bVar70 = (byte)((uint)uVar12 >> 8);
      uVar20 = (undefined1)*(undefined4 *)((int)puVar1 + iVar6);
      uVar69 = (undefined1)uVar12;
      uVar19 = (undefined1)((uint)uVar43 >> 0x18);
      uVar68 = (undefined1)((uint)uVar5 >> 0x18);
      bVar16 = (byte)((uint)uVar43 >> 0x10);
      bVar66 = (byte)((uint)uVar5 >> 0x10);
      uVar24 = CONCAT22(CONCAT11(bVar55,uVar40),uVar9);
      uVar12 = CONCAT22(CONCAT11(bVar48,cVar38),CONCAT11(bVar32,bVar11));
      uVar62 = (undefined2)CONCAT31(CONCAT21(CONCAT11(bVar36,bVar15),uVar35),(char)*puVar4);
      uVar49 = CONCAT22((short)CONCAT31(CONCAT21(CONCAT11(bVar59,cVar42),bVar57),uVar41),uVar62);
      uVar47 = (undefined2)CONCAT31(CONCAT21(CONCAT11(bVar31,bVar37),uVar30),(char)*puVar1);
      uVar43 = CONCAT22((short)CONCAT31(CONCAT21(CONCAT11(bVar21,bVar70),uVar20),uVar69),uVar47);
      uVar14 = CONCAT44(CONCAT22(CONCAT11(bVar16,bVar66),CONCAT11(bVar22,bVar33)),uVar12);
      uVar50 = CONCAT44(CONCAT22(CONCAT11(uVar19,uVar68),uVar23),uVar24);
      uVar17 = CONCAT44(uVar43,uVar49);
      uVar53 = CONCAT44((int)(CONCAT26(CONCAT11(bVar21,bVar70),
                                       CONCAT24(CONCAT11(bVar31,bVar37),uVar43)) >> 0x20),
                        (int)(CONCAT26(CONCAT11(bVar59,cVar42),
                                       CONCAT24(CONCAT11(bVar36,bVar15),uVar49)) >> 0x20));
      uVar8 = (ushort)(((uint7)bVar48 << 0x30) >> 0x28);
      uVar28 = psllw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar55
                                                                                     << 0x30) >>
                                                                                    0x28),
                                                                             CONCAT14(uVar40,uVar24)
                                                                            ) >> 0x20),uVar24) >>
                                                   0x18),CONCAT12(uVar34,uVar9)) >> 0x10),uVar9) &
                     0xffff00ff00ff00ff,2);
      uVar45 = psllw((ulonglong)
                     CONCAT16(uVar19,(uint6)CONCAT14(uVar68,(uint)(CONCAT12(uVar29,uVar23) &
                                                                  0xff00ff))),2);
      uVar26 = psllw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar57
                                                                                     << 0x30) >>
                                                                                    0x28),
                                                                             CONCAT14(uVar41,uVar49)
                                                                            ) >> 0x20),uVar49) >>
                                                   0x18),CONCAT12(uVar35,uVar62)) >> 0x10),uVar62) &
                     0xffff00ff00ff00ff,2);
      uVar54 = psllw((ulonglong)
                     CONCAT16(uVar20,(uint6)CONCAT14(uVar69,(uint)(CONCAT12(uVar30,uVar47) &
                                                                  0xff00ff))),2);
      uVar7 = (ushort)(((uint7)bVar59 << 0x30) >> 0x28);
      uVar13 = CONCAT26((((uVar8 >> 8) - (short)((ulonglong)uVar28 >> 0x30)) +
                        (short)((ulonglong)uVar26 >> 0x30)) - (uVar7 >> 8),
                        CONCAT24((((short)(CONCAT25(uVar8,CONCAT14(cVar38,uVar12)) >> 0x20) -
                                  (short)((ulonglong)uVar28 >> 0x20)) +
                                 (short)((ulonglong)uVar26 >> 0x20)) - (short)CONCAT21(uVar7,cVar42)
                                 ,CONCAT22((((ushort)bVar32 - (short)((ulonglong)uVar28 >> 0x10)) +
                                           (short)((ulonglong)uVar26 >> 0x10)) - (ushort)bVar36,
                                           (((ushort)bVar11 - (short)uVar28) + (short)uVar26) -
                                           (ushort)bVar15)));
      uVar27 = CONCAT26((((ushort)bVar16 - (short)((ulonglong)uVar45 >> 0x30)) +
                        (short)((ulonglong)uVar54 >> 0x30)) - (ushort)bVar21,
                        CONCAT24((((ushort)bVar66 - (short)((ulonglong)uVar45 >> 0x20)) +
                                 (short)((ulonglong)uVar54 >> 0x20)) - (ushort)bVar70,
                                 CONCAT22((((ushort)bVar22 - (short)((ulonglong)uVar45 >> 0x10)) +
                                          (short)((ulonglong)uVar54 >> 0x10)) - (ushort)bVar31,
                                          (((ushort)bVar33 - (short)uVar45) + (short)uVar54) -
                                          (ushort)bVar37)));
      uVar18 = psraw(uVar13,0xf);
      uVar39 = psraw(uVar27,0xf);
      uVar13 = uVar13 ^ uVar18;
      uVar27 = uVar27 ^ uVar39;
      uVar28 = psraw(CONCAT26((short)(uVar13 >> 0x30) - (short)(uVar18 >> 0x30),
                              CONCAT24((short)(uVar13 >> 0x20) - (short)(uVar18 >> 0x20),
                                       CONCAT22((short)(uVar13 >> 0x10) - (short)(uVar18 >> 0x10),
                                                (short)uVar13 - (short)uVar18))),3);
      uVar26 = psraw(CONCAT26((short)(uVar27 >> 0x30) - (short)(uVar39 >> 0x30),
                              CONCAT24((short)(uVar27 >> 0x20) - (short)(uVar39 >> 0x20),
                                       CONCAT22((short)(uVar27 >> 0x10) - (short)(uVar39 >> 0x10),
                                                (short)uVar27 - (short)uVar39))),3);
      uVar28 = packsswb(uVar28,uVar26);
      uVar13 = psubusb(uVar14,uVar53);
      uVar18 = packsswb(uVar18,uVar39);
      uVar39 = psubusb(uVar53,uVar14);
      uVar14 = psubusb(uVar28,*(undefined8 *)(&DAT_63829490 + iVar2 * 8));
      uVar46 = CONCAT17(-((char)(uVar13 >> 0x38) == '\0'),
                        CONCAT16(-((char)(uVar13 >> 0x30) == '\0'),
                                 CONCAT15(-((char)(uVar13 >> 0x28) == '\0'),
                                          CONCAT14(-((char)(uVar13 >> 0x20) == '\0'),
                                                   CONCAT13(-((char)(uVar13 >> 0x18) == '\0'),
                                                            CONCAT12(-((char)(uVar13 >> 0x10) ==
                                                                      '\0'),CONCAT11(-((char)(uVar13
                                                                                             >> 8)
                                                                                      == '\0'),
                                                                                     -((char)uVar13
                                                                                      == '\0')))))))
                       );
      uVar27 = psubusb(uVar28,CONCAT17((char)((ulonglong)uVar14 >> 0x38) * '\x02',
                                       CONCAT16((char)((ulonglong)uVar14 >> 0x30) * '\x02',
                                                CONCAT15((char)((ulonglong)uVar14 >> 0x28) * '\x02',
                                                         CONCAT14((char)((ulonglong)uVar14 >> 0x20)
                                                                  * '\x02',CONCAT13((char)((
                                                  ulonglong)uVar14 >> 0x18) * '\x02',
                                                  CONCAT12((char)((ulonglong)uVar14 >> 0x10) *
                                                           '\x02',CONCAT11((char)((ulonglong)uVar14
                                                                                 >> 8) * '\x02',
                                                                           (char)uVar14 * '\x02'))))
                                                  ))));
      uVar51 = (uVar39 | uVar13) >> 2 & _DAT_63829480;
      uVar67 = uVar27 >> 1 & _DAT_63829488;
      uVar39 = paddusb(uVar50,uVar27);
      uVar13 = psubusb(uVar50,uVar27);
      uVar52 = CONCAT17(-((byte)(uVar67 >> 0x38) < (byte)(uVar51 >> 0x38)),
                        CONCAT16(-((char)(uVar67 >> 0x30) < (char)(uVar51 >> 0x30)),
                                 CONCAT15(-((char)(uVar67 >> 0x28) < (char)(uVar51 >> 0x28)),
                                          CONCAT14(-((char)(uVar67 >> 0x20) < (char)(uVar51 >> 0x20)
                                                    ),CONCAT13(-((char)(uVar67 >> 0x18) <
                                                                (char)(uVar51 >> 0x18)),
                                                               CONCAT12(-((char)(uVar67 >> 0x10) <
                                                                         (char)(uVar51 >> 0x10)),
                                                                        CONCAT11(-((char)(uVar67 >>
                                                                                         8) <
                                                                                  (char)(uVar51 >> 8
                                                                                        )),
                                                                                 -((char)uVar67 <
                                                                                  (char)uVar51))))))
                                ));
      uVar39 = ~uVar18 & uVar39 | uVar13 & uVar18;
      uVar14 = psubsb((~uVar52 & uVar51 | uVar67 & uVar52) ^ uVar46,uVar46);
      cVar56 = (char)((ulonglong)uVar14 >> 8);
      cVar58 = (char)((ulonglong)uVar14 >> 0x10);
      cVar60 = (char)((ulonglong)uVar14 >> 0x18);
      cVar61 = (char)((ulonglong)uVar14 >> 0x20);
      cVar63 = (char)((ulonglong)uVar14 >> 0x28);
      cVar64 = (char)((ulonglong)uVar14 >> 0x30);
      cVar65 = (char)((ulonglong)uVar14 >> 0x38);
      uVar13 = paddusb(uVar17,uVar27);
      uVar27 = psubusb(uVar17,uVar27);
      uVar9 = CONCAT11((char)(uVar39 >> 0x18),bVar48 - cVar60);
      uVar47 = CONCAT11((char)(uVar39 >> 0x20),bVar33 - cVar61);
      uVar12 = CONCAT13((char)(uVar39 >> 0x28),CONCAT12(bVar22 - cVar63,uVar47));
      uVar44 = CONCAT15((char)(uVar39 >> 0x30),CONCAT14(bVar66 - cVar64,uVar12));
      uVar13 = ~uVar18 & uVar27 | uVar13 & uVar18;
      uVar23 = CONCAT11(cVar61 + bVar37,(char)(uVar13 >> 0x20));
      uVar24 = CONCAT13(cVar63 + bVar31,CONCAT12((char)(uVar13 >> 0x28),uVar23));
      uVar25 = CONCAT15(cVar64 + bVar70,CONCAT14((char)(uVar13 >> 0x30),uVar24));
      uVar43 = CONCAT22((short)((uint6)uVar25 >> 0x20),(short)((uint6)uVar44 >> 0x20));
      *(uint *)((int)puVar1 + -2) = CONCAT22(uVar23,uVar47);
      uVar23 = CONCAT11(cVar60 + bVar59,(char)(uVar13 >> 0x18));
      *(undefined4 *)((int)puVar1 + param_2 * 2 + -2) = uVar43;
      *(int *)((int)puVar1 + param_2 + -2) =
           (int)(CONCAT26((short)((uint)uVar24 >> 0x10),
                          CONCAT24((short)((uint)uVar12 >> 0x10),uVar12)) >> 0x20);
      *(int *)((int)puVar1 + iVar6 + -2) =
           (int)(CONCAT26((short)(CONCAT17(cVar65 + bVar21,CONCAT16((char)(uVar13 >> 0x38),uVar25))
                                 >> 0x30),
                          CONCAT24((short)(CONCAT17((char)(uVar39 >> 0x38),
                                                    CONCAT16(bVar16 - cVar65,uVar44)) >> 0x30),
                                   uVar43)) >> 0x20);
      uVar24 = CONCAT22((short)CONCAT31(CONCAT21(uVar23,cVar58 + cVar42),(char)(uVar13 >> 0x10)),
                        (short)CONCAT31(CONCAT21(uVar9,(char)(uVar39 >> 0x10)),cVar38 - cVar58));
      *(uint *)((int)puVar4 + -2) =
           CONCAT22(CONCAT11((char)uVar14 + bVar15,(char)uVar13),
                    CONCAT11((char)uVar39,bVar11 - (char)uVar14));
      *(undefined4 *)((int)puVar4 + param_2 * 2 + -2) = uVar24;
      *(uint *)((int)puVar4 + param_2 + -2) =
           CONCAT22(CONCAT11(cVar56 + bVar36,(char)(uVar13 >> 8)),
                    (short)CONCAT51((int5)(uVar39 >> 8),bVar32 - cVar56));
      *(int *)((int)puVar4 + iVar6 + -2) = (int)(CONCAT26(uVar23,CONCAT24(uVar9,uVar24)) >> 0x20);
    }
    iVar10 = iVar10 + 8;
  } while (iVar10 < 0x60);
  return;
}


