/* Module: erv33260.dll
   Function: FUN_67087f00
   Address: 67087f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_67087f00(undefined4 param_1,int param_2,int param_3,int *param_4,char *param_5,int param_6,
            undefined *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  undefined7 uVar9;
  uint3 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar25;
  ushort uVar26;
  uint5 uVar24;
  ushort uVar27;
  ushort uVar28;
  byte bVar31;
  short sVar29;
  byte bVar32;
  undefined1 uVar33;
  byte bVar34;
  byte bVar36;
  short sVar35;
  short sVar37;
  short sVar38;
  short sVar39;
  undefined8 uVar30;
  byte bVar41;
  undefined8 uVar40;
  short sVar42;
  byte bVar47;
  short sVar46;
  short sVar49;
  short sVar50;
  short sVar51;
  undefined8 uVar43;
  uint5 uVar48;
  short sVar52;
  undefined8 uVar44;
  undefined8 uVar45;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  undefined4 local_720 [64];
  undefined4 local_620 [64];
  undefined1 local_520 [64];
  undefined1 local_4e0 [576];
  undefined1 local_2a0 [32];
  undefined1 local_280 [608];
  
  iVar11 = param_6 + -4;
  puVar17 = local_720;
  puVar18 = local_4e0;
  iVar15 = param_2 + -2;
  iVar13 = iVar11;
  puVar16 = puVar17;
  iVar12 = param_6;
  do {
    do {
      uVar43 = *(undefined8 *)(iVar15 + iVar13);
      bVar36 = (byte)((ulonglong)uVar43 >> 0x20);
      bVar34 = (byte)((ulonglong)uVar43 >> 0x18);
      uVar23 = (ushort)(((uint7)bVar36 << 0x30) >> 0x28);
      bVar31 = (byte)((ulonglong)uVar43 >> 0x10);
      bVar32 = (byte)((ulonglong)uVar43 >> 8);
      bVar47 = (byte)((ulonglong)uVar43 >> 0x30);
      bVar41 = (byte)((ulonglong)uVar43 >> 0x28);
      uVar22 = (ushort)(((uint7)bVar47 << 0x30) >> 0x28);
      uVar25 = (ushort)((ulonglong)uVar43 >> 0x18) & 0xff;
      uVar20 = (ushort)(((uint7)bVar41 << 0x30) >> 0x28);
      sVar52 = (short)DAT_6709a798;
      sVar53 = (short)((ulonglong)DAT_6709a798 >> 0x10);
      sVar54 = (short)((ulonglong)DAT_6709a798 >> 0x20);
      sVar55 = (short)((ulonglong)DAT_6709a798 >> 0x30);
      sVar37 = (short)CONCAT21(uVar23,bVar34);
      uVar23 = uVar23 >> 8;
      uVar21 = (ushort)(((uint7)bVar34 << 0x30) >> 0x28);
      sVar49 = (short)CONCAT21(uVar22,bVar41);
      uVar22 = uVar22 >> 8;
      sVar29 = (ushort)bVar31 * sVar52 * 2;
      sVar35 = (ushort)bVar34 * sVar53 * 2;
      sVar38 = (short)CONCAT21(uVar20,bVar36) * sVar54 * 2;
      sVar39 = (uVar20 >> 8) * sVar55 * 2;
      sVar42 = (uVar25 * sVar52 - ((ushort)bVar36 + (ushort)bVar32)) + sVar29;
      sVar46 = ((ushort)bVar36 * sVar53 - ((ushort)bVar41 + (ushort)bVar31)) + sVar35;
      sVar50 = (sVar49 * sVar54 - ((ushort)bVar47 + sVar37)) + sVar38;
      sVar51 = (uVar22 * sVar55 - ((byte)((ulonglong)uVar43 >> 0x38) + uVar23)) + sVar39;
      sVar29 = ((ushort)bVar32 * sVar52 - (((ushort)uVar43 & 0xff) + uVar25)) + sVar29;
      sVar35 = ((ushort)bVar31 * sVar53 - ((ushort)bVar32 + (ushort)bVar36)) + sVar35;
      sVar38 = (sVar37 * sVar54 - ((short)CONCAT21(uVar21,bVar31) + sVar49)) + sVar38;
      sVar39 = (uVar23 * sVar55 - ((uVar21 >> 8) + uVar22)) + sVar39;
      *(ulonglong *)(puVar18 + iVar13 * 2) =
           CONCAT26(sVar51,CONCAT24(sVar50,CONCAT22(sVar46,sVar42)));
      sVar52 = (short)((ulonglong)DAT_6709a7a0 >> 0x10);
      sVar53 = (short)((ulonglong)DAT_6709a7a0 >> 0x20);
      sVar54 = (short)((ulonglong)DAT_6709a7a0 >> 0x30);
      uVar43 = psraw(CONCAT26(sVar51 + sVar54,
                              CONCAT24(sVar50 + sVar53,
                                       CONCAT22(sVar46 + sVar52,sVar42 + (short)DAT_6709a7a0))),4);
      *(ulonglong *)(puVar18 + iVar13 * 2 + 0x280) =
           CONCAT26(sVar39,CONCAT24(sVar38,CONCAT22(sVar35,sVar29)));
      sVar37 = (short)uVar43;
      sVar42 = (short)((ulonglong)uVar43 >> 0x10);
      sVar46 = (short)((ulonglong)uVar43 >> 0x20);
      sVar49 = (short)((ulonglong)uVar43 >> 0x30);
      *(uint *)((int)puVar16 + iVar13) =
           CONCAT13((0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar43 >> 0x30) -
                    (0xff < sVar49),
                    CONCAT12((0 < sVar46) * (sVar46 < 0x100) * (char)((ulonglong)uVar43 >> 0x20) -
                             (0xff < sVar46),
                             CONCAT11((0 < sVar42) * (sVar42 < 0x100) *
                                      (char)((ulonglong)uVar43 >> 0x10) - (0xff < sVar42),
                                      (0 < sVar37) * (sVar37 < 0x100) * (char)uVar43 -
                                      (0xff < sVar37))));
      uVar43 = psraw(CONCAT26(sVar39 + sVar54,
                              CONCAT24(sVar38 + sVar53,
                                       CONCAT22(sVar35 + sVar52,sVar29 + (short)DAT_6709a7a0))),4);
      sVar37 = (short)uVar43;
      sVar42 = (short)((ulonglong)uVar43 >> 0x10);
      sVar46 = (short)((ulonglong)uVar43 >> 0x20);
      sVar49 = (short)((ulonglong)uVar43 >> 0x30);
      *(uint *)((int)puVar16 + iVar13 + 0x100) =
           CONCAT13((0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar43 >> 0x30) -
                    (0xff < sVar49),
                    CONCAT12((0 < sVar46) * (sVar46 < 0x100) * (char)((ulonglong)uVar43 >> 0x20) -
                             (0xff < sVar46),
                             CONCAT11((0 < sVar42) * (sVar42 < 0x100) *
                                      (char)((ulonglong)uVar43 >> 0x10) - (0xff < sVar42),
                                      (0 < sVar37) * (sVar37 < 0x100) * (char)uVar43 -
                                      (0xff < sVar37))));
      bVar7 = 3 < iVar13;
      iVar13 = iVar13 + -4;
    } while (bVar7);
    iVar15 = iVar15 + param_3;
    puVar16 = puVar16 + 4;
    puVar18 = puVar18 + 0x20;
    iVar12 = iVar12 + -1;
    iVar13 = iVar11;
  } while (iVar12 != 0);
  iVar13 = (*(code *)param_7)(param_3);
  iVar12 = (*(code *)param_7)(param_3);
  if ((iVar12 < *param_4) || (iVar13 < *param_4)) {
    if (iVar12 < iVar13) {
      *param_4 = iVar12;
      *param_5 = *param_5 + -1;
      iVar12 = (param_2 - param_3) + -2;
      puVar18 = local_280;
      uVar19 = 3;
      iVar13 = iVar11;
      while( true ) {
        do {
          uVar43 = *(undefined8 *)(iVar12 + iVar13);
          bVar36 = (byte)((ulonglong)uVar43 >> 0x20);
          bVar34 = (byte)((ulonglong)uVar43 >> 0x18);
          uVar23 = (ushort)(((uint7)bVar36 << 0x30) >> 0x28);
          bVar31 = (byte)((ulonglong)uVar43 >> 0x10);
          bVar32 = (byte)((ulonglong)uVar43 >> 8);
          sVar37 = (short)DAT_6709a798;
          sVar42 = (short)((ulonglong)DAT_6709a798 >> 0x10);
          sVar46 = (short)((ulonglong)DAT_6709a798 >> 0x20);
          sVar49 = (short)((ulonglong)DAT_6709a798 >> 0x30);
          bVar41 = (byte)((ulonglong)uVar43 >> 0x28);
          uVar20 = (ushort)(((uint7)bVar41 << 0x30) >> 0x28);
          uVar22 = (ushort)(((uint7)(byte)((ulonglong)uVar43 >> 0x30) << 0x30) >> 0x28);
          uVar21 = (ushort)(((uint7)bVar34 << 0x30) >> 0x28);
          *(ulonglong *)(puVar18 + iVar13 * 2) =
               CONCAT26((((uVar23 >> 8) * sVar49 + (uVar20 >> 8) * sVar49 * 2) - (uVar21 >> 8)) -
                        (uVar22 >> 8),
                        CONCAT24((((short)CONCAT21(uVar23,bVar34) * sVar46 +
                                  (short)CONCAT21(uVar20,bVar36) * sVar46 * 2) -
                                 (short)CONCAT21(uVar21,bVar31)) - (short)CONCAT21(uVar22,bVar41),
                                 CONCAT22((((ushort)bVar31 * sVar42 + (ushort)bVar34 * sVar42 * 2) -
                                          (ushort)bVar32) - (ushort)bVar36,
                                          (((ushort)bVar32 * sVar37 +
                                           ((ushort)((ulonglong)uVar43 >> 0x10) & 0xff) * sVar37 * 2
                                           ) - ((ushort)uVar43 & 0xff)) - (ushort)bVar34)));
          bVar7 = 3 < iVar13;
          iVar13 = iVar13 + -4;
        } while (bVar7);
        iVar12 = iVar12 + param_3;
        puVar18 = puVar18 + 0x20;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) break;
        iVar13 = iVar11;
        if ((uVar19 & 1) == 0) {
          iVar12 = iVar12 + param_6 * param_3;
          puVar18 = puVar18 + param_6 * 0x20;
        }
      }
      puVar18 = local_280;
      iVar13 = iVar11;
      iVar12 = param_6;
      do {
        do {
          uVar43 = *(undefined8 *)(puVar18 + iVar13 * 2 + 0x20);
          uVar44 = *(undefined8 *)(puVar18 + iVar13 * 2 + 0x40);
          uVar30 = *(undefined8 *)(puVar18 + iVar13 * 2);
          uVar1 = *(undefined8 *)(puVar18 + iVar13 * 2 + 0x60);
          uVar45 = psraw(CONCAT26((short)((ulonglong)uVar43 >> 0x30) * sVar49,
                                  CONCAT24((short)((ulonglong)uVar43 >> 0x20) * sVar46,
                                           CONCAT22((short)((ulonglong)uVar43 >> 0x10) * sVar42,
                                                    (short)uVar43 * sVar37))),1);
          uVar43 = psubsw(CONCAT26((short)((ulonglong)uVar44 >> 0x30) * sVar49,
                                   CONCAT24((short)((ulonglong)uVar44 >> 0x20) * sVar46,
                                            CONCAT22((short)((ulonglong)uVar44 >> 0x10) * sVar42,
                                                     (short)uVar44 * sVar37))),
                          CONCAT26((short)((ulonglong)uVar30 >> 0x30) +
                                   (short)((ulonglong)uVar1 >> 0x30),
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) +
                                            (short)((ulonglong)uVar1 >> 0x20),
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) +
                                                     (short)((ulonglong)uVar1 >> 0x10),
                                                     (short)uVar30 + (short)uVar1))));
          uVar43 = psraw(uVar43,2);
          uVar43 = paddsw(uVar43,uVar45);
          uVar43 = paddsw(uVar43,u__6709a7b0._0_8_);
          uVar43 = psraw(uVar43,6);
          sVar29 = (short)uVar43;
          sVar35 = (short)((ulonglong)uVar43 >> 0x10);
          sVar38 = (short)((ulonglong)uVar43 >> 0x20);
          sVar39 = (short)((ulonglong)uVar43 >> 0x30);
          *(uint *)((int)puVar17 + iVar13) =
               CONCAT13((0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar43 >> 0x30) -
                        (0xff < sVar39),
                        CONCAT12((0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar43 >> 0x20)
                                 - (0xff < sVar38),
                                 CONCAT11((0 < sVar35) * (sVar35 < 0x100) *
                                          (char)((ulonglong)uVar43 >> 0x10) - (0xff < sVar35),
                                          (0 < sVar29) * (sVar29 < 0x100) * (char)uVar43 -
                                          (0xff < sVar29))));
          bVar7 = 3 < iVar13;
          iVar13 = iVar13 + -4;
        } while (bVar7);
        puVar18 = puVar18 + 0x20;
        puVar17 = puVar17 + 4;
        iVar12 = iVar12 + -1;
        iVar13 = iVar11;
      } while (iVar12 != 0);
      iVar12 = (param_2 - param_3) + -1;
      iVar15 = 2;
      puVar18 = local_2a0;
      do {
        do {
          puVar14 = puVar18;
          uVar43 = *(undefined8 *)(iVar12 + iVar13);
          bVar34 = (byte)((ulonglong)uVar43 >> 0x20);
          uVar20 = (ushort)(((uint7)bVar34 << 0x30) >> 0x28);
          bVar31 = (byte)((ulonglong)uVar43 >> 0x18);
          bVar32 = (byte)((ulonglong)uVar43 >> 0x10);
          sVar29 = ((ushort)((ulonglong)uVar43 >> 8) & 0xff) * sVar37;
          sVar35 = (ushort)bVar32 * sVar42;
          sVar38 = (short)CONCAT21(uVar20,bVar31) * sVar46;
          sVar39 = (uVar20 >> 8) * sVar49;
          uVar20 = (ushort)(((uint7)bVar31 << 0x30) >> 0x28);
          uVar21 = (ushort)(((uint7)(byte)((ulonglong)uVar43 >> 0x28) << 0x30) >> 0x28);
          uVar44 = psraw(CONCAT26(sVar39,CONCAT24(sVar38,CONCAT22(sVar35,sVar29))),1);
          *(ulonglong *)(puVar14 + iVar13 * 2) =
               CONCAT26((uVar20 >> 8) * sVar49 + sVar39 + (uVar21 >> 8) +
                        (short)((ulonglong)uVar44 >> 0x30),
                        CONCAT24((short)CONCAT21(uVar20,bVar32) * sVar46 + sVar38 +
                                 (short)CONCAT21(uVar21,bVar34) + (short)((ulonglong)uVar44 >> 0x20)
                                 ,CONCAT22((ushort)(byte)((ulonglong)uVar43 >> 8) * sVar42 + sVar35
                                           + (ushort)bVar31 + (short)((ulonglong)uVar44 >> 0x10),
                                           ((ushort)uVar43 & 0xff) * sVar37 + sVar29 +
                                           ((ushort)((ulonglong)uVar43 >> 0x10) & 0xff) +
                                           (short)uVar44)));
          bVar7 = 3 < iVar13;
          iVar13 = iVar13 + -4;
          puVar18 = puVar14;
        } while (bVar7);
        iVar12 = iVar12 + param_3;
        iVar15 = iVar15 + -1;
        iVar13 = iVar11;
        puVar18 = puVar14 + 0x20;
      } while (iVar15 != 0);
      puVar16 = local_620;
      do {
        do {
          uVar43 = *(undefined8 *)(iVar12 + iVar13);
          bVar31 = (byte)((ulonglong)uVar43 >> 0x20);
          uVar20 = (ushort)(((uint7)bVar31 << 0x30) >> 0x28);
          bVar32 = (byte)((ulonglong)uVar43 >> 0x18);
          uVar10 = CONCAT21(uVar20,bVar32);
          uVar33 = (undefined1)((ulonglong)uVar43 >> 0x10);
          uVar23 = (ushort)((ulonglong)uVar43 >> 8);
          uVar9 = CONCAT43((int)(((uint7)uVar10 << 0x20) >> 0x18),CONCAT12(uVar33,uVar23));
          uVar30 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar9 >> 0x10),uVar23) &
                         0xffffffffffff00ff,3);
          uVar44 = *(undefined8 *)(puVar14 + iVar13 * 2);
          uVar22 = (ushort)(((uint7)bVar32 << 0x30) >> 0x28);
          uVar21 = (ushort)(((uint7)(byte)((ulonglong)uVar43 >> 0x28) << 0x30) >> 0x28);
          sVar29 = ((ushort)uVar43 & 0xff) * sVar37 + (short)uVar30 + (uVar23 & 0xff) +
                   ((ushort)((ulonglong)uVar43 >> 0x10) & 0xff);
          sVar35 = (ushort)(byte)((ulonglong)uVar43 >> 8) * sVar42 +
                   (short)((ulonglong)uVar30 >> 0x10) + (short)((uint7)uVar9 >> 0x10) +
                   (ushort)bVar32;
          sVar38 = (short)CONCAT21(uVar22,uVar33) * sVar46 +
                   (short)((ulonglong)uVar30 >> 0x20) + (short)uVar10 +
                   (short)CONCAT21(uVar21,bVar31);
          sVar39 = (uVar22 >> 8) * sVar49 + (short)((ulonglong)uVar30 >> 0x30) + (uVar20 >> 8) +
                   (uVar21 >> 8);
          uVar43 = *(undefined8 *)(puVar14 + iVar13 * 2 + -0x20);
          *(undefined8 *)(puVar14 + iVar13 * 2 + -0x20) = uVar44;
          uVar30 = psllw(uVar44,3);
          *(ulonglong *)(puVar14 + iVar13 * 2) =
               CONCAT26(sVar39,CONCAT24(sVar38,CONCAT22(sVar35,sVar29)));
          uVar20 = sVar29 + (short)uVar30 + (short)uVar44 + (short)uVar43 * sVar37 +
                   (short)DAT_6709a7a8;
          uVar22 = sVar35 + (short)((ulonglong)uVar30 >> 0x10) + (short)((ulonglong)uVar44 >> 0x10)
                   + (short)((ulonglong)uVar43 >> 0x10) * sVar42 +
                   (short)((ulonglong)DAT_6709a7a8 >> 0x10);
          uVar25 = sVar38 + (short)((ulonglong)uVar30 >> 0x20) + (short)((ulonglong)uVar44 >> 0x20)
                   + (short)((ulonglong)uVar43 >> 0x20) * sVar46 +
                   (short)((ulonglong)DAT_6709a7a8 >> 0x20);
          uVar27 = sVar39 + (short)((ulonglong)uVar30 >> 0x30) + (short)((ulonglong)uVar44 >> 0x30)
                   + (short)((ulonglong)uVar43 >> 0x30) * sVar49 +
                   (short)((ulonglong)DAT_6709a7a8 >> 0x30);
          uVar21 = uVar20 >> 8;
          uVar23 = uVar22 >> 8;
          uVar26 = uVar25 >> 8;
          uVar28 = uVar27 >> 8;
          *(uint *)((int)puVar16 + iVar13) =
               CONCAT13((uVar28 != 0) * (uVar28 < 0x100) * (char)(uVar27 >> 8) - (0xff < uVar28),
                        CONCAT12((uVar26 != 0) * (uVar26 < 0x100) * (char)(uVar25 >> 8) -
                                 (0xff < uVar26),
                                 CONCAT11((uVar23 != 0) * (uVar23 < 0x100) * (char)(uVar22 >> 8) -
                                          (0xff < uVar23),
                                          (uVar21 != 0) * (uVar21 < 0x100) * (char)(uVar20 >> 8) -
                                          (0xff < uVar21))));
          bVar7 = 3 < iVar13;
          iVar13 = iVar13 + -4;
        } while (bVar7);
        iVar12 = iVar12 + param_3;
        puVar16 = puVar16 + 4;
        param_6 = param_6 + -1;
        iVar13 = iVar11;
      } while (param_6 != 0);
    }
    else {
      *param_4 = iVar13;
      *param_5 = *param_5 + '\x01';
      iVar12 = param_2 + param_3 * -2 + -1;
      puVar18 = local_520;
      uVar19 = 4;
      iVar13 = iVar11;
      while( true ) {
        do {
          uVar43 = *(undefined8 *)(iVar12 + iVar13);
          bVar36 = (byte)((ulonglong)uVar43 >> 0x20);
          bVar34 = (byte)((ulonglong)uVar43 >> 0x18);
          uVar23 = (ushort)(((uint7)bVar36 << 0x30) >> 0x28);
          bVar31 = (byte)((ulonglong)uVar43 >> 0x10);
          bVar32 = (byte)((ulonglong)uVar43 >> 8);
          sVar37 = (short)DAT_6709a798;
          sVar42 = (short)((ulonglong)DAT_6709a798 >> 0x10);
          sVar46 = (short)((ulonglong)DAT_6709a798 >> 0x20);
          sVar49 = (short)((ulonglong)DAT_6709a798 >> 0x30);
          bVar41 = (byte)((ulonglong)uVar43 >> 0x28);
          uVar20 = (ushort)(((uint7)bVar41 << 0x30) >> 0x28);
          uVar22 = (ushort)(((uint7)(byte)((ulonglong)uVar43 >> 0x30) << 0x30) >> 0x28);
          uVar21 = (ushort)(((uint7)bVar34 << 0x30) >> 0x28);
          *(ulonglong *)(puVar18 + iVar13 * 2) =
               CONCAT26((((uVar20 >> 8) * sVar49 + (uVar23 >> 8) * sVar49 * 2) - (uVar21 >> 8)) -
                        (uVar22 >> 8),
                        CONCAT24((((short)CONCAT21(uVar20,bVar36) * sVar46 +
                                  (short)CONCAT21(uVar23,bVar34) * sVar46 * 2) -
                                 (short)CONCAT21(uVar21,bVar31)) - (short)CONCAT21(uVar22,bVar41),
                                 CONCAT22((((ushort)bVar34 * sVar42 + (ushort)bVar31 * sVar42 * 2) -
                                          (ushort)bVar32) - (ushort)bVar36,
                                          ((((ushort)((ulonglong)uVar43 >> 0x10) & 0xff) * sVar37 +
                                           (ushort)bVar32 * sVar37 * 2) - ((ushort)uVar43 & 0xff)) -
                                          (ushort)bVar34)));
          bVar7 = 3 < iVar13;
          iVar13 = iVar13 + -4;
        } while (bVar7);
        iVar12 = iVar12 + param_3;
        puVar18 = puVar18 + 0x20;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) break;
        iVar13 = iVar11;
        if ((uVar19 & 1) == 0) {
          iVar12 = iVar12 + param_6 * param_3;
          puVar18 = puVar18 + param_6 * 0x20;
        }
      }
      puVar16 = local_620;
      puVar18 = local_520;
      iVar13 = iVar11;
      do {
        do {
          uVar43 = *(undefined8 *)(puVar18 + iVar13 * 2 + 0x40);
          uVar44 = *(undefined8 *)(puVar18 + iVar13 * 2);
          uVar30 = *(undefined8 *)(puVar18 + iVar13 * 2 + 0x60);
          sVar39 = (short)((ulonglong)uVar30 >> 0x10);
          sVar50 = (short)((ulonglong)uVar30 >> 0x20);
          sVar51 = (short)((ulonglong)uVar30 >> 0x30);
          uVar1 = *(undefined8 *)(puVar18 + iVar13 * 2 + 0x80);
          uVar45 = *(undefined8 *)(puVar18 + iVar13 * 2 + 0x20);
          sVar29 = (short)((ulonglong)uVar45 >> 0x10);
          sVar35 = (short)((ulonglong)uVar45 >> 0x20);
          sVar38 = (short)((ulonglong)uVar45 >> 0x30);
          uVar40 = psraw(CONCAT26((short)((ulonglong)uVar43 >> 0x30) * sVar49,
                                  CONCAT24((short)((ulonglong)uVar43 >> 0x20) * sVar46,
                                           CONCAT22((short)((ulonglong)uVar43 >> 0x10) * sVar42,
                                                    (short)uVar43 * sVar37))),1);
          uVar43 = psubsw(CONCAT26(sVar38 * sVar49,
                                   CONCAT24(sVar35 * sVar46,
                                            CONCAT22(sVar29 * sVar42,(short)uVar45 * sVar37))),
                          CONCAT26((short)((ulonglong)uVar44 >> 0x30) + sVar51,
                                   CONCAT24((short)((ulonglong)uVar44 >> 0x20) + sVar50,
                                            CONCAT22((short)((ulonglong)uVar44 >> 0x10) + sVar39,
                                                     (short)uVar44 + (short)uVar30))));
          uVar44 = psubsw(CONCAT26(sVar51 * sVar49,
                                   CONCAT24(sVar50 * sVar46,
                                            CONCAT22(sVar39 * sVar42,(short)uVar30 * sVar37))),
                          CONCAT26((short)((ulonglong)uVar1 >> 0x30) + sVar38,
                                   CONCAT24((short)((ulonglong)uVar1 >> 0x20) + sVar35,
                                            CONCAT22((short)((ulonglong)uVar1 >> 0x10) + sVar29,
                                                     (short)uVar1 + (short)uVar45))));
          uVar43 = psraw(uVar43,2);
          uVar44 = psraw(uVar44,2);
          uVar43 = paddsw(uVar43,uVar40);
          uVar44 = paddsw(uVar44,uVar40);
          uVar43 = paddsw(uVar43,u__6709a7b0._0_8_);
          uVar44 = paddsw(uVar44,u__6709a7b0._0_8_);
          uVar43 = psraw(uVar43,6);
          sVar29 = (short)uVar43;
          sVar35 = (short)((ulonglong)uVar43 >> 0x10);
          sVar38 = (short)((ulonglong)uVar43 >> 0x20);
          sVar39 = (short)((ulonglong)uVar43 >> 0x30);
          *(uint *)((int)puVar16 + iVar13) =
               CONCAT13((0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar43 >> 0x30) -
                        (0xff < sVar39),
                        CONCAT12((0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar43 >> 0x20)
                                 - (0xff < sVar38),
                                 CONCAT11((0 < sVar35) * (sVar35 < 0x100) *
                                          (char)((ulonglong)uVar43 >> 0x10) - (0xff < sVar35),
                                          (0 < sVar29) * (sVar29 < 0x100) * (char)uVar43 -
                                          (0xff < sVar29))));
          uVar43 = psraw(uVar44,6);
          sVar29 = (short)uVar43;
          sVar35 = (short)((ulonglong)uVar43 >> 0x10);
          sVar38 = (short)((ulonglong)uVar43 >> 0x20);
          sVar39 = (short)((ulonglong)uVar43 >> 0x30);
          *(uint *)((int)puVar17 + iVar13) =
               CONCAT13((0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar43 >> 0x30) -
                        (0xff < sVar39),
                        CONCAT12((0 < sVar38) * (sVar38 < 0x100) * (char)((ulonglong)uVar43 >> 0x20)
                                 - (0xff < sVar38),
                                 CONCAT11((0 < sVar35) * (sVar35 < 0x100) *
                                          (char)((ulonglong)uVar43 >> 0x10) - (0xff < sVar35),
                                          (0 < sVar29) * (sVar29 < 0x100) * (char)uVar43 -
                                          (0xff < sVar29))));
          bVar7 = 3 < iVar13;
          iVar13 = iVar13 + -4;
        } while (bVar7);
        puVar18 = puVar18 + 0x20;
        puVar17 = puVar17 + 4;
        puVar16 = puVar16 + 4;
        param_6 = param_6 + -1;
        iVar13 = iVar11;
      } while (param_6 != 0);
    }
  }
  else {
    puVar16 = (undefined4 *)(param_2 + param_3 * -2);
    iVar13 = param_6;
    iVar12 = param_6;
    do {
      do {
        uVar2 = *(undefined4 *)((int)puVar16 + param_3 * 2);
        uVar21 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
        sVar56 = (short)DAT_6709a798;
        sVar57 = (short)((ulonglong)DAT_6709a798 >> 0x10);
        sVar58 = (short)((ulonglong)DAT_6709a798 >> 0x20);
        sVar59 = (short)((ulonglong)DAT_6709a798 >> 0x30);
        uVar3 = *puVar16;
        uVar19 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                 CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                       0x20),uVar3) >> 0x18);
        uVar24 = (uint5)uVar19 & 0xffffffff00;
        uVar4 = *(undefined4 *)((int)puVar16 + param_3 * 3);
        uVar8 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar4 >> 0x18) << 0x30)
                                                       >> 0x28),
                                                CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >> 0x20
                                      ),uVar4) >> 0x18);
        uVar48 = (uint5)uVar8 & 0xffffffff00;
        uVar25 = (ushort)CONCAT41(uVar8,(char)((uint)uVar4 >> 8)) & 0xff;
        sVar51 = (short)(uVar48 >> 8);
        sVar52 = (short)(uVar48 >> 0x18);
        uVar5 = puVar16[param_3];
        uVar8 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar5 >> 0x18) << 0x30)
                                                       >> 0x28),
                                                CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >> 0x20
                                      ),uVar5) >> 0x18);
        uVar48 = (uint5)uVar8 & 0xffffffff00;
        uVar6 = *(undefined4 *)((int)puVar16 + param_3);
        uVar20 = (ushort)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30) >> 0x28);
        sVar50 = (short)(CONCAT25(uVar20,CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20);
        uVar22 = (ushort)uVar6 & 0xff;
        uVar23 = (ushort)(byte)((uint)uVar6 >> 8);
        uVar20 = uVar20 >> 8;
        puVar16 = puVar16 + 1;
        sVar29 = (ushort)(byte)uVar2 * sVar56 * 2;
        sVar35 = (ushort)(byte)((uint)uVar2 >> 8) * sVar57 * 2;
        sVar38 = (short)(CONCAT25(uVar21,CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20) *
                 sVar58 * 2;
        sVar39 = (uVar21 >> 8) * sVar59 * 2;
        sVar53 = (short)((ulonglong)DAT_6709a7a0 >> 0x10);
        sVar54 = (short)((ulonglong)DAT_6709a7a0 >> 0x20);
        sVar55 = (short)((ulonglong)DAT_6709a7a0 >> 0x30);
        uVar43 = psraw(CONCAT26((sVar52 * sVar59 - ((short)(uVar48 >> 0x18) + uVar20)) + sVar39 +
                                sVar55,CONCAT24((sVar51 * sVar58 - ((short)(uVar48 >> 8) + sVar50))
                                                + sVar38 + sVar54,
                                                CONCAT22((uVar25 * sVar57 -
                                                         (((ushort)(CONCAT43(uVar8,CONCAT12((char)((
                                                  uint)uVar5 >> 8),(ushort)uVar5)) >> 0x10) & 0xff)
                                                  + uVar23)) + sVar35 + sVar53,
                                                  ((ushort)(byte)uVar4 * sVar56 -
                                                  (((ushort)uVar5 & 0xff) + uVar22)) + sVar29 +
                                                  (short)DAT_6709a7a0))),4);
        sVar37 = (short)uVar43;
        sVar42 = (short)((ulonglong)uVar43 >> 0x10);
        sVar46 = (short)((ulonglong)uVar43 >> 0x20);
        sVar49 = (short)((ulonglong)uVar43 >> 0x30);
        *puVar17 = CONCAT13((0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar43 >> 0x30) -
                            (0xff < sVar49),
                            CONCAT12((0 < sVar46) * (sVar46 < 0x100) *
                                     (char)((ulonglong)uVar43 >> 0x20) - (0xff < sVar46),
                                     CONCAT11((0 < sVar42) * (sVar42 < 0x100) *
                                              (char)((ulonglong)uVar43 >> 0x10) - (0xff < sVar42),
                                              (0 < sVar37) * (sVar37 < 0x100) * (char)uVar43 -
                                              (0xff < sVar37))));
        uVar43 = psraw(CONCAT26((uVar20 * sVar59 - ((short)(uVar24 >> 0x18) + sVar52)) + sVar39 +
                                sVar55,CONCAT24((sVar50 * sVar58 - ((short)(uVar24 >> 8) + sVar51))
                                                + sVar38 + sVar54,
                                                CONCAT22((uVar23 * sVar57 -
                                                         (((ushort)(CONCAT43(uVar19,CONCAT12((char)(
                                                  (uint)uVar3 >> 8),(ushort)uVar3)) >> 0x10) & 0xff)
                                                  + uVar25)) + sVar35 + sVar53,
                                                  (uVar22 * sVar56 -
                                                  (((ushort)uVar3 & 0xff) + (ushort)(byte)uVar4)) +
                                                  sVar29 + (short)DAT_6709a7a0))),4);
        sVar37 = (short)uVar43;
        sVar42 = (short)((ulonglong)uVar43 >> 0x10);
        sVar46 = (short)((ulonglong)uVar43 >> 0x20);
        sVar49 = (short)((ulonglong)uVar43 >> 0x30);
        puVar17[0x40] =
             CONCAT13((0 < sVar49) * (sVar49 < 0x100) * (char)((ulonglong)uVar43 >> 0x30) -
                      (0xff < sVar49),
                      CONCAT12((0 < sVar46) * (sVar46 < 0x100) * (char)((ulonglong)uVar43 >> 0x20) -
                               (0xff < sVar46),
                               CONCAT11((0 < sVar42) * (sVar42 < 0x100) *
                                        (char)((ulonglong)uVar43 >> 0x10) - (0xff < sVar42),
                                        (0 < sVar37) * (sVar37 < 0x100) * (char)uVar43 -
                                        (0xff < sVar37))));
        puVar17 = puVar17 + 1;
        iVar13 = iVar13 + -4;
      } while (iVar13 != 0);
      puVar16 = (undefined4 *)((int)puVar16 + (param_3 - param_6));
      puVar17 = (undefined4 *)((int)puVar17 + (0x10 - param_6));
      iVar12 = iVar12 + -1;
      iVar13 = param_6;
    } while (iVar12 != 0);
  }
  iVar13 = (*(code *)param_7)(param_3);
  iVar12 = (*(code *)param_7)(param_3);
  if ((iVar12 < *param_4) || (iVar13 < *param_4)) {
    if (iVar12 < iVar13) {
      *param_4 = iVar12;
      param_5[1] = param_5[1] + -1;
    }
    else {
      *param_4 = iVar13;
      param_5[1] = param_5[1] + '\x01';
    }
  }
  return;
}


