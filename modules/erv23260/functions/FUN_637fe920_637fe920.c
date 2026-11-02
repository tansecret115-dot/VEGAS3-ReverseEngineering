/* Module: erv23260.dll
   Function: FUN_637fe920
   Address: 637fe920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Unable to track spacebase fully for stack */

void __cdecl
FUN_637fe920(int param_1,undefined8 *param_2,uint param_3,int param_4,int param_5,uint param_6,
            byte *param_7,undefined8 *param_8,int param_9,uint param_10)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined7 uVar9;
  uint3 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined8 uVar19;
  ushort uVar20;
  ushort uVar21;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar22;
  undefined8 uVar23;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  undefined8 uVar43;
  undefined4 auStack_104 [41];
  undefined1 auStack_60 [4];
  int aiStack_5c [7];
  undefined8 uStack_40;
  uint auStack_38 [10];
  
  iVar5 = param_5 * -2;
  iVar12 = param_5 * 3;
  *(undefined1 **)(auStack_60 + iVar5) = &stack0xfffffff0;
  *(int *)((int)aiStack_5c + iVar5 + 8) = iVar12;
  *(int *)((int)aiStack_5c + iVar5) = param_1 + iVar12;
  *(int *)((int)aiStack_5c + iVar5 + 4) = (int)param_2 + iVar12;
  *(undefined8 **)((int)auStack_38 + iVar5 + 0x10) = param_8;
  *(uint *)((int)auStack_38 + iVar5 + 4) = param_6 ^ 0x18;
  *(int *)((int)auStack_38 + iVar5 + 8) =
       (int)((longlong)(ulonglong)param_3 / (longlong)(int)param_6);
  *(undefined4 *)((int)aiStack_5c + iVar5 + 0x18) = 0;
  *(uint *)((int)auStack_38 + iVar5 + 0x14) = param_6;
  *(undefined4 *)((int)auStack_38 + iVar5 + 0x1c) = 0;
  *(undefined4 *)((int)auStack_38 + iVar5 + 0xc) = 0;
  *(undefined4 *)((int)auStack_38 + iVar5) = 0;
  uVar13 = *param_7 & 0x1f;
  if ((*param_7 & 0x1f) == 0) {
    uVar13 = param_10;
  }
  *(uint *)((int)auStack_38 + iVar5 + 0x20) = uVar13;
  *(undefined8 *)((int)&uStack_40 + iVar5) =
       *(undefined8 *)(&DAT_63829490 + (&DAT_6382f1e0)[uVar13] * 8);
  *(undefined4 *)((int)auStack_104 + iVar5) = 0x637fe9e0;
  FUN_637ff00b();
  uVar13 = *param_7 & 0x1f;
  if ((*param_7 & 0x1f) == 0) {
    uVar13 = param_10;
  }
  *(uint *)((int)auStack_38 + iVar5 + 0x24) = uVar13;
  *(undefined4 *)((int)auStack_38 + iVar5) = 0;
  iVar12 = 0;
  *(undefined8 *)((int)&uStack_40 + iVar5) =
       *(undefined8 *)(&DAT_63829490 + (&DAT_6382f260)[uVar13] * 8);
  puVar14 = param_8;
  puVar15 = param_2;
  do {
    iVar2 = *(int *)((int)aiStack_5c + iVar5 + 8);
    uVar19 = *(undefined8 *)((int)puVar14 + param_5);
    uVar22 = *(undefined8 *)((int)puVar14 + param_5 * 2);
    *(undefined8 *)((int)puVar15 + param_5) = uVar19;
    uVar8 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28);
    *(undefined8 *)((int)puVar15 + param_5 * 2) = uVar22;
    uVar23 = *(undefined8 *)((int)puVar14 + param_5 * 4);
    uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar22 >> 0x18) << 0x30) >> 0x28);
    uVar30 = *(undefined8 *)((int)puVar14 + param_5 * 5);
    uVar17 = (ushort)(((uint7)(byte)((ulonglong)uVar23 >> 0x18) << 0x30) >> 0x28);
    uVar32 = *(undefined8 *)((int)puVar14 + iVar2 * 2);
    uVar18 = (ushort)(((uint7)(byte)((ulonglong)uVar30 >> 0x18) << 0x30) >> 0x28);
    uVar43 = *(undefined8 *)((int)puVar14 + iVar2);
    uVar21 = (ushort)(((uint7)(byte)((ulonglong)uVar32 >> 0x18) << 0x30) >> 0x28);
    uVar7 = (ushort)(((uint7)(byte)((ulonglong)uVar43 >> 0x18) << 0x30) >> 0x28);
    uVar10 = CONCAT21(uVar7,(char)((ulonglong)uVar43 >> 0x10));
    uVar16 = (ushort)uVar43;
    uVar9 = CONCAT43((int)(((uint7)uVar10 << 0x20) >> 0x18),
                     CONCAT12((char)((ulonglong)uVar43 >> 8),uVar16));
    uVar1 = *puVar14;
    uVar20 = (ushort)(byte)((ulonglong)uVar43 >> 0x20);
    bVar24 = (byte)((ulonglong)uVar43 >> 0x28);
    bVar25 = (byte)((ulonglong)uVar43 >> 0x30);
    bVar26 = (byte)((ulonglong)uVar43 >> 0x38);
    sVar33 = (ushort)(byte)uVar19 + ((ushort)uVar22 & 0xff) + (ushort)(byte)uVar23 +
             ((ushort)uVar30 & 0xff) + ((ushort)uVar32 & 0xff) + (uVar16 & 0xff);
    sVar34 = (short)((uint7)uVar9 >> 0x10);
    sVar35 = (ushort)(byte)((ulonglong)uVar19 >> 8) + (ushort)(byte)((ulonglong)uVar22 >> 8) +
             (ushort)(byte)((ulonglong)uVar23 >> 8) + (ushort)(byte)((ulonglong)uVar30 >> 8) +
             (ushort)(byte)((ulonglong)uVar32 >> 8) + sVar34;
    sVar36 = (short)uVar10;
    sVar37 = (short)CONCAT21(uVar8,(char)((ulonglong)uVar19 >> 0x10)) +
             (short)CONCAT21(uVar6,(char)((ulonglong)uVar22 >> 0x10)) +
             (short)CONCAT21(uVar17,(char)((ulonglong)uVar23 >> 0x10)) +
             (short)CONCAT21(uVar18,(char)((ulonglong)uVar30 >> 0x10)) +
             (short)CONCAT21(uVar21,(char)((ulonglong)uVar32 >> 0x10)) + sVar36;
    uVar7 = uVar7 >> 8;
    sVar38 = (uVar8 >> 8) + (uVar6 >> 8) + (uVar17 >> 8) + (uVar18 >> 8) + (uVar21 >> 8) + uVar7;
    *puVar15 = uVar1;
    uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    sVar39 = (ushort)(byte)((ulonglong)uVar19 >> 0x20) + (ushort)(byte)((ulonglong)uVar22 >> 0x20) +
             (ushort)(byte)((ulonglong)uVar23 >> 0x20) + (ushort)(byte)((ulonglong)uVar30 >> 0x20) +
             (ushort)(byte)((ulonglong)uVar32 >> 0x20) + uVar20;
    sVar40 = (ushort)(byte)((ulonglong)uVar19 >> 0x28) + (ushort)(byte)((ulonglong)uVar22 >> 0x28) +
             (ushort)(byte)((ulonglong)uVar23 >> 0x28) + (ushort)(byte)((ulonglong)uVar30 >> 0x28) +
             (ushort)(byte)((ulonglong)uVar32 >> 0x28) + (ushort)bVar24;
    sVar41 = (ushort)(byte)((ulonglong)uVar19 >> 0x30) + (ushort)(byte)((ulonglong)uVar22 >> 0x30) +
             (ushort)(byte)((ulonglong)uVar23 >> 0x30) + (ushort)(byte)((ulonglong)uVar30 >> 0x30) +
             (ushort)(byte)((ulonglong)uVar32 >> 0x30) + (ushort)bVar25;
    sVar42 = (ushort)(byte)((ulonglong)uVar19 >> 0x38) + (ushort)(byte)((ulonglong)uVar22 >> 0x38) +
             (ushort)(byte)((ulonglong)uVar23 >> 0x38) + (ushort)(byte)((ulonglong)uVar30 >> 0x38) +
             (ushort)(byte)((ulonglong)uVar32 >> 0x38) + (ushort)bVar26;
    uVar19 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar9 >> 0x10),uVar16) & 0xffffffffffff00ff,3);
    uVar22 = psllw((ulonglong)CONCAT16(bVar26,(uint6)CONCAT14(bVar25,(uint)CONCAT12(bVar24,uVar20)))
                   ,3);
    *(ulonglong *)(&stack0xfffffff0 + iVar12 * 2 + iVar5) =
         CONCAT26(sVar38,CONCAT24(sVar37,CONCAT22(sVar35,sVar33)));
    uVar19 = psraw(CONCAT26(((uVar6 >> 8) + sVar38 + uVar7) - (short)((ulonglong)uVar19 >> 0x30),
                            CONCAT24(((short)CONCAT21(uVar6,(char)((ulonglong)uVar1 >> 0x10)) +
                                      sVar37 + sVar36) - (short)((ulonglong)uVar19 >> 0x20),
                                     CONCAT22(((ushort)(byte)((ulonglong)uVar1 >> 8) + sVar35 +
                                              sVar34) - (short)((ulonglong)uVar19 >> 0x10),
                                              (((ushort)uVar1 & 0xff) + sVar33 + (uVar16 & 0xff)) -
                                              (short)uVar19))),3);
    *(ulonglong *)(&stack0xfffffff8 + iVar12 * 2 + iVar5) =
         CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar39)));
    uVar22 = psraw(CONCAT26(((ushort)(byte)((ulonglong)uVar1 >> 0x38) + sVar42 + (ushort)bVar26) -
                            (short)((ulonglong)uVar22 >> 0x30),
                            CONCAT24(((ushort)(byte)((ulonglong)uVar1 >> 0x30) + sVar41 +
                                     (ushort)bVar25) - (short)((ulonglong)uVar22 >> 0x20),
                                     CONCAT22(((ushort)(byte)((ulonglong)uVar1 >> 0x28) + sVar40 +
                                              (ushort)bVar24) - (short)((ulonglong)uVar22 >> 0x10),
                                              ((ushort)(byte)((ulonglong)uVar1 >> 0x20) + sVar39 +
                                              uVar20) - (short)uVar22))),3);
    uVar27 = packsswb(uVar19,uVar22);
    uVar28 = CONCAT17(-((longlong)uVar27 < 0),
                      CONCAT16(-((char)(uVar27 >> 0x30) < '\0'),
                               CONCAT15(-((char)(uVar27 >> 0x28) < '\0'),
                                        CONCAT14(-((char)(uVar27 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)(uVar27 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)(uVar27 >> 0x10) < '\0'),
                                                                   CONCAT11(-((char)(uVar27 >> 8) <
                                                                             '\0'),-((char)uVar27 <
                                                                                    '\0'))))))));
    iVar12 = iVar12 + 8;
    uVar19 = psubsb(uVar27 ^ uVar28,uVar28);
    uVar11 = *(int *)((int)auStack_38 + iVar5) + *(int *)((int)auStack_38 + iVar5 + 4);
    uVar22 = psubusb(uVar19,*(undefined8 *)((int)&uStack_40 + iVar5));
    *(uint *)((int)auStack_38 + iVar5) = uVar11;
    uVar27 = psubusb(uVar19,CONCAT17((char)((ulonglong)uVar22 >> 0x38) * '\x02',
                                     CONCAT16((char)((ulonglong)uVar22 >> 0x30) * '\x02',
                                              CONCAT15((char)((ulonglong)uVar22 >> 0x28) * '\x02',
                                                       CONCAT14((char)((ulonglong)uVar22 >> 0x20) *
                                                                '\x02',CONCAT13((char)((ulonglong)
                                                                                       uVar22 >>
                                                                                      0x18) * '\x02'
                                                                                ,CONCAT12((char)((
                                                  ulonglong)uVar22 >> 0x10) * '\x02',
                                                  CONCAT11((char)((ulonglong)uVar22 >> 8) * '\x02',
                                                           (char)uVar22 * '\x02'))))))));
    iVar3 = *(int *)((int)aiStack_5c + iVar5 + 0x18);
    uVar22 = psubsb(uVar27 ^ uVar28,uVar28);
    uVar19 = *(undefined8 *)((int)puVar14 + iVar2);
    puVar14 = puVar14 + 1;
    *(ulonglong *)((int)puVar15 + iVar2) =
         CONCAT17((char)((ulonglong)uVar22 >> 0x38) + (char)((ulonglong)uVar19 >> 0x38),
                  CONCAT16((char)((ulonglong)uVar22 >> 0x30) + (char)((ulonglong)uVar19 >> 0x30),
                           CONCAT15((char)((ulonglong)uVar22 >> 0x28) +
                                    (char)((ulonglong)uVar19 >> 0x28),
                                    CONCAT14((char)((ulonglong)uVar22 >> 0x20) +
                                             (char)((ulonglong)uVar19 >> 0x20),
                                             CONCAT13((char)((ulonglong)uVar22 >> 0x18) +
                                                      (char)((ulonglong)uVar19 >> 0x18),
                                                      CONCAT12((char)((ulonglong)uVar22 >> 0x10) +
                                                               (char)((ulonglong)uVar19 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar22 >>
                                                                              8) +
                                                                        (char)((ulonglong)uVar19 >>
                                                                              8),(char)uVar22 +
                                                                                 (char)uVar19)))))))
    ;
    puVar15 = puVar15 + 1;
    uVar13 = param_7[(uVar11 >> 4) + iVar3] & 0x1f;
    if ((param_7[(uVar11 >> 4) + iVar3] & 0x1f) == 0) {
      uVar13 = *(uint *)((int)auStack_38 + iVar5 + 0x24);
    }
    *(uint *)((int)auStack_38 + iVar5 + 0x24) = uVar13;
    *(undefined8 *)((int)&uStack_40 + iVar5) =
         *(undefined8 *)(&DAT_63829490 + (&DAT_6382f260)[uVar13] * 8);
  } while (iVar12 < (int)param_3);
  param_2 = (undefined8 *)((int)param_2 + param_5 * 4);
  iVar12 = param_4 + -8;
  do {
    *(int *)((int)aiStack_5c + iVar5 + 0xc) = iVar12;
    iVar12 = *(int *)((int)aiStack_5c + iVar5 + 0x18);
    *(int *)((int)auStack_38 + iVar5 + 0x1c) = iVar12;
    if (param_6 == 8) {
LAB_637febd1:
      *(undefined4 *)((int)auStack_38 + iVar5) = 0;
      *(int *)((int)aiStack_5c + iVar5 + 0x18) = iVar12 + *(int *)((int)auStack_38 + iVar5 + 8);
    }
    else {
      uVar13 = *(uint *)((int)auStack_38 + iVar5 + 0xc) ^ 0xffffffff;
      *(undefined4 *)((int)auStack_38 + iVar5) = 0;
      *(uint *)((int)auStack_38 + iVar5 + 0xc) = uVar13;
      if (uVar13 == 0) goto LAB_637febd1;
    }
    uVar13 = param_7[*(int *)((int)aiStack_5c + iVar5 + 0x18)] & 0x1f;
    if ((param_7[*(int *)((int)aiStack_5c + iVar5 + 0x18)] & 0x1f) == 0) {
      uVar13 = *(uint *)((int)auStack_38 + iVar5 + 0x20);
    }
    *(uint *)((int)auStack_38 + iVar5 + 0x20) = uVar13;
    puVar15 = *(undefined8 **)((int)auStack_38 + iVar5 + 0x10);
    *(undefined8 *)((int)&uStack_40 + iVar5) =
         *(undefined8 *)(&DAT_63829490 + (&DAT_6382f1e0)[uVar13] * 8);
    iVar12 = param_9;
    puVar14 = param_8;
    if (puVar15 == param_8) {
      puVar14 = param_8 + param_5;
      iVar12 = param_9 + 0x60;
    }
    *(undefined8 **)((int)auStack_38 + iVar5 + 0x10) = puVar14;
    *(int *)((int)auStack_38 + iVar5 + 0x14) = iVar12;
    *(undefined4 *)((int)auStack_104 + iVar5) = 0x637fec50;
    FUN_637ff00b();
    iVar12 = 0;
    *(int *)((int)auStack_38 + iVar5) = -*(int *)((int)auStack_38 + iVar5 + 4);
    puVar14 = param_2;
    do {
      uVar11 = *(int *)((int)auStack_38 + iVar5) + *(int *)((int)auStack_38 + iVar5 + 4);
      *(uint *)((int)auStack_38 + iVar5) = uVar11;
      uVar19 = *(undefined8 *)(&stack0xfffffff0 + iVar12 * 2 + iVar5);
      uVar13 = param_7[(uVar11 >> 4) + *(int *)((int)auStack_38 + iVar5 + 0x1c)] & 0x1f;
      if ((param_7[(uVar11 >> 4) + *(int *)((int)auStack_38 + iVar5 + 0x1c)] & 0x1f) == 0) {
        uVar13 = *(uint *)((int)auStack_38 + iVar5 + 0x24);
      }
      *(uint *)((int)auStack_38 + iVar5 + 0x24) = uVar13;
      uVar22 = *(undefined8 *)(&stack0xfffffff8 + iVar12 * 2 + iVar5);
      iVar2 = *(int *)((int)auStack_38 + iVar5 + 0x14);
      uVar11 = 0;
      *(undefined8 *)((int)&uStack_40 + iVar5) =
           *(undefined8 *)(&DAT_63829490 + (&DAT_6382f260)[uVar13] * 8);
      do {
        *(uint *)((int)auStack_38 + iVar5 + 0x18) = uVar11;
        uVar23 = *(undefined8 *)(*(int *)(iVar2 + 8 + uVar11) + iVar12);
        uVar30 = *(undefined8 *)(*(int *)(iVar2 + 4 + uVar11) + iVar12);
        uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar23 >> 0x18) << 0x30) >> 0x28);
        sVar34 = (short)uVar19 + (ushort)(byte)uVar23;
        sVar36 = (short)((ulonglong)uVar19 >> 0x10) + (ushort)(byte)((ulonglong)uVar23 >> 8);
        sVar33 = (short)((ulonglong)uVar19 >> 0x20) +
                 (short)CONCAT21(uVar6,(char)((ulonglong)uVar23 >> 0x10));
        sVar35 = (short)((ulonglong)uVar19 >> 0x30) + (uVar6 >> 8);
        sVar37 = (short)uVar22 + (ushort)(byte)((ulonglong)uVar23 >> 0x20);
        sVar38 = (short)((ulonglong)uVar22 >> 0x10) + (ushort)(byte)((ulonglong)uVar23 >> 0x28);
        sVar39 = (short)((ulonglong)uVar22 >> 0x20) + (ushort)(byte)((ulonglong)uVar23 >> 0x30);
        sVar40 = (short)((ulonglong)uVar22 >> 0x30) + (ushort)(byte)((ulonglong)uVar23 >> 0x38);
        uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar30 >> 0x18) << 0x30) >> 0x28);
        uVar10 = CONCAT21(uVar6,(char)((ulonglong)uVar30 >> 0x10));
        uVar17 = (ushort)uVar30;
        uVar9 = CONCAT43((int)(((uint7)uVar10 << 0x20) >> 0x18),
                         CONCAT12((char)((ulonglong)uVar30 >> 8),uVar17));
        uVar18 = (ushort)(byte)((ulonglong)uVar30 >> 0x20);
        bVar24 = (byte)((ulonglong)uVar30 >> 0x28);
        bVar25 = (byte)((ulonglong)uVar30 >> 0x30);
        bVar26 = (byte)((ulonglong)uVar30 >> 0x38);
        uVar22 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar9 >> 0x10),uVar17) & 0xffffffffffff00ff
                       ,3);
        uVar23 = psllw((ulonglong)
                       CONCAT16(bVar26,(uint6)CONCAT14(bVar25,(uint)CONCAT12(bVar24,uVar18))),3);
        uVar19 = *(undefined8 *)(*(int *)(iVar2 + uVar11) + iVar12);
        uVar30 = psraw(CONCAT26((sVar35 + (uVar6 >> 8)) - (short)((ulonglong)uVar22 >> 0x30),
                                CONCAT24((sVar33 + (short)uVar10) -
                                         (short)((ulonglong)uVar22 >> 0x20),
                                         CONCAT22((sVar36 + (short)((uint7)uVar9 >> 0x10)) -
                                                  (short)((ulonglong)uVar22 >> 0x10),
                                                  (sVar34 + (uVar17 & 0xff)) - (short)uVar22))),3);
        uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28);
        iVar3 = *(int *)((int)auStack_38 + iVar5 + 0x18);
        iVar4 = *(int *)(iVar2 + 0x10 + iVar3);
        uVar23 = psraw(CONCAT26((sVar40 + (ushort)bVar26) - (short)((ulonglong)uVar23 >> 0x30),
                                CONCAT24((sVar39 + (ushort)bVar25) -
                                         (short)((ulonglong)uVar23 >> 0x20),
                                         CONCAT22((sVar38 + (ushort)bVar24) -
                                                  (short)((ulonglong)uVar23 >> 0x10),
                                                  (sVar37 + uVar18) - (short)uVar23))),3);
        uVar22 = *(undefined8 *)(*(int *)(iVar2 + 0x14 + iVar3) + iVar12);
        uVar31 = packsswb(uVar30,uVar23);
        uVar23 = *(undefined8 *)(iVar4 + iVar12);
        uVar17 = (ushort)(((uint7)(byte)((ulonglong)uVar22 >> 0x18) << 0x30) >> 0x28);
        sVar34 = (sVar34 - (ushort)(byte)uVar19) + ((ushort)uVar22 & 0xff);
        sVar36 = (sVar36 - (ushort)(byte)((ulonglong)uVar19 >> 8)) +
                 (ushort)(byte)((ulonglong)uVar22 >> 8);
        sVar33 = (sVar33 - (short)CONCAT21(uVar6,(char)((ulonglong)uVar19 >> 0x10))) +
                 (short)CONCAT21(uVar17,(char)((ulonglong)uVar22 >> 0x10));
        sVar35 = (sVar35 - (uVar6 >> 8)) + (uVar17 >> 8);
        sVar37 = (sVar37 - (ushort)(byte)((ulonglong)uVar19 >> 0x20)) +
                 (ushort)(byte)((ulonglong)uVar22 >> 0x20);
        sVar38 = (sVar38 - (ushort)(byte)((ulonglong)uVar19 >> 0x28)) +
                 (ushort)(byte)((ulonglong)uVar22 >> 0x28);
        sVar39 = (sVar39 - (ushort)(byte)((ulonglong)uVar19 >> 0x30)) +
                 (ushort)(byte)((ulonglong)uVar22 >> 0x30);
        sVar40 = (sVar40 - (ushort)(byte)((ulonglong)uVar19 >> 0x38)) +
                 (ushort)(byte)((ulonglong)uVar22 >> 0x38);
        uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar23 >> 0x18) << 0x30) >> 0x28);
        uVar10 = CONCAT21(uVar6,(char)((ulonglong)uVar23 >> 0x10));
        uVar17 = (ushort)uVar23;
        uVar19 = CONCAT53((int5)(((ulonglong)uVar10 << 0x20) >> 0x18),
                          CONCAT12((char)((ulonglong)uVar23 >> 8),uVar17));
        uVar18 = (ushort)(byte)((ulonglong)uVar23 >> 0x20);
        bVar24 = (byte)((ulonglong)uVar23 >> 0x28);
        bVar25 = (byte)((ulonglong)uVar23 >> 0x30);
        bVar26 = (byte)((ulonglong)uVar23 >> 0x38);
        uVar23 = psllw(CONCAT62((int6)((ulonglong)uVar19 >> 0x10),uVar17) & 0xffffffffffff00ff,3);
        uVar30 = psllw((ulonglong)
                       CONCAT16(bVar26,(uint6)CONCAT14(bVar25,(uint)CONCAT12(bVar24,uVar18))),3);
        uVar22 = *(undefined8 *)(*(int *)(iVar2 + 0xc + iVar3) + iVar12);
        uVar23 = psraw(CONCAT26((sVar35 + (uVar6 >> 8)) - (short)((ulonglong)uVar23 >> 0x30),
                                CONCAT24((sVar33 + (short)uVar10) -
                                         (short)((ulonglong)uVar23 >> 0x20),
                                         CONCAT22((sVar36 + (short)((ulonglong)uVar19 >> 0x10)) -
                                                  (short)((ulonglong)uVar23 >> 0x10),
                                                  (sVar34 + (uVar17 & 0xff)) - (short)uVar23))),3);
        uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar22 >> 0x18) << 0x30) >> 0x28);
        uVar19 = CONCAT26(sVar35 - (uVar6 >> 8),
                          CONCAT24(sVar33 - (short)CONCAT21(uVar6,(char)((ulonglong)uVar22 >> 0x10))
                                   ,CONCAT22(sVar36 - (ushort)(byte)((ulonglong)uVar22 >> 8),
                                             sVar34 - ((ushort)uVar22 & 0xff))));
        uVar30 = psraw(CONCAT26((sVar40 + (ushort)bVar26) - (short)((ulonglong)uVar30 >> 0x30),
                                CONCAT24((sVar39 + (ushort)bVar25) -
                                         (short)((ulonglong)uVar30 >> 0x20),
                                         CONCAT22((sVar38 + (ushort)bVar24) -
                                                  (short)((ulonglong)uVar30 >> 0x10),
                                                  (sVar37 + uVar18) - (short)uVar30))),3);
        uVar22 = CONCAT26(sVar40 - (ushort)(byte)((ulonglong)uVar22 >> 0x38),
                          CONCAT24(sVar39 - (ushort)(byte)((ulonglong)uVar22 >> 0x30),
                                   CONCAT22(sVar38 - (ushort)(byte)((ulonglong)uVar22 >> 0x28),
                                            sVar37 - (ushort)(byte)((ulonglong)uVar22 >> 0x20))));
        uVar28 = packsswb(uVar23,uVar30);
        uVar27 = CONCAT17(-((longlong)uVar31 < 0),
                          CONCAT16(-((char)(uVar31 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar31 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar31 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar31 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar31 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar31 >> 8) < '\0'),-((char)uVar31 < '\0'))))))))
        ;
        uVar29 = CONCAT17(-((longlong)uVar28 < 0),
                          CONCAT16(-((char)(uVar28 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar28 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar28 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar28 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar28 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar28 >> 8) < '\0'),-((char)uVar28 < '\0'))))))))
        ;
        uVar32 = psubsb(uVar31 ^ uVar27,uVar27);
        uVar23 = psubusb(uVar32,*(undefined8 *)((int)&uStack_40 + iVar5));
        uVar30 = psubsb(uVar28 ^ uVar29,uVar29);
        uVar28 = psubusb(uVar32,CONCAT17((char)((ulonglong)uVar23 >> 0x38) * '\x02',
                                         CONCAT16((char)((ulonglong)uVar23 >> 0x30) * '\x02',
                                                  CONCAT15((char)((ulonglong)uVar23 >> 0x28) *
                                                           '\x02',CONCAT14((char)((ulonglong)uVar23
                                                                                 >> 0x20) * '\x02',
                                                                           CONCAT13((char)((
                                                  ulonglong)uVar23 >> 0x18) * '\x02',
                                                  CONCAT12((char)((ulonglong)uVar23 >> 0x10) *
                                                           '\x02',CONCAT11((char)((ulonglong)uVar23
                                                                                 >> 8) * '\x02',
                                                                           (char)uVar23 * '\x02'))))
                                                  ))));
        uVar43 = psubusb(uVar30,*(undefined8 *)((int)&uStack_40 + iVar5));
        uVar32 = psubsb(uVar28 ^ uVar27,uVar27);
        uVar23 = *(undefined8 *)
                  (*(int *)(iVar2 + 4 + *(int *)((int)auStack_38 + iVar5 + 0x18)) + iVar12);
        uVar27 = psubusb(uVar30,CONCAT17((char)((ulonglong)uVar43 >> 0x38) * '\x02',
                                         CONCAT16((char)((ulonglong)uVar43 >> 0x30) * '\x02',
                                                  CONCAT15((char)((ulonglong)uVar43 >> 0x28) *
                                                           '\x02',CONCAT14((char)((ulonglong)uVar43
                                                                                 >> 0x20) * '\x02',
                                                                           CONCAT13((char)((
                                                  ulonglong)uVar43 >> 0x18) * '\x02',
                                                  CONCAT12((char)((ulonglong)uVar43 >> 0x10) *
                                                           '\x02',CONCAT11((char)((ulonglong)uVar43
                                                                                 >> 8) * '\x02',
                                                                           (char)uVar43 * '\x02'))))
                                                  ))));
        *puVar14 = CONCAT17((char)((ulonglong)uVar32 >> 0x38) + (char)((ulonglong)uVar23 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar32 >> 0x30) +
                                     (char)((ulonglong)uVar23 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar32 >> 0x28) +
                                              (char)((ulonglong)uVar23 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar32 >> 0x20) +
                                                       (char)((ulonglong)uVar23 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar32 >> 0x18) +
                                                                (char)((ulonglong)uVar23 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar32 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar23 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar32 >> 8
                                                                                        ) + (char)((
                                                  ulonglong)uVar23 >> 8),(char)uVar32 + (char)uVar23
                                                  )))))));
        uVar30 = psubsb(uVar27 ^ uVar29,uVar29);
        uVar23 = *(undefined8 *)(iVar4 + iVar12);
        iVar3 = *(int *)((int)auStack_38 + iVar5 + 0x18);
        *(ulonglong *)((int)puVar14 + param_5) =
             CONCAT17((char)((ulonglong)uVar30 >> 0x38) + (char)((ulonglong)uVar23 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar30 >> 0x30) + (char)((ulonglong)uVar23 >> 0x30)
                               ,CONCAT15((char)((ulonglong)uVar30 >> 0x28) +
                                         (char)((ulonglong)uVar23 >> 0x28),
                                         CONCAT14((char)((ulonglong)uVar30 >> 0x20) +
                                                  (char)((ulonglong)uVar23 >> 0x20),
                                                  CONCAT13((char)((ulonglong)uVar30 >> 0x18) +
                                                           (char)((ulonglong)uVar23 >> 0x18),
                                                           CONCAT12((char)((ulonglong)uVar30 >> 0x10
                                                                          ) + (char)((ulonglong)
                                                                                     uVar23 >> 0x10)
                                                                    ,CONCAT11((char)((ulonglong)
                                                                                     uVar30 >> 8) +
                                                                              (char)((ulonglong)
                                                                                     uVar23 >> 8),
                                                                              (char)uVar30 +
                                                                              (char)uVar23)))))));
        puVar14 = (undefined8 *)((int)puVar14 + param_5 * 2);
        uVar11 = iVar3 + 0x18;
        if ((uVar11 == 0x30) &&
           (iVar3 = *(int *)((int)aiStack_5c + iVar5 + 0x18),
           *(int *)((int)auStack_38 + iVar5 + 0x1c) != iVar3)) {
          uVar13 = param_7[(*(uint *)((int)auStack_38 + iVar5) >> 4) + iVar3] & 0x1f;
          if ((param_7[(*(uint *)((int)auStack_38 + iVar5) >> 4) + iVar3] & 0x1f) == 0) {
            uVar13 = *(uint *)((int)auStack_38 + iVar5 + 0x24);
          }
          *(uint *)((int)auStack_38 + iVar5 + 0x24) = uVar13;
          uVar11 = 0x30;
          *(undefined8 *)((int)&uStack_40 + iVar5) =
               *(undefined8 *)(&DAT_63829490 + (&DAT_6382f260)[uVar13] * 8);
        }
      } while (uVar11 < 0x60);
      *(undefined8 *)(&stack0xfffffff0 + iVar12 * 2 + iVar5) = uVar19;
      *(undefined8 *)(&stack0xfffffff8 + iVar12 * 2 + iVar5) = uVar22;
      iVar12 = iVar12 + 8;
      puVar14 = puVar14 + (1 - param_5);
    } while (iVar12 < (int)param_3);
    iVar2 = *(int *)((int)aiStack_5c + iVar5 + 0xc);
    param_2 = param_2 + param_5;
    iVar12 = iVar2 + -8;
    if (iVar12 == 0 || iVar2 < 8) {
      iVar12 = 0;
      *(int *)((int)auStack_38 + iVar5) = -*(int *)((int)auStack_38 + iVar5 + 4);
      puVar14 = (undefined8 *)(*(int *)((int)auStack_38 + iVar5 + 0x10) + param_5 * 4);
      do {
        uVar11 = *(int *)((int)auStack_38 + iVar5) + *(int *)((int)auStack_38 + iVar5 + 4);
        iVar2 = *(int *)((int)aiStack_5c + iVar5 + 0x18);
        *(uint *)((int)auStack_38 + iVar5) = uVar11;
        uVar19 = *(undefined8 *)(&stack0xfffffff0 + iVar12 * 2 + iVar5);
        uVar13 = param_7[(uVar11 >> 4) + iVar2] & 0x1f;
        if ((param_7[(uVar11 >> 4) + iVar2] & 0x1f) == 0) {
          uVar13 = *(uint *)((int)auStack_38 + iVar5 + 0x24);
        }
        *(uint *)((int)auStack_38 + iVar5 + 0x24) = uVar13;
        uVar22 = *(undefined8 *)(&stack0xfffffff8 + iVar12 * 2 + iVar5);
        iVar2 = *(int *)((int)aiStack_5c + iVar5 + 8);
        *(undefined8 *)((int)&uStack_40 + iVar5) =
             *(undefined8 *)(&DAT_63829490 + (&DAT_6382f260)[uVar13] * 8);
        uVar23 = *(undefined8 *)((int)puVar14 + iVar2);
        uVar30 = *puVar14;
        uVar17 = (ushort)(((uint7)(byte)((ulonglong)uVar23 >> 0x18) << 0x30) >> 0x28);
        uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar30 >> 0x18) << 0x30) >> 0x28);
        uVar10 = CONCAT21(uVar6,(char)((ulonglong)uVar30 >> 0x10));
        uVar18 = (ushort)uVar30;
        uVar9 = CONCAT43((int)(((uint7)uVar10 << 0x20) >> 0x18),
                         CONCAT12((char)((ulonglong)uVar30 >> 8),uVar18));
        uVar21 = (ushort)(byte)((ulonglong)uVar30 >> 0x20);
        bVar24 = (byte)((ulonglong)uVar30 >> 0x28);
        bVar25 = (byte)((ulonglong)uVar30 >> 0x30);
        bVar26 = (byte)((ulonglong)uVar30 >> 0x38);
        uVar30 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar9 >> 0x10),uVar18) & 0xffffffffffff00ff
                       ,3);
        uVar32 = psllw((ulonglong)
                       CONCAT16(bVar26,(uint6)CONCAT14(bVar25,(uint)CONCAT12(bVar24,uVar21))),3);
        uVar19 = psraw(CONCAT26(((short)((ulonglong)uVar19 >> 0x30) + (uVar17 >> 8) + (uVar6 >> 8))
                                - (short)((ulonglong)uVar30 >> 0x30),
                                CONCAT24(((short)((ulonglong)uVar19 >> 0x20) +
                                          (short)CONCAT21(uVar17,(char)((ulonglong)uVar23 >> 0x10))
                                         + (short)uVar10) - (short)((ulonglong)uVar30 >> 0x20),
                                         CONCAT22(((short)((ulonglong)uVar19 >> 0x10) +
                                                   (ushort)(byte)((ulonglong)uVar23 >> 8) +
                                                  (short)((uint7)uVar9 >> 0x10)) -
                                                  (short)((ulonglong)uVar30 >> 0x10),
                                                  ((short)uVar19 + (ushort)(byte)uVar23 +
                                                  (uVar18 & 0xff)) - (short)uVar30))),3);
        uVar22 = psraw(CONCAT26(((short)((ulonglong)uVar22 >> 0x30) +
                                 (ushort)(byte)((ulonglong)uVar23 >> 0x38) + (ushort)bVar26) -
                                (short)((ulonglong)uVar32 >> 0x30),
                                CONCAT24(((short)((ulonglong)uVar22 >> 0x20) +
                                          (ushort)(byte)((ulonglong)uVar23 >> 0x30) + (ushort)bVar25
                                         ) - (short)((ulonglong)uVar32 >> 0x20),
                                         CONCAT22(((short)((ulonglong)uVar22 >> 0x10) +
                                                   (ushort)(byte)((ulonglong)uVar23 >> 0x28) +
                                                  (ushort)bVar24) -
                                                  (short)((ulonglong)uVar32 >> 0x10),
                                                  ((short)uVar22 +
                                                   (ushort)(byte)((ulonglong)uVar23 >> 0x20) +
                                                  uVar21) - (short)uVar32))),3);
        uVar28 = packsswb(uVar19,uVar22);
        uVar27 = CONCAT17(-((longlong)uVar28 < 0),
                          CONCAT16(-((char)(uVar28 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar28 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar28 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar28 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar28 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar28 >> 8) < '\0'),-((char)uVar28 < '\0'))))))))
        ;
        uVar19 = *(undefined8 *)((int)puVar14 + param_5 * 2);
        uVar22 = *(undefined8 *)((int)puVar14 + iVar2);
        uVar30 = psubsb(uVar28 ^ uVar27,uVar27);
        *(undefined8 *)((int)param_2 + param_5) = *(undefined8 *)((int)puVar14 + param_5);
        uVar23 = psubusb(uVar30,*(undefined8 *)((int)&uStack_40 + iVar5));
        *(undefined8 *)((int)param_2 + param_5 * 2) = uVar19;
        *(undefined8 *)((int)param_2 + iVar2) = uVar22;
        uVar28 = psubusb(uVar30,CONCAT17((char)((ulonglong)uVar23 >> 0x38) * '\x02',
                                         CONCAT16((char)((ulonglong)uVar23 >> 0x30) * '\x02',
                                                  CONCAT15((char)((ulonglong)uVar23 >> 0x28) *
                                                           '\x02',CONCAT14((char)((ulonglong)uVar23
                                                                                 >> 0x20) * '\x02',
                                                                           CONCAT13((char)((
                                                  ulonglong)uVar23 >> 0x18) * '\x02',
                                                  CONCAT12((char)((ulonglong)uVar23 >> 0x10) *
                                                           '\x02',CONCAT11((char)((ulonglong)uVar23
                                                                                 >> 8) * '\x02',
                                                                           (char)uVar23 * '\x02'))))
                                                  ))));
        uVar22 = psubsb(uVar28 ^ uVar27,uVar27);
        uVar19 = *puVar14;
        iVar12 = iVar12 + 8;
        puVar14 = puVar14 + 1;
        *param_2 = CONCAT17((char)((ulonglong)uVar22 >> 0x38) + (char)((ulonglong)uVar19 >> 0x38),
                            CONCAT16((char)((ulonglong)uVar22 >> 0x30) +
                                     (char)((ulonglong)uVar19 >> 0x30),
                                     CONCAT15((char)((ulonglong)uVar22 >> 0x28) +
                                              (char)((ulonglong)uVar19 >> 0x28),
                                              CONCAT14((char)((ulonglong)uVar22 >> 0x20) +
                                                       (char)((ulonglong)uVar19 >> 0x20),
                                                       CONCAT13((char)((ulonglong)uVar22 >> 0x18) +
                                                                (char)((ulonglong)uVar19 >> 0x18),
                                                                CONCAT12((char)((ulonglong)uVar22 >>
                                                                               0x10) +
                                                                         (char)((ulonglong)uVar19 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulonglong)
                                                                                         uVar22 >> 8
                                                                                        ) + (char)((
                                                  ulonglong)uVar19 >> 8),(char)uVar22 + (char)uVar19
                                                  )))))));
        param_2 = param_2 + 1;
      } while (iVar12 < (int)param_3);
      return;
    }
  } while( true );
}


