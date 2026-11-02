/* Module: erv33260.dll
   Function: FUN_6708a500
   Address: 6708a500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6708a500(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  short sVar7;
  short sVar11;
  short sVar13;
  ulonglong uVar8;
  undefined8 uVar9;
  short sVar12;
  short sVar14;
  undefined8 uVar10;
  uint3 uVar15;
  uint3 uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  short sVar19;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined8 uVar20;
  undefined1 uVar24;
  byte bVar25;
  byte bVar26;
  uint3 uVar27;
  short sVar29;
  short sVar30;
  undefined8 uVar28;
  short sVar31;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  undefined8 uVar32;
  uint3 uVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  
  uVar3 = DAT_6718f978;
  puVar5 = (ulonglong *)(param_1 - param_2);
  uVar17 = *puVar5;
  uVar8 = (ulonglong)
          CONCAT52(CONCAT41((int)(((uint7)(byte)(uVar17 >> 0x10) << 0x20) >> 0x18),
                            (char)(uVar17 >> 8)),(ushort)(byte)uVar17) |
          (ulonglong)*(byte *)((int)puVar5 + -1) << 0x30;
  uVar9 = pshufw(uVar8,uVar8,0xc6);
  uVar8 = puVar5[1];
  uVar17 = (ulonglong)
           CONCAT14((char)(uVar17 >> 0x30),
                    (uint)CONCAT12((char)(uVar17 >> 0x28),(ushort)(byte)(uVar17 >> 0x20))) |
           (uVar17 >> 0x18 & 0xff) << 0x30;
  uVar18 = pshufw(uVar17,uVar17,0xc6);
  uVar2 = (ushort)(((uint7)(byte)(uVar8 >> 0x18) << 0x30) >> 0x28);
  bVar26 = (byte)(uVar8 >> 0x38);
  puVar6 = (undefined4 *)((int)puVar5 + -4);
  sVar7 = (short)((ulonglong)DAT_6718f990 >> 0x10);
  sVar11 = (short)((ulonglong)DAT_6718f990 >> 0x20);
  sVar30 = (short)((ulonglong)DAT_6718f990 >> 0x30);
  sVar31 = (short)((ulonglong)DAT_6718f988 >> 0x10);
  sVar29 = (short)((ulonglong)DAT_6718f988 >> 0x20);
  sVar33 = (short)((ulonglong)DAT_6718f988 >> 0x30);
  sVar22 = ((short)CONCAT21(uVar2,(char)(uVar8 >> 0x10)) - (short)((ulonglong)uVar18 >> 0x20)) *
           sVar11 + ((ushort)(byte)(uVar8 >> 0x30) - (short)((ulonglong)uVar9 >> 0x20)) * sVar29;
  sVar23 = ((uVar2 >> 8) - (short)((ulonglong)uVar18 >> 0x30)) * sVar30 +
           ((ushort)bVar26 - (short)((ulonglong)uVar9 >> 0x30)) * sVar33;
  sVar21 = ((ushort)(byte)(uVar8 >> 8) - (short)((ulonglong)uVar18 >> 0x10)) * sVar7 +
           ((ushort)(byte)(uVar8 >> 0x28) - (short)((ulonglong)uVar9 >> 0x10)) * sVar31 + sVar23;
  sVar19 = (((ushort)uVar8 & 0xff) - (short)uVar18) * (short)DAT_6718f990 +
           ((ushort)(byte)(uVar8 >> 0x20) - (short)uVar9) * (short)DAT_6718f988 + sVar22 + sVar21;
  sVar21 = sVar21 + sVar22;
  uVar24 = (undefined1)((uint)*(undefined4 *)((int)puVar6 + param_2 * 2) >> 0x18);
  uVar15 = CONCAT12(uVar24,CONCAT11(uVar24,(char)((uint)*(undefined4 *)((int)puVar6 + param_2 * 3)
                                                 >> 0x18))) & 0xff00ff;
  bVar25 = (byte)((uint)puVar6[param_2 * 4] >> 0x18);
  uVar24 = (undefined1)((uint)*(undefined4 *)((int)puVar6 + param_2 * 0xe) >> 0x18);
  puVar1 = puVar6 + param_2;
  uVar27 = CONCAT12(uVar24,CONCAT11(uVar24,(char)((uint)*(undefined4 *)((int)puVar6 + param_2 * 0xd)
                                                 >> 0x18))) & 0xff00ff;
  uVar24 = (undefined1)((uint)*(undefined4 *)((int)puVar1 + param_2 * 2) >> 0x18);
  uVar16 = CONCAT12(uVar24,CONCAT11(uVar24,(char)((uint)*(undefined4 *)((int)puVar1 + param_2 * 3)
                                                 >> 0x18))) & 0xff00ff;
  uVar24 = (undefined1)((uint)*(undefined4 *)((int)puVar6 + param_2 * 10) >> 0x18);
  uVar39 = CONCAT12(uVar24,CONCAT11(uVar24,(char)((uint)*(undefined4 *)((int)puVar6 + param_2 * 9)
                                                 >> 0x18))) & 0xff00ff;
  sVar29 = ((ushort)(byte)((uint)*(undefined4 *)((int)puVar6 + param_2 * 0xf) >> 0x18) -
           (ushort)(byte)((uint)*(undefined4 *)((int)puVar6 + param_2) >> 0x18)) * sVar29 +
           ((ushort)(byte)((uint)*(undefined4 *)((int)puVar6 + param_2 * 0xb) >> 0x18) -
           (ushort)(byte)((uint)*(undefined4 *)((int)puVar1 + param_2) >> 0x18)) * sVar11;
  sVar30 = ((ushort)bVar25 - (ushort)(byte)((uint)*puVar6 >> 0x18)) * sVar33 +
           ((ushort)(byte)((uint)puVar6[param_2 * 3] >> 0x18) -
           (ushort)(byte)((uint)*puVar1 >> 0x18)) * sVar30;
  sVar11 = ((ushort)(byte)(uVar27 >> 0x10) - (ushort)(byte)(uVar15 >> 0x10)) * sVar31 +
           ((ushort)(byte)(uVar39 >> 0x10) - (ushort)(byte)(uVar16 >> 0x10)) * sVar7 + sVar30;
  sVar7 = sVar11 + ((short)uVar27 - (short)uVar15) * (short)DAT_6718f988 +
                   ((short)uVar39 - (short)uVar16) * (short)DAT_6718f990 + sVar29;
  sVar11 = sVar29 + sVar11;
  uVar9 = psraw(CONCAT44(CONCAT22(sVar21,sVar11),CONCAT22(sVar19,sVar7)),2);
  uVar17 = (ulonglong)(((uint)bVar26 + (uint)bVar25) * 0x10);
  uVar9 = psraw(CONCAT26((short)((ulonglong)uVar9 >> 0x30) + sVar21,
                         CONCAT24((short)((ulonglong)uVar9 >> 0x20) + sVar11,
                                  CONCAT22((short)((ulonglong)uVar9 >> 0x10) + sVar19,
                                           (short)uVar9 + sVar7))),4);
  uVar20 = pshufw(CONCAT26(sVar23,CONCAT24(sVar22 + sVar23,CONCAT22(sVar21,sVar19))),uVar9,0x55);
  uVar18 = pshufw(uVar17,uVar17,0);
  uVar9 = pshufw((ulonglong)CONCAT22(sVar30,sVar29),uVar9,0);
  uVar28 = psllw(uVar9,3);
  sVar31 = (short)uVar9;
  sVar33 = (short)((ulonglong)uVar9 >> 0x10);
  sVar35 = (short)((ulonglong)uVar9 >> 0x20);
  sVar37 = (short)((ulonglong)uVar9 >> 0x30);
  sVar7 = ((short)uVar18 + (short)uVar20 * (short)DAT_6718f980) - ((short)uVar28 - sVar31);
  sVar11 = ((short)((ulonglong)uVar18 >> 0x10) +
           (short)((ulonglong)uVar20 >> 0x10) * (short)((ulonglong)DAT_6718f980 >> 0x10)) -
           ((short)((ulonglong)uVar28 >> 0x10) - sVar33);
  sVar19 = ((short)((ulonglong)uVar18 >> 0x20) +
           (short)((ulonglong)uVar20 >> 0x20) * (short)((ulonglong)DAT_6718f980 >> 0x20)) -
           ((short)((ulonglong)uVar28 >> 0x20) - sVar35);
  sVar21 = ((short)((ulonglong)uVar18 >> 0x30) +
           (short)((ulonglong)uVar20 >> 0x30) * (short)((ulonglong)DAT_6718f980 >> 0x30)) -
           ((short)((ulonglong)uVar28 >> 0x30) - sVar37);
  uVar9 = CONCAT26(sVar21,CONCAT24(sVar19,CONCAT22(sVar11,sVar7)));
  uVar18 = psllw(uVar20,2);
  sVar22 = (short)uVar18;
  sVar7 = sVar22 + sVar7;
  sVar23 = (short)((ulonglong)uVar18 >> 0x10);
  sVar11 = sVar23 + sVar11;
  sVar29 = (short)((ulonglong)uVar18 >> 0x20);
  sVar30 = (short)((ulonglong)uVar18 >> 0x30);
  sVar19 = sVar29 + sVar19;
  sVar21 = sVar30 + sVar21;
  uVar18 = CONCAT26(sVar21,CONCAT24(sVar19,CONCAT22(sVar11,sVar7)));
  sVar7 = sVar22 + sVar7;
  sVar11 = sVar23 + sVar11;
  sVar19 = sVar29 + sVar19;
  sVar21 = sVar30 + sVar21;
  uVar20 = CONCAT26(sVar21,CONCAT24(sVar19,CONCAT22(sVar11,sVar7)));
  uVar28 = CONCAT26(sVar30 + sVar21,
                    CONCAT24(sVar29 + sVar19,CONCAT22(sVar23 + sVar11,sVar22 + sVar7)));
  iVar4 = 0;
  do {
    sVar40 = (short)uVar3;
    sVar12 = (short)((ulonglong)uVar9 >> 0x10);
    sVar41 = (short)((ulonglong)uVar3 >> 0x10);
    sVar13 = (short)((ulonglong)uVar9 >> 0x20);
    sVar14 = (short)((ulonglong)uVar9 >> 0x30);
    sVar42 = (short)((ulonglong)uVar3 >> 0x20);
    sVar43 = (short)((ulonglong)uVar3 >> 0x30);
    uVar10 = psraw(CONCAT26(sVar14 + sVar43,
                            CONCAT24(sVar13 + sVar42,CONCAT22(sVar12 + sVar41,(short)uVar9 + sVar40)
                                    )),5);
    sVar34 = (short)((ulonglong)uVar18 >> 0x10);
    sVar36 = (short)((ulonglong)uVar18 >> 0x20);
    sVar38 = (short)((ulonglong)uVar18 >> 0x30);
    uVar32 = psraw(CONCAT26(sVar38 + sVar43,
                            CONCAT24(sVar36 + sVar42,
                                     CONCAT22(sVar34 + sVar41,(short)uVar18 + sVar40))),5);
    sVar7 = (short)uVar10;
    sVar11 = (short)((ulonglong)uVar10 >> 0x10);
    sVar19 = (short)((ulonglong)uVar10 >> 0x20);
    sVar21 = (short)((ulonglong)uVar10 >> 0x30);
    sVar22 = (short)uVar32;
    sVar23 = (short)((ulonglong)uVar32 >> 0x10);
    sVar29 = (short)((ulonglong)uVar32 >> 0x20);
    sVar30 = (short)((ulonglong)uVar32 >> 0x30);
    uVar9 = CONCAT26(sVar14 + sVar37,
                     CONCAT24(sVar13 + sVar35,CONCAT22(sVar12 + sVar33,(short)uVar9 + sVar31)));
    uVar18 = CONCAT26(sVar38 + sVar37,
                      CONCAT24(sVar36 + sVar35,CONCAT22(sVar34 + sVar33,(short)uVar18 + sVar31)));
    *(ulonglong *)(param_3 + iVar4) =
         CONCAT17((0 < sVar30) * (sVar30 < 0x100) * (char)((ulonglong)uVar32 >> 0x30) -
                  (0xff < sVar30),
                  CONCAT16((0 < sVar29) * (sVar29 < 0x100) * (char)((ulonglong)uVar32 >> 0x20) -
                           (0xff < sVar29),
                           CONCAT15((0 < sVar23) * (sVar23 < 0x100) *
                                    (char)((ulonglong)uVar32 >> 0x10) - (0xff < sVar23),
                                    CONCAT14((0 < sVar22) * (sVar22 < 0x100) * (char)uVar32 -
                                             (0xff < sVar22),
                                             CONCAT13((0 < sVar21) * (sVar21 < 0x100) *
                                                      (char)((ulonglong)uVar10 >> 0x30) -
                                                      (0xff < sVar21),
                                                      CONCAT12((0 < sVar19) * (sVar19 < 0x100) *
                                                               (char)((ulonglong)uVar10 >> 0x20) -
                                                               (0xff < sVar19),
                                                               CONCAT11((0 < sVar11) *
                                                                        (sVar11 < 0x100) *
                                                                        (char)((ulonglong)uVar10 >>
                                                                              0x10) -
                                                                        (0xff < sVar11),
                                                                        (0 < sVar7) *
                                                                        (sVar7 < 0x100) *
                                                                        (char)uVar10 -
                                                                        (0xff < sVar7))))))));
    sVar12 = (short)((ulonglong)uVar20 >> 0x10);
    sVar13 = (short)((ulonglong)uVar20 >> 0x20);
    sVar14 = (short)((ulonglong)uVar20 >> 0x30);
    uVar10 = psraw(CONCAT26(sVar14 + sVar43,
                            CONCAT24(sVar13 + sVar42,
                                     CONCAT22(sVar12 + sVar41,(short)uVar20 + sVar40))),5);
    sVar34 = (short)((ulonglong)uVar28 >> 0x10);
    sVar36 = (short)((ulonglong)uVar28 >> 0x20);
    sVar38 = (short)((ulonglong)uVar28 >> 0x30);
    uVar32 = psraw(CONCAT26(sVar38 + sVar43,
                            CONCAT24(sVar36 + sVar42,
                                     CONCAT22(sVar34 + sVar41,(short)uVar28 + sVar40))),5);
    sVar7 = (short)uVar10;
    sVar11 = (short)((ulonglong)uVar10 >> 0x10);
    sVar19 = (short)((ulonglong)uVar10 >> 0x20);
    sVar21 = (short)((ulonglong)uVar10 >> 0x30);
    sVar22 = (short)uVar32;
    sVar23 = (short)((ulonglong)uVar32 >> 0x10);
    sVar29 = (short)((ulonglong)uVar32 >> 0x20);
    sVar30 = (short)((ulonglong)uVar32 >> 0x30);
    uVar20 = CONCAT26(sVar14 + sVar37,
                      CONCAT24(sVar13 + sVar35,CONCAT22(sVar12 + sVar33,(short)uVar20 + sVar31)));
    uVar28 = CONCAT26(sVar38 + sVar37,
                      CONCAT24(sVar36 + sVar35,CONCAT22(sVar34 + sVar33,(short)uVar28 + sVar31)));
    *(ulonglong *)(param_3 + 8 + iVar4) =
         CONCAT17((0 < sVar30) * (sVar30 < 0x100) * (char)((ulonglong)uVar32 >> 0x30) -
                  (0xff < sVar30),
                  CONCAT16((0 < sVar29) * (sVar29 < 0x100) * (char)((ulonglong)uVar32 >> 0x20) -
                           (0xff < sVar29),
                           CONCAT15((0 < sVar23) * (sVar23 < 0x100) *
                                    (char)((ulonglong)uVar32 >> 0x10) - (0xff < sVar23),
                                    CONCAT14((0 < sVar22) * (sVar22 < 0x100) * (char)uVar32 -
                                             (0xff < sVar22),
                                             CONCAT13((0 < sVar21) * (sVar21 < 0x100) *
                                                      (char)((ulonglong)uVar10 >> 0x30) -
                                                      (0xff < sVar21),
                                                      CONCAT12((0 < sVar19) * (sVar19 < 0x100) *
                                                               (char)((ulonglong)uVar10 >> 0x20) -
                                                               (0xff < sVar19),
                                                               CONCAT11((0 < sVar11) *
                                                                        (sVar11 < 0x100) *
                                                                        (char)((ulonglong)uVar10 >>
                                                                              0x10) -
                                                                        (0xff < sVar11),
                                                                        (0 < sVar7) *
                                                                        (sVar7 < 0x100) *
                                                                        (char)uVar10 -
                                                                        (0xff < sVar7))))))));
    iVar4 = iVar4 + 0x10;
  } while (iVar4 < 0x100);
  return;
}


