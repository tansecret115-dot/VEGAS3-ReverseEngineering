/* Module: erv23260.dll
   Function: FUN_637ff00b
   Address: 637ff00b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637ff00b(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  undefined7 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  uint3 uVar34;
  undefined2 uVar35;
  ushort uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  int unaff_EBP;
  undefined4 *puVar42;
  undefined4 *puVar43;
  ushort uVar44;
  ushort uVar45;
  byte bVar47;
  byte bVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  byte bVar51;
  byte bVar52;
  undefined8 uVar46;
  ushort uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  ushort uVar58;
  ushort uVar59;
  byte bVar61;
  undefined8 uVar56;
  byte bVar60;
  byte bVar62;
  undefined8 uVar57;
  undefined1 uVar63;
  byte bVar64;
  char cVar65;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar71;
  undefined1 uVar72;
  byte bVar74;
  char cVar76;
  ushort uVar77;
  char cVar79;
  ulonglong uVar66;
  char cVar70;
  char cVar73;
  char cVar75;
  char cVar78;
  char cVar80;
  ulonglong uVar67;
  byte bVar83;
  byte bVar84;
  undefined8 uVar81;
  ulonglong uVar82;
  ushort uVar87;
  ushort uVar88;
  undefined8 uVar85;
  ulonglong uVar86;
  undefined1 uVar91;
  byte bVar92;
  short sVar89;
  short sVar90;
  undefined1 uVar93;
  short sVar94;
  short sVar95;
  ushort uVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  undefined4 uVar103;
  undefined8 uVar104;
  undefined8 uStack00000004;
  undefined8 uStack0000000c;
  undefined8 uStack00000014;
  undefined8 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  int in_stack_000000b0;
  int iStack000000b8;
  uint uStack000000bc;
  int in_stack_000000c0;
  undefined8 in_stack_000000c4;
  uint uStack000000cc;
  uint in_stack_000000d0;
  undefined4 *in_stack_000000dc;
  uint in_stack_000000ec;
  
  puVar42 = *(undefined4 **)(unaff_EBP + 0x14);
  iVar40 = *(int *)(unaff_EBP + 0x24);
  uVar54 = *puVar42;
  uVar103 = *(undefined4 *)((int)puVar42 + iVar40 * 2);
  uVar55 = *(undefined4 *)((int)puVar42 + iVar40);
  cVar70 = (char)((uint)uVar55 >> 0x18);
  bVar51 = (byte)((uint)uVar54 >> 0x18);
  uVar31 = CONCAT11(cVar70,bVar51);
  bVar18 = (byte)((uint)uVar55 >> 0x10);
  uVar49 = (undefined1)((uint)uVar54 >> 0x10);
  bVar60 = (byte)((uint)uVar55 >> 8);
  bVar47 = (byte)((uint)uVar54 >> 8);
  uVar2 = *(undefined4 *)((int)puVar42 + in_stack_000000b0);
  bVar24 = (byte)((uint)uVar2 >> 0x18);
  cVar73 = (char)((uint)uVar103 >> 0x18);
  bVar19 = (byte)((uint)uVar2 >> 0x10);
  uVar71 = (undefined1)((uint)uVar103 >> 0x10);
  bVar61 = (byte)((uint)uVar2 >> 8);
  uVar68 = (undefined1)((uint)uVar103 >> 8);
  uVar63 = (undefined1)uVar103;
  uVar7 = puVar42[1];
  uStack0000002c = CONCAT22(CONCAT11(bVar61,uVar68),CONCAT11(bVar60,bVar47));
  uStack00000024 = CONCAT22(CONCAT11((byte)uVar2,uVar63),CONCAT11((byte)uVar55,(byte)uVar54));
  uVar8 = *(undefined4 *)((int)puVar42 + iVar40 * 2 + 4);
  uVar58 = (ushort)(CONCAT35(CONCAT21(uVar31,bVar18),CONCAT14(uVar49,uVar54)) >> 0x20);
  uStack00000034 =
       CONCAT22((short)(CONCAT35(CONCAT21(CONCAT11(bVar24,cVar73),bVar19),CONCAT14(uVar71,uVar103))
                       >> 0x20),uVar58);
  uVar103 = *(undefined4 *)((int)puVar42 + iVar40 + 4);
  uVar32 = CONCAT11((char)((uint)uVar103 >> 0x18),(char)((uint)uVar7 >> 0x18));
  bVar20 = (byte)((uint)uVar103 >> 0x10);
  bVar62 = (byte)((uint)uVar103 >> 8);
  bVar83 = (byte)((uint)uVar7 >> 8);
  uVar3 = *(undefined4 *)((int)puVar42 + in_stack_000000b0 + 4);
  uVar33 = CONCAT11((char)((uint)uVar3 >> 0x18),(char)((uint)uVar8 >> 0x18));
  bVar21 = (byte)((uint)uVar3 >> 0x10);
  uVar93 = (undefined1)((uint)uVar8 >> 0x10);
  bVar13 = (byte)((uint)uVar3 >> 8);
  uVar91 = (undefined1)((uint)uVar8 >> 8);
  uStack0000003c = (int)(CONCAT26(CONCAT11(bVar24,cVar73),CONCAT24(uVar31,uStack00000034)) >> 0x20);
  uVar87 = (ushort)(CONCAT35(CONCAT21(uVar32,bVar20),CONCAT14((char)((uint)uVar7 >> 0x10),uVar7)) >>
                   0x20);
  uStack00000054 =
       CONCAT22((short)(CONCAT35(CONCAT21(uVar33,bVar21),CONCAT14(uVar93,uVar8)) >> 0x20),uVar87);
  uStack00000044 = CONCAT22(CONCAT11((byte)uVar3,(char)uVar8),CONCAT11((byte)uVar103,(byte)uVar7));
  uStack0000004c = CONCAT22(CONCAT11(bVar13,uVar91),CONCAT11(bVar62,bVar83));
  puVar42 = puVar42 + iVar40;
  uStack0000005c = (int)(CONCAT26(uVar33,CONCAT24(uVar32,uStack00000054)) >> 0x20);
  uVar9 = *puVar42;
  uVar10 = *(undefined4 *)((int)puVar42 + iVar40 * 2);
  uVar4 = *(undefined4 *)((int)puVar42 + iVar40);
  bVar25 = (byte)((uint)uVar4 >> 0x18);
  bVar52 = (byte)((uint)uVar9 >> 0x18);
  uVar22 = (undefined1)((uint)uVar4 >> 0x10);
  uVar50 = (undefined1)((uint)uVar9 >> 0x10);
  bVar14 = (byte)((uint)uVar4 >> 8);
  bVar48 = (byte)((uint)uVar9 >> 8);
  uVar5 = *(undefined4 *)((int)puVar42 + in_stack_000000b0);
  bVar26 = (byte)((uint)uVar5 >> 0x18);
  bVar74 = (byte)((uint)uVar10 >> 0x18);
  uVar23 = (undefined1)((uint)uVar5 >> 0x10);
  uVar72 = (undefined1)((uint)uVar10 >> 0x10);
  bVar15 = (byte)((uint)uVar5 >> 8);
  bVar69 = (byte)((uint)uVar10 >> 8);
  bVar64 = (byte)uVar10;
  uVar11 = puVar42[1];
  uStack00000030 = CONCAT22(CONCAT11(bVar15,bVar69),CONCAT11(bVar14,bVar48));
  uStack00000028 = CONCAT22(CONCAT11((byte)uVar5,bVar64),CONCAT11((byte)uVar4,(byte)uVar9));
  uVar12 = *(undefined4 *)((int)puVar42 + iVar40 * 2 + 4);
  uVar59 = (ushort)(CONCAT35(CONCAT21(CONCAT11(bVar25,bVar52),uVar22),CONCAT14(uVar50,uVar9)) >>
                   0x20);
  uVar77 = (ushort)(CONCAT35(CONCAT21(CONCAT11(bVar26,bVar74),uVar23),CONCAT14(uVar72,uVar10)) >>
                   0x20);
  uStack00000038 = CONCAT22(uVar77,uVar59);
  uVar10 = *(undefined4 *)((int)puVar42 + iVar40 + 4);
  uVar32 = CONCAT11((char)((uint)uVar10 >> 0x18),(char)((uint)uVar11 >> 0x18));
  bVar16 = (byte)((uint)uVar10 >> 8);
  bVar84 = (byte)((uint)uVar11 >> 8);
  uVar6 = *(undefined4 *)((int)puVar42 + in_stack_000000b0 + 4);
  uVar33 = CONCAT11((char)((uint)uVar6 >> 0x18),(char)((uint)uVar12 >> 0x18));
  bVar17 = (byte)((uint)uVar6 >> 8);
  bVar92 = (byte)((uint)uVar12 >> 8);
  uStack00000040 =
       (int)(CONCAT26(CONCAT11(bVar26,bVar74),CONCAT24(CONCAT11(bVar25,bVar52),uStack00000038)) >>
            0x20);
  uVar88 = (ushort)(CONCAT35(CONCAT21(uVar32,(char)((uint)uVar10 >> 0x10)),
                             CONCAT14((char)((uint)uVar11 >> 0x10),uVar11)) >> 0x20);
  uVar96 = (ushort)(CONCAT35(CONCAT21(uVar33,(char)((uint)uVar6 >> 0x10)),
                             CONCAT14((char)((uint)uVar12 >> 0x10),uVar12)) >> 0x20);
  uStack00000048 = CONCAT22(CONCAT11((byte)uVar6,(byte)uVar12),CONCAT11((byte)uVar10,(byte)uVar11));
  uStack00000058 = CONCAT22(uVar96,uVar88);
  uStack00000050 = CONCAT22(CONCAT11(bVar17,bVar92),CONCAT11(bVar16,bVar84));
  uStack00000060 = (int)(CONCAT26(uVar33,CONCAT24(uVar32,CONCAT22(uVar96,uVar88))) >> 0x20);
  uStack0000000c = CONCAT44(uStack00000030,uStack0000002c);
  uStack00000014 = CONCAT44(uStack00000038,uStack00000034);
  uVar29 = (ushort)(((uint7)bVar61 << 0x30) >> 0x28);
  uVar27 = (ushort)(((uint7)bVar19 << 0x30) >> 0x28);
  uVar44 = (ushort)(((uint7)(byte)uVar3 << 0x30) >> 0x28);
  uVar45 = (ushort)(((uint7)bVar13 << 0x30) >> 0x28);
  uVar53 = (ushort)(((uint7)bVar21 << 0x30) >> 0x28);
  uVar28 = (ushort)(((uint7)bVar24 << 0x30) >> 0x28);
  uVar34 = CONCAT21(uVar28,cVar73);
  uVar30 = CONCAT43((int)(((uint7)uVar34 << 0x20) >> 0x18),CONCAT12(cVar70,uVar31));
  uStack00000004 = CONCAT44(uStack00000028,uStack00000024);
  uVar36 = (ushort)bVar52;
  sVar89 = (ushort)bVar47 + (uVar58 & 0xff) + (ushort)(byte)uVar7 + (ushort)bVar83 + (uVar87 & 0xff)
           + (ushort)bVar51;
  sVar90 = (short)((uint7)uVar30 >> 0x10);
  sVar94 = (ushort)bVar60 + (ushort)bVar18 + (ushort)(byte)uVar103 + (ushort)bVar62 + (ushort)bVar20
           + sVar90;
  sVar95 = (short)uVar34;
  sVar97 = (short)CONCAT21(uVar29,uVar68) + (short)CONCAT21(uVar27,uVar71) +
           (short)CONCAT21(uVar44,(char)uVar8) + (short)CONCAT21(uVar45,uVar91) +
           (short)CONCAT21(uVar53,uVar93) + sVar95;
  uVar28 = uVar28 >> 8;
  sVar98 = (uVar29 >> 8) + (uVar27 >> 8) + (uVar44 >> 8) + (uVar45 >> 8) + (uVar53 >> 8) + uVar28;
  uVar57 = CONCAT26(sVar98,CONCAT24(sVar97,CONCAT22(sVar94,sVar89)));
  uVar27 = (ushort)(((uint7)(byte)uVar2 << 0x30) >> 0x28);
  sVar99 = (ushort)bVar48 + (uVar59 & 0xff) + (ushort)(byte)uVar11 + (ushort)bVar84 +
           (uVar88 & 0xff) + uVar36;
  sVar100 = (ushort)bVar14 + (uVar59 >> 8) + (ushort)(byte)uVar10 + (ushort)bVar16 + (uVar88 >> 8) +
            (ushort)bVar25;
  sVar101 = (ushort)bVar69 + (uVar77 & 0xff) + (ushort)(byte)uVar12 + (ushort)bVar92 +
            (uVar96 & 0xff) + (ushort)bVar74;
  sVar102 = (ushort)bVar15 + (uVar77 >> 8) + (ushort)(byte)uVar6 + (ushort)bVar17 + (uVar96 >> 8) +
            (ushort)bVar26;
  uVar85 = CONCAT26(sVar102,CONCAT24(sVar101,CONCAT22(sVar100,sVar99)));
  uVar46 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar30 >> 0x10),uVar31) & 0xffffffffffff00ff,3);
  uVar56 = psllw((ulonglong)CONCAT16(bVar26,(uint6)CONCAT14(bVar74,(uint)CONCAT12(bVar25,uVar36))),3
                );
  uVar46 = psraw(CONCAT26(((uVar27 >> 8) + sVar98 + uVar28) - (short)((ulonglong)uVar46 >> 0x30),
                          CONCAT24(((short)CONCAT21(uVar27,uVar63) + sVar97 + sVar95) -
                                   (short)((ulonglong)uVar46 >> 0x20),
                                   CONCAT22(((ushort)(byte)uVar55 + sVar94 + sVar90) -
                                            (short)((ulonglong)uVar46 >> 0x10),
                                            ((ushort)(byte)uVar54 + sVar89 + (ushort)bVar51) -
                                            (short)uVar46))),3);
  uVar56 = psraw(CONCAT26(((ushort)(byte)uVar5 + sVar102 + (ushort)bVar26) -
                          (short)((ulonglong)uVar56 >> 0x30),
                          CONCAT24(((ushort)bVar64 + sVar101 + (ushort)bVar74) -
                                   (short)((ulonglong)uVar56 >> 0x20),
                                   CONCAT22(((ushort)(byte)uVar4 + sVar100 + (ushort)bVar25) -
                                            (short)((ulonglong)uVar56 >> 0x10),
                                            ((ushort)(byte)uVar9 + sVar99 + uVar36) - (short)uVar56)
                                  )),3);
  uVar66 = packsswb(uVar46,uVar56);
  uVar67 = CONCAT17(-((longlong)uVar66 < 0),
                    CONCAT16(-((char)(uVar66 >> 0x30) < '\0'),
                             CONCAT15(-((char)(uVar66 >> 0x28) < '\0'),
                                      CONCAT14(-((char)(uVar66 >> 0x20) < '\0'),
                                               CONCAT13(-((char)(uVar66 >> 0x18) < '\0'),
                                                        CONCAT12(-((char)(uVar66 >> 0x10) < '\0'),
                                                                 CONCAT11(-((char)(uVar66 >> 8) <
                                                                           '\0'),-((char)uVar66 <
                                                                                  '\0'))))))));
  uVar46 = psubsb(uVar66 ^ uVar67,uVar67);
  uVar56 = psubusb(uVar46,in_stack_000000c4);
  uVar66 = psubusb(uVar46,CONCAT17((char)((ulonglong)uVar56 >> 0x38) * '\x02',
                                   CONCAT16((char)((ulonglong)uVar56 >> 0x30) * '\x02',
                                            CONCAT15((char)((ulonglong)uVar56 >> 0x28) * '\x02',
                                                     CONCAT14((char)((ulonglong)uVar56 >> 0x20) *
                                                              '\x02',CONCAT13((char)((ulonglong)
                                                                                     uVar56 >> 0x18)
                                                                              * '\x02',CONCAT12((
                                                  char)((ulonglong)uVar56 >> 0x10) * '\x02',
                                                  CONCAT11((char)((ulonglong)uVar56 >> 8) * '\x02',
                                                           (char)uVar56 * '\x02'))))))));
  uVar46 = psubsb(uVar66 ^ uVar67,uVar67);
  cVar65 = (char)uVar46 + bVar51;
  cVar70 = (char)((ulonglong)uVar46 >> 8) + cVar70;
  cVar73 = (char)((ulonglong)uVar46 >> 0x10) + cVar73;
  cVar75 = (char)((ulonglong)uVar46 >> 0x18) + bVar24;
  cVar76 = (char)((ulonglong)uVar46 >> 0x20) + bVar52;
  cVar78 = (char)((ulonglong)uVar46 >> 0x28) + bVar25;
  cVar79 = (char)((ulonglong)uVar46 >> 0x30) + bVar74;
  cVar80 = (char)((ulonglong)uVar46 >> 0x38) + bVar26;
  uStack0000001c =
       CONCAT17(cVar80,CONCAT16(cVar79,CONCAT15(cVar78,CONCAT14(cVar76,CONCAT13(cVar75,CONCAT12(
                                                  cVar73,CONCAT11(cVar70,cVar65)))))));
  uVar31 = CONCAT11(cVar75,bVar19);
  uVar103 = CONCAT22((short)(CONCAT35(CONCAT21(uVar31,cVar73),CONCAT14(uVar71,uStack00000034)) >>
                            0x20),
                     (short)(CONCAT35(CONCAT21((short)uVar2,uVar68),CONCAT14(uVar63,uStack00000024))
                            >> 0x20));
  *in_stack_000000dc = CONCAT22(CONCAT11(cVar65,uVar49),(short)uVar54);
  *(undefined4 *)((int)in_stack_000000dc + iVar40 * 2) = uVar103;
  uVar32 = CONCAT11(cVar80,uVar23);
  *(uint *)((int)in_stack_000000dc + iVar40) = CONCAT22(CONCAT11(cVar70,bVar18),(short)uVar55);
  *(int *)((int)in_stack_000000dc + in_stack_000000b0) =
       (int)(CONCAT26(uVar31,CONCAT24((short)uVar2,uVar103)) >> 0x20);
  uVar55 = CONCAT22((short)(CONCAT35(CONCAT21(uVar32,cVar79),CONCAT14(uVar72,uStack00000038)) >>
                           0x20),
                    (short)(CONCAT35(CONCAT21((short)uVar5,bVar69),CONCAT14(bVar64,uStack00000028))
                           >> 0x20));
  puVar43 = in_stack_000000dc + iVar40;
  iStack000000b8 = *(int *)(unaff_EBP + 0x1c);
  *puVar43 = CONCAT22(CONCAT11(cVar76,uVar50),(short)uVar9);
  *(undefined4 *)((int)puVar43 + iVar40 * 2) = uVar55;
  *(uint *)((int)puVar43 + iVar40) = CONCAT22(CONCAT11(cVar78,uVar22),(short)uVar4);
  *(int *)((int)puVar43 + in_stack_000000b0) =
       (int)(CONCAT26(uVar32,CONCAT24((short)uVar5,uVar55)) >> 0x20);
  puVar42 = puVar42 + (2 - iVar40);
  iStack000000b8 = iStack000000b8 + -8;
  uStack000000cc = in_stack_000000d0;
  puVar43 = puVar43 + (1 - iVar40);
  uVar38 = 8;
  do {
    iVar37 = in_stack_000000b0;
    uStack000000bc = uVar38;
    puVar1 = puVar42 + iVar40;
    uVar4 = *puVar42;
    uVar5 = *(undefined4 *)((int)puVar42 + iVar40 * 2);
    uVar55 = *(undefined4 *)((int)puVar42 + iVar40);
    uVar31 = CONCAT11((char)((uint)uVar55 >> 0x18),(char)((uint)uVar4 >> 0x18));
    uVar2 = *(undefined4 *)((int)puVar42 + in_stack_000000b0);
    uVar32 = CONCAT11((char)((uint)uVar2 >> 0x18),(char)((uint)uVar5 >> 0x18));
    uVar10 = *puVar1;
    uVar6 = *(undefined4 *)((int)puVar1 + iVar40 * 2);
    uVar54 = CONCAT22((short)(CONCAT35(CONCAT21(uVar32,(char)((uint)uVar2 >> 0x10)),
                                       CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >> 0x20),
                      (short)(CONCAT35(CONCAT21(uVar31,(char)((uint)uVar55 >> 0x10)),
                                       CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >> 0x20));
    *(uint *)((int)&stack0x00000024 + uVar38 * 8) =
         CONCAT22(CONCAT11((char)uVar2,(char)uVar5),CONCAT11((char)uVar55,(char)uVar4));
    *(undefined4 *)((int)&stack0x00000034 + uVar38 * 8) = uVar54;
    uVar103 = *(undefined4 *)((int)puVar1 + iVar40);
    uVar33 = CONCAT11((char)((uint)uVar103 >> 0x18),(char)((uint)uVar10 >> 0x18));
    uVar3 = *(undefined4 *)((int)puVar1 + iVar37);
    uVar35 = CONCAT11((char)((uint)uVar3 >> 0x18),(char)((uint)uVar6 >> 0x18));
    *(uint *)((int)&stack0x0000002c + uVar38 * 8) =
         CONCAT22(CONCAT11((char)((uint)uVar2 >> 8),(char)((uint)uVar5 >> 8)),
                  CONCAT11((char)((uint)uVar55 >> 8),(char)((uint)uVar4 >> 8)));
    *(int *)((int)&stack0x0000003c + uVar38 * 8) =
         (int)(CONCAT26(uVar32,CONCAT24(uVar31,uVar54)) >> 0x20);
    uVar55 = CONCAT22((short)(CONCAT35(CONCAT21(uVar35,(char)((uint)uVar3 >> 0x10)),
                                       CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20),
                      (short)(CONCAT35(CONCAT21(uVar33,(char)((uint)uVar103 >> 0x10)),
                                       CONCAT14((char)((uint)uVar10 >> 0x10),uVar10)) >> 0x20));
    *(uint *)((int)&stack0x00000028 + uVar38 * 8) =
         CONCAT22(CONCAT11((char)uVar3,(char)uVar6),CONCAT11((char)uVar103,(char)uVar10));
    *(undefined4 *)((int)&stack0x00000038 + uVar38 * 8) = uVar55;
    *(uint *)((int)&stack0x00000030 + uVar38 * 8) =
         CONCAT22(CONCAT11((char)((uint)uVar3 >> 8),(char)((uint)uVar6 >> 8)),
                  CONCAT11((char)((uint)uVar103 >> 8),(char)((uint)uVar10 >> 8)));
    *(int *)((int)&stack0x00000040 + uVar38 * 8) =
         (int)(CONCAT26(uVar35,CONCAT24(uVar33,uVar55)) >> 0x20);
    iVar40 = 0;
    uVar39 = uVar38 - 1 & 0xf;
    uVar41 = uVar39 + 0xd;
    uVar38 = uVar39 + 10;
    do {
      uVar41 = uVar41 & 0xf;
      uVar46 = *(undefined8 *)((int)&stack0x00000024 + (uVar39 & 0xf) * 8);
      uVar56 = *(undefined8 *)((int)&stack0x00000024 + uVar41 * 8);
      uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar46 >> 0x18) << 0x30) >> 0x28);
      sVar90 = (short)uVar57 + (ushort)(byte)uVar46;
      sVar95 = (short)((ulonglong)uVar57 >> 0x10) + (ushort)(byte)((ulonglong)uVar46 >> 8);
      sVar89 = (short)((ulonglong)uVar57 >> 0x20) +
               (short)CONCAT21(uVar27,(char)((ulonglong)uVar46 >> 0x10));
      sVar94 = (short)((ulonglong)uVar57 >> 0x30) + (uVar27 >> 8);
      sVar97 = (short)uVar85 + (ushort)(byte)((ulonglong)uVar46 >> 0x20);
      sVar98 = (short)((ulonglong)uVar85 >> 0x10) + (ushort)(byte)((ulonglong)uVar46 >> 0x28);
      sVar99 = (short)((ulonglong)uVar85 >> 0x20) + (ushort)(byte)((ulonglong)uVar46 >> 0x30);
      sVar100 = (short)((ulonglong)uVar85 >> 0x30) + (ushort)(byte)((ulonglong)uVar46 >> 0x38);
      uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar56 >> 0x18) << 0x30) >> 0x28);
      uVar34 = CONCAT21(uVar27,(char)((ulonglong)uVar56 >> 0x10));
      uVar44 = (ushort)uVar56;
      uVar30 = CONCAT43((int)(((uint7)uVar34 << 0x20) >> 0x18),
                        CONCAT12((char)((ulonglong)uVar56 >> 8),uVar44));
      uVar45 = (ushort)(byte)((ulonglong)uVar56 >> 0x20);
      bVar60 = (byte)((ulonglong)uVar56 >> 0x28);
      bVar61 = (byte)((ulonglong)uVar56 >> 0x30);
      bVar62 = (byte)((ulonglong)uVar56 >> 0x38);
      uVar56 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar30 >> 0x10),uVar44) & 0xffffffffffff00ff,
                     3);
      uVar57 = psllw((ulonglong)
                     CONCAT16(bVar62,(uint6)CONCAT14(bVar61,(uint)CONCAT12(bVar60,uVar45))),3);
      uVar46 = *(undefined8 *)((int)&stack0x00000024 + (uVar38 & 0xf) * 8);
      uVar85 = psraw(CONCAT26((sVar94 + (uVar27 >> 8)) - (short)((ulonglong)uVar56 >> 0x30),
                              CONCAT24((sVar89 + (short)uVar34) - (short)((ulonglong)uVar56 >> 0x20)
                                       ,CONCAT22((sVar95 + (short)((uint7)uVar30 >> 0x10)) -
                                                 (short)((ulonglong)uVar56 >> 0x10),
                                                 (sVar90 + (uVar44 & 0xff)) - (short)uVar56))),3);
      uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar46 >> 0x18) << 0x30) >> 0x28);
      uVar39 = (uVar39 & 0xf) + 1 & 0xf;
      uVar38 = (uVar38 & 0xf) + 1 & 0xf;
      uVar57 = psraw(CONCAT26((sVar100 + (ushort)bVar62) - (short)((ulonglong)uVar57 >> 0x30),
                              CONCAT24((sVar99 + (ushort)bVar61) -
                                       (short)((ulonglong)uVar57 >> 0x20),
                                       CONCAT22((sVar98 + (ushort)bVar60) -
                                                (short)((ulonglong)uVar57 >> 0x10),
                                                (sVar97 + uVar45) - (short)uVar57))),3);
      uVar56 = *(undefined8 *)((int)&stack0x00000024 + uVar39 * 8);
      uVar86 = packsswb(uVar85,uVar57);
      uVar57 = *(undefined8 *)((int)&stack0x0000002c + uVar41 * 8);
      uVar44 = (ushort)(((uint7)(byte)((ulonglong)uVar56 >> 0x18) << 0x30) >> 0x28);
      sVar90 = (sVar90 - (ushort)(byte)uVar46) + ((ushort)uVar56 & 0xff);
      sVar95 = (sVar95 - (ushort)(byte)((ulonglong)uVar46 >> 8)) +
               (ushort)(byte)((ulonglong)uVar56 >> 8);
      sVar89 = (sVar89 - (short)CONCAT21(uVar27,(char)((ulonglong)uVar46 >> 0x10))) +
               (short)CONCAT21(uVar44,(char)((ulonglong)uVar56 >> 0x10));
      sVar94 = (sVar94 - (uVar27 >> 8)) + (uVar44 >> 8);
      sVar97 = (sVar97 - (ushort)(byte)((ulonglong)uVar46 >> 0x20)) +
               (ushort)(byte)((ulonglong)uVar56 >> 0x20);
      sVar98 = (sVar98 - (ushort)(byte)((ulonglong)uVar46 >> 0x28)) +
               (ushort)(byte)((ulonglong)uVar56 >> 0x28);
      sVar99 = (sVar99 - (ushort)(byte)((ulonglong)uVar46 >> 0x30)) +
               (ushort)(byte)((ulonglong)uVar56 >> 0x30);
      sVar100 = (sVar100 - (ushort)(byte)((ulonglong)uVar46 >> 0x38)) +
                (ushort)(byte)((ulonglong)uVar56 >> 0x38);
      uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar57 >> 0x18) << 0x30) >> 0x28);
      uVar34 = CONCAT21(uVar27,(char)((ulonglong)uVar57 >> 0x10));
      uVar44 = (ushort)uVar57;
      uVar56 = CONCAT53((int5)(((ulonglong)uVar34 << 0x20) >> 0x18),
                        CONCAT12((char)((ulonglong)uVar57 >> 8),uVar44));
      uVar45 = (ushort)(byte)((ulonglong)uVar57 >> 0x20);
      bVar60 = (byte)((ulonglong)uVar57 >> 0x28);
      bVar61 = (byte)((ulonglong)uVar57 >> 0x30);
      bVar62 = (byte)((ulonglong)uVar57 >> 0x38);
      uVar57 = psllw(CONCAT62((int6)((ulonglong)uVar56 >> 0x10),uVar44) & 0xffffffffffff00ff,3);
      uVar85 = psllw((ulonglong)
                     CONCAT16(bVar62,(uint6)CONCAT14(bVar61,(uint)CONCAT12(bVar60,uVar45))),3);
      uVar46 = *(undefined8 *)((int)&stack0x00000024 + uVar38 * 8);
      uVar56 = psraw(CONCAT26((sVar94 + (uVar27 >> 8)) - (short)((ulonglong)uVar57 >> 0x30),
                              CONCAT24((sVar89 + (short)uVar34) - (short)((ulonglong)uVar57 >> 0x20)
                                       ,CONCAT22((sVar95 + (short)((ulonglong)uVar56 >> 0x10)) -
                                                 (short)((ulonglong)uVar57 >> 0x10),
                                                 (sVar90 + (uVar44 & 0xff)) - (short)uVar57))),3);
      uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar46 >> 0x18) << 0x30) >> 0x28);
      sVar90 = sVar90 - ((ushort)uVar46 & 0xff);
      sVar95 = sVar95 - (ushort)(byte)((ulonglong)uVar46 >> 8);
      sVar89 = sVar89 - (short)CONCAT21(uVar27,(char)((ulonglong)uVar46 >> 0x10));
      sVar94 = sVar94 - (uVar27 >> 8);
      uVar57 = CONCAT26(sVar94,CONCAT24(sVar89,CONCAT22(sVar95,sVar90)));
      uVar81 = psraw(CONCAT26((sVar100 + (ushort)bVar62) - (short)((ulonglong)uVar85 >> 0x30),
                              CONCAT24((sVar99 + (ushort)bVar61) -
                                       (short)((ulonglong)uVar85 >> 0x20),
                                       CONCAT22((sVar98 + (ushort)bVar60) -
                                                (short)((ulonglong)uVar85 >> 0x10),
                                                (sVar97 + uVar45) - (short)uVar85))),3);
      sVar97 = sVar97 - (ushort)(byte)((ulonglong)uVar46 >> 0x20);
      sVar98 = sVar98 - (ushort)(byte)((ulonglong)uVar46 >> 0x28);
      sVar99 = sVar99 - (ushort)(byte)((ulonglong)uVar46 >> 0x30);
      sVar100 = sVar100 - (ushort)(byte)((ulonglong)uVar46 >> 0x38);
      uVar85 = CONCAT26(sVar100,CONCAT24(sVar99,CONCAT22(sVar98,sVar97)));
      uVar67 = packsswb(uVar56,uVar81);
      uVar66 = CONCAT17(-((longlong)uVar86 < 0),
                        CONCAT16(-((char)(uVar86 >> 0x30) < '\0'),
                                 CONCAT15(-((char)(uVar86 >> 0x28) < '\0'),
                                          CONCAT14(-((char)(uVar86 >> 0x20) < '\0'),
                                                   CONCAT13(-((char)(uVar86 >> 0x18) < '\0'),
                                                            CONCAT12(-((char)(uVar86 >> 0x10) < '\0'
                                                                      ),CONCAT11(-((char)(uVar86 >>
                                                                                         8) < '\0'),
                                                                                 -((char)uVar86 <
                                                                                  '\0'))))))));
      uVar82 = CONCAT17(-((longlong)uVar67 < 0),
                        CONCAT16(-((char)(uVar67 >> 0x30) < '\0'),
                                 CONCAT15(-((char)(uVar67 >> 0x28) < '\0'),
                                          CONCAT14(-((char)(uVar67 >> 0x20) < '\0'),
                                                   CONCAT13(-((char)(uVar67 >> 0x18) < '\0'),
                                                            CONCAT12(-((char)(uVar67 >> 0x10) < '\0'
                                                                      ),CONCAT11(-((char)(uVar67 >>
                                                                                         8) < '\0'),
                                                                                 -((char)uVar67 <
                                                                                  '\0'))))))));
      uVar81 = psubsb(uVar86 ^ uVar66,uVar66);
      uVar56 = psubsb(uVar67 ^ uVar82,uVar82);
      uVar46 = psubusb(uVar81,in_stack_000000c4);
      uVar104 = psubusb(uVar56,in_stack_000000c4);
      uVar86 = psubusb(uVar81,CONCAT17((char)((ulonglong)uVar46 >> 0x38) * '\x02',
                                       CONCAT16((char)((ulonglong)uVar46 >> 0x30) * '\x02',
                                                CONCAT15((char)((ulonglong)uVar46 >> 0x28) * '\x02',
                                                         CONCAT14((char)((ulonglong)uVar46 >> 0x20)
                                                                  * '\x02',CONCAT13((char)((
                                                  ulonglong)uVar46 >> 0x18) * '\x02',
                                                  CONCAT12((char)((ulonglong)uVar46 >> 0x10) *
                                                           '\x02',CONCAT11((char)((ulonglong)uVar46
                                                                                 >> 8) * '\x02',
                                                                           (char)uVar46 * '\x02'))))
                                                  ))));
      uVar67 = psubusb(uVar56,CONCAT17((char)((ulonglong)uVar104 >> 0x38) * '\x02',
                                       CONCAT16((char)((ulonglong)uVar104 >> 0x30) * '\x02',
                                                CONCAT15((char)((ulonglong)uVar104 >> 0x28) * '\x02'
                                                         ,CONCAT14((char)((ulonglong)uVar104 >> 0x20
                                                                         ) * '\x02',
                                                                   CONCAT13((char)((ulonglong)
                                                                                   uVar104 >> 0x18)
                                                                            * '\x02',CONCAT12((char)
                                                  ((ulonglong)uVar104 >> 0x10) * '\x02',
                                                  CONCAT11((char)((ulonglong)uVar104 >> 8) * '\x02',
                                                           (char)uVar104 * '\x02'))))))));
      uVar104 = psubsb(uVar86 ^ uVar66,uVar66);
      uVar46 = *(undefined8 *)((int)&stack0x00000024 + uVar41 * 8);
      uVar81 = psubsb(uVar67 ^ uVar82,uVar82);
      uVar56 = *(undefined8 *)((int)&stack0x0000002c + uVar41 * 8);
      *(ulonglong *)((int)&stack0x00000004 + iVar40 * 8) =
           CONCAT17((char)((ulonglong)uVar104 >> 0x38) + (char)((ulonglong)uVar46 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar104 >> 0x30) + (char)((ulonglong)uVar46 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar104 >> 0x28) +
                                      (char)((ulonglong)uVar46 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar104 >> 0x20) +
                                               (char)((ulonglong)uVar46 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar104 >> 0x18) +
                                                        (char)((ulonglong)uVar46 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar104 >> 0x10)
                                                                 + (char)((ulonglong)uVar46 >> 0x10)
                                                                 ,CONCAT11((char)((ulonglong)uVar104
                                                                                 >> 8) +
                                                                           (char)((ulonglong)uVar46
                                                                                 >> 8),
                                                                           (char)uVar104 +
                                                                           (char)uVar46)))))));
      *(ulonglong *)((int)&stack0x0000000c + iVar40 * 8) =
           CONCAT17((char)((ulonglong)uVar81 >> 0x38) + (char)((ulonglong)uVar56 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar81 >> 0x30) + (char)((ulonglong)uVar56 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar81 >> 0x28) +
                                      (char)((ulonglong)uVar56 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar81 >> 0x20) +
                                               (char)((ulonglong)uVar56 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar81 >> 0x18) +
                                                        (char)((ulonglong)uVar56 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar81 >> 0x10) +
                                                                 (char)((ulonglong)uVar56 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar81
                                                                                >> 8) +
                                                                          (char)((ulonglong)uVar56
                                                                                >> 8),
                                                                          (char)uVar81 +
                                                                          (char)uVar56)))))));
      uVar39 = uVar39 + 1;
      iVar40 = iVar40 + 2;
      uVar41 = uVar41 + 2;
      uVar38 = uVar38 + 1;
    } while (iVar40 != 4);
    iVar40 = *(int *)(unaff_EBP + 0x24);
    puVar1 = puVar43 + iVar40;
    uVar31 = CONCAT11((char)((ulonglong)uStack0000000c >> 0x18),
                      (char)((ulonglong)uStack00000004 >> 0x18));
    uVar32 = CONCAT11((char)((ulonglong)uStack0000001c >> 0x18),
                      (char)((ulonglong)uStack00000014 >> 0x18));
    uVar55 = CONCAT22((short)CONCAT31(CONCAT21(uVar32,(char)((ulonglong)uStack0000001c >> 0x10)),
                                      (char)((ulonglong)uStack00000014 >> 0x10)),
                      (short)CONCAT31(CONCAT21(uVar31,(char)((ulonglong)uStack0000000c >> 0x10)),
                                      (char)((ulonglong)uStack00000004 >> 0x10)));
    *puVar43 = CONCAT22(CONCAT11((char)uStack0000001c,(char)uStack00000014),
                        CONCAT11((char)uStack0000000c,(char)uStack00000004));
    *(undefined4 *)((int)puVar43 + iVar40 * 2) = uVar55;
    uVar33 = CONCAT11((char)((ulonglong)uStack0000000c >> 0x38),
                      (char)((ulonglong)uStack00000004 >> 0x38));
    uVar35 = CONCAT11((char)((ulonglong)uStack0000001c >> 0x38),
                      (char)((ulonglong)uStack00000014 >> 0x38));
    *(uint *)((int)puVar43 + iVar40) =
         CONCAT22((short)CONCAT51((int5)((ulonglong)uStack0000001c >> 8),
                                  (char)((ulonglong)uStack00000014 >> 8)),
                  (short)CONCAT51((int5)((ulonglong)uStack0000000c >> 8),
                                  (char)((ulonglong)uStack00000004 >> 8)));
    *(int *)((int)puVar43 + in_stack_000000b0) =
         (int)(CONCAT26(uVar32,CONCAT24(uVar31,uVar55)) >> 0x20);
    uVar55 = CONCAT22((short)CONCAT31(CONCAT21(uVar35,(char)((ulonglong)uStack0000001c >> 0x30)),
                                      (char)((ulonglong)uStack00000014 >> 0x30)),
                      (short)CONCAT31(CONCAT21(uVar33,(char)((ulonglong)uStack0000000c >> 0x30)),
                                      (char)((ulonglong)uStack00000004 >> 0x30)));
    *puVar1 = CONCAT22(CONCAT11((char)((ulonglong)uStack0000001c >> 0x20),
                                (char)((ulonglong)uStack00000014 >> 0x20)),
                       CONCAT11((char)((ulonglong)uStack0000000c >> 0x20),
                                (char)((ulonglong)uStack00000004 >> 0x20)));
    *(undefined4 *)((int)puVar1 + iVar40 * 2) = uVar55;
    *(uint *)((int)puVar1 + iVar40) =
         CONCAT22((short)CONCAT51((uint5)((ulonglong)uStack0000001c >> 0x28),
                                  (char)((ulonglong)uStack00000014 >> 0x28)),
                  (short)CONCAT51((uint5)((ulonglong)uStack0000000c >> 0x28),
                                  (char)((ulonglong)uStack00000004 >> 0x28)));
    *(int *)((int)puVar1 + in_stack_000000b0) =
         (int)(CONCAT26(uVar35,CONCAT24(uVar33,uVar55)) >> 0x20);
    uStack000000cc = uStack000000cc + in_stack_000000d0;
    bVar60 = *(byte *)(*(int *)(unaff_EBP + 0x2c) + (uStack000000cc >> 5) + in_stack_000000c0);
    uVar39 = bVar60 & 0x1f;
    if ((bVar60 & 0x1f) == 0) {
      uVar39 = in_stack_000000ec;
    }
    in_stack_000000ec = uVar39;
    iVar40 = *(int *)(unaff_EBP + 0x24);
    puVar42 = puVar42 + 1;
    puVar43 = puVar43 + 1;
    in_stack_000000c4 = *(undefined8 *)(&DAT_63829490 + (&DAT_6382f1e0)[uVar39] * 8);
    uVar38 = uStack000000bc + 4 & 0xf;
    iStack000000b8 = iStack000000b8 + -4;
  } while (iStack000000b8 != 0);
  uVar38 = uVar38 - 1 & 0xf;
  uVar41 = uVar38 + 0xd & 0xf;
  uVar46 = *(undefined8 *)((int)&stack0x00000024 + uVar38 * 8);
  uVar56 = *(undefined8 *)((int)&stack0x00000024 + uVar41 * 8);
  uVar44 = (ushort)(((uint7)(byte)((ulonglong)uVar46 >> 0x18) << 0x30) >> 0x28);
  uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar56 >> 0x18) << 0x30) >> 0x28);
  uVar34 = CONCAT21(uVar27,(char)((ulonglong)uVar56 >> 0x10));
  uVar45 = (ushort)uVar56;
  uVar30 = CONCAT43((int)(((uint7)uVar34 << 0x20) >> 0x18),
                    CONCAT12((char)((ulonglong)uVar56 >> 8),uVar45));
  uVar53 = (ushort)(byte)((ulonglong)uVar56 >> 0x20);
  bVar60 = (byte)((ulonglong)uVar56 >> 0x28);
  bVar61 = (byte)((ulonglong)uVar56 >> 0x30);
  bVar62 = (byte)((ulonglong)uVar56 >> 0x38);
  uVar56 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar30 >> 0x10),uVar45) & 0xffffffffffff00ff,3);
  uVar57 = psllw((ulonglong)CONCAT16(bVar62,(uint6)CONCAT14(bVar61,(uint)CONCAT12(bVar60,uVar53))),3
                );
  uVar56 = psraw(CONCAT26((sVar94 + (uVar44 >> 8) + (uVar27 >> 8)) -
                          (short)((ulonglong)uVar56 >> 0x30),
                          CONCAT24((sVar89 + (short)CONCAT21(uVar44,(char)((ulonglong)uVar46 >> 0x10
                                                                          )) + (short)uVar34) -
                                   (short)((ulonglong)uVar56 >> 0x20),
                                   CONCAT22((sVar95 + (ushort)(byte)((ulonglong)uVar46 >> 8) +
                                            (short)((uint7)uVar30 >> 0x10)) -
                                            (short)((ulonglong)uVar56 >> 0x10),
                                            (sVar90 + (ushort)(byte)uVar46 + (uVar45 & 0xff)) -
                                            (short)uVar56))),3);
  uVar46 = psraw(CONCAT26((sVar100 + (ushort)(byte)((ulonglong)uVar46 >> 0x38) + (ushort)bVar62) -
                          (short)((ulonglong)uVar57 >> 0x30),
                          CONCAT24((sVar99 + (ushort)(byte)((ulonglong)uVar46 >> 0x30) +
                                   (ushort)bVar61) - (short)((ulonglong)uVar57 >> 0x20),
                                   CONCAT22((sVar98 + (ushort)(byte)((ulonglong)uVar46 >> 0x28) +
                                            (ushort)bVar60) - (short)((ulonglong)uVar57 >> 0x10),
                                            (sVar97 + (ushort)(byte)((ulonglong)uVar46 >> 0x20) +
                                            uVar53) - (short)uVar57))),3);
  uVar67 = packsswb(uVar56,uVar46);
  uVar46 = *(undefined8 *)((int)&stack0x0000002c + uVar41 * 8);
  uVar66 = CONCAT17(-((longlong)uVar67 < 0),
                    CONCAT16(-((char)(uVar67 >> 0x30) < '\0'),
                             CONCAT15(-((char)(uVar67 >> 0x28) < '\0'),
                                      CONCAT14(-((char)(uVar67 >> 0x20) < '\0'),
                                               CONCAT13(-((char)(uVar67 >> 0x18) < '\0'),
                                                        CONCAT12(-((char)(uVar67 >> 0x10) < '\0'),
                                                                 CONCAT11(-((char)(uVar67 >> 8) <
                                                                           '\0'),-((char)uVar67 <
                                                                                  '\0'))))))));
  uVar56 = *(undefined8 *)((int)&stack0x00000034 + uVar41 * 8);
  uVar57 = *(undefined8 *)((int)&stack0x0000003c + uVar41 * 8);
  uVar81 = psubsb(uVar67 ^ uVar66,uVar66);
  uVar85 = psubusb(uVar81,*(undefined8 *)(&DAT_63829490 + (&DAT_6382f1e0)[uVar39] * 8));
  uVar67 = psubusb(uVar81,CONCAT17((char)((ulonglong)uVar85 >> 0x38) * '\x02',
                                   CONCAT16((char)((ulonglong)uVar85 >> 0x30) * '\x02',
                                            CONCAT15((char)((ulonglong)uVar85 >> 0x28) * '\x02',
                                                     CONCAT14((char)((ulonglong)uVar85 >> 0x20) *
                                                              '\x02',CONCAT13((char)((ulonglong)
                                                                                     uVar85 >> 0x18)
                                                                              * '\x02',CONCAT12((
                                                  char)((ulonglong)uVar85 >> 0x10) * '\x02',
                                                  CONCAT11((char)((ulonglong)uVar85 >> 8) * '\x02',
                                                           (char)uVar85 * '\x02'))))))));
  uVar31 = CONCAT11((char)((ulonglong)uVar57 >> 0x18),(char)((ulonglong)uVar56 >> 0x18));
  uVar81 = psubsb(uVar67 ^ uVar66,uVar66);
  uVar85 = *(undefined8 *)((int)&stack0x00000024 + uVar41 * 8);
  iVar40 = *(int *)(unaff_EBP + 0x24);
  uVar32 = CONCAT11((char)((ulonglong)uVar46 >> 0x18),
                    (char)((ulonglong)uVar81 >> 0x18) + (char)((ulonglong)uVar85 >> 0x18));
  uVar55 = CONCAT22((short)CONCAT31(CONCAT21(uVar31,(char)((ulonglong)uVar57 >> 0x10)),
                                    (char)((ulonglong)uVar56 >> 0x10)),
                    (short)CONCAT31(CONCAT21(uVar32,(char)((ulonglong)uVar46 >> 0x10)),
                                    (char)((ulonglong)uVar81 >> 0x10) +
                                    (char)((ulonglong)uVar85 >> 0x10)));
  puVar42 = puVar43 + iVar40;
  *puVar43 = CONCAT22(CONCAT11((char)uVar57,(char)uVar56),
                      CONCAT11((char)uVar46,(char)uVar81 + (char)uVar85));
  *(undefined4 *)((int)puVar43 + iVar40 * 2) = uVar55;
  uVar33 = CONCAT11((char)((ulonglong)uVar46 >> 0x38),
                    (char)((ulonglong)uVar81 >> 0x38) + (char)((ulonglong)uVar85 >> 0x38));
  uVar35 = CONCAT11((char)((ulonglong)uVar57 >> 0x38),(char)((ulonglong)uVar56 >> 0x38));
  *(uint *)((int)puVar43 + iVar40) =
       CONCAT22((short)CONCAT51((int5)((ulonglong)uVar57 >> 8),(char)((ulonglong)uVar56 >> 8)),
                (short)CONCAT51((int5)((ulonglong)uVar46 >> 8),
                                (char)((ulonglong)uVar81 >> 8) + (char)((ulonglong)uVar85 >> 8)));
  *(int *)((int)puVar43 + in_stack_000000b0) =
       (int)(CONCAT26(uVar31,CONCAT24(uVar32,uVar55)) >> 0x20);
  uVar55 = CONCAT22((short)CONCAT31(CONCAT21(uVar35,(char)((ulonglong)uVar57 >> 0x30)),
                                    (char)((ulonglong)uVar56 >> 0x30)),
                    (short)CONCAT31(CONCAT21(uVar33,(char)((ulonglong)uVar46 >> 0x30)),
                                    (char)((ulonglong)uVar81 >> 0x30) +
                                    (char)((ulonglong)uVar85 >> 0x30)));
  *puVar42 = CONCAT22(CONCAT11((char)((ulonglong)uVar57 >> 0x20),(char)((ulonglong)uVar56 >> 0x20)),
                      CONCAT11((char)((ulonglong)uVar46 >> 0x20),
                               (char)((ulonglong)uVar81 >> 0x20) + (char)((ulonglong)uVar85 >> 0x20)
                              ));
  *(undefined4 *)((int)puVar42 + iVar40 * 2) = uVar55;
  *(uint *)((int)puVar42 + iVar40) =
       CONCAT22((short)CONCAT51((uint5)((ulonglong)uVar57 >> 0x28),(char)((ulonglong)uVar56 >> 0x28)
                               ),
                (short)CONCAT51((uint5)((ulonglong)uVar46 >> 0x28),
                                (char)((ulonglong)uVar81 >> 0x28) +
                                (char)((ulonglong)uVar85 >> 0x28)));
  *(int *)((int)puVar42 + in_stack_000000b0) =
       (int)(CONCAT26(uVar35,CONCAT24(uVar33,uVar55)) >> 0x20);
  return;
}


