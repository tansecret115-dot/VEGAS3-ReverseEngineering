/* Module: erv33260.dll
   Function: FUN_6707d980
   Address: 6707d980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall
FUN_6707d980(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined2 uVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  int iVar23;
  int iVar24;
  byte bVar25;
  byte bVar26;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined2 uVar30;
  undefined1 uVar36;
  undefined8 uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 uVar37;
  undefined2 uVar38;
  uint3 uVar39;
  uint5 uVar40;
  undefined1 uVar42;
  undefined1 uVar43;
  byte bVar44;
  ulonglong uVar41;
  undefined1 uVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar52;
  uint3 uVar48;
  undefined8 uVar49;
  ulonglong uVar50;
  undefined8 uVar51;
  uint3 uVar53;
  byte bVar56;
  byte bVar57;
  uint5 uVar58;
  undefined8 uVar54;
  undefined8 uVar55;
  byte bVar59;
  byte bVar60;
  ulonglong uVar61;
  int local_14;
  undefined8 *puVar22;
  undefined2 uVar27;
  undefined4 uVar31;
  undefined6 uVar32;
  
  iVar10 = param_2 * 3;
  local_14 = param_4;
  iVar20 = param_1;
  do {
    puVar19 = (undefined4 *)(iVar20 + 4);
    iVar20 = param_3 + -4;
    do {
      if (*param_5 != 0 || param_5[1] != 0) {
        uVar31 = *(undefined4 *)((int)puVar19 + param_2 + -4);
        uVar36 = (undefined1)((uint)uVar31 >> 0x18);
        bVar25 = (byte)((uint)puVar19[-1] >> 0x18);
        uVar30 = CONCAT11(uVar36,bVar25);
        bVar26 = (byte)*puVar19;
        uVar37 = (undefined1)*(undefined4 *)((int)puVar19 + param_2);
        uVar27 = CONCAT11(uVar37,bVar26);
        uVar2 = *(undefined4 *)((int)puVar19 + param_2 * 2 + -4);
        uVar3 = *(undefined4 *)((int)puVar19 + param_2 * 2);
        uVar4 = *(undefined4 *)((int)puVar19 + iVar10 + -4);
        bVar56 = (byte)((uint)uVar4 >> 0x18);
        uVar42 = (undefined1)((uint)uVar2 >> 0x18);
        uVar45 = (undefined1)uVar3;
        bVar59 = (byte)*(undefined4 *)((int)puVar19 + iVar10);
        uVar17 = CONCAT22(CONCAT11(bVar56,uVar42),uVar30);
        uVar28 = CONCAT22(CONCAT11(bVar59,uVar45),uVar27);
        puVar1 = puVar19 + param_2;
        uVar5 = *(undefined4 *)((int)puVar1 + param_2 + -4);
        uVar43 = (undefined1)((uint)uVar5 >> 0x18);
        uVar18 = CONCAT11(uVar43,(char)((uint)puVar1[-1] >> 0x18));
        uVar52 = (undefined1)((uint)*(undefined4 *)((int)puVar1 + param_2) >> 8);
        uVar46 = (undefined1)*(undefined4 *)((int)puVar1 + param_2);
        uVar38 = CONCAT11(uVar46,(char)*puVar1);
        uVar6 = *(undefined4 *)((int)puVar1 + param_2 * 2 + -4);
        uVar7 = *(undefined4 *)((int)puVar1 + param_2 * 2);
        uVar8 = *(undefined4 *)((int)puVar1 + iVar10 + -4);
        bVar44 = (byte)((uint)uVar8 >> 0x18);
        bVar57 = (byte)((uint)uVar6 >> 0x18);
        bVar47 = (byte)*(undefined4 *)((int)puVar1 + iVar10);
        bVar60 = (byte)uVar7;
        uVar51 = CONCAT44(CONCAT22(CONCAT11(bVar44,bVar57),uVar18),uVar17);
        uVar29 = CONCAT44(CONCAT22(CONCAT11(bVar47,bVar60),uVar38),uVar28);
        uVar12 = (ushort)(((uint7)(byte)((uint)uVar4 >> 0x10) << 0x30) >> 0x28);
        uVar11 = (ushort)(((uint7)(byte)((uint)*(undefined4 *)((int)puVar19 + iVar10) >> 8) << 0x30)
                         >> 0x28);
        uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar56 << 0x30) >> 0x28),
                                                 CONCAT14(uVar42,uVar17)) >> 0x20),uVar17) >> 0x18);
        uVar58 = (uint5)uVar15 & 0xffff00ff00;
        uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)bVar59 << 0x30) >> 0x28),
                                                 CONCAT14(uVar45,uVar28)) >> 0x20),uVar28) >> 0x18);
        uVar40 = (uint5)uVar16 & 0xffff00ff00;
        uVar54 = psllw(CONCAT26((short)(uVar58 >> 0x18) - (short)(uVar40 >> 0x18),
                                CONCAT24((short)(uVar58 >> 8) - (short)(uVar40 >> 8),
                                         CONCAT22(((ushort)(CONCAT43(uVar15,CONCAT12(uVar36,uVar30))
                                                           >> 0x10) & 0xff) -
                                                  ((ushort)(CONCAT43(uVar16,CONCAT12(uVar37,uVar27))
                                                           >> 0x10) & 0xff),
                                                  (ushort)bVar25 - (ushort)bVar26))),2);
        uVar33 = psraw(CONCAT26(((uVar12 >> 8) - (uVar11 >> 8)) - (short)((ulonglong)uVar54 >> 0x30)
                                ,CONCAT24(((short)CONCAT21(uVar12,(char)((uint)uVar2 >> 0x10)) -
                                          (short)CONCAT21(uVar11,(char)((uint)uVar3 >> 8))) -
                                          (short)((ulonglong)uVar54 >> 0x20),
                                          CONCAT22(((ushort)(byte)((uint)uVar31 >> 0x10) -
                                                   (ushort)(byte)((uint)*(undefined4 *)
                                                                         ((int)puVar19 + param_2) >>
                                                                 8)) -
                                                   (short)((ulonglong)uVar54 >> 0x10),
                                                   (((ushort)((uint)puVar19[-1] >> 0x10) & 0xff) -
                                                   (ushort)(byte)((uint)*puVar19 >> 8)) -
                                                   (short)uVar54))),3);
        uVar48 = CONCAT12(uVar52,CONCAT11(uVar52,(char)((uint)*puVar1 >> 8))) & 0xff00ff;
        uVar53 = CONCAT12(uVar43,uVar18) & 0xff00ff;
        uVar39 = CONCAT12(uVar46,uVar38) & 0xff00ff;
        uVar54 = psllw(CONCAT26((ushort)bVar44 - (ushort)bVar47,
                                CONCAT24((ushort)bVar57 - (ushort)bVar60,
                                         CONCAT22((ushort)(byte)(uVar53 >> 0x10) -
                                                  (ushort)(byte)(uVar39 >> 0x10),
                                                  (short)uVar53 - (short)uVar39))),2);
        uVar54 = psraw(CONCAT26(((ushort)(byte)((uint)uVar8 >> 0x10) -
                                (ushort)(byte)((uint)*(undefined4 *)((int)puVar1 + iVar10) >> 8)) -
                                (short)((ulonglong)uVar54 >> 0x30),
                                CONCAT24(((ushort)(byte)((uint)uVar6 >> 0x10) -
                                         (ushort)(byte)((uint)uVar7 >> 8)) -
                                         (short)((ulonglong)uVar54 >> 0x20),
                                         CONCAT22(((ushort)(byte)((uint)uVar5 >> 0x10) -
                                                  (ushort)(byte)(uVar48 >> 0x10)) -
                                                  (short)((ulonglong)uVar54 >> 0x10),
                                                  ((ushort)(byte)((uint)puVar1[-1] >> 0x10) -
                                                  (short)uVar48) - (short)uVar54))),3);
        uVar34 = packsswb(uVar33,uVar54);
        uVar61 = CONCAT17(-((longlong)uVar34 < 0),
                          CONCAT16(-((char)(uVar34 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar34 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar34 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar34 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar34 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar34 >> 8) < '\0'),-((char)uVar34 < '\0'))))))))
        ;
        uVar54 = psubsb(uVar34 ^ uVar61,uVar61);
        uVar33 = psubusb(uVar54,*(undefined8 *)param_5);
        uVar33 = psubusb(uVar54,uVar33);
        uVar49 = psubusb(uVar54,*(undefined8 *)param_5);
        uVar54 = psubusb(uVar54,uVar49);
        uVar41 = psubusb(uVar51,uVar33);
        uVar34 = paddusb(uVar29,uVar54);
        uVar35 = paddusb(uVar51,uVar33);
        uVar50 = psubusb(uVar29,uVar54);
        uVar35 = uVar41 & uVar61 | ~uVar61 & uVar35;
        uVar34 = uVar34 & uVar61 | ~uVar61 & uVar50;
        uVar30 = CONCAT11((char)(uVar34 >> 0x18),(char)(uVar35 >> 0x18));
        *(ushort *)((int)puVar19 + -1) = CONCAT11((char)uVar34,(char)uVar35);
        *(short *)((int)puVar19 + param_2 + -1) =
             (short)CONCAT51((int5)(uVar34 >> 8),(char)(uVar35 >> 8));
        *(short *)((int)puVar19 + param_2 * 2 + -1) =
             (short)CONCAT31(CONCAT21(uVar30,(char)(uVar34 >> 0x10)),(char)(uVar35 >> 0x10));
        *(undefined2 *)((int)puVar19 + iVar10 + -1) = uVar30;
        uVar30 = CONCAT11((char)(uVar34 >> 0x20),(char)(uVar35 >> 0x20));
        uVar31 = CONCAT13((char)(uVar34 >> 0x28),CONCAT12((char)(uVar35 >> 0x28),uVar30));
        uVar32 = CONCAT15((char)(uVar34 >> 0x30),CONCAT14((char)(uVar35 >> 0x30),uVar31));
        *(undefined2 *)((int)puVar1 + -1) = uVar30;
        *(short *)((int)puVar1 + param_2 + -1) = (short)((uint)uVar31 >> 0x10);
        *(short *)((int)puVar1 + param_2 * 2 + -1) = (short)((uint6)uVar32 >> 0x20);
        *(short *)((int)puVar1 + iVar10 + -1) =
             (short)(CONCAT17((char)(uVar34 >> 0x38),CONCAT16((char)(uVar35 >> 0x38),uVar32)) >>
                    0x30);
      }
      param_5 = param_5 + 2;
      puVar19 = puVar19 + 1;
      iVar23 = iVar20 + -4;
      bVar9 = 3 < iVar20;
      iVar20 = iVar23;
    } while (iVar23 != 0 && bVar9);
    iVar20 = (int)puVar19 + (param_2 * 8 - param_3);
    iVar23 = local_14 + -8;
    bVar9 = 7 < local_14;
    local_14 = iVar23;
  } while (iVar23 != 0 && bVar9);
  puVar21 = (undefined8 *)(param_1 + param_2 * 2);
  iVar20 = param_3;
  puVar22 = puVar21;
  iVar23 = param_4 + -4;
  do {
    do {
      if (*param_6 != 0 || param_6[1] != 0) {
        uVar54 = *puVar21;
        uVar29 = *(undefined8 *)((int)puVar21 + param_2);
        uVar33 = *(undefined8 *)((int)puVar21 + param_2 * 2);
        uVar51 = *(undefined8 *)((int)puVar21 + iVar10);
        uVar14 = (ushort)(((uint7)(byte)((ulonglong)uVar54 >> 0x18) << 0x30) >> 0x28);
        uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar51 >> 0x18) << 0x30) >> 0x28);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar29 >> 0x18) << 0x30) >> 0x28);
        uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar33 >> 0x18) << 0x30) >> 0x28);
        uVar49 = psllw(CONCAT26((uVar12 >> 8) - (uVar13 >> 8),
                                CONCAT24((short)CONCAT21(uVar12,(char)((ulonglong)uVar29 >> 0x10)) -
                                         (short)CONCAT21(uVar13,(char)((ulonglong)uVar33 >> 0x10)),
                                         CONCAT22((ushort)(byte)((ulonglong)uVar29 >> 8) -
                                                  (ushort)(byte)((ulonglong)uVar33 >> 8),
                                                  (ushort)(byte)uVar29 - ((ushort)uVar33 & 0xff)))),
                       2);
        uVar49 = psraw(CONCAT26(((uVar14 >> 8) - (uVar11 >> 8)) - (short)((ulonglong)uVar49 >> 0x30)
                                ,CONCAT24(((short)CONCAT21(uVar14,(char)((ulonglong)uVar54 >> 0x10))
                                          - (short)CONCAT21(uVar11,(char)((ulonglong)uVar51 >> 0x10)
                                                           )) - (short)((ulonglong)uVar49 >> 0x20),
                                          CONCAT22(((ushort)(byte)((ulonglong)uVar54 >> 8) -
                                                   (ushort)(byte)((ulonglong)uVar51 >> 8)) -
                                                   (short)((ulonglong)uVar49 >> 0x10),
                                                   ((ushort)(byte)uVar54 - ((ushort)uVar51 & 0xff))
                                                   - (short)uVar49))),3);
        uVar55 = psllw(CONCAT26((ushort)(byte)((ulonglong)uVar29 >> 0x38) -
                                (ushort)(byte)((ulonglong)uVar33 >> 0x38),
                                CONCAT24((ushort)(byte)((ulonglong)uVar29 >> 0x30) -
                                         (ushort)(byte)((ulonglong)uVar33 >> 0x30),
                                         CONCAT22((ushort)(byte)((ulonglong)uVar29 >> 0x28) -
                                                  (ushort)(byte)((ulonglong)uVar33 >> 0x28),
                                                  (ushort)(byte)((ulonglong)uVar29 >> 0x20) -
                                                  (ushort)(byte)((ulonglong)uVar33 >> 0x20)))),2);
        uVar54 = psraw(CONCAT26(((ushort)(byte)((ulonglong)uVar54 >> 0x38) -
                                (ushort)(byte)((ulonglong)uVar51 >> 0x38)) -
                                (short)((ulonglong)uVar55 >> 0x30),
                                CONCAT24(((ushort)(byte)((ulonglong)uVar54 >> 0x30) -
                                         (ushort)(byte)((ulonglong)uVar51 >> 0x30)) -
                                         (short)((ulonglong)uVar55 >> 0x20),
                                         CONCAT22(((ushort)(byte)((ulonglong)uVar54 >> 0x28) -
                                                  (ushort)(byte)((ulonglong)uVar51 >> 0x28)) -
                                                  (short)((ulonglong)uVar55 >> 0x10),
                                                  ((ushort)(byte)((ulonglong)uVar54 >> 0x20) -
                                                  (ushort)(byte)((ulonglong)uVar51 >> 0x20)) -
                                                  (short)uVar55))),3);
        uVar34 = packsswb(uVar49,uVar54);
        uVar61 = CONCAT17(-((longlong)uVar34 < 0),
                          CONCAT16(-((char)(uVar34 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar34 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar34 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar34 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar34 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar34 >> 8) < '\0'),-((char)uVar34 < '\0'))))))))
        ;
        uVar54 = psubsb(uVar34 ^ uVar61,uVar61);
        uVar51 = psubusb(uVar54,*(undefined8 *)param_6);
        psubusb(uVar54,uVar51);
        uVar51 = psubusb(uVar54,*(undefined8 *)param_6);
        uVar54 = psubusb(uVar54,uVar51);
        uVar34 = paddusb(uVar33,uVar54);
        uVar41 = psubusb(uVar29,uVar54);
        uVar50 = psubusb(uVar33,uVar54);
        uVar35 = paddusb(uVar29,uVar54);
        *(ulonglong *)((int)puVar21 + param_2 * 2) = uVar34 & uVar61 | ~uVar61 & uVar50;
        *(ulonglong *)((int)puVar21 + param_2) = uVar41 & uVar61 | ~uVar61 & uVar35;
      }
      param_6 = param_6 + 2;
      puVar21 = puVar21 + 1;
      iVar24 = iVar20 + -8;
      bVar9 = 7 < iVar20;
      iVar20 = iVar24;
    } while (iVar24 != 0 && bVar9);
    iVar24 = iVar23 + -4;
    puVar21 = (undefined8 *)((int)puVar22 + param_2 * 4);
    bVar9 = 3 < iVar23;
    iVar20 = param_3;
    puVar22 = puVar21;
    iVar23 = iVar24;
  } while (iVar24 != 0 && bVar9);
  return;
}


