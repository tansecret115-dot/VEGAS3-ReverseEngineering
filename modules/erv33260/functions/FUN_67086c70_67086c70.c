/* Module: erv33260.dll
   Function: FUN_67086c70
   Address: 67086c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67086c70(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  short sVar10;
  short sVar12;
  undefined8 uVar8;
  short sVar11;
  short sVar13;
  undefined8 uVar9;
  short sVar14;
  uint3 uVar15;
  uint3 uVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar23;
  undefined8 uVar24;
  uint3 uVar28;
  short sVar30;
  undefined8 uVar29;
  short sVar32;
  short sVar33;
  short sVar34;
  undefined8 uVar31;
  uint3 uVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  
  uVar4 = DAT_67091e40;
  puVar6 = (undefined8 *)(param_1 - param_2);
  uVar8 = *puVar6;
  uVar23 = puVar6[1];
  uVar3 = (ushort)(((uint7)(byte)((uint)*(undefined4 *)((int)puVar6 + -4) >> 0x18) << 0x30) >> 0x28)
  ;
  uVar2 = (ushort)(((uint7)(byte)((ulonglong)uVar23 >> 0x18) << 0x30) >> 0x28);
  bVar27 = (byte)((ulonglong)uVar23 >> 0x38);
  puVar7 = (undefined4 *)((int)puVar6 + -4);
  sVar10 = (short)((ulonglong)DAT_67091e48 >> 0x10);
  sVar30 = (short)((ulonglong)DAT_67091e48 >> 0x20);
  sVar19 = (short)((ulonglong)DAT_67091e48 >> 0x30);
  sVar21 = (short)((ulonglong)DAT_67091e50 >> 0x10);
  sVar22 = (short)((ulonglong)DAT_67091e50 >> 0x20);
  sVar11 = (short)((ulonglong)DAT_67091e50 >> 0x30);
  sVar20 = ((short)CONCAT21(uVar2,(char)((ulonglong)uVar23 >> 0x10)) -
           (ushort)(byte)((ulonglong)uVar8 >> 0x20)) * sVar30 +
           ((ushort)(byte)((ulonglong)uVar23 >> 0x30) - (short)CONCAT21(uVar3,(char)uVar8)) * sVar22
  ;
  sVar18 = ((ushort)(byte)((ulonglong)uVar23 >> 8) - (ushort)(byte)((ulonglong)uVar8 >> 0x28)) *
           sVar10 + ((ushort)(byte)((ulonglong)uVar23 >> 0x28) -
                    (ushort)(byte)((ulonglong)uVar8 >> 8)) * sVar21 +
           ((uVar2 >> 8) - (ushort)(byte)((ulonglong)uVar8 >> 0x18)) * sVar19 +
           ((ushort)bVar27 - (uVar3 >> 8)) * sVar11;
  sVar17 = (((ushort)uVar23 & 0xff) - (ushort)(byte)((ulonglong)uVar8 >> 0x30)) *
           (short)DAT_67091e48 +
           ((ushort)(byte)((ulonglong)uVar23 >> 0x20) - (ushort)(byte)((ulonglong)uVar8 >> 0x10)) *
           (short)DAT_67091e50 + sVar20 + sVar18;
  sVar18 = sVar18 + sVar20;
  uVar25 = (undefined1)((uint)*(undefined4 *)((int)puVar7 + param_2 * 2) >> 0x18);
  uVar15 = CONCAT12(uVar25,CONCAT11(uVar25,(char)((uint)*(undefined4 *)((int)puVar7 + param_2 * 3)
                                                 >> 0x18))) & 0xff00ff;
  bVar26 = (byte)((uint)puVar7[param_2 * 4] >> 0x18);
  uVar25 = (undefined1)((uint)*(undefined4 *)((int)puVar7 + param_2 * 0xe) >> 0x18);
  puVar1 = puVar7 + param_2;
  uVar28 = CONCAT12(uVar25,CONCAT11(uVar25,(char)((uint)*(undefined4 *)((int)puVar7 + param_2 * 0xd)
                                                 >> 0x18))) & 0xff00ff;
  sVar14 = ((ushort)bVar27 + (ushort)bVar26) * 0x10;
  uVar25 = (undefined1)((uint)*(undefined4 *)((int)puVar1 + param_2 * 2) >> 0x18);
  uVar16 = CONCAT12(uVar25,CONCAT11(uVar25,(char)((uint)*(undefined4 *)((int)puVar1 + param_2 * 3)
                                                 >> 0x18))) & 0xff00ff;
  uVar25 = (undefined1)((uint)*(undefined4 *)((int)puVar7 + param_2 * 10) >> 0x18);
  uVar35 = CONCAT12(uVar25,CONCAT11(uVar25,(char)((uint)*(undefined4 *)((int)puVar7 + param_2 * 9)
                                                 >> 0x18))) & 0xff00ff;
  sVar30 = ((ushort)(byte)((uint)*(undefined4 *)((int)puVar7 + param_2 * 0xf) >> 0x18) -
           (ushort)(byte)((uint)*(undefined4 *)((int)puVar7 + param_2) >> 0x18)) * sVar22 +
           ((ushort)(byte)((uint)*(undefined4 *)((int)puVar7 + param_2 * 0xb) >> 0x18) -
           (ushort)(byte)((uint)*(undefined4 *)((int)puVar1 + param_2) >> 0x18)) * sVar30;
  sVar10 = ((ushort)(byte)(uVar28 >> 0x10) - (ushort)(byte)(uVar15 >> 0x10)) * sVar21 +
           ((ushort)(byte)(uVar35 >> 0x10) - (ushort)(byte)(uVar16 >> 0x10)) * sVar10 +
           ((ushort)bVar26 - (ushort)(byte)((uint)*puVar7 >> 0x18)) * sVar11 +
           ((ushort)(byte)((uint)puVar7[param_2 * 3] >> 0x18) -
           (ushort)(byte)((uint)*puVar1 >> 0x18)) * sVar19;
  sVar20 = sVar10 + ((short)uVar28 - (short)uVar15) * (short)DAT_67091e50 +
                    ((short)uVar35 - (short)uVar16) * (short)DAT_67091e48 + sVar30;
  sVar30 = sVar30 + sVar10;
  uVar8 = psraw(CONCAT44(CONCAT22(sVar18,sVar30),CONCAT22(sVar17,sVar20)),2);
  uVar8 = psraw(CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar18,
                         CONCAT24((short)((ulonglong)uVar8 >> 0x20) + sVar30,
                                  CONCAT22((short)((ulonglong)uVar8 >> 0x10) + sVar17,
                                           (short)uVar8 + sVar20))),4);
  sVar10 = (short)((ulonglong)uVar8 >> 0x10);
  sVar20 = (short)uVar8;
  uVar8 = psllw(CONCAT44(CONCAT22(sVar20,sVar20),CONCAT22(sVar20,sVar20)),3);
  sVar30 = (sVar14 + sVar10 * (short)DAT_67091e58) - ((short)uVar8 - sVar20);
  sVar17 = (sVar14 + sVar10 * (short)((ulonglong)DAT_67091e58 >> 0x10)) -
           ((short)((ulonglong)uVar8 >> 0x10) - sVar20);
  sVar18 = (sVar14 + sVar10 * (short)((ulonglong)DAT_67091e58 >> 0x20)) -
           ((short)((ulonglong)uVar8 >> 0x20) - sVar20);
  sVar14 = (sVar14 + sVar10 * (short)((ulonglong)DAT_67091e58 >> 0x30)) -
           ((short)((ulonglong)uVar8 >> 0x30) - sVar20);
  uVar8 = CONCAT26(sVar14,CONCAT24(sVar18,CONCAT22(sVar17,sVar30)));
  uVar23 = psllw(CONCAT44(CONCAT22(sVar10,sVar10),CONCAT22(sVar10,sVar10)),2);
  sVar10 = (short)uVar23;
  sVar30 = sVar10 + sVar30;
  sVar19 = (short)((ulonglong)uVar23 >> 0x10);
  sVar17 = sVar19 + sVar17;
  sVar21 = (short)((ulonglong)uVar23 >> 0x20);
  sVar22 = (short)((ulonglong)uVar23 >> 0x30);
  sVar18 = sVar21 + sVar18;
  sVar14 = sVar22 + sVar14;
  uVar23 = CONCAT26(sVar14,CONCAT24(sVar18,CONCAT22(sVar17,sVar30)));
  sVar30 = sVar10 + sVar30;
  sVar17 = sVar19 + sVar17;
  sVar18 = sVar21 + sVar18;
  sVar14 = sVar22 + sVar14;
  uVar24 = CONCAT26(sVar14,CONCAT24(sVar18,CONCAT22(sVar17,sVar30)));
  uVar29 = CONCAT26(sVar22 + sVar14,
                    CONCAT24(sVar21 + sVar18,CONCAT22(sVar19 + sVar17,sVar10 + sVar30)));
  iVar5 = 0;
  do {
    sVar36 = (short)uVar4;
    sVar11 = (short)((ulonglong)uVar8 >> 0x10);
    sVar37 = (short)((ulonglong)uVar4 >> 0x10);
    sVar12 = (short)((ulonglong)uVar8 >> 0x20);
    sVar13 = (short)((ulonglong)uVar8 >> 0x30);
    sVar38 = (short)((ulonglong)uVar4 >> 0x20);
    sVar39 = (short)((ulonglong)uVar4 >> 0x30);
    uVar9 = psraw(CONCAT26(sVar13 + sVar39,
                           CONCAT24(sVar12 + sVar38,CONCAT22(sVar11 + sVar37,(short)uVar8 + sVar36))
                          ),5);
    sVar32 = (short)((ulonglong)uVar23 >> 0x10);
    sVar33 = (short)((ulonglong)uVar23 >> 0x20);
    sVar34 = (short)((ulonglong)uVar23 >> 0x30);
    uVar31 = psraw(CONCAT26(sVar34 + sVar39,
                            CONCAT24(sVar33 + sVar38,
                                     CONCAT22(sVar32 + sVar37,(short)uVar23 + sVar36))),5);
    sVar10 = (short)uVar9;
    sVar30 = (short)((ulonglong)uVar9 >> 0x10);
    sVar14 = (short)((ulonglong)uVar9 >> 0x20);
    sVar17 = (short)((ulonglong)uVar9 >> 0x30);
    sVar18 = (short)uVar31;
    sVar19 = (short)((ulonglong)uVar31 >> 0x10);
    sVar21 = (short)((ulonglong)uVar31 >> 0x20);
    sVar22 = (short)((ulonglong)uVar31 >> 0x30);
    uVar8 = CONCAT26(sVar13 + sVar20,
                     CONCAT24(sVar12 + sVar20,CONCAT22(sVar11 + sVar20,(short)uVar8 + sVar20)));
    uVar23 = CONCAT26(sVar34 + sVar20,
                      CONCAT24(sVar33 + sVar20,CONCAT22(sVar32 + sVar20,(short)uVar23 + sVar20)));
    *(ulonglong *)(param_3 + iVar5) =
         CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                  (0xff < sVar22),
                  CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)((ulonglong)uVar31 >> 0x20) -
                           (0xff < sVar21),
                           CONCAT15((0 < sVar19) * (sVar19 < 0x100) *
                                    (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar19),
                                    CONCAT14((0 < sVar18) * (sVar18 < 0x100) * (char)uVar31 -
                                             (0xff < sVar18),
                                             CONCAT13((0 < sVar17) * (sVar17 < 0x100) *
                                                      (char)((ulonglong)uVar9 >> 0x30) -
                                                      (0xff < sVar17),
                                                      CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                                               (char)((ulonglong)uVar9 >> 0x20) -
                                                               (0xff < sVar14),
                                                               CONCAT11((0 < sVar30) *
                                                                        (sVar30 < 0x100) *
                                                                        (char)((ulonglong)uVar9 >>
                                                                              0x10) -
                                                                        (0xff < sVar30),
                                                                        (0 < sVar10) *
                                                                        (sVar10 < 0x100) *
                                                                        (char)uVar9 -
                                                                        (0xff < sVar10))))))));
    sVar11 = (short)((ulonglong)uVar24 >> 0x10);
    sVar12 = (short)((ulonglong)uVar24 >> 0x20);
    sVar13 = (short)((ulonglong)uVar24 >> 0x30);
    uVar9 = psraw(CONCAT26(sVar13 + sVar39,
                           CONCAT24(sVar12 + sVar38,CONCAT22(sVar11 + sVar37,(short)uVar24 + sVar36)
                                   )),5);
    sVar32 = (short)((ulonglong)uVar29 >> 0x10);
    sVar33 = (short)((ulonglong)uVar29 >> 0x20);
    sVar34 = (short)((ulonglong)uVar29 >> 0x30);
    uVar31 = psraw(CONCAT26(sVar34 + sVar39,
                            CONCAT24(sVar33 + sVar38,
                                     CONCAT22(sVar32 + sVar37,(short)uVar29 + sVar36))),5);
    sVar10 = (short)uVar9;
    sVar30 = (short)((ulonglong)uVar9 >> 0x10);
    sVar14 = (short)((ulonglong)uVar9 >> 0x20);
    sVar17 = (short)((ulonglong)uVar9 >> 0x30);
    sVar18 = (short)uVar31;
    sVar19 = (short)((ulonglong)uVar31 >> 0x10);
    sVar21 = (short)((ulonglong)uVar31 >> 0x20);
    sVar22 = (short)((ulonglong)uVar31 >> 0x30);
    uVar24 = CONCAT26(sVar13 + sVar20,
                      CONCAT24(sVar12 + sVar20,CONCAT22(sVar11 + sVar20,(short)uVar24 + sVar20)));
    uVar29 = CONCAT26(sVar34 + sVar20,
                      CONCAT24(sVar33 + sVar20,CONCAT22(sVar32 + sVar20,(short)uVar29 + sVar20)));
    *(ulonglong *)(param_3 + 8 + iVar5) =
         CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                  (0xff < sVar22),
                  CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)((ulonglong)uVar31 >> 0x20) -
                           (0xff < sVar21),
                           CONCAT15((0 < sVar19) * (sVar19 < 0x100) *
                                    (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar19),
                                    CONCAT14((0 < sVar18) * (sVar18 < 0x100) * (char)uVar31 -
                                             (0xff < sVar18),
                                             CONCAT13((0 < sVar17) * (sVar17 < 0x100) *
                                                      (char)((ulonglong)uVar9 >> 0x30) -
                                                      (0xff < sVar17),
                                                      CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                                               (char)((ulonglong)uVar9 >> 0x20) -
                                                               (0xff < sVar14),
                                                               CONCAT11((0 < sVar30) *
                                                                        (sVar30 < 0x100) *
                                                                        (char)((ulonglong)uVar9 >>
                                                                              0x10) -
                                                                        (0xff < sVar30),
                                                                        (0 < sVar10) *
                                                                        (sVar10 < 0x100) *
                                                                        (char)uVar9 -
                                                                        (0xff < sVar10))))))));
    iVar5 = iVar5 + 0x10;
  } while (iVar5 < 0x100);
  return;
}


