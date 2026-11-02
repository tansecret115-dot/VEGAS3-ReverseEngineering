/* Module: erv23260.dll
   Function: FUN_63827c6f
   Address: 63827c6f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_63827c6f(undefined4 param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint in_EAX;
  byte *pbVar7;
  uint uVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int unaff_EBP;
  uint uVar18;
  int iVar19;
  ulonglong *puVar20;
  undefined8 *puVar21;
  bool bVar22;
  ulonglong uVar23;
  longlong lVar24;
  char cVar25;
  char cVar29;
  char cVar31;
  char cVar33;
  char cVar35;
  char cVar37;
  char cVar39;
  ulonglong uVar26;
  ulonglong uVar27;
  char cVar30;
  char cVar32;
  char cVar34;
  char cVar36;
  char cVar38;
  char cVar40;
  char cVar41;
  ulonglong uVar28;
  undefined8 uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  int in_stack_00000260;
  undefined1 local_80 [28];
  uint auStack_64 [15];
  int aiStack_28 [4];
  ulonglong local_18 [3];
  
  uVar12 = (in_EAX >> 8 & 0xff) - 0x60;
  iVar13 = (int)uVar12 >> 1;
  iVar19 = *(int *)((int)local_18 + unaff_EBP * 8 + -0xc) + -0x30 + param_2 * 8;
  if ((uVar12 & 1) == 0) {
    iVar19 = iVar19 + iVar13 * unaff_EBP;
    uVar12 = (in_EAX & 0xff) >> 1;
    if ((in_EAX & 1) == 0) {
      puVar20 = (ulonglong *)(iVar19 + uVar12);
      uVar12 = unaff_EBP >> 2;
      goto LAB_63827e0d;
    }
    pcVar11 = (char *)(iVar19 + uVar12);
    puVar20 = local_18;
    do {
      uVar42 = *(undefined8 *)(pcVar11 + 1);
      cVar25 = *pcVar11;
      uVar3 = *(undefined8 *)(pcVar11 + unaff_EBP + 1);
      cVar32 = (char)((ulonglong)uVar42 >> 8);
      cVar34 = (char)((ulonglong)uVar42 >> 0x10);
      cVar36 = (char)((ulonglong)uVar42 >> 0x18);
      cVar38 = (char)((ulonglong)uVar42 >> 0x20);
      cVar40 = (char)((ulonglong)uVar42 >> 0x28);
      cVar41 = (char)((ulonglong)uVar42 >> 0x30);
      cVar30 = pcVar11[unaff_EBP];
      cVar29 = (char)((ulonglong)uVar3 >> 8);
      cVar31 = (char)((ulonglong)uVar3 >> 0x10);
      cVar33 = (char)((ulonglong)uVar3 >> 0x18);
      cVar35 = (char)((ulonglong)uVar3 >> 0x20);
      cVar37 = (char)((ulonglong)uVar3 >> 0x28);
      cVar39 = (char)((ulonglong)uVar3 >> 0x30);
      puVar9 = puVar20 + 4;
      pcVar11 = pcVar11 + unaff_EBP * 2;
      *puVar9 = (CONCAT17((char)((ulonglong)uVar42 >> 0x38) + cVar41 + '\x01',
                          CONCAT16(cVar41 + cVar40 + '\x01',
                                   CONCAT15(cVar40 + cVar38 + '\x01',
                                            CONCAT14(cVar38 + cVar36 + '\x01',
                                                     CONCAT13(cVar36 + cVar34 + '\x01',
                                                              CONCAT12(cVar34 + cVar32 + '\x01',
                                                                       CONCAT11(cVar32 + (char)
                                                  uVar42 + '\x01',(char)uVar42 + '\x01' + cVar25))))
                                           ))) & 0xfefefefefefefefe) >> 1;
      puVar20[6] = (CONCAT17((char)((ulonglong)uVar3 >> 0x38) + cVar39 + '\x01',
                             CONCAT16(cVar39 + cVar37 + '\x01',
                                      CONCAT15(cVar37 + cVar35 + '\x01',
                                               CONCAT14(cVar35 + cVar33 + '\x01',
                                                        CONCAT13(cVar33 + cVar31 + '\x01',
                                                                 CONCAT12(cVar31 + cVar29 + '\x01',
                                                                          CONCAT11(cVar29 + (char)
                                                  uVar3 + '\x01',(char)uVar3 + '\x01' + cVar30))))))
                            ) & 0xfefefefefefefefe) >> 1;
      puVar20 = puVar9;
    } while (((uint)puVar9 & 0x60) != 0);
  }
  else {
    iVar19 = iVar19 + iVar13 * unaff_EBP;
    uVar12 = (in_EAX & 0xff) >> 1;
    if ((in_EAX & 1) == 0) {
      puVar21 = (undefined8 *)(iVar19 + uVar12);
      puVar20 = local_18;
      uVar42 = *puVar21;
      do {
        uVar3 = *(undefined8 *)((int)puVar21 + unaff_EBP);
        uVar4 = *(undefined8 *)((int)puVar21 + unaff_EBP * 2);
        cVar25 = (char)uVar3 + '\x01';
        cVar30 = (char)((ulonglong)uVar3 >> 8) + '\x01';
        cVar32 = (char)((ulonglong)uVar3 >> 0x10) + '\x01';
        cVar34 = (char)((ulonglong)uVar3 >> 0x18) + '\x01';
        cVar36 = (char)((ulonglong)uVar3 >> 0x20) + '\x01';
        cVar38 = (char)((ulonglong)uVar3 >> 0x28) + '\x01';
        cVar40 = (char)((ulonglong)uVar3 >> 0x30) + '\x01';
        cVar41 = (char)((ulonglong)uVar3 >> 0x38) + '\x01';
        puVar9 = puVar20 + 4;
        puVar21 = (undefined8 *)((int)puVar21 + unaff_EBP * 2);
        *puVar9 = (CONCAT17((char)((ulonglong)uVar42 >> 0x38) + cVar41,
                            CONCAT16((char)((ulonglong)uVar42 >> 0x30) + cVar40,
                                     CONCAT15((char)((ulonglong)uVar42 >> 0x28) + cVar38,
                                              CONCAT14((char)((ulonglong)uVar42 >> 0x20) + cVar36,
                                                       CONCAT13((char)((ulonglong)uVar42 >> 0x18) +
                                                                cVar34,CONCAT12((char)((ulonglong)
                                                                                       uVar42 >>
                                                                                      0x10) + cVar32
                                                                                ,CONCAT11((char)((
                                                  ulonglong)uVar42 >> 8) + cVar30,
                                                  (char)uVar42 + cVar25))))))) & 0xfefefefefefefefe)
                  >> 1;
        puVar20[6] = (CONCAT17(cVar41 + (char)((ulonglong)uVar4 >> 0x38),
                               CONCAT16(cVar40 + (char)((ulonglong)uVar4 >> 0x30),
                                        CONCAT15(cVar38 + (char)((ulonglong)uVar4 >> 0x28),
                                                 CONCAT14(cVar36 + (char)((ulonglong)uVar4 >> 0x20),
                                                          CONCAT13(cVar34 + (char)((ulonglong)uVar4
                                                                                  >> 0x18),
                                                                   CONCAT12(cVar32 + (char)((
                                                  ulonglong)uVar4 >> 0x10),
                                                  CONCAT11(cVar30 + (char)((ulonglong)uVar4 >> 8),
                                                           cVar25 + (char)uVar4))))))) &
                     0xfefefefefefefefe) >> 1;
        puVar20 = puVar9;
        uVar42 = uVar4;
      } while (((uint)puVar9 & 0x60) != 0);
    }
    else {
      pcVar11 = (char *)(iVar19 + uVar12);
      uVar42 = *(undefined8 *)(pcVar11 + 1);
      cVar25 = *pcVar11;
      cVar30 = (char)((ulonglong)uVar42 >> 8);
      cVar32 = (char)((ulonglong)uVar42 >> 0x10);
      cVar34 = (char)((ulonglong)uVar42 >> 0x18);
      cVar36 = (char)((ulonglong)uVar42 >> 0x20);
      cVar38 = (char)((ulonglong)uVar42 >> 0x28);
      cVar40 = (char)((ulonglong)uVar42 >> 0x30);
      uVar27 = CONCAT17(cVar40 - (-1 - (char)((ulonglong)uVar42 >> 0x38)),
                        CONCAT16(cVar38 - (-1 - cVar40),
                                 CONCAT15(cVar36 - (-1 - cVar38),
                                          CONCAT14(cVar34 - (-1 - cVar36),
                                                   CONCAT13(cVar32 - (-1 - cVar34),
                                                            CONCAT12(cVar30 - (-1 - cVar32),
                                                                     CONCAT11((char)uVar42 -
                                                                              (-1 - cVar30),
                                                                              -(-1 - (char)uVar42)))
                                                           )))));
      puVar20 = local_18;
      do {
        uVar42 = *(undefined8 *)(pcVar11 + unaff_EBP + 1);
        cVar30 = (char)((ulonglong)uVar42 >> 8);
        cVar32 = (char)((ulonglong)uVar42 >> 0x10);
        cVar34 = (char)((ulonglong)uVar42 >> 0x18);
        cVar36 = (char)((ulonglong)uVar42 >> 0x20);
        cVar38 = (char)((ulonglong)uVar42 >> 0x28);
        cVar40 = (char)((ulonglong)uVar42 >> 0x30);
        uVar23 = CONCAT17((char)(uVar27 >> 0x38),
                          CONCAT16((char)(uVar27 >> 0x30),
                                   CONCAT15((char)(uVar27 >> 0x28),
                                            CONCAT14((char)(uVar27 >> 0x20),
                                                     CONCAT13((char)(uVar27 >> 0x18),
                                                              CONCAT12((char)(uVar27 >> 0x10),
                                                                       CONCAT11((char)(uVar27 >> 8),
                                                                                cVar25 + (char)
                                                  uVar27)))))));
        uVar3 = *(undefined8 *)(pcVar11 + unaff_EBP * 2 + 1);
        cVar25 = (char)((ulonglong)uVar3 >> 8);
        cVar41 = (char)((ulonglong)uVar3 >> 0x10);
        cVar29 = (char)((ulonglong)uVar3 >> 0x18);
        cVar31 = (char)((ulonglong)uVar3 >> 0x20);
        cVar33 = (char)((ulonglong)uVar3 >> 0x28);
        cVar35 = (char)((ulonglong)uVar3 >> 0x30);
        uVar43 = CONCAT17(cVar40 - (-1 - (char)((ulonglong)uVar42 >> 0x38)),
                          CONCAT16(cVar38 - (-1 - cVar40),
                                   CONCAT15(cVar36 - (-1 - cVar38),
                                            CONCAT14(cVar34 - (-1 - cVar36),
                                                     CONCAT13(cVar32 - (-1 - cVar34),
                                                              CONCAT12(cVar30 - (-1 - cVar32),
                                                                       CONCAT11((char)uVar42 -
                                                                                (-1 - cVar30),
                                                                                pcVar11[unaff_EBP] -
                                                                                (-1 - (char)uVar42))
                                                                      ))))));
        uVar27 = CONCAT17(cVar35 - (-1 - (char)((ulonglong)uVar3 >> 0x38)),
                          CONCAT16(cVar33 - (-1 - cVar35),
                                   CONCAT15(cVar31 - (-1 - cVar33),
                                            CONCAT14(cVar29 - (-1 - cVar31),
                                                     CONCAT13(cVar41 - (-1 - cVar29),
                                                              CONCAT12(cVar25 - (-1 - cVar41),
                                                                       CONCAT11((char)uVar3 -
                                                                                (-1 - cVar25),
                                                                                pcVar11[unaff_EBP *
                                                                                        2] -
                                                                                (-1 - (char)uVar3)))
                                                             )))));
        uVar28 = uVar43 & 0x101010101010101;
        uVar45 = uVar28 & uVar23;
        uVar23 = uVar23 & 0xfefefefefefefefe;
        uVar28 = uVar28 & uVar27;
        uVar43 = uVar43 & 0xfefefefefefefefe;
        uVar26 = uVar43 >> 1;
        bVar5 = (byte)(uVar43 >> 0x38);
        uVar44 = (uVar27 & 0xfefefefefefefefe) >> 1;
        puVar9 = puVar20 + 4;
        pcVar11 = pcVar11 + unaff_EBP * 2;
        *puVar9 = (CONCAT17((char)(uVar45 >> 0x38) + (byte)(uVar23 >> 0x39) + (bVar5 >> 1),
                            CONCAT16((char)(uVar45 >> 0x30) +
                                     (char)(ushort)(uVar23 >> 0x31) + (char)(uVar26 >> 0x30),
                                     CONCAT15((char)(uVar45 >> 0x28) +
                                              (char)(uint3)(uVar23 >> 0x29) + (char)(uVar26 >> 0x28)
                                              ,CONCAT14((char)(uVar45 >> 0x20) +
                                                        (char)(uint)(uVar23 >> 0x21) +
                                                        (char)(uVar26 >> 0x20),
                                                        CONCAT13((char)(uVar45 >> 0x18) +
                                                                 (char)(uint5)(uVar23 >> 0x19) +
                                                                 (char)(uVar26 >> 0x18),
                                                                 CONCAT12((char)(uVar45 >> 0x10) +
                                                                          (char)(uint6)(uVar23 >>
                                                                                       0x11) +
                                                                          (char)(uVar26 >> 0x10),
                                                                          CONCAT11((char)(uVar45 >>
                                                                                         8) +
                                                                                   (char)(uint7)(
                                                  uVar23 >> 9) + (char)(uVar26 >> 8),
                                                  (char)uVar45 + (char)(uVar23 >> 1) + (char)uVar26)
                                                  )))))) & 0xfefefefefefefefe) >> 1;
        cVar25 = '\0';
        puVar20[6] = (CONCAT17((char)(uVar28 >> 0x38) +
                               (bVar5 >> 1) + (byte)((uVar27 & 0xfefefefefefefefe) >> 0x39),
                               CONCAT16((char)(uVar28 >> 0x30) +
                                        (char)(ushort)(uVar43 >> 0x31) + (char)(uVar44 >> 0x30),
                                        CONCAT15((char)(uVar28 >> 0x28) +
                                                 (char)(uint3)(uVar43 >> 0x29) +
                                                 (char)(uVar44 >> 0x28),
                                                 CONCAT14((char)(uVar28 >> 0x20) +
                                                          (char)(uint)(uVar43 >> 0x21) +
                                                          (char)(uVar44 >> 0x20),
                                                          CONCAT13((char)(uVar28 >> 0x18) +
                                                                   (char)(uint5)(uVar43 >> 0x19) +
                                                                   (char)(uVar44 >> 0x18),
                                                                   CONCAT12((char)(uVar28 >> 0x10) +
                                                                            (char)(uint6)(uVar43 >>
                                                                                         0x11) +
                                                                            (char)(uVar44 >> 0x10),
                                                                            CONCAT11((char)(uVar28 
                                                  >> 8) + (char)(uint7)(uVar43 >> 9) +
                                                          (char)(uVar44 >> 8),
                                                  (char)uVar28 + (char)uVar26 + (char)uVar44)))))))
                     & 0xfefefefefefefefe) >> 1;
        puVar20 = puVar9;
      } while (((uint)puVar9 & 0x60) != 0);
    }
  }
  uVar12 = 4;
  puVar20 = (ulonglong *)&stack0x00000008;
LAB_63827e0d:
  uVar18 = (uint)*(byte *)(param_2 * 8 + 6);
  uVar14 = (uint)*(byte *)(param_2 * 8 + 7);
  uVar8 = (uint)(byte)(&PTR_DAT_63837b60)[(param_2 >> 0x1d) * 2][uVar18];
  uVar1 = uVar14 - 0x60;
  uVar14 = (uint)(byte)(&PTR_DAT_63837b64)[(param_2 >> 0x1d) * 2][uVar14];
  if ((auStack_64[unaff_EBP + 1] & 0xc00) != 0) {
    uVar8 = 9;
    uVar14 = 0xfffffff8;
  }
  uVar18 = uVar18 * 2 + (uint)((uVar1 & 1) != 0);
  pbVar15 = (byte *)(uVar14 + 0x638379d8 + uVar8 * 0x10);
  puVar21 = (undefined8 *)(aiStack_28[unaff_EBP * 2] + param_2 * 8);
  iVar19 = ((int)uVar1 >> 1) * in_stack_00000260 + -0x30 + param_2 * 8;
  if ((uVar18 & 1) == 0) {
    iVar19 = (int)local_18[in_stack_00000260 + -1] + iVar19;
    if ((uVar18 >> 1 & 1) == 0) {
      puVar9 = (ulonglong *)(iVar19 + (uVar18 >> 2));
      puVar17 = local_80;
      do {
        bVar5 = *pbVar15;
        puVar16 = puVar17 + 0x20;
        pbVar7 = pbVar15 + 1;
        pbVar15 = pbVar15 + 2;
        uVar27 = *puVar20;
        uVar23 = *puVar9 & *(ulonglong *)(bVar5 + 0x63837ad8);
        uVar43 = ~*(ulonglong *)(bVar5 + 0x63837ad8) & uVar27;
        uVar23 = CONCAT17((char)(uVar23 >> 0x38) + (char)(uVar27 >> 0x38) + (char)(uVar43 >> 0x38),
                          CONCAT16((char)(uVar23 >> 0x30) + (char)(uVar27 >> 0x30) +
                                   (char)(uVar43 >> 0x30),
                                   CONCAT15((char)(uVar23 >> 0x28) + (char)(uVar27 >> 0x28) +
                                            (char)(uVar43 >> 0x28),
                                            CONCAT14((char)(uVar23 >> 0x20) + (char)(uVar27 >> 0x20)
                                                     + (char)(uVar43 >> 0x20),
                                                     CONCAT13((char)(uVar23 >> 0x18) +
                                                              (char)(uVar27 >> 0x18) +
                                                              (char)(uVar43 >> 0x18),
                                                              CONCAT12((char)(uVar23 >> 0x10) +
                                                                       (char)(uVar27 >> 0x10) +
                                                                       (char)(uVar43 >> 0x10),
                                                                       CONCAT11((char)(uVar23 >> 8)
                                                                                + (char)(uVar27 >> 8
                                                                                        ) +
                                                                                (char)(uVar43 >> 8),
                                                                                (char)uVar23 +
                                                                                (char)uVar27 +
                                                                                (char)uVar43)))))))
                 & 0xfefefefefefefefe;
        uVar27 = *(ulonglong *)((int)puVar20 + uVar12 * 4);
        uVar26 = *(ulonglong *)((int)puVar9 + in_stack_00000260) &
                 *(ulonglong *)(*pbVar7 + 0x63837ad8);
        uVar44 = ~*(ulonglong *)(*pbVar7 + 0x63837ad8) & uVar27;
        uVar42 = *puVar21;
        uVar43 = uVar23 >> 1;
        uVar3 = *(undefined8 *)((int)puVar21 + in_stack_00000260);
        uVar27 = CONCAT17((char)(uVar26 >> 0x38) + (char)(uVar27 >> 0x38) + (char)(uVar44 >> 0x38),
                          CONCAT16((char)(uVar26 >> 0x30) + (char)(uVar27 >> 0x30) +
                                   (char)(uVar44 >> 0x30),
                                   CONCAT15((char)(uVar26 >> 0x28) + (char)(uVar27 >> 0x28) +
                                            (char)(uVar44 >> 0x28),
                                            CONCAT14((char)(uVar26 >> 0x20) + (char)(uVar27 >> 0x20)
                                                     + (char)(uVar44 >> 0x20),
                                                     CONCAT13((char)(uVar26 >> 0x18) +
                                                              (char)(uVar27 >> 0x18) +
                                                              (char)(uVar44 >> 0x18),
                                                              CONCAT12((char)(uVar26 >> 0x10) +
                                                                       (char)(uVar27 >> 0x10) +
                                                                       (char)(uVar44 >> 0x10),
                                                                       CONCAT11((char)(uVar26 >> 8)
                                                                                + (char)(uVar27 >> 8
                                                                                        ) +
                                                                                (char)(uVar44 >> 8),
                                                                                (char)uVar26 +
                                                                                (char)uVar27 +
                                                                                (char)uVar44)))))))
                 & 0xfefefefefefefefe;
        puVar21 = (undefined8 *)((int)puVar21 + in_stack_00000260 * 2);
        uVar26 = uVar27 >> 1;
        *(ulonglong *)(puVar17 + 0x88) =
             CONCAT17((char)((ulonglong)uVar42 >> 0x38) - (byte)(uVar23 >> 0x39),
                      CONCAT16((char)((ulonglong)uVar42 >> 0x30) - (char)(uVar43 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar42 >> 0x28) - (char)(uVar43 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar42 >> 0x20) -
                                                 (char)(uVar43 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar42 >> 0x18) -
                                                          (char)(uVar43 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar42 >> 0x10)
                                                                   - (char)(uVar43 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar42
                                                                                  >> 8) -
                                                                            (char)(uVar43 >> 8),
                                                                            (char)uVar42 -
                                                                            (char)uVar43)))))));
        puVar9 = (ulonglong *)((int)puVar9 + in_stack_00000260 * 2);
        puVar20 = puVar20 + uVar12;
        *(ulonglong *)(puVar17 + 0x98) =
             CONCAT17((char)((ulonglong)uVar3 >> 0x38) - (byte)(uVar27 >> 0x39),
                      CONCAT16((char)((ulonglong)uVar3 >> 0x30) - (char)(uVar26 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar3 >> 0x28) - (char)(uVar26 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar3 >> 0x20) -
                                                 (char)(uVar26 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar3 >> 0x18) -
                                                          (char)(uVar26 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar3 >> 0x10)
                                                                   - (char)(uVar26 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar3
                                                                                  >> 8) -
                                                                            (char)(uVar26 >> 8),
                                                                            (char)uVar3 -
                                                                            (char)uVar26)))))));
        bVar22 = uVar12 < 0xc0000000;
        uVar12 = uVar12 + 0x40000000;
        puVar17 = puVar17 + 0x20;
      } while (bVar22);
    }
    else {
      pcVar11 = (char *)(iVar19 + (uVar18 >> 2));
      cVar25 = *pcVar11;
      puVar17 = local_80;
      do {
        uVar42 = *(undefined8 *)(pcVar11 + 1);
        cVar30 = (char)((ulonglong)uVar42 >> 8);
        cVar32 = (char)((ulonglong)uVar42 >> 0x10);
        cVar34 = (char)((ulonglong)uVar42 >> 0x18);
        cVar36 = (char)((ulonglong)uVar42 >> 0x20);
        cVar38 = (char)((ulonglong)uVar42 >> 0x28);
        cVar40 = (char)((ulonglong)uVar42 >> 0x30);
        pcVar2 = pcVar11 + in_stack_00000260;
        uVar3 = *(undefined8 *)(pcVar11 + in_stack_00000260 + 1);
        cVar41 = (char)((ulonglong)uVar3 >> 8);
        cVar29 = (char)((ulonglong)uVar3 >> 0x10);
        cVar31 = (char)((ulonglong)uVar3 >> 0x18);
        cVar33 = (char)((ulonglong)uVar3 >> 0x20);
        cVar35 = (char)((ulonglong)uVar3 >> 0x28);
        cVar37 = (char)((ulonglong)uVar3 >> 0x30);
        uVar27 = *puVar20;
        puVar16 = puVar17 + 0x20;
        pcVar11 = pcVar11 + in_stack_00000260 * 2;
        uVar43 = (CONCAT17(cVar40 - (-1 - (char)((ulonglong)uVar42 >> 0x38)),
                           CONCAT16(cVar38 - (-1 - cVar40),
                                    CONCAT15(cVar36 - (-1 - cVar38),
                                             CONCAT14(cVar34 - (-1 - cVar36),
                                                      CONCAT13(cVar32 - (-1 - cVar34),
                                                               CONCAT12(cVar30 - (-1 - cVar32),
                                                                        CONCAT11((char)uVar42 -
                                                                                 (-1 - cVar30),
                                                                                 -((-1 - (char)
                                                  uVar42) - cVar25)))))))) & 0xfefefefefefefefe) >>
                 1 & *(ulonglong *)(*pbVar15 + 0x63837ad8);
        uVar26 = ~*(ulonglong *)(*pbVar15 + 0x63837ad8) & uVar27;
        uVar23 = *(ulonglong *)((int)puVar20 + uVar12 * 4);
        uVar27 = CONCAT17((char)(uVar43 >> 0x38) + (char)(uVar27 >> 0x38) + (char)(uVar26 >> 0x38),
                          CONCAT16((char)(uVar43 >> 0x30) + (char)(uVar27 >> 0x30) +
                                   (char)(uVar26 >> 0x30),
                                   CONCAT15((char)(uVar43 >> 0x28) + (char)(uVar27 >> 0x28) +
                                            (char)(uVar26 >> 0x28),
                                            CONCAT14((char)(uVar43 >> 0x20) + (char)(uVar27 >> 0x20)
                                                     + (char)(uVar26 >> 0x20),
                                                     CONCAT13((char)(uVar43 >> 0x18) +
                                                              (char)(uVar27 >> 0x18) +
                                                              (char)(uVar26 >> 0x18),
                                                              CONCAT12((char)(uVar43 >> 0x10) +
                                                                       (char)(uVar27 >> 0x10) +
                                                                       (char)(uVar26 >> 0x10),
                                                                       CONCAT11((char)(uVar43 >> 8)
                                                                                + (char)(uVar27 >> 8
                                                                                        ) +
                                                                                (char)(uVar26 >> 8),
                                                                                (char)uVar43 +
                                                                                (char)uVar27 +
                                                                                (char)uVar26)))))))
                 & 0xfefefefefefefefe;
        cVar25 = *pcVar11;
        uVar26 = (CONCAT17(cVar37 - (-1 - (char)((ulonglong)uVar3 >> 0x38)),
                           CONCAT16(cVar35 - (-1 - cVar37),
                                    CONCAT15(cVar33 - (-1 - cVar35),
                                             CONCAT14(cVar31 - (-1 - cVar33),
                                                      CONCAT13(cVar29 - (-1 - cVar31),
                                                               CONCAT12(cVar41 - (-1 - cVar29),
                                                                        CONCAT11((char)uVar3 -
                                                                                 (-1 - cVar41),
                                                                                 -((-1 - (char)uVar3
                                                                                   ) - *pcVar2))))))
                                   )) & 0xfefefefefefefefe) >> 1 &
                 *(ulonglong *)(pbVar15[1] + 0x63837ad8);
        uVar44 = ~*(ulonglong *)(pbVar15[1] + 0x63837ad8) & uVar23;
        uVar42 = *puVar21;
        uVar43 = uVar27 >> 1;
        uVar3 = *(undefined8 *)((int)puVar21 + in_stack_00000260);
        uVar23 = CONCAT17((char)(uVar26 >> 0x38) + (char)(uVar23 >> 0x38) + (char)(uVar44 >> 0x38),
                          CONCAT16((char)(uVar26 >> 0x30) + (char)(uVar23 >> 0x30) +
                                   (char)(uVar44 >> 0x30),
                                   CONCAT15((char)(uVar26 >> 0x28) + (char)(uVar23 >> 0x28) +
                                            (char)(uVar44 >> 0x28),
                                            CONCAT14((char)(uVar26 >> 0x20) + (char)(uVar23 >> 0x20)
                                                     + (char)(uVar44 >> 0x20),
                                                     CONCAT13((char)(uVar26 >> 0x18) +
                                                              (char)(uVar23 >> 0x18) +
                                                              (char)(uVar44 >> 0x18),
                                                              CONCAT12((char)(uVar26 >> 0x10) +
                                                                       (char)(uVar23 >> 0x10) +
                                                                       (char)(uVar44 >> 0x10),
                                                                       CONCAT11((char)(uVar26 >> 8)
                                                                                + (char)(uVar23 >> 8
                                                                                        ) +
                                                                                (char)(uVar44 >> 8),
                                                                                (char)uVar26 +
                                                                                (char)uVar23 +
                                                                                (char)uVar44)))))))
                 & 0xfefefefefefefefe;
        puVar21 = (undefined8 *)((int)puVar21 + in_stack_00000260 * 2);
        uVar26 = uVar23 >> 1;
        *(ulonglong *)(puVar17 + 0x88) =
             CONCAT17((char)((ulonglong)uVar42 >> 0x38) - (byte)(uVar27 >> 0x39),
                      CONCAT16((char)((ulonglong)uVar42 >> 0x30) - (char)(uVar43 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar42 >> 0x28) - (char)(uVar43 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar42 >> 0x20) -
                                                 (char)(uVar43 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar42 >> 0x18) -
                                                          (char)(uVar43 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar42 >> 0x10)
                                                                   - (char)(uVar43 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar42
                                                                                  >> 8) -
                                                                            (char)(uVar43 >> 8),
                                                                            (char)uVar42 -
                                                                            (char)uVar43)))))));
        pbVar15 = pbVar15 + 2;
        puVar20 = puVar20 + uVar12;
        *(ulonglong *)(puVar17 + 0x98) =
             CONCAT17((char)((ulonglong)uVar3 >> 0x38) - (byte)(uVar23 >> 0x39),
                      CONCAT16((char)((ulonglong)uVar3 >> 0x30) - (char)(uVar26 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar3 >> 0x28) - (char)(uVar26 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar3 >> 0x20) -
                                                 (char)(uVar26 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar3 >> 0x18) -
                                                          (char)(uVar26 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar3 >> 0x10)
                                                                   - (char)(uVar26 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar3
                                                                                  >> 8) -
                                                                            (char)(uVar26 >> 8),
                                                                            (char)uVar3 -
                                                                            (char)uVar26)))))));
        bVar22 = uVar12 < 0xc0000000;
        uVar12 = uVar12 + 0x40000000;
        puVar17 = puVar17 + 0x20;
      } while (bVar22);
    }
  }
  else {
    iVar19 = (int)local_18[in_stack_00000260 + -1] + iVar19;
    if ((uVar18 >> 1 & 1) == 0) {
      puVar10 = (undefined8 *)(iVar19 + (uVar18 >> 2));
      puVar17 = local_80;
      uVar42 = *puVar10;
      do {
        uVar3 = *(undefined8 *)((int)puVar10 + in_stack_00000260);
        cVar25 = (char)uVar3 + '\x01';
        cVar30 = (char)((ulonglong)uVar3 >> 8) + '\x01';
        cVar32 = (char)((ulonglong)uVar3 >> 0x10) + '\x01';
        cVar34 = (char)((ulonglong)uVar3 >> 0x18) + '\x01';
        cVar36 = (char)((ulonglong)uVar3 >> 0x20) + '\x01';
        cVar38 = (char)((ulonglong)uVar3 >> 0x28) + '\x01';
        cVar40 = (char)((ulonglong)uVar3 >> 0x30) + '\x01';
        cVar41 = (char)((ulonglong)uVar3 >> 0x38) + '\x01';
        uVar3 = *(undefined8 *)((int)puVar10 + in_stack_00000260 * 2);
        pbVar7 = pbVar15 + 1;
        uVar27 = *puVar20;
        uVar23 = (CONCAT17((char)((ulonglong)uVar42 >> 0x38) + cVar41,
                           CONCAT16((char)((ulonglong)uVar42 >> 0x30) + cVar40,
                                    CONCAT15((char)((ulonglong)uVar42 >> 0x28) + cVar38,
                                             CONCAT14((char)((ulonglong)uVar42 >> 0x20) + cVar36,
                                                      CONCAT13((char)((ulonglong)uVar42 >> 0x18) +
                                                               cVar34,CONCAT12((char)((ulonglong)
                                                                                      uVar42 >> 0x10
                                                                                     ) + cVar32,
                                                                               CONCAT11((char)((
                                                  ulonglong)uVar42 >> 8) + cVar30,
                                                  (char)uVar42 + cVar25))))))) & 0xfefefefefefefefe)
                 >> 1 & *(ulonglong *)(*pbVar15 + 0x63837ad8);
        uVar43 = ~*(ulonglong *)(*pbVar15 + 0x63837ad8) & uVar27;
        pbVar15 = pbVar15 + 2;
        uVar23 = CONCAT17((char)(uVar23 >> 0x38) + (char)(uVar27 >> 0x38) + (char)(uVar43 >> 0x38),
                          CONCAT16((char)(uVar23 >> 0x30) + (char)(uVar27 >> 0x30) +
                                   (char)(uVar43 >> 0x30),
                                   CONCAT15((char)(uVar23 >> 0x28) + (char)(uVar27 >> 0x28) +
                                            (char)(uVar43 >> 0x28),
                                            CONCAT14((char)(uVar23 >> 0x20) + (char)(uVar27 >> 0x20)
                                                     + (char)(uVar43 >> 0x20),
                                                     CONCAT13((char)(uVar23 >> 0x18) +
                                                              (char)(uVar27 >> 0x18) +
                                                              (char)(uVar43 >> 0x18),
                                                              CONCAT12((char)(uVar23 >> 0x10) +
                                                                       (char)(uVar27 >> 0x10) +
                                                                       (char)(uVar43 >> 0x10),
                                                                       CONCAT11((char)(uVar23 >> 8)
                                                                                + (char)(uVar27 >> 8
                                                                                        ) +
                                                                                (char)(uVar43 >> 8),
                                                                                (char)uVar23 +
                                                                                (char)uVar27 +
                                                                                (char)uVar43)))))))
                 & 0xfefefefefefefefe;
        uVar27 = *(ulonglong *)((int)puVar20 + uVar12 * 4);
        uVar26 = (CONCAT17(cVar41 + (char)((ulonglong)uVar3 >> 0x38),
                           CONCAT16(cVar40 + (char)((ulonglong)uVar3 >> 0x30),
                                    CONCAT15(cVar38 + (char)((ulonglong)uVar3 >> 0x28),
                                             CONCAT14(cVar36 + (char)((ulonglong)uVar3 >> 0x20),
                                                      CONCAT13(cVar34 + (char)((ulonglong)uVar3 >>
                                                                              0x18),
                                                               CONCAT12(cVar32 + (char)((ulonglong)
                                                                                        uVar3 >> 
                                                  0x10),CONCAT11(cVar30 + (char)((ulonglong)uVar3 >>
                                                                                8),
                                                                 cVar25 + (char)uVar3))))))) &
                 0xfefefefefefefefe) >> 1 & *(ulonglong *)(*pbVar7 + 0x63837ad8);
        uVar44 = ~*(ulonglong *)(*pbVar7 + 0x63837ad8) & uVar27;
        uVar42 = *puVar21;
        uVar43 = uVar23 >> 1;
        puVar16 = puVar17 + 0x20;
        uVar4 = *(undefined8 *)((int)puVar21 + in_stack_00000260);
        puVar10 = (undefined8 *)((int)puVar10 + in_stack_00000260 * 2);
        uVar27 = CONCAT17((char)(uVar26 >> 0x38) + (char)(uVar27 >> 0x38) + (char)(uVar44 >> 0x38),
                          CONCAT16((char)(uVar26 >> 0x30) + (char)(uVar27 >> 0x30) +
                                   (char)(uVar44 >> 0x30),
                                   CONCAT15((char)(uVar26 >> 0x28) + (char)(uVar27 >> 0x28) +
                                            (char)(uVar44 >> 0x28),
                                            CONCAT14((char)(uVar26 >> 0x20) + (char)(uVar27 >> 0x20)
                                                     + (char)(uVar44 >> 0x20),
                                                     CONCAT13((char)(uVar26 >> 0x18) +
                                                              (char)(uVar27 >> 0x18) +
                                                              (char)(uVar44 >> 0x18),
                                                              CONCAT12((char)(uVar26 >> 0x10) +
                                                                       (char)(uVar27 >> 0x10) +
                                                                       (char)(uVar44 >> 0x10),
                                                                       CONCAT11((char)(uVar26 >> 8)
                                                                                + (char)(uVar27 >> 8
                                                                                        ) +
                                                                                (char)(uVar44 >> 8),
                                                                                (char)uVar26 +
                                                                                (char)uVar27 +
                                                                                (char)uVar44)))))))
                 & 0xfefefefefefefefe;
        puVar21 = (undefined8 *)((int)puVar21 + in_stack_00000260 * 2);
        uVar26 = uVar27 >> 1;
        *(ulonglong *)(puVar17 + 0x88) =
             CONCAT17((char)((ulonglong)uVar42 >> 0x38) - (byte)(uVar23 >> 0x39),
                      CONCAT16((char)((ulonglong)uVar42 >> 0x30) - (char)(uVar43 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar42 >> 0x28) - (char)(uVar43 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar42 >> 0x20) -
                                                 (char)(uVar43 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar42 >> 0x18) -
                                                          (char)(uVar43 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar42 >> 0x10)
                                                                   - (char)(uVar43 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar42
                                                                                  >> 8) -
                                                                            (char)(uVar43 >> 8),
                                                                            (char)uVar42 -
                                                                            (char)uVar43)))))));
        puVar20 = puVar20 + uVar12;
        *(ulonglong *)(puVar17 + 0x98) =
             CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (byte)(uVar27 >> 0x39),
                      CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)(uVar26 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar4 >> 0x28) - (char)(uVar26 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                                 (char)(uVar26 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                          (char)(uVar26 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar4 >> 0x10)
                                                                   - (char)(uVar26 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar4
                                                                                  >> 8) -
                                                                            (char)(uVar26 >> 8),
                                                                            (char)uVar4 -
                                                                            (char)uVar26)))))));
        bVar22 = uVar12 < 0xc0000000;
        uVar12 = uVar12 + 0x40000000;
        puVar17 = puVar17 + 0x20;
        uVar42 = uVar3;
      } while (bVar22);
    }
    else {
      pcVar11 = (char *)(iVar19 + (uVar18 >> 2));
      lVar24 = *(longlong *)(pcVar11 + 1);
      uVar27 = CONCAT17(-(-1 - (char)((ulonglong)lVar24 >> 0x38)),
                        CONCAT16(-(-1 - (char)((ulonglong)lVar24 >> 0x30)),
                                 CONCAT15(-(-1 - (char)((ulonglong)lVar24 >> 0x28)),
                                          CONCAT14(-(-1 - (char)((ulonglong)lVar24 >> 0x20)),
                                                   CONCAT13(-(-1 - (char)((ulonglong)lVar24 >> 0x18)
                                                             ),CONCAT12(-(-1 - (char)((ulonglong)
                                                                                      lVar24 >> 0x10
                                                                                     )),
                                                                        CONCAT11(-(-1 - (char)((
                                                  ulonglong)lVar24 >> 8)),
                                                  *pcVar11 - (-1 - (char)lVar24))))))));
      lVar24 = lVar24 << 8;
      puVar17 = local_80;
      do {
        uVar42 = *(undefined8 *)(pcVar11 + in_stack_00000260 + 1);
        uVar43 = CONCAT17((char)((ulonglong)lVar24 >> 0x38) + (char)(uVar27 >> 0x38),
                          CONCAT16((char)((ulonglong)lVar24 >> 0x30) + (char)(uVar27 >> 0x30),
                                   CONCAT15((char)((ulonglong)lVar24 >> 0x28) +
                                            (char)(uVar27 >> 0x28),
                                            CONCAT14((char)((ulonglong)lVar24 >> 0x20) +
                                                     (char)(uVar27 >> 0x20),
                                                     CONCAT13((char)((ulonglong)lVar24 >> 0x18) +
                                                              (char)(uVar27 >> 0x18),
                                                              CONCAT12((char)((ulonglong)lVar24 >>
                                                                             0x10) +
                                                                       (char)(uVar27 >> 0x10),
                                                                       CONCAT11((char)((ulonglong)
                                                                                       lVar24 >> 8)
                                                                                + (char)(uVar27 >> 8
                                                                                        ),
                                                                                (char)uVar27)))))));
        cVar25 = (char)((ulonglong)uVar42 >> 8);
        cVar30 = (char)((ulonglong)uVar42 >> 0x10);
        cVar32 = (char)((ulonglong)uVar42 >> 0x18);
        cVar34 = (char)((ulonglong)uVar42 >> 0x20);
        cVar36 = (char)((ulonglong)uVar42 >> 0x28);
        cVar38 = (char)((ulonglong)uVar42 >> 0x30);
        uVar3 = *(undefined8 *)(pcVar11 + in_stack_00000260 * 2 + 1);
        uVar44 = CONCAT17(cVar38 - (-1 - (char)((ulonglong)uVar42 >> 0x38)),
                          CONCAT16(cVar36 - (-1 - cVar38),
                                   CONCAT15(cVar34 - (-1 - cVar36),
                                            CONCAT14(cVar32 - (-1 - cVar34),
                                                     CONCAT13(cVar30 - (-1 - cVar32),
                                                              CONCAT12(cVar25 - (-1 - cVar30),
                                                                       CONCAT11((char)uVar42 -
                                                                                (-1 - cVar25),
                                                                                -((-1 - (char)uVar42
                                                                                  ) - pcVar11[
                                                  in_stack_00000260]))))))));
        cVar25 = (char)((ulonglong)uVar3 >> 8);
        cVar30 = (char)((ulonglong)uVar3 >> 0x10);
        cVar32 = (char)((ulonglong)uVar3 >> 0x18);
        cVar34 = (char)((ulonglong)uVar3 >> 0x20);
        cVar36 = (char)((ulonglong)uVar3 >> 0x28);
        cVar38 = (char)((ulonglong)uVar3 >> 0x30);
        uVar27 = CONCAT17(cVar38 - (-1 - (char)((ulonglong)uVar3 >> 0x38)),
                          CONCAT16(cVar36 - (-1 - cVar38),
                                   CONCAT15(cVar34 - (-1 - cVar36),
                                            CONCAT14(cVar32 - (-1 - cVar34),
                                                     CONCAT13(cVar30 - (-1 - cVar32),
                                                              CONCAT12(cVar25 - (-1 - cVar30),
                                                                       CONCAT11((char)uVar3 -
                                                                                (-1 - cVar25),
                                                                                -((-1 - (char)uVar3)
                                                                                 - pcVar11[
                                                  in_stack_00000260 * 2]))))))));
        uVar47 = uVar44 & 0x101010101010101;
        puVar16 = puVar17 + 0x20;
        uVar26 = uVar47 & uVar43;
        uVar47 = uVar47 & uVar27;
        uVar43 = uVar43 & 0xfefefefefefefefe;
        uVar44 = uVar44 & 0xfefefefefefefefe;
        uVar28 = uVar44 >> 1;
        bVar5 = (byte)(uVar44 >> 0x38);
        uVar45 = (uVar27 & 0xfefefefefefefefe) >> 1;
        uVar23 = *puVar20;
        uVar26 = (CONCAT17((byte)(uVar43 >> 0x39) + (bVar5 >> 1) + (char)(uVar26 >> 0x38),
                           CONCAT16((char)(ushort)(uVar43 >> 0x31) + (char)(uVar28 >> 0x30) +
                                    (char)(uVar26 >> 0x30),
                                    CONCAT15((char)(uint3)(uVar43 >> 0x29) + (char)(uVar28 >> 0x28)
                                             + (char)(uVar26 >> 0x28),
                                             CONCAT14((char)(uint)(uVar43 >> 0x21) +
                                                      (char)(uVar28 >> 0x20) +
                                                      (char)(uVar26 >> 0x20),
                                                      CONCAT13((char)(uint5)(uVar43 >> 0x19) +
                                                               (char)(uVar28 >> 0x18) +
                                                               (char)(uVar26 >> 0x18),
                                                               CONCAT12((char)(uint6)(uVar43 >> 0x11
                                                                                     ) +
                                                                        (char)(uVar28 >> 0x10) +
                                                                        (char)(uVar26 >> 0x10),
                                                                        CONCAT11((char)(uint7)(
                                                  uVar43 >> 9) + (char)(uVar28 >> 8) +
                                                  (char)(uVar26 >> 8),
                                                  (char)(uVar43 >> 1) + (char)uVar28 + (char)uVar26)
                                                  )))))) & 0xfefefefefefefefe) >> 1 &
                 *(ulonglong *)(*pbVar15 + 0x63837ad8);
        uVar46 = ~*(ulonglong *)(*pbVar15 + 0x63837ad8) & uVar23;
        uVar43 = *(ulonglong *)((int)puVar20 + uVar12 * 4);
        uVar23 = CONCAT17((char)(uVar26 >> 0x38) + (char)(uVar23 >> 0x38) + (char)(uVar46 >> 0x38),
                          CONCAT16((char)(uVar26 >> 0x30) + (char)(uVar23 >> 0x30) +
                                   (char)(uVar46 >> 0x30),
                                   CONCAT15((char)(uVar26 >> 0x28) + (char)(uVar23 >> 0x28) +
                                            (char)(uVar46 >> 0x28),
                                            CONCAT14((char)(uVar26 >> 0x20) + (char)(uVar23 >> 0x20)
                                                     + (char)(uVar46 >> 0x20),
                                                     CONCAT13((char)(uVar26 >> 0x18) +
                                                              (char)(uVar23 >> 0x18) +
                                                              (char)(uVar46 >> 0x18),
                                                              CONCAT12((char)(uVar26 >> 0x10) +
                                                                       (char)(uVar23 >> 0x10) +
                                                                       (char)(uVar46 >> 0x10),
                                                                       CONCAT11((char)(uVar26 >> 8)
                                                                                + (char)(uVar23 >> 8
                                                                                        ) +
                                                                                (char)(uVar46 >> 8),
                                                                                (char)uVar26 +
                                                                                (char)uVar23 +
                                                                                (char)uVar46)))))))
                 & 0xfefefefefefefefe;
        uVar44 = (CONCAT17((bVar5 >> 1) + (byte)((uVar27 & 0xfefefefefefefefe) >> 0x39) +
                           (char)(uVar47 >> 0x38),
                           CONCAT16((char)(ushort)(uVar44 >> 0x31) + (char)(uVar45 >> 0x30) +
                                    (char)(uVar47 >> 0x30),
                                    CONCAT15((char)(uint3)(uVar44 >> 0x29) + (char)(uVar45 >> 0x28)
                                             + (char)(uVar47 >> 0x28),
                                             CONCAT14((char)(uint)(uVar44 >> 0x21) +
                                                      (char)(uVar45 >> 0x20) +
                                                      (char)(uVar47 >> 0x20),
                                                      CONCAT13((char)(uint5)(uVar44 >> 0x19) +
                                                               (char)(uVar45 >> 0x18) +
                                                               (char)(uVar47 >> 0x18),
                                                               CONCAT12((char)(uint6)(uVar44 >> 0x11
                                                                                     ) +
                                                                        (char)(uVar45 >> 0x10) +
                                                                        (char)(uVar47 >> 0x10),
                                                                        CONCAT11((char)(uint7)(
                                                  uVar44 >> 9) + (char)(uVar45 >> 8) +
                                                  (char)(uVar47 >> 8),
                                                  (char)uVar28 + (char)uVar45 + (char)uVar47)))))))
                 & 0xfefefefefefefefe) >> 1 & *(ulonglong *)(pbVar15[1] + 0x63837ad8);
        uVar28 = ~*(ulonglong *)(pbVar15[1] + 0x63837ad8) & uVar43;
        uVar42 = *puVar21;
        uVar26 = uVar23 >> 1;
        pbVar15 = pbVar15 + 2;
        pcVar11 = pcVar11 + in_stack_00000260 * 2;
        uVar3 = *(undefined8 *)((int)puVar21 + in_stack_00000260);
        uVar43 = CONCAT17((char)(uVar44 >> 0x38) + (char)(uVar43 >> 0x38) + (char)(uVar28 >> 0x38),
                          CONCAT16((char)(uVar44 >> 0x30) + (char)(uVar43 >> 0x30) +
                                   (char)(uVar28 >> 0x30),
                                   CONCAT15((char)(uVar44 >> 0x28) + (char)(uVar43 >> 0x28) +
                                            (char)(uVar28 >> 0x28),
                                            CONCAT14((char)(uVar44 >> 0x20) + (char)(uVar43 >> 0x20)
                                                     + (char)(uVar28 >> 0x20),
                                                     CONCAT13((char)(uVar44 >> 0x18) +
                                                              (char)(uVar43 >> 0x18) +
                                                              (char)(uVar28 >> 0x18),
                                                              CONCAT12((char)(uVar44 >> 0x10) +
                                                                       (char)(uVar43 >> 0x10) +
                                                                       (char)(uVar28 >> 0x10),
                                                                       CONCAT11((char)(uVar44 >> 8)
                                                                                + (char)(uVar43 >> 8
                                                                                        ) +
                                                                                (char)(uVar28 >> 8),
                                                                                (char)uVar44 +
                                                                                (char)uVar43 +
                                                                                (char)uVar28)))))))
                 & 0xfefefefefefefefe;
        puVar21 = (undefined8 *)((int)puVar21 + in_stack_00000260 * 2);
        uVar44 = uVar43 >> 1;
        *(ulonglong *)(puVar17 + 0x88) =
             CONCAT17((char)((ulonglong)uVar42 >> 0x38) - (byte)(uVar23 >> 0x39),
                      CONCAT16((char)((ulonglong)uVar42 >> 0x30) - (char)(uVar26 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar42 >> 0x28) - (char)(uVar26 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar42 >> 0x20) -
                                                 (char)(uVar26 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar42 >> 0x18) -
                                                          (char)(uVar26 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar42 >> 0x10)
                                                                   - (char)(uVar26 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar42
                                                                                  >> 8) -
                                                                            (char)(uVar26 >> 8),
                                                                            (char)uVar42 -
                                                                            (char)uVar26)))))));
        puVar20 = puVar20 + uVar12;
        bVar22 = uVar12 < 0xc0000000;
        uVar12 = uVar12 + 0x40000000;
        *(ulonglong *)(puVar17 + 0x98) =
             CONCAT17((char)((ulonglong)uVar3 >> 0x38) - (byte)(uVar43 >> 0x39),
                      CONCAT16((char)((ulonglong)uVar3 >> 0x30) - (char)(uVar44 >> 0x30),
                               CONCAT15((char)((ulonglong)uVar3 >> 0x28) - (char)(uVar44 >> 0x28),
                                        CONCAT14((char)((ulonglong)uVar3 >> 0x20) -
                                                 (char)(uVar44 >> 0x20),
                                                 CONCAT13((char)((ulonglong)uVar3 >> 0x18) -
                                                          (char)(uVar44 >> 0x18),
                                                          CONCAT12((char)((ulonglong)uVar3 >> 0x10)
                                                                   - (char)(uVar44 >> 0x10),
                                                                   CONCAT11((char)((ulonglong)uVar3
                                                                                  >> 8) -
                                                                            (char)(uVar44 >> 8),
                                                                            (char)uVar3 -
                                                                            (char)uVar44)))))));
        lVar24 = 0;
        puVar17 = puVar17 + 0x20;
      } while (bVar22);
    }
  }
  puVar17 = puVar16 + 0x50;
  *(undefined4 *)(puVar16 + -4) = 0x63826e5e;
  FUN_63827120();
  *(undefined4 *)(puVar16 + -4) = 0x63826e69;
  FUN_63826f95();
  *(undefined4 *)(puVar16 + -4) = 0x63826e78;
  puVar6 = (undefined1 *)FUN_63826f10(0x20);
  *(undefined1 **)(puVar16 + 0x1c1c6730) = puVar17;
  if (((uint)(pbVar15 + -1) & 0xc0000 & *(uint *)(puVar16 + -0x71f1cce0)) != 0) {
    *(undefined1 **)(puVar16 + -4) = puVar6;
    pbVar7 = (byte *)0x0;
    do {
      bVar5 = puVar6[3];
      pbVar7 = pbVar15 + 2 + (int)pbVar7 + bVar5;
      pcVar11 = puVar6 + 2;
      puVar6 = puVar6 + 4;
      pbVar15 = *(byte **)(&DAT_638373ac +
                          (-(uint)((byte)(&DAT_63837811)[bVar5] <
                                  (byte)(*pcVar11 + (&DAT_63837810)[bVar5])) |
                          (uint)(byte)(*pcVar11 + (&DAT_63837810)[bVar5])) * 4);
    } while (puVar6 != puVar17);
    pbVar7 = pbVar15 + -0x82 + (int)pbVar7;
    iVar19 = *(int *)(puVar16 + 0x1c1c6760) + ((int)((uint)pbVar7 & 0x3ff000) >> 0xc);
    puVar6 = *(undefined1 **)(puVar16 + -4);
    if (((*(uint *)(puVar16 + -0x71f1cce0) & 0x80000) != 0) &&
       (0xfffff07f < ((uint)pbVar7 | 0x7ffff07f))) {
      do {
        puVar6[3] = puVar6[3] | 1;
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar17);
      iVar19 = iVar19 + ((int)pbVar7 >> 0x16);
    }
    *(int *)(puVar16 + 0x1c1c6760) = iVar19;
  }
  return;
}


