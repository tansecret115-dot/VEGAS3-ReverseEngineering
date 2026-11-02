/* Module: erv23260.dll
   Function: FUN_638021d0
   Address: 638021d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638021d0(int *param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  char cVar9;
  undefined2 uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  short sVar30;
  short sVar31;
  undefined8 uVar29;
  short sVar32;
  char cVar10;
  
  uVar12 = DAT_6382d868;
  uVar13 = param_2[2];
  uVar17 = param_2[3];
  if (param_6 != 0) {
    uVar13 = uVar13 >> 1;
    uVar17 = uVar17 >> 1;
  }
  iVar20 = *param_1;
  iVar21 = *param_2;
  uVar29 = DAT_6382d850;
  if (param_5 == 0) {
    uVar29 = CONCAT26((short)((ulonglong)DAT_6382d850 >> 0x30) -
                      (short)((ulonglong)DAT_6382d848 >> 0x30),
                      CONCAT24((short)((ulonglong)DAT_6382d850 >> 0x20) -
                               (short)((ulonglong)DAT_6382d848 >> 0x20),
                               CONCAT22((short)((ulonglong)DAT_6382d850 >> 0x10) -
                                        (short)((ulonglong)DAT_6382d848 >> 0x10),
                                        (short)DAT_6382d850 - (short)DAT_6382d848)));
  }
  iVar15 = param_1[1];
  iVar3 = param_2[1];
  iVar16 = iVar20 + iVar15;
  do {
    iVar14 = 0;
    uVar24 = *(ulonglong *)(iVar20 + 8);
    uVar22 = *(ulonglong *)(iVar16 + 8);
    uVar25 = CONCAT26((ushort)(uVar24 >> 0x38),
                      CONCAT24((ushort)(uVar24 >> 0x20) >> 8,
                               CONCAT22((ushort)(uVar24 >> 0x10) >> 8,(ushort)uVar24 >> 8)));
    uVar23 = CONCAT26((ushort)(uVar22 >> 0x38),
                      CONCAT24((ushort)(uVar22 >> 0x20) >> 8,
                               CONCAT22((ushort)(uVar22 >> 0x10) >> 8,(ushort)uVar22 >> 8)));
    uVar19 = uVar13;
    do {
      uVar24 = uVar24 & uVar12;
      uVar22 = uVar22 & uVar12;
      uVar1 = *(ulonglong *)(iVar20 + iVar14 * 2);
      uVar2 = *(ulonglong *)(iVar16 + iVar14 * 2);
      sVar30 = (short)((ulonglong)uVar29 >> 0x10);
      sVar31 = (short)((ulonglong)uVar29 >> 0x20);
      sVar32 = (short)((ulonglong)uVar29 >> 0x30);
      uVar23 = psraw(CONCAT26((short)(uVar22 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30) +
                              (short)(uVar24 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30) + sVar32,
                              CONCAT24((short)(uVar22 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20)
                                       + (short)(uVar24 >> 0x20) +
                                         (short)((ulonglong)uVar25 >> 0x20) + sVar31,
                                       CONCAT22((short)(uVar22 >> 0x10) +
                                                (short)((ulonglong)uVar23 >> 0x10) +
                                                (short)(uVar24 >> 0x10) +
                                                (short)((ulonglong)uVar25 >> 0x10) + sVar30,
                                                (short)uVar22 + (short)uVar23 +
                                                (short)uVar24 + (short)uVar25 + (short)uVar29))),2);
      uVar26 = uVar1 & uVar12;
      uVar22 = uVar2 & uVar12;
      uVar24 = *(ulonglong *)(iVar20 + 0x18 + iVar14 * 2);
      uVar27 = psraw(CONCAT26((ushort)(uVar1 >> 0x38) + (short)(uVar26 >> 0x30) +
                              (ushort)(uVar2 >> 0x38) + (short)(uVar22 >> 0x30) + sVar32,
                              CONCAT24(((ushort)(uVar1 >> 0x20) >> 8) + (short)(uVar26 >> 0x20) +
                                       ((ushort)(uVar2 >> 0x20) >> 8) + (short)(uVar22 >> 0x20) +
                                       sVar31,CONCAT22(((ushort)(uVar1 >> 0x10) >> 8) +
                                                       (short)(uVar26 >> 0x10) +
                                                       ((ushort)(uVar2 >> 0x10) >> 8) +
                                                       (short)(uVar22 >> 0x10) + sVar30,
                                                       ((ushort)uVar1 >> 8) + (short)uVar26 +
                                                       ((ushort)uVar2 >> 8) + (short)uVar22 +
                                                       (short)uVar29))),2);
      uVar22 = *(ulonglong *)(iVar16 + 0x18 + iVar14 * 2);
      sVar30 = (short)uVar27;
      sVar31 = (short)((ulonglong)uVar27 >> 0x10);
      sVar32 = (short)((ulonglong)uVar27 >> 0x20);
      sVar5 = (short)((ulonglong)uVar27 >> 0x30);
      cVar9 = (0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar27 >> 0x30) - (0xff < sVar5);
      sVar5 = (short)uVar23;
      sVar6 = (short)((ulonglong)uVar23 >> 0x10);
      sVar7 = (short)((ulonglong)uVar23 >> 0x20);
      sVar8 = (short)((ulonglong)uVar23 >> 0x30);
      cVar10 = (0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) - (0xff < sVar8);
      uVar25 = CONCAT26((ushort)(uVar24 >> 0x38),
                        CONCAT24((ushort)(uVar24 >> 0x20) >> 8,
                                 CONCAT22((ushort)(uVar24 >> 0x10) >> 8,(ushort)uVar24 >> 8)));
      *(ulonglong *)(iVar21 + iVar14) =
           CONCAT17(cVar10,CONCAT16((0 < sVar7) * (sVar7 < 0x100) *
                                    (char)((ulonglong)uVar23 >> 0x20) - (0xff < sVar7),
                                    CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                             (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar6),
                                             CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar23 -
                                                      (0xff < sVar5),
                                                      CONCAT13(cVar9,CONCAT12((0 < sVar32) *
                                                                              (sVar32 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar27 >> 0x20)
                                                                              - (0xff < sVar32),
                                                                              CONCAT11((0 < sVar31)
                                                                                       * (sVar31 < 
                                                  0x100) * (char)((ulonglong)uVar27 >> 0x10) -
                                                  (0xff < sVar31),
                                                  (0 < sVar30) * (sVar30 < 0x100) * (char)uVar27 -
                                                  (0xff < sVar30))))))));
      uVar23 = CONCAT26((ushort)(uVar22 >> 0x38),
                        CONCAT24((ushort)(uVar22 >> 0x20) >> 8,
                                 CONCAT22((ushort)(uVar22 >> 0x10) >> 8,(ushort)uVar22 >> 8)));
      iVar14 = iVar14 + 8;
      uVar18 = uVar19 - 8;
      bVar4 = 7 < (int)uVar19;
      uVar19 = uVar18;
    } while (uVar18 != 0 && bVar4);
    iVar20 = iVar20 + iVar15 * 2;
    if (3 < param_3) {
      if (param_3 < 5) {
        uVar11 = CONCAT11(cVar9,cVar9);
        *(int *)(iVar21 + -4 + iVar14) =
             (int)(CONCAT26(uVar11,(uint6)CONCAT22(uVar11,uVar11) << 0x20) >> 0x20);
      }
      else {
        uVar11 = (undefined2)(CONCAT17(cVar10,(uint7)CONCAT11(cVar10,cVar10) << 0x30) >> 0x30);
        uVar28 = (undefined4)(CONCAT26(uVar11,(uint6)CONCAT22(uVar11,uVar11) << 0x20) >> 0x20);
        *(ulonglong *)(iVar21 + iVar14) = CONCAT44(uVar28,uVar28);
      }
    }
    iVar21 = iVar21 + iVar3;
    iVar16 = iVar16 + iVar15 * 2;
    uVar19 = uVar17 - 1;
    bVar4 = 0 < (int)uVar17;
    uVar17 = uVar19;
  } while (uVar19 != 0 && bVar4);
  if (3 < param_4) {
    iVar20 = iVar21 - iVar3;
    do {
      iVar16 = uVar13 + param_3;
      do {
        *(undefined8 *)(iVar21 + -8 + iVar16) = *(undefined8 *)(iVar20 + -8 + iVar16);
        iVar15 = iVar16 + -8;
        bVar4 = 7 < iVar16;
        iVar16 = iVar15;
      } while (iVar15 != 0 && bVar4);
      iVar21 = iVar21 + iVar3;
      uVar17 = param_4 - 1;
      bVar4 = 0 < (int)param_4;
      param_4 = uVar17;
    } while (uVar17 != 0 && bVar4);
  }
  return;
}


