/* Module: rnco3260.dll
   Function: MMXSharpenFilter
   Address: 63763770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MMXSharpenFilter(undefined8 *param_1,undefined8 *param_2,uint param_3,int param_4,int param_5,
                     int param_6,int param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  byte bVar25;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  uint5 uVar32;
  ulonglong uVar26;
  ulonglong uVar27;
  ushort uVar33;
  ushort uVar34;
  byte bVar37;
  byte bVar39;
  byte bVar40;
  uint5 uVar38;
  ulonglong uVar35;
  undefined8 uVar36;
  ushort uVar41;
  ushort uVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short local_78;
  undefined4 uStack_76;
  ushort uStack_72;
  short local_70;
  int local_44;
  undefined8 *local_38;
  undefined8 *local_34;
  
                    /* 0x73770  1  MMXSharpenFilter */
  uVar13 = DAT_637653d8;
  uVar14 = param_3 + 7 & 0xfffffff8;
  uVar15 = uVar14 - 8;
  bVar25 = (byte)param_7;
  uVar11 = (ushort)(((uint7)bVar25 << 0x30) >> 0x28);
  uVar10 = (ushort)bVar25;
  local_38 = (undefined8 *)(param_6 + 7U & 0xfffffff8);
  local_34 = (undefined8 *)((int)local_38 + param_5 * 2);
  puVar1 = (undefined8 *)((int)local_38 + param_5 * 4);
  puVar2 = (undefined8 *)((int)puVar1 + param_5 * 2);
  if ((param_3 & 7) == 0) {
    uVar36 = *(undefined8 *)((int)param_1 + uVar15);
    *(undefined8 *)((int)puVar2 + uVar15) = uVar36;
    uVar6 = *(undefined4 *)((int)param_1 + (uVar14 - 0xc));
    *(undefined8 *)((int)param_2 + uVar15) = uVar36;
    bVar29 = (byte)((ulonglong)uVar36 >> 0x10);
    uVar9 = (ushort)(((uint7)bVar29 << 0x30) >> 0x28);
    bVar28 = (byte)((ulonglong)uVar36 >> 8);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x18);
    uVar33 = (ushort)(((uint7)bVar30 << 0x30) >> 0x28);
    uVar41 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
    *(ulonglong *)((int)local_38 + uVar15 * 2) =
         CONCAT26((uVar9 >> 8) + (uVar41 >> 8) + (uVar33 >> 8) * 2,
                  CONCAT24((short)CONCAT21(uVar9,bVar28) + (short)CONCAT21(uVar41,bVar30) +
                           (short)CONCAT21(uVar33,bVar29) * 2,
                           CONCAT22((ushort)(byte)uVar36 + (ushort)bVar29 + (ushort)bVar28 * 2,
                                    (ushort)(byte)((uint)uVar6 >> 0x18) +
                                    ((ushort)((ulonglong)uVar36 >> 8) & 0xff) +
                                    ((ushort)uVar36 & 0xff) * 2)));
    uVar36 = *(undefined8 *)((int)param_1 + uVar15 + param_5);
    bVar29 = (byte)((ulonglong)uVar36 >> 0x10);
    uVar9 = (ushort)(((uint7)bVar29 << 0x30) >> 0x28);
    bVar28 = (byte)((ulonglong)uVar36 >> 8);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x18);
    uVar33 = (ushort)(((uint7)bVar30 << 0x30) >> 0x28);
    uVar41 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
    *(ulonglong *)((int)local_34 + uVar15 * 2) =
         CONCAT26((uVar9 >> 8) + (uVar41 >> 8) + (uVar33 >> 8) * 2,
                  CONCAT24((short)CONCAT21(uVar9,bVar28) + (short)CONCAT21(uVar41,bVar30) +
                           (short)CONCAT21(uVar33,bVar29) * 2,
                           CONCAT22((ushort)(byte)uVar36 + (ushort)bVar29 + (ushort)bVar28 * 2,
                                    (ushort)(byte)((uint)*(undefined4 *)
                                                          ((int)param_1 + uVar15 + param_5 + -4) >>
                                                  0x18) + ((ushort)((ulonglong)uVar36 >> 8) & 0xff)
                                    + ((ushort)uVar36 & 0xff) * 2)));
    uVar36 = *(undefined8 *)((int)param_1 + uVar15);
    bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
    bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x20);
    bVar31 = (byte)((ulonglong)uVar36 >> 0x28);
    uVar9 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
    *(ulonglong *)((int)local_38 + uVar15 * 2 + 8) =
         CONCAT26((uVar9 >> 8) + (ushort)bVar29 * 2,
                  CONCAT24((ushort)bVar29 + (short)CONCAT21(uVar9,bVar31) + (ushort)bVar28 * 2,
                           CONCAT22((ushort)bVar28 + (ushort)bVar30 + (ushort)bVar31 * 2,
                                    ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                    ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                    (ushort)bVar30 * 2)));
    uVar36 = *(undefined8 *)((int)param_1 + uVar15 + param_5);
    bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
    bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x20);
    bVar31 = (byte)((ulonglong)uVar36 >> 0x28);
    uVar9 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
    *(ulonglong *)((int)local_34 + uVar15 * 2 + 8) =
         CONCAT26((uVar9 >> 8) + (ushort)bVar29 * 2,
                  CONCAT24((ushort)bVar29 + (short)CONCAT21(uVar9,bVar31) + (ushort)bVar28 * 2,
                           CONCAT22((ushort)bVar28 + (ushort)bVar30 + (ushort)bVar31 * 2,
                                    ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                    ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                    (ushort)bVar30 * 2)));
    iVar22 = uVar14 - 0x10;
  }
  else {
    *(undefined1 *)((int)param_2 + (param_3 - 1)) = *(undefined1 *)((int)param_1 + (param_3 - 1));
    uVar21 = param_3;
    while (uVar20 = uVar21 - 1, uVar15 != uVar20) {
      bVar28 = *(byte *)((int)param_1 + (uVar21 - 2));
      *(byte *)((int)param_2 + (uVar21 - 2)) = bVar28;
      *(ushort *)((int)local_38 + uVar20 * 2 + -2) =
           (ushort)bVar28 * 2 + (ushort)*(byte *)((int)param_1 + (uVar21 - 3)) +
           (ushort)*(byte *)((int)param_1 + uVar20);
      *(ushort *)((int)local_34 + uVar20 * 2 + -2) =
           (ushort)*(byte *)((int)param_1 + uVar20 + param_5 + -1) * 2 +
           (ushort)*(byte *)((int)param_1 + uVar20 + param_5 + -2) +
           (ushort)*(byte *)((int)param_1 + uVar20 + param_5);
      uVar21 = uVar20;
    }
    iVar22 = uVar14 - 0x10;
  }
  do {
    puVar16 = (undefined8 *)((int)param_1 + param_5);
    uVar36 = *(undefined8 *)((int)param_1 + iVar22);
    *(undefined8 *)((int)puVar2 + iVar22) = uVar36;
    uVar6 = *(undefined4 *)((int)param_1 + iVar22 + -4);
    *(undefined8 *)((int)param_2 + iVar22) = uVar36;
    bVar29 = (byte)((ulonglong)uVar36 >> 0x10);
    uVar9 = (ushort)(((uint7)bVar29 << 0x30) >> 0x28);
    bVar28 = (byte)((ulonglong)uVar36 >> 8);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x18);
    uVar33 = (ushort)(((uint7)bVar30 << 0x30) >> 0x28);
    uVar41 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
    *(ulonglong *)((int)local_38 + iVar22 * 2) =
         CONCAT26((uVar9 >> 8) + (uVar41 >> 8) + (uVar33 >> 8) * 2,
                  CONCAT24((short)CONCAT21(uVar9,bVar28) + (short)CONCAT21(uVar41,bVar30) +
                           (short)CONCAT21(uVar33,bVar29) * 2,
                           CONCAT22((ushort)(byte)uVar36 + (ushort)bVar29 + (ushort)bVar28 * 2,
                                    (ushort)(byte)((uint)uVar6 >> 0x18) +
                                    ((ushort)((ulonglong)uVar36 >> 8) & 0xff) +
                                    ((ushort)uVar36 & 0xff) * 2)));
    uVar36 = *(undefined8 *)((int)puVar16 + iVar22);
    bVar29 = (byte)((ulonglong)uVar36 >> 0x10);
    uVar9 = (ushort)(((uint7)bVar29 << 0x30) >> 0x28);
    bVar28 = (byte)((ulonglong)uVar36 >> 8);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x18);
    uVar33 = (ushort)(((uint7)bVar30 << 0x30) >> 0x28);
    uVar41 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
    *(ulonglong *)((int)local_34 + iVar22 * 2) =
         CONCAT26((uVar9 >> 8) + (uVar41 >> 8) + (uVar33 >> 8) * 2,
                  CONCAT24((short)CONCAT21(uVar9,bVar28) + (short)CONCAT21(uVar41,bVar30) +
                           (short)CONCAT21(uVar33,bVar29) * 2,
                           CONCAT22((ushort)(byte)uVar36 + (ushort)bVar29 + (ushort)bVar28 * 2,
                                    (ushort)(byte)((uint)*(undefined4 *)((int)puVar16 + iVar22 + -4)
                                                  >> 0x18) +
                                    ((ushort)((ulonglong)uVar36 >> 8) & 0xff) +
                                    ((ushort)uVar36 & 0xff) * 2)));
    uVar36 = *(undefined8 *)((int)param_1 + iVar22);
    uVar9 = (ushort)(((uint7)(byte)*(undefined4 *)((int)param_1 + iVar22 + 8) << 0x30) >> 0x28);
    bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
    bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x20);
    bVar31 = (byte)((ulonglong)uVar36 >> 0x28);
    uVar33 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
    *(ulonglong *)((int)local_38 + iVar22 * 2 + 8) =
         CONCAT26((uVar9 >> 8) + (uVar33 >> 8) + (ushort)bVar29 * 2,
                  CONCAT24((short)CONCAT21(uVar9,bVar29) + (short)CONCAT21(uVar33,bVar31) +
                           (ushort)bVar28 * 2,
                           CONCAT22((ushort)bVar28 + (ushort)bVar30 + (ushort)bVar31 * 2,
                                    ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                    ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                    (ushort)bVar30 * 2)));
    uVar36 = *(undefined8 *)((int)puVar16 + iVar22);
    uVar9 = (ushort)(((uint7)(byte)*(undefined4 *)((int)puVar16 + iVar22 + 8) << 0x30) >> 0x28);
    bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
    bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x20);
    bVar31 = (byte)((ulonglong)uVar36 >> 0x28);
    uVar33 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
    *(ulonglong *)((int)local_34 + iVar22 * 2 + 8) =
         CONCAT26((uVar9 >> 8) + (uVar33 >> 8) + (ushort)bVar29 * 2,
                  CONCAT24((short)CONCAT21(uVar9,bVar29) + (short)CONCAT21(uVar33,bVar31) +
                           (ushort)bVar28 * 2,
                           CONCAT22((ushort)bVar28 + (ushort)bVar30 + (ushort)bVar31 * 2,
                                    ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                    ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                    (ushort)bVar30 * 2)));
    iVar19 = iVar22 + -8;
    bVar8 = 7 < iVar22;
    iVar22 = iVar19;
  } while (iVar19 != 0 && bVar8);
  uVar36 = *param_1;
  *puVar2 = uVar36;
  *param_2 = uVar36;
  bVar29 = (byte)((ulonglong)uVar36 >> 0x10);
  uVar9 = (ushort)(((uint7)bVar29 << 0x30) >> 0x28);
  bVar28 = (byte)((ulonglong)uVar36 >> 8);
  bVar30 = (byte)((ulonglong)uVar36 >> 0x18);
  uVar33 = (ushort)(((uint7)bVar30 << 0x30) >> 0x28);
  uVar41 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
  *local_38 = CONCAT26((uVar9 >> 8) + (uVar41 >> 8) + (uVar33 >> 8) * 2,
                       CONCAT24((short)CONCAT21(uVar9,bVar28) + (short)CONCAT21(uVar41,bVar30) +
                                (short)CONCAT21(uVar33,bVar29) * 2,
                                CONCAT22((ushort)(byte)uVar36 + (ushort)bVar29 + (ushort)bVar28 * 2,
                                         ((ushort)((ulonglong)uVar36 >> 8) & 0xff) +
                                         ((ushort)uVar36 & 0xff) * 2)));
  uVar36 = *puVar16;
  bVar29 = (byte)((ulonglong)uVar36 >> 0x10);
  uVar9 = (ushort)(((uint7)bVar29 << 0x30) >> 0x28);
  bVar28 = (byte)((ulonglong)uVar36 >> 8);
  bVar30 = (byte)((ulonglong)uVar36 >> 0x18);
  uVar33 = (ushort)(((uint7)bVar30 << 0x30) >> 0x28);
  uVar41 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
  *local_34 = CONCAT26((uVar9 >> 8) + (uVar41 >> 8) + (uVar33 >> 8) * 2,
                       CONCAT24((short)CONCAT21(uVar9,bVar28) + (short)CONCAT21(uVar41,bVar30) +
                                (short)CONCAT21(uVar33,bVar29) * 2,
                                CONCAT22((ushort)(byte)uVar36 + (ushort)bVar29 + (ushort)bVar28 * 2,
                                         ((ushort)((ulonglong)uVar36 >> 8) & 0xff) +
                                         ((ushort)uVar36 & 0xff) * 2)));
  uVar36 = *param_1;
  uVar9 = (ushort)(((uint7)(byte)*(undefined4 *)(param_1 + 1) << 0x30) >> 0x28);
  bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
  bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
  bVar30 = (byte)((ulonglong)uVar36 >> 0x20);
  bVar31 = (byte)((ulonglong)uVar36 >> 0x28);
  uVar33 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
  local_38[1] = CONCAT26((uVar9 >> 8) + (uVar33 >> 8) + (ushort)bVar29 * 2,
                         CONCAT24((short)CONCAT21(uVar9,bVar29) + (short)CONCAT21(uVar33,bVar31) +
                                  (ushort)bVar28 * 2,
                                  CONCAT22((ushort)bVar28 + (ushort)bVar30 + (ushort)bVar31 * 2,
                                           ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                           ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                           (ushort)bVar30 * 2)));
  uVar36 = *puVar16;
  uVar9 = (ushort)(((uint7)(byte)*(undefined4 *)(puVar16 + 1) << 0x30) >> 0x28);
  bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
  bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
  bVar30 = (byte)((ulonglong)uVar36 >> 0x20);
  bVar31 = (byte)((ulonglong)uVar36 >> 0x28);
  uVar33 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
  local_34[1] = CONCAT26((uVar9 >> 8) + (uVar33 >> 8) + (ushort)bVar29 * 2,
                         CONCAT24((short)CONCAT21(uVar9,bVar29) + (short)CONCAT21(uVar33,bVar31) +
                                  (ushort)bVar28 * 2,
                                  CONCAT22((ushort)bVar28 + (ushort)bVar30 + (ushort)bVar31 * 2,
                                           ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                           ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                           (ushort)bVar30 * 2)));
  puVar16 = (undefined8 *)((int)puVar16 + param_5);
  puVar23 = (undefined4 *)((int)param_1 + param_5);
  puVar24 = (undefined4 *)((int)param_2 + param_5);
  local_44 = param_4 + -2;
  while( true ) {
    puVar18 = puVar1;
    sVar51 = (short)uVar13;
    sVar53 = (short)((ulonglong)uVar13 >> 0x10);
    sVar49 = (short)((ulonglong)uVar13 >> 0x20);
    sVar54 = (short)((ulonglong)uVar13 >> 0x30);
    uVar9 = (ushort)bVar25;
    sVar45 = (short)CONCAT21(uVar11,bVar25);
    if ((param_3 & 7) != 0) break;
    uVar36 = *(undefined8 *)((int)puVar16 + uVar15);
    bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
    bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
    bVar39 = (byte)((ulonglong)uVar36 >> 0x20);
    bVar40 = (byte)((ulonglong)uVar36 >> 0x28);
    uVar33 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
    *(ulonglong *)((int)puVar18 + uVar15 * 2 + 8) =
         CONCAT26((uVar33 >> 8) + (ushort)bVar29 * 2,
                  CONCAT24((ushort)bVar29 + (short)CONCAT21(uVar33,bVar40) + (ushort)bVar28 * 2,
                           CONCAT22((ushort)bVar28 + (ushort)bVar39 + (ushort)bVar40 * 2,
                                    ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                    ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                    (ushort)bVar39 * 2)));
    uVar36 = *(undefined8 *)((int)puVar16 + uVar15);
    bVar31 = (byte)((ulonglong)uVar36 >> 0x10);
    uVar33 = (ushort)(((uint7)bVar31 << 0x30) >> 0x28);
    bVar30 = (byte)((ulonglong)uVar36 >> 8);
    bVar37 = (byte)((ulonglong)uVar36 >> 0x18);
    uVar41 = (ushort)(((uint7)bVar37 << 0x30) >> 0x28);
    uVar34 = (ushort)uVar36 & 0xff;
    uVar42 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
    sVar50 = (short)CONCAT21(uVar41,bVar31);
    uVar41 = uVar41 >> 8;
    *(ulonglong *)((int)puVar18 + uVar15 * 2) =
         CONCAT26((uVar33 >> 8) + (uVar42 >> 8) + uVar41 * 2,
                  CONCAT24((short)CONCAT21(uVar33,bVar30) + (short)CONCAT21(uVar42,bVar37) +
                           sVar50 * 2,
                           CONCAT22((ushort)(byte)uVar36 + (ushort)bVar31 + (ushort)bVar30 * 2,
                                    (ushort)(byte)((uint)*(undefined4 *)
                                                          ((int)puVar16 + (uVar14 - 0xc)) >> 0x18) +
                                    ((ushort)((ulonglong)uVar36 >> 8) & 0xff) + uVar34 * 2)));
    uVar6 = *(undefined4 *)((int)puVar2 + (uVar14 - 4));
    uVar7 = *(undefined4 *)((int)puVar23 + (uVar14 - 4));
    uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20),
                             uVar6) >> 0x18);
    uVar32 = (uint5)uVar21 & 0xffffffff00;
    uVar20 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar7 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar7 >> 0x10),uVar7)) >> 0x20),
                             uVar7) >> 0x18);
    uVar38 = (uint5)uVar20 & 0xffffffff00;
    local_70 = ((ushort)uVar6 & 0xff) + (ushort)bVar39 + ((ushort)uVar7 & 0xff) * 2;
    uVar35 = CONCAT26((short)(uVar32 >> 0x18) + (ushort)bVar29 + (short)(uVar38 >> 0x18) * 2,
                      CONCAT24((short)(uVar32 >> 8) + (ushort)bVar28 + (short)(uVar38 >> 8) * 2,
                               CONCAT22(((ushort)(CONCAT43(uVar21,CONCAT12((char)((uint)uVar6 >> 8),
                                                                           (ushort)uVar6)) >> 0x10)
                                        & 0xff) + (ushort)bVar40 +
                                        ((ushort)(CONCAT43(uVar20,CONCAT12((char)((uint)uVar7 >> 8),
                                                                           (ushort)uVar7)) >> 0x10)
                                        & 0xff) * 2,local_70)));
    uVar6 = *(undefined4 *)((int)puVar2 + uVar15);
    uVar7 = *(undefined4 *)((int)puVar23 + uVar15);
    uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20),
                             uVar6) >> 0x18);
    uVar38 = (uint5)uVar21 & 0xffffffff00;
    uVar20 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar7 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar7 >> 0x10),uVar7)) >> 0x20),
                             uVar7) >> 0x18);
    uVar32 = (uint5)uVar20 & 0xffffffff00;
    local_78 = ((ushort)uVar6 & 0xff) + uVar34 + ((ushort)uVar7 & 0xff) * 2;
    uStack_72 = (short)(uVar38 >> 0x18) + uVar41 + (short)(uVar32 >> 0x18) * 2;
    uStack_76 = (undefined4)
                (CONCAT24((short)(uVar38 >> 8) + sVar50 + (short)(uVar32 >> 8) * 2,
                          CONCAT22(((ushort)(CONCAT43(uVar21,CONCAT12((char)((uint)uVar6 >> 8),
                                                                      (ushort)uVar6)) >> 0x10) &
                                   0xff) + (ushort)bVar30 +
                                   ((ushort)(CONCAT43(uVar20,CONCAT12((char)((uint)uVar7 >> 8),
                                                                      (ushort)uVar7)) >> 0x10) &
                                   0xff) * 2,local_78)) >> 0x10);
    uVar26 = uVar35 << 0x10 | (ulonglong)uStack_72;
    uVar35 = uVar35 >> 0x10;
    uVar27 = psubusw(uVar26,uVar35);
    uVar35 = psubusw(uVar35,uVar26);
    uVar27 = uVar27 | uVar35;
    uVar36 = *(undefined8 *)((int)local_38 + uVar15 * 2 + 8);
    uVar3 = *(undefined8 *)((int)puVar18 + uVar15 * 2 + 8);
    uVar35 = psubusw(uVar36,uVar3);
    uVar26 = psubusw(uVar3,uVar36);
    uVar35 = uVar35 | uVar26;
    uVar35 = (CONCAT26(-(ushort)(sVar54 < (short)(uVar27 >> 0x30)),
                       CONCAT24(-(ushort)(sVar49 < (short)(uVar27 >> 0x20)),
                                CONCAT22(-(ushort)(sVar53 < (short)(uVar27 >> 0x10)),
                                         -(ushort)(sVar51 < (short)uVar27)))) |
             CONCAT26(-(ushort)(sVar54 < (short)(uVar35 >> 0x30)),
                      CONCAT24(-(ushort)(sVar49 < (short)(uVar35 >> 0x20)),
                               CONCAT22(-(ushort)(sVar53 < (short)(uVar35 >> 0x10)),
                                        -(ushort)(sVar51 < (short)uVar35))))) & _DAT_637653d0;
    uVar3 = *(undefined8 *)((int)local_34 + uVar15 * 2 + 8);
    uVar4 = *(undefined8 *)((int)puVar18 + uVar15 * 2 + 8);
    uVar6 = *(undefined4 *)((int)puVar23 + (uVar14 - 4));
    *(undefined4 *)((int)puVar2 + (uVar14 - 4)) = uVar6;
    uVar36 = psraw(CONCAT26((short)((ulonglong)uVar3 >> 0x30) * 2 +
                            (short)((ulonglong)uVar4 >> 0x30) + (short)((ulonglong)uVar36 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar3 >> 0x20) * 2 +
                                     (short)((ulonglong)uVar4 >> 0x20) +
                                     (short)((ulonglong)uVar36 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar3 >> 0x10) * 2 +
                                              (short)((ulonglong)uVar4 >> 0x10) +
                                              (short)((ulonglong)uVar36 >> 0x10),
                                              (short)uVar3 * 2 + (short)uVar4 + (short)uVar36))),4);
    uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20),
                             uVar6) >> 0x18);
    uVar32 = (uint5)uVar21 & 0xffffffff00;
    uVar41 = (ushort)(CONCAT43(uVar21,CONCAT12((char)((uint)uVar6 >> 8),(ushort)uVar6)) >> 0x10) &
             0xff;
    uVar33 = (ushort)uVar6 & 0xff;
    sVar50 = (short)(uVar32 >> 8);
    sVar52 = (short)(uVar32 >> 0x18);
    uVar36 = psraw(CONCAT26((sVar52 - (short)((ulonglong)uVar36 >> 0x30)) * (uVar11 >> 8),
                            CONCAT24((sVar50 - (short)((ulonglong)uVar36 >> 0x20)) * sVar45,
                                     CONCAT22((uVar41 - (short)((ulonglong)uVar36 >> 0x10)) * uVar9,
                                              (uVar33 - (short)uVar36) * uVar10))) & uVar35,3);
    sVar43 = uVar33 + (short)uVar36;
    sVar46 = uVar41 + (short)((ulonglong)uVar36 >> 0x10);
    sVar50 = sVar50 + (short)((ulonglong)uVar36 >> 0x20);
    sVar52 = sVar52 + (short)((ulonglong)uVar36 >> 0x30);
    *(uint *)((int)puVar24 + (uVar14 - 4)) =
         CONCAT13((0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52),
                  CONCAT12((0 < sVar50) * (sVar50 < 0x100) * (char)sVar50 - (0xff < sVar50),
                           CONCAT11((0 < sVar46) * (sVar46 < 0x100) * (char)sVar46 - (0xff < sVar46)
                                    ,(0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 -
                                     (0xff < sVar43))));
    uVar20 = uVar15;
    while( true ) {
      uVar36 = *(undefined8 *)((int)puVar16 + (uVar20 - 8));
      uVar33 = (ushort)(((uint7)(byte)*(undefined4 *)((int)puVar16 + uVar20) << 0x30) >> 0x28);
      bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
      bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
      bVar30 = (byte)((ulonglong)uVar36 >> 0x20);
      bVar31 = (byte)((ulonglong)uVar36 >> 0x28);
      uVar41 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
      *(ulonglong *)((int)puVar18 + uVar20 * 2 + -8) =
           CONCAT26((uVar33 >> 8) + (uVar41 >> 8) + (ushort)bVar29 * 2,
                    CONCAT24((short)CONCAT21(uVar33,bVar29) + (short)CONCAT21(uVar41,bVar31) +
                             (ushort)bVar28 * 2,
                             CONCAT22((ushort)bVar28 + (ushort)bVar30 + (ushort)bVar31 * 2,
                                      ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                      ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                      (ushort)bVar30 * 2)));
      uVar6 = *(undefined4 *)((int)puVar2 + (uVar20 - 4));
      uVar7 = *(undefined4 *)((int)puVar23 + (uVar20 - 4));
      uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30)
                                                      >> 0x28),
                                               CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20)
                               ,uVar6) >> 0x18);
      uVar32 = (uint5)uVar21 & 0xffffffff00;
      uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar7 >> 0x18) << 0x30)
                                                      >> 0x28),
                                               CONCAT14((char)((uint)uVar7 >> 0x10),uVar7)) >> 0x20)
                               ,uVar7) >> 0x18);
      uVar38 = (uint5)uVar17 & 0xffffffff00;
      sVar50 = ((ushort)uVar6 & 0xff) + (ushort)bVar30 + ((ushort)uVar7 & 0xff) * 2;
      sVar52 = (short)(uVar32 >> 0x18) + (ushort)bVar29 + (short)(uVar38 >> 0x18) * 2;
      uVar36 = CONCAT26(local_70,CONCAT24(uStack_72,uStack_76));
      uVar35 = CONCAT62(CONCAT42(uStack_76,local_78),sVar52);
      uVar26 = psubusw(uVar35,uVar36);
      uVar35 = psubusw(uVar36,(ulonglong)CONCAT42(uStack_76,local_78) << 0x10 | uVar35);
      uVar26 = uVar26 | uVar35;
      local_70 = local_78;
      uVar36 = *(undefined8 *)((int)local_38 + uVar20 * 2);
      uVar3 = *(undefined8 *)((int)puVar18 + uVar20 * 2);
      uVar35 = psubusw(uVar36,uVar3);
      uVar27 = psubusw(uVar3,uVar36);
      uStack_76 = (undefined4)
                  (CONCAT24((short)(uVar32 >> 8) + (ushort)bVar28 + (short)(uVar38 >> 8) * 2,
                            CONCAT22(((ushort)(CONCAT43(uVar21,CONCAT12((char)((uint)uVar6 >> 8),
                                                                        (ushort)uVar6)) >> 0x10) &
                                     0xff) + (ushort)bVar31 +
                                     ((ushort)(CONCAT43(uVar17,CONCAT12((char)((uint)uVar7 >> 8),
                                                                        (ushort)uVar7)) >> 0x10) &
                                     0xff) * 2,sVar50)) >> 0x10);
      uVar35 = uVar35 | uVar27;
      uVar3 = *(undefined8 *)((int)local_34 + uVar20 * 2);
      uVar4 = *(undefined8 *)((int)puVar18 + uVar20 * 2);
      uVar6 = *(undefined4 *)((int)puVar23 + uVar20);
      *(undefined4 *)((int)puVar2 + uVar20) = uVar6;
      uVar36 = psraw(CONCAT26((short)((ulonglong)uVar3 >> 0x30) * 2 +
                              (short)((ulonglong)uVar4 >> 0x30) + (short)((ulonglong)uVar36 >> 0x30)
                              ,CONCAT24((short)((ulonglong)uVar3 >> 0x20) * 2 +
                                        (short)((ulonglong)uVar4 >> 0x20) +
                                        (short)((ulonglong)uVar36 >> 0x20),
                                        CONCAT22((short)((ulonglong)uVar3 >> 0x10) * 2 +
                                                 (short)((ulonglong)uVar4 >> 0x10) +
                                                 (short)((ulonglong)uVar36 >> 0x10),
                                                 (short)uVar3 * 2 + (short)uVar4 + (short)uVar36))),
                     4);
      uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30)
                                                      >> 0x28),
                                               CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20)
                               ,uVar6) >> 0x18);
      uVar32 = (uint5)uVar21 & 0xffffffff00;
      uVar41 = (ushort)(CONCAT43(uVar21,CONCAT12((char)((uint)uVar6 >> 8),(ushort)uVar6)) >> 0x10) &
               0xff;
      uVar33 = (ushort)uVar6 & 0xff;
      sVar43 = (short)(uVar32 >> 8);
      sVar46 = (short)(uVar32 >> 0x18);
      uVar36 = psraw(CONCAT26((sVar46 - (short)((ulonglong)uVar36 >> 0x30)) * (uVar11 >> 8),
                              CONCAT24((sVar43 - (short)((ulonglong)uVar36 >> 0x20)) * sVar45,
                                       CONCAT22((uVar41 - (short)((ulonglong)uVar36 >> 0x10)) *
                                                uVar9,(uVar33 - (short)uVar36) * uVar10))) &
                     (CONCAT26(-(ushort)(sVar54 < (short)(uVar26 >> 0x30)),
                               CONCAT24(-(ushort)(sVar49 < (short)(uVar26 >> 0x20)),
                                        CONCAT22(-(ushort)(sVar53 < (short)(uVar26 >> 0x10)),
                                                 -(ushort)(sVar51 < (short)uVar26)))) |
                     CONCAT26(-(ushort)(sVar54 < (short)(uVar35 >> 0x30)),
                              CONCAT24(-(ushort)(sVar49 < (short)(uVar35 >> 0x20)),
                                       CONCAT22(-(ushort)(sVar53 < (short)(uVar35 >> 0x10)),
                                                -(ushort)(sVar51 < (short)uVar35))))),3);
      sVar44 = uVar33 + (short)uVar36;
      sVar47 = uVar41 + (short)((ulonglong)uVar36 >> 0x10);
      sVar43 = sVar43 + (short)((ulonglong)uVar36 >> 0x20);
      sVar46 = sVar46 + (short)((ulonglong)uVar36 >> 0x30);
      *(uint *)((int)puVar24 + uVar20) =
           CONCAT13((0 < sVar46) * (sVar46 < 0x100) * (char)sVar46 - (0xff < sVar46),
                    CONCAT12((0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43),
                             CONCAT11((0 < sVar47) * (sVar47 < 0x100) * (char)sVar47 -
                                      (0xff < sVar47),
                                      (0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 -
                                      (0xff < sVar44))));
      uVar21 = uVar20 - 8;
      uStack_72 = sVar52;
      if (uVar21 == 0 || (int)uVar20 < 8) break;
LAB_63763dfa:
      local_78 = sVar50;
      uVar36 = *(undefined8 *)((int)puVar16 + uVar21);
      bVar29 = (byte)((ulonglong)uVar36 >> 0x10);
      uVar33 = (ushort)(((uint7)bVar29 << 0x30) >> 0x28);
      bVar28 = (byte)((ulonglong)uVar36 >> 8);
      bVar30 = (byte)((ulonglong)uVar36 >> 0x18);
      uVar41 = (ushort)(((uint7)bVar30 << 0x30) >> 0x28);
      uVar34 = (ushort)uVar36 & 0xff;
      uVar42 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
      sVar52 = (short)CONCAT21(uVar41,bVar29);
      uVar41 = uVar41 >> 8;
      *(ulonglong *)((int)puVar18 + uVar21 * 2) =
           CONCAT26((uVar33 >> 8) + (uVar42 >> 8) + uVar41 * 2,
                    CONCAT24((short)CONCAT21(uVar33,bVar28) + (short)CONCAT21(uVar42,bVar30) +
                             sVar52 * 2,
                             CONCAT22((ushort)(byte)uVar36 + (ushort)bVar29 + (ushort)bVar28 * 2,
                                      (ushort)(byte)((uint)*(undefined4 *)
                                                            ((int)puVar16 + (uVar21 - 4)) >> 0x18) +
                                      ((ushort)((ulonglong)uVar36 >> 8) & 0xff) + uVar34 * 2)));
      uVar6 = *(undefined4 *)((int)puVar2 + uVar21);
      uVar7 = *(undefined4 *)((int)puVar23 + uVar21);
      uVar20 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30)
                                                      >> 0x28),
                                               CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20)
                               ,uVar6) >> 0x18);
      uVar32 = (uint5)uVar20 & 0xffffffff00;
      uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar7 >> 0x18) << 0x30)
                                                      >> 0x28),
                                               CONCAT14((char)((uint)uVar7 >> 0x10),uVar7)) >> 0x20)
                               ,uVar7) >> 0x18);
      uVar38 = (uint5)uVar17 & 0xffffffff00;
      sVar50 = ((ushort)uVar6 & 0xff) + uVar34 + ((ushort)uVar7 & 0xff) * 2;
      uVar33 = (short)(uVar32 >> 0x18) + uVar41 + (short)(uVar38 >> 0x18) * 2;
      uVar36 = CONCAT26(local_70,CONCAT24(uStack_72,uStack_76));
      uVar35 = CONCAT62(CONCAT42(uStack_76,local_78),uVar33);
      uVar26 = psubusw(uVar35,uVar36);
      uVar35 = psubusw(uVar36,(ulonglong)CONCAT42(uStack_76,local_78) << 0x10 | uVar35);
      uVar26 = uVar26 | uVar35;
      local_70 = local_78;
      uVar36 = *(undefined8 *)((int)local_38 + uVar21 * 2 + 8);
      uVar3 = *(undefined8 *)((int)puVar18 + uVar21 * 2 + 8);
      uVar35 = psubusw(uVar36,uVar3);
      uVar27 = psubusw(uVar3,uVar36);
      uStack_76 = (undefined4)
                  (CONCAT24((short)(uVar32 >> 8) + sVar52 + (short)(uVar38 >> 8) * 2,
                            CONCAT22(((ushort)(CONCAT43(uVar20,CONCAT12((char)((uint)uVar6 >> 8),
                                                                        (ushort)uVar6)) >> 0x10) &
                                     0xff) + (ushort)bVar28 +
                                     ((ushort)(CONCAT43(uVar17,CONCAT12((char)((uint)uVar7 >> 8),
                                                                        (ushort)uVar7)) >> 0x10) &
                                     0xff) * 2,sVar50)) >> 0x10);
      uVar35 = uVar35 | uVar27;
      uVar3 = *(undefined8 *)((int)local_34 + uVar21 * 2 + 8);
      uVar4 = *(undefined8 *)((int)puVar18 + uVar21 * 2 + 8);
      uVar6 = *(undefined4 *)((int)puVar23 + uVar21 + 4);
      *(undefined4 *)((int)puVar2 + uVar21 + 4) = uVar6;
      uVar36 = psraw(CONCAT26((short)((ulonglong)uVar3 >> 0x30) * 2 +
                              (short)((ulonglong)uVar4 >> 0x30) + (short)((ulonglong)uVar36 >> 0x30)
                              ,CONCAT24((short)((ulonglong)uVar3 >> 0x20) * 2 +
                                        (short)((ulonglong)uVar4 >> 0x20) +
                                        (short)((ulonglong)uVar36 >> 0x20),
                                        CONCAT22((short)((ulonglong)uVar3 >> 0x10) * 2 +
                                                 (short)((ulonglong)uVar4 >> 0x10) +
                                                 (short)((ulonglong)uVar36 >> 0x10),
                                                 (short)uVar3 * 2 + (short)uVar4 + (short)uVar36))),
                     4);
      uVar20 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30)
                                                      >> 0x28),
                                               CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20)
                               ,uVar6) >> 0x18);
      uVar32 = (uint5)uVar20 & 0xffffffff00;
      uVar42 = (ushort)(CONCAT43(uVar20,CONCAT12((char)((uint)uVar6 >> 8),(ushort)uVar6)) >> 0x10) &
               0xff;
      uVar41 = (ushort)uVar6 & 0xff;
      sVar52 = (short)(uVar32 >> 8);
      sVar43 = (short)(uVar32 >> 0x18);
      uVar36 = psraw(CONCAT26((sVar43 - (short)((ulonglong)uVar36 >> 0x30)) * (uVar11 >> 8),
                              CONCAT24((sVar52 - (short)((ulonglong)uVar36 >> 0x20)) * sVar45,
                                       CONCAT22((uVar42 - (short)((ulonglong)uVar36 >> 0x10)) *
                                                uVar9,(uVar41 - (short)uVar36) * uVar10))) &
                     (CONCAT26(-(ushort)(sVar54 < (short)(uVar26 >> 0x30)),
                               CONCAT24(-(ushort)(sVar49 < (short)(uVar26 >> 0x20)),
                                        CONCAT22(-(ushort)(sVar53 < (short)(uVar26 >> 0x10)),
                                                 -(ushort)(sVar51 < (short)uVar26)))) |
                     CONCAT26(-(ushort)(sVar54 < (short)(uVar35 >> 0x30)),
                              CONCAT24(-(ushort)(sVar49 < (short)(uVar35 >> 0x20)),
                                       CONCAT22(-(ushort)(sVar53 < (short)(uVar35 >> 0x10)),
                                                -(ushort)(sVar51 < (short)uVar35))))),3);
      sVar46 = uVar41 + (short)uVar36;
      sVar44 = uVar42 + (short)((ulonglong)uVar36 >> 0x10);
      sVar52 = sVar52 + (short)((ulonglong)uVar36 >> 0x20);
      sVar43 = sVar43 + (short)((ulonglong)uVar36 >> 0x30);
      *(uint *)((int)puVar24 + uVar21 + 4) =
           CONCAT13((0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43),
                    CONCAT12((0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52),
                             CONCAT11((0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 -
                                      (0xff < sVar44),
                                      (0 < sVar46) * (sVar46 < 0x100) * (char)sVar46 -
                                      (0xff < sVar46))));
      uVar20 = uVar21;
      local_78 = sVar50;
      uStack_72 = uVar33;
    }
    uVar36 = *puVar16;
    bVar29 = (byte)((ulonglong)uVar36 >> 0x10);
    uVar33 = (ushort)(((uint7)bVar29 << 0x30) >> 0x28);
    bVar28 = (byte)((ulonglong)uVar36 >> 8);
    bVar30 = (byte)((ulonglong)uVar36 >> 0x18);
    uVar41 = (ushort)(((uint7)bVar30 << 0x30) >> 0x28);
    uVar34 = (ushort)uVar36 & 0xff;
    uVar42 = (ushort)(((uint7)(byte)((ulonglong)uVar36 >> 0x20) << 0x30) >> 0x28);
    sVar44 = (short)CONCAT21(uVar41,bVar29);
    uVar41 = uVar41 >> 8;
    *puVar18 = CONCAT26((uVar33 >> 8) + (uVar42 >> 8) + uVar41 * 2,
                        CONCAT24((short)CONCAT21(uVar33,bVar28) + (short)CONCAT21(uVar42,bVar30) +
                                 sVar44 * 2,
                                 CONCAT22((ushort)(byte)uVar36 + (ushort)bVar29 + (ushort)bVar28 * 2
                                          ,((ushort)((ulonglong)uVar36 >> 8) & 0xff) + uVar34 * 2)))
    ;
    uVar6 = *(undefined4 *)puVar2;
    uVar7 = *puVar23;
    uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20),
                             uVar6) >> 0x18);
    uVar32 = (uint5)uVar21 & 0xffffffff00;
    uVar20 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar7 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar7 >> 0x10),uVar7)) >> 0x20),
                             uVar7) >> 0x18);
    uVar38 = (uint5)uVar20 & 0xffffffff00;
    sVar43 = ((ushort)uVar6 & 0xff) + uVar34 + ((ushort)uVar7 & 0xff) * 2;
    sVar46 = (short)(uVar32 >> 0x18) + uVar41 + (short)(uVar38 >> 0x18) * 2;
    uVar36 = CONCAT26(local_78,CONCAT24(sVar52,uStack_76));
    uVar35 = CONCAT62(CONCAT42(uStack_76,sVar50),sVar46);
    uVar26 = psubusw(uVar35,uVar36);
    uVar35 = psubusw(uVar36,(ulonglong)CONCAT42(uStack_76,sVar50) << 0x10 | uVar35);
    uVar26 = uVar26 | uVar35;
    uVar36 = local_38[1];
    uStack_76 = (undefined4)
                (CONCAT24((short)(uVar32 >> 8) + sVar44 + (short)(uVar38 >> 8) * 2,
                          CONCAT22(((ushort)(CONCAT43(uVar21,CONCAT12((char)((uint)uVar6 >> 8),
                                                                      (ushort)uVar6)) >> 0x10) &
                                   0xff) + (ushort)bVar28 +
                                   ((ushort)(CONCAT43(uVar20,CONCAT12((char)((uint)uVar7 >> 8),
                                                                      (ushort)uVar7)) >> 0x10) &
                                   0xff) * 2,sVar43)) >> 0x10);
    uVar35 = psubusw(uVar36,puVar18[1]);
    uVar27 = psubusw(puVar18[1],uVar36);
    uVar35 = uVar35 | uVar27;
    uVar3 = local_34[1];
    uVar4 = puVar18[1];
    uVar6 = puVar23[1];
    uVar36 = psraw(CONCAT26((short)((ulonglong)uVar3 >> 0x30) * 2 +
                            (short)((ulonglong)uVar4 >> 0x30) + (short)((ulonglong)uVar36 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar3 >> 0x20) * 2 +
                                     (short)((ulonglong)uVar4 >> 0x20) +
                                     (short)((ulonglong)uVar36 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar3 >> 0x10) * 2 +
                                              (short)((ulonglong)uVar4 >> 0x10) +
                                              (short)((ulonglong)uVar36 >> 0x10),
                                              (short)uVar3 * 2 + (short)uVar4 + (short)uVar36))),4);
    *(undefined4 *)((int)puVar2 + 4) = uVar6;
    uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20),
                             uVar6) >> 0x18);
    uVar32 = (uint5)uVar21 & 0xffffffff00;
    uVar41 = (ushort)(CONCAT43(uVar21,CONCAT12((char)((uint)uVar6 >> 8),(ushort)uVar6)) >> 0x10) &
             0xff;
    uVar33 = (ushort)uVar6 & 0xff;
    sVar52 = (short)(uVar32 >> 8);
    sVar44 = (short)(uVar32 >> 0x18);
    uVar36 = psraw(CONCAT26((sVar44 - (short)((ulonglong)uVar36 >> 0x30)) * (uVar11 >> 8),
                            CONCAT24((sVar52 - (short)((ulonglong)uVar36 >> 0x20)) * sVar45,
                                     CONCAT22((uVar41 - (short)((ulonglong)uVar36 >> 0x10)) * uVar9,
                                              (uVar33 - (short)uVar36) * uVar10))) &
                   (CONCAT26(-(ushort)(sVar54 < (short)(uVar26 >> 0x30)),
                             CONCAT24(-(ushort)(sVar49 < (short)(uVar26 >> 0x20)),
                                      CONCAT22(-(ushort)(sVar53 < (short)(uVar26 >> 0x10)),
                                               -(ushort)(sVar51 < (short)uVar26)))) |
                   CONCAT26(-(ushort)(sVar54 < (short)(uVar35 >> 0x30)),
                            CONCAT24(-(ushort)(sVar49 < (short)(uVar35 >> 0x20)),
                                     CONCAT22(-(ushort)(sVar53 < (short)(uVar35 >> 0x10)),
                                              -(ushort)(sVar51 < (short)uVar35))))),3);
    sVar47 = uVar33 + (short)uVar36;
    sVar48 = uVar41 + (short)((ulonglong)uVar36 >> 0x10);
    sVar52 = sVar52 + (short)((ulonglong)uVar36 >> 0x20);
    sVar44 = sVar44 + (short)((ulonglong)uVar36 >> 0x30);
    puVar24[1] = CONCAT13((0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44),
                          CONCAT12((0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52),
                                   CONCAT11((0 < sVar48) * (sVar48 < 0x100) * (char)sVar48 -
                                            (0xff < sVar48),
                                            (0 < sVar47) * (sVar47 < 0x100) * (char)sVar47 -
                                            (0xff < sVar47))));
    uVar36 = CONCAT26(sVar50,CONCAT24(sVar46,uStack_76));
    lVar12 = (ulonglong)CONCAT42(uStack_76,sVar43) << 0x10;
    uVar35 = psubusw(uVar36,lVar12);
    uVar26 = psubusw(lVar12,uVar36);
    uVar35 = uVar35 | uVar26;
    uVar36 = *local_38;
    uVar26 = psubusw(uVar36,*puVar18);
    uVar27 = psubusw(*puVar18,uVar36);
    uVar26 = uVar26 | uVar27;
    uVar35 = (CONCAT26(-(ushort)(sVar54 < (short)(uVar35 >> 0x30)),
                       CONCAT24(-(ushort)(sVar49 < (short)(uVar35 >> 0x20)),
                                CONCAT22(-(ushort)(sVar53 < (short)(uVar35 >> 0x10)),
                                         -(ushort)(sVar51 < (short)uVar35)))) |
             CONCAT26(-(ushort)(sVar54 < (short)(uVar26 >> 0x30)),
                      CONCAT24(-(ushort)(sVar49 < (short)(uVar26 >> 0x20)),
                               CONCAT22(-(ushort)(sVar53 < (short)(uVar26 >> 0x10)),
                                        -(ushort)(sVar51 < (short)uVar26))))) & _DAT_637653c8;
    uVar3 = *local_34;
    uVar4 = *puVar18;
    uVar6 = *puVar23;
    *(undefined4 *)puVar2 = uVar6;
    uVar36 = psraw(CONCAT26((short)((ulonglong)uVar3 >> 0x30) * 2 +
                            (short)((ulonglong)uVar4 >> 0x30) + (short)((ulonglong)uVar36 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar3 >> 0x20) * 2 +
                                     (short)((ulonglong)uVar4 >> 0x20) +
                                     (short)((ulonglong)uVar36 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar3 >> 0x10) * 2 +
                                              (short)((ulonglong)uVar4 >> 0x10) +
                                              (short)((ulonglong)uVar36 >> 0x10),
                                              (short)uVar3 * 2 + (short)uVar4 + (short)uVar36))),4);
    uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20),
                             uVar6) >> 0x18);
    uVar32 = (uint5)uVar21 & 0xffffffff00;
    uVar41 = (ushort)(CONCAT43(uVar21,CONCAT12((char)((uint)uVar6 >> 8),(ushort)uVar6)) >> 0x10) &
             0xff;
    uVar33 = (ushort)uVar6 & 0xff;
    sVar51 = (short)(uVar32 >> 8);
    sVar53 = (short)(uVar32 >> 0x18);
    uVar36 = psraw(CONCAT26((sVar53 - (short)((ulonglong)uVar36 >> 0x30)) * (uVar11 >> 8),
                            CONCAT24((sVar51 - (short)((ulonglong)uVar36 >> 0x20)) * sVar45,
                                     CONCAT22((uVar41 - (short)((ulonglong)uVar36 >> 0x10)) * uVar9,
                                              (uVar33 - (short)uVar36) * uVar10))) & uVar35,3);
    sVar45 = uVar33 + (short)uVar36;
    sVar49 = uVar41 + (short)((ulonglong)uVar36 >> 0x10);
    sVar51 = sVar51 + (short)((ulonglong)uVar36 >> 0x20);
    sVar53 = sVar53 + (short)((ulonglong)uVar36 >> 0x30);
    *puVar24 = CONCAT13((0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53),
                        CONCAT12((0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51),
                                 CONCAT11((0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 -
                                          (0xff < sVar49),
                                          (0 < sVar45) * (sVar45 < 0x100) * (char)sVar45 -
                                          (0xff < sVar45))));
    puVar24 = (undefined4 *)((int)puVar24 + param_5);
    puVar16 = (undefined8 *)((int)puVar23 + param_5 * 2);
    puVar23 = (undefined4 *)((int)puVar23 + param_5);
    iVar22 = local_44 + -1;
    bVar8 = local_44 < 1;
    puVar1 = local_38;
    local_44 = iVar22;
    local_38 = local_34;
    local_34 = puVar18;
    if (iVar22 == 0 || bVar8) {
      uVar15 = param_3 & 0xfffffff8;
      iVar22 = param_3 - uVar15;
      uVar14 = uVar15;
      do {
        *(undefined8 *)((int)puVar24 + (uVar14 - 8)) = *(undefined8 *)((int)puVar23 + (uVar14 - 8));
        uVar21 = uVar14 - 8;
        bVar8 = 7 < (int)uVar14;
        uVar14 = uVar21;
      } while (uVar21 != 0 && bVar8);
      if (iVar22 != 0) {
        do {
          *(undefined1 *)((int)puVar24 + iVar22 + (uVar15 - 1)) =
               *(undefined1 *)((int)puVar23 + iVar22 + (uVar15 - 1));
          iVar19 = iVar22 + -1;
          bVar8 = 0 < iVar22;
          iVar22 = iVar19;
        } while (iVar19 != 0 && bVar8);
      }
      return;
    }
  }
  uVar5 = *(undefined1 *)((int)puVar23 + (param_3 - 1));
  *(undefined1 *)((int)puVar24 + (param_3 - 1)) = uVar5;
  *(undefined1 *)((int)puVar2 + (param_3 - 1)) = uVar5;
  uVar21 = param_3;
  do {
    while( true ) {
      uVar20 = uVar21 - 1;
      if (uVar15 == uVar20) {
        local_70 = (ushort)*(byte *)((int)puVar23 + uVar20) * 2 +
                   (ushort)*(byte *)((int)puVar23 + (uVar20 - param_5)) +
                   (ushort)*(byte *)((int)puVar16 + uVar20);
        uVar36 = *(undefined8 *)((int)puVar16 + (uVar21 - 9));
        uVar33 = (ushort)(((uint7)(byte)*(undefined4 *)((int)puVar16 + uVar20) << 0x30) >> 0x28);
        bVar29 = (byte)((ulonglong)uVar36 >> 0x38);
        bVar28 = (byte)((ulonglong)uVar36 >> 0x30);
        bVar30 = (byte)((ulonglong)uVar36 >> 0x20);
        bVar31 = (byte)((ulonglong)uVar36 >> 0x28);
        uVar41 = (ushort)(((uint7)bVar28 << 0x30) >> 0x28);
        *(ulonglong *)((int)puVar18 + uVar20 * 2 + -8) =
             CONCAT26((uVar33 >> 8) + (uVar41 >> 8) + (ushort)bVar29 * 2,
                      CONCAT24((short)CONCAT21(uVar33,bVar29) + (short)CONCAT21(uVar41,bVar31) +
                               (ushort)bVar28 * 2,
                               CONCAT22((ushort)bVar28 + (ushort)bVar30 + (ushort)bVar31 * 2,
                                        ((ushort)((ulonglong)uVar36 >> 0x28) & 0xff) +
                                        ((ushort)((ulonglong)uVar36 >> 0x18) & 0xff) +
                                        (ushort)bVar30 * 2)));
        uVar6 = *(undefined4 *)((int)puVar2 + (uVar21 - 5));
        uVar7 = *(undefined4 *)((int)puVar23 + (uVar21 - 5));
        uVar20 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar6 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                 CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                       0x20),uVar6) >> 0x18);
        uVar32 = (uint5)uVar20 & 0xffffffff00;
        uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar7 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                 CONCAT14((char)((uint)uVar7 >> 0x10),uVar7)) >>
                                       0x20),uVar7) >> 0x18);
        uVar38 = (uint5)uVar17 & 0xffffffff00;
        sVar50 = ((ushort)uVar6 & 0xff) + (ushort)bVar30 + ((ushort)uVar7 & 0xff) * 2;
        uStack_72 = (short)(uVar32 >> 0x18) + (ushort)bVar29 + (short)(uVar38 >> 0x18) * 2;
        uStack_76 = (undefined4)
                    (CONCAT24((short)(uVar32 >> 8) + (ushort)bVar28 + (short)(uVar38 >> 8) * 2,
                              CONCAT22(((ushort)(CONCAT43(uVar20,CONCAT12((char)((uint)uVar6 >> 8),
                                                                          (ushort)uVar6)) >> 0x10) &
                                       0xff) + (ushort)bVar31 +
                                       ((ushort)(CONCAT43(uVar17,CONCAT12((char)((uint)uVar7 >> 8),
                                                                          (ushort)uVar7)) >> 0x10) &
                                       0xff) * 2,sVar50)) >> 0x10);
        uVar21 = uVar21 - 9;
        goto LAB_63763dfa;
      }
      iVar22 = (uint)*(byte *)((int)puVar16 + (uVar21 - 2)) * 2 +
               (uint)*(byte *)((int)puVar16 + (uVar21 - 3)) + (uint)*(byte *)((int)puVar16 + uVar20)
      ;
      *(short *)((int)puVar18 + uVar20 * 2 + -2) = (short)iVar22;
      uVar17 = (uint)*(ushort *)((int)local_38 + uVar20 * 2 + -2) - iVar22;
      if ((int)uVar17 < 0) {
        uVar17 = -uVar17;
      }
      if (uVar17 < 0x65) break;
LAB_63763d0b:
      uVar33 = *(ushort *)((int)local_34 + uVar20 * 2 + -2);
      uVar41 = *(ushort *)((int)local_38 + uVar20 * 2 + -2);
      uVar42 = *(ushort *)((int)puVar18 + uVar20 * 2 + -2);
      bVar28 = *(byte *)((int)puVar23 + (uVar21 - 2));
      *(byte *)((int)puVar2 + (uVar21 - 2)) = bVar28;
      uVar17 = (uint)*(byte *)((int)puVar23 + (uVar21 - 2)) +
               ((int)(((uint)bVar28 - ((int)((uint)uVar33 * 2 + (uint)uVar41 + (uint)uVar42) >> 4))
                     * param_7) >> 3);
      if ((int)uVar17 < 0) {
        uVar17 = 0;
      }
      if (0xff < uVar17) {
        uVar17 = 0xff;
      }
      *(char *)((int)puVar24 + (uVar21 - 2)) = (char)uVar17;
      uVar21 = uVar20;
    }
    uVar17 = (*(uint *)((int)puVar23 + (uVar21 - 3)) & 0xff00ff) * 2 +
             (*(uint *)((int)puVar23 + uVar20 + (-2 - param_5)) & 0xff00ff) +
             (*(uint *)((int)puVar16 + (uVar21 - 3)) & 0xff00ff);
    uVar17 = (uVar17 & 0xffff) - (uVar17 >> 0x10);
    if ((int)uVar17 < 0) {
      uVar17 = -uVar17;
    }
    if (100 < uVar17) goto LAB_63763d0b;
    *(undefined1 *)((int)puVar24 + (uVar21 - 2)) = *(undefined1 *)((int)puVar23 + (uVar21 - 2));
    uVar21 = uVar20;
  } while( true );
}


