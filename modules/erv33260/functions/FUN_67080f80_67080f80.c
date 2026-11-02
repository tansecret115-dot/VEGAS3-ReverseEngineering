/* Module: erv33260.dll
   Function: FUN_67080f80
   Address: 67080f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Unable to track spacebase fully for stack */

undefined4
FUN_67080f80(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  uint3 uVar6;
  undefined5 uVar7;
  uint3 uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  short sVar29;
  ushort uVar30;
  ushort uVar31;
  int iVar32;
  short sVar38;
  undefined8 uVar33;
  short sVar36;
  short sVar39;
  undefined8 uVar34;
  ushort uVar40;
  ushort uVar41;
  ulonglong uVar35;
  int iVar42;
  undefined8 uVar43;
  uint5 uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  short sVar49;
  byte bVar50;
  undefined2 uVar51;
  uint5 uVar37;
  
  uVar18 = (uint)(&stack0xfffffff0 + -(param_2[2] * 2 + 0xe0)) & 0xfffffff8;
  uVar27 = *param_2;
  *(undefined4 *)(uVar18 + 0x1c) = *param_1;
  *(undefined4 *)(uVar18 + 0x2c) = uVar27;
  uVar27 = param_2[1];
  *(undefined4 *)(uVar18 + 0x20) = param_1[1];
  *(undefined4 *)(uVar18 + 0x30) = uVar27;
  uVar27 = param_2[2];
  *(undefined4 *)(uVar18 + 0x24) = param_1[2];
  *(undefined4 *)(uVar18 + 0x34) = uVar27;
  uVar27 = param_2[3];
  *(undefined4 *)(uVar18 + 0x28) = param_1[3];
  *(undefined4 *)(uVar18 + 0x38) = uVar27;
  *(undefined4 *)(uVar18 + 4) = param_3;
  *(undefined4 *)(uVar18 + 8) = param_4;
  *(undefined4 *)(uVar18 + 0xc) = param_5;
  *(undefined4 *)(uVar18 + 0x10) = param_6;
  *(undefined1 **)uVar18 = &stack0xfffffffc;
  *(undefined4 *)(uVar18 + 0x14) = param_7;
  *(undefined4 *)(uVar18 + 0x18) = param_8;
  uVar10 = *(uint *)(uVar18 + 0x28);
  iVar12 = 0;
  *(undefined4 *)(uVar18 + 0x84) = 0;
  *(undefined4 *)(uVar18 + 0x88) = 0;
  *(undefined4 *)(uVar18 + 0xb4) = 0;
  do {
    iVar12 = iVar12 + 1;
    uVar10 = uVar10 >> 1;
  } while (uVar10 != 0);
  *(int *)(uVar18 + 0x40) = iVar12;
  uVar10 = *(uint *)(uVar18 + 0x24);
  iVar12 = 0;
  do {
    iVar21 = iVar12;
    iVar12 = iVar21 + 1;
    uVar10 = uVar10 >> 1;
  } while (uVar10 != 0);
  *(int *)(uVar18 + 0x3c) = iVar12;
  iVar12 = 1 << ((char)iVar21 + 3U & 0x1f);
  *(int *)(uVar18 + 0x44) = iVar12;
  *(int *)(uVar18 + 0x4c) = iVar12 * -0x10;
  uVar33 = DAT_67091848;
  if (*(int *)(uVar18 + 0xc) == 0) {
    uVar33 = DAT_67091850;
  }
  *(undefined8 *)(uVar18 + 0x58) = uVar33;
  uVar10 = *(uint *)(uVar18 + 0x34);
  uVar15 = *(uint *)(uVar18 + 0x38);
  uVar20 = *(uint *)(uVar18 + 0x24);
  uVar26 = *(uint *)(uVar18 + 0x28);
  *(undefined1 *)(uVar18 + 0x70) = 1;
  if (*(int *)(uVar18 + 0x18) != 0) {
    uVar10 = uVar10 >> 1;
    *(undefined1 *)(uVar18 + 0x70) = 0;
    uVar15 = uVar15 >> 1;
    uVar20 = uVar20 >> 1;
    uVar26 = uVar26 >> 1;
  }
  *(uint *)(uVar18 + 0x6c) = uVar10;
  *(uint *)(uVar18 + 0x68) = uVar15;
  *(uint *)(uVar18 + 100) = uVar20;
  *(uint *)(uVar18 + 0x60) = uVar26 - 1;
  uVar9 = 0x80;
  iVar12 = **(int **)(uVar18 + 0x14);
  if (iVar12 == 3) {
    iVar21 = uVar20 - 2;
    *(undefined4 *)(uVar18 + 0xa4) = 0;
    uVar27 = 1;
  }
  else {
    uVar27 = 0;
    iVar21 = uVar20 - 1;
    *(undefined4 *)(uVar18 + 0xa4) = 0xffffffff;
    if (iVar12 != 2) {
      if (iVar12 == 1) {
        if (*(int *)(uVar18 + 0x18) == 0) {
          uVar9 = 0x10;
        }
      }
      else {
        uVar9 = *(undefined1 *)((int)*(int **)(uVar18 + 0x14) + *(int *)(uVar18 + 0x18) + 4);
      }
    }
  }
  *(undefined4 *)(uVar18 + 0x90) = uVar27;
  *(undefined1 *)(uVar18 + 0x94) = uVar9;
  *(int *)(uVar18 + 0xa8) = iVar21;
  *(undefined1 *)(uVar18 + 0x95) = uVar9;
  *(undefined1 *)(uVar18 + 0x96) = uVar9;
  *(undefined1 *)(uVar18 + 0x97) = uVar9;
  iVar12 = **(int **)(uVar18 + 0x10);
  iVar28 = iVar12 * 0x10;
  iVar21 = ((*(int *)(uVar18 + 0x24) - *(int *)(uVar18 + 0x34)) * 2 + (*(int **)(uVar18 + 0x10))[1]
           << ((byte)*(undefined4 *)(uVar18 + 0x3c) + 4 & 0x1f)) +
           (*(int *)(uVar18 + 0x34) - (1 << ((byte)*(undefined4 *)(uVar18 + 0x3c) & 0x1f))) * iVar28
  ;
  uVar10 = *(uint *)(uVar18 + 0x34) >> 1;
  if (iVar21 < 0) {
    uVar10 = -uVar10;
  }
  iVar12 = (int)(iVar21 + uVar10) / *(int *)(uVar18 + 0x34) + iVar12 * -0x10;
  iVar21 = (*(uint *)(uVar18 + 0x44) >> 1) + iVar12 +
           (iVar28 <<
           ((byte)*(undefined4 *)(uVar18 + 0x3c) + (char)*(undefined4 *)(uVar18 + 0x70) & 0x1f));
  iVar12 = (1 << ((byte)*(undefined4 *)(uVar18 + 0x3c) & 0x1f)) * 0x40 + iVar12 * 2;
  uVar27 = *(undefined4 *)(uVar18 + 0x3c);
  uVar10 = 0;
  *(undefined4 *)(uVar18 + 0x9c) = *(undefined4 *)(uVar18 + 0x6c);
  while( true ) {
    iVar28 = *(int *)(uVar18 + 0xa4);
    iVar32 = 0;
    iVar13 = *(int *)(uVar18 + 0xa8);
    iVar42 = 0;
    *(undefined4 *)(uVar18 + 0x98) = 0;
    iVar17 = 0;
    iVar19 = iVar21;
    do {
      iVar16 = iVar19 >> ((char)uVar27 + 2U & 0x1f);
      iVar11 = iVar16 >> 4;
      *(byte *)(uVar18 + 0xc9 + uVar10 * 2) = (byte)iVar16 & 0xf;
      iVar32 = iVar32 + (uint)(iVar11 < iVar28);
      iVar42 = iVar42 + (uint)(iVar13 < iVar11);
      *(char *)(uVar18 + 200 + uVar10 * 2) = (char)iVar11 - (char)iVar17;
      uVar10 = uVar10 + 1;
      iVar19 = iVar19 + iVar12;
      iVar17 = iVar11;
    } while (uVar10 < *(uint *)(uVar18 + 0x9c));
    if (iVar12 < 0) {
      *(int *)(uVar18 + 0x7c) = iVar42;
      *(int *)(uVar18 + 0x80) = iVar32;
      *(int *)(uVar18 + 0xac) = *(int *)(uVar18 + 100) + -1;
      *(undefined4 *)(uVar18 + 0xb0) = 0;
    }
    else {
      *(int *)(uVar18 + 0x7c) = iVar32;
      *(int *)(uVar18 + 0x80) = iVar42;
      *(undefined4 *)(uVar18 + 0xac) = 0;
      *(int *)(uVar18 + 0xb0) = *(int *)(uVar18 + 100) + -1;
    }
    uVar15 = *(uint *)(uVar18 + 0x7c);
    if (((uVar15 & 3) == 0) || (*(int *)(uVar18 + 0xb4) != 0)) break;
    *(undefined4 *)(uVar18 + 0xb4) = 1;
    uVar10 = 4 - (uVar15 & 3);
    uVar27 = *(undefined4 *)(uVar18 + 0x3c);
    *(uint *)(uVar18 + 0x9c) = *(int *)(uVar18 + 0x9c) + uVar10;
  }
  iVar28 = *(int *)(uVar18 + 0x6c);
  iVar13 = *(int *)(uVar18 + 0x80);
  *(int *)(uVar18 + 0xa0) = (int)(uVar15 * iVar12 + iVar21) >> ((char)uVar27 + 6U & 0x1f);
  *(undefined4 *)(uVar18 + 200 + uVar10 * 2) = 0;
  *(int *)(uVar18 + 0x8c) = iVar28 - iVar13;
  *(undefined4 *)(uVar18 + 0xcc + uVar10 * 2) = 0;
  *(undefined4 *)(uVar18 + 0xd0 + uVar10 * 2) = 0;
  uVar10 = *(uint *)(uVar18 + 0x38);
  iVar12 = *(int *)(*(int *)(uVar18 + 0x10) + 8);
  iVar21 = uVar10 * iVar12 * 0x10 +
           (((*(int *)(uVar18 + 0x28) - uVar10) * 2 + *(int *)(*(int *)(uVar18 + 0x10) + 0xc)) *
            0x10 + iVar12 * -0x10 << ((byte)*(undefined4 *)(uVar18 + 0x40) & 0x1f));
  uVar15 = uVar10 >> 1;
  if (iVar21 < 0) {
    uVar15 = -uVar15;
  }
  iVar21 = (int)(iVar21 + uVar15) / (int)uVar10;
  iVar28 = iVar21 + iVar12 * -0x10;
  iVar21 = iVar21 + (iVar12 * 0x10 <<
                    ((byte)*(undefined4 *)(uVar18 + 0x40) + (char)*(undefined4 *)(uVar18 + 0x70) &
                    0x1f)) + iVar12 * -0x10;
  *(int *)(uVar18 + 0x78) = iVar28 * 2;
  *(int *)(uVar18 + 0x74) = iVar21;
  iVar12 = *(int *)(uVar18 + 0x2c);
  iVar13 = 0;
  *(int *)(uVar18 + 0x74) = iVar21 + iVar28 * -2;
  do {
    *(int *)(uVar18 + 0x48) = iVar13;
    *(int *)(uVar18 + 0x50) = iVar12;
    iVar12 = *(int *)(uVar18 + 0x74);
    *(int *)(uVar18 + 0x74) = iVar12 + *(int *)(uVar18 + 0x78);
    iVar13 = *(int *)(uVar18 + 0x4c) + *(uint *)(uVar18 + 0x44) * 0x10;
    *(int *)(uVar18 + 0x4c) = iVar13;
    iVar21 = *(int *)(uVar18 + 0x1c);
    iVar28 = *(int *)(uVar18 + 0x20);
    uVar10 = (int)(((iVar12 + *(int *)(uVar18 + 0x78) >>
                    ((char)*(undefined4 *)(uVar18 + 0x40) + (char)*(undefined4 *)(uVar18 + 0x70) &
                    0x1fU)) <<
                   ((char)*(undefined4 *)(uVar18 + 0x3c) + (char)*(undefined4 *)(uVar18 + 0x70) &
                   0x1fU)) + iVar13 + ((*(uint *)(uVar18 + 0x44) & 0xfffffff) >> 1)) >>
             ((char)*(undefined4 *)(uVar18 + 0x3c) + 2U & 0x1f);
    iVar13 = *(int *)(uVar18 + 0x90);
    iVar17 = (int)uVar10 >> 4;
    *(uint *)(uVar18 + 0x54) = uVar10 & 0xf;
    uVar10 = *(uint *)(uVar18 + 0x98);
    if (iVar17 < 0) {
      if ((uVar10 & 4) == 0) {
        *(uint *)(uVar18 + 0x98) = uVar10 | 4;
        iVar12 = *(int *)(uVar18 + 100);
        *(undefined4 *)(uVar18 - 4) = 0x670813d6;
        FUN_670816f1(iVar12);
        iVar28 = extraout_EDX;
        if (iVar13 != 0) {
          iVar17 = -1;
          goto LAB_6708147c;
        }
      }
      iVar19 = *(int *)(uVar18 + 0x84);
      iVar12 = *(int *)(uVar18 + 0x50);
      *(int *)(uVar18 + 0x84) = iVar19 + 1;
      if ((iVar13 == 0) && (-2 < iVar17)) {
        *(int *)(uVar18 + 0x84) = iVar19;
        goto LAB_6708147c;
      }
    }
    else {
      if (*(int *)(uVar18 + 0x60) <= iVar17) {
        if ((uVar10 & 8) == 0) {
          *(uint *)(uVar18 + 0x98) = uVar10 | 8;
          iVar12 = *(int *)(uVar18 + 100);
          *(undefined4 *)(uVar18 - 4) = 0x6708143f;
          FUN_670816f1(iVar12);
          iVar21 = *(int *)(uVar18 + 0x1c);
          iVar28 = extraout_EDX_00;
          if (iVar13 != 0) {
            iVar17 = *(int *)(uVar18 + 0x60);
            goto LAB_6708147c;
          }
        }
        iVar19 = *(int *)(uVar18 + 0x88);
        iVar12 = *(int *)(uVar18 + 0x50);
        *(int *)(uVar18 + 0x88) = iVar19 + 1;
        if ((iVar13 != 0) || (*(int *)(uVar18 + 0x60) < iVar17)) goto LAB_6708166f;
        *(int *)(uVar18 + 0x88) = iVar19;
      }
LAB_6708147c:
      iVar21 = iVar21 + iVar17 * iVar28;
      iVar12 = *(int *)(uVar18 + 100);
      *(int *)(uVar18 + 0xb8) = iVar21;
      puVar22 = (undefined1 *)(iVar21 + iVar12);
      uVar27 = *(undefined4 *)(uVar18 + 0x54);
      iVar21 = *(int *)(uVar18 + 0x7c);
      uVar9 = (undefined1)*(undefined4 *)(uVar18 + 0x94);
      *puVar22 = uVar9;
      puVar22[iVar28] = uVar9;
      puVar22[-1 - iVar12] = uVar9;
      iVar13 = *(int *)(uVar18 + 0xa0);
      puVar22[iVar28 + (-1 - iVar12)] = uVar9;
      puVar23 = (undefined4 *)(puVar22 + (iVar13 - iVar12));
      puVar14 = (undefined8 *)(uVar18 + iVar21 * 2 + 0xcf & 0xfffffff8);
      uVar2 = *puVar23;
      uVar3 = *(undefined4 *)((int)puVar23 + iVar28);
      puVar23 = (undefined4 *)((int)puVar23 + (int)*(char *)((int)puVar14 + 2));
      iVar12 = *(int *)(uVar18 + 0x50);
      uVar4 = *puVar23;
      sVar49 = (short)uVar27;
      uVar27 = *(undefined4 *)((int)puVar23 + iVar28);
      puVar23 = (undefined4 *)((int)puVar23 + (int)*(char *)((int)puVar14 + 4));
      iVar13 = *(int *)(uVar18 + 0x8c);
      cVar1 = *(char *)((int)puVar14 + 6);
      do {
        puVar24 = (undefined4 *)((int)puVar23 + (int)cVar1);
        uVar10 = (uint)uVar3 >> 8;
        bVar50 = (byte)uVar3;
        puVar25 = (undefined4 *)((int)puVar24 + (int)*(char *)(puVar14 + 1));
        uVar15 = (uint)uVar27 >> 8;
        uVar33 = *puVar14;
        uVar51 = CONCAT11((char)uVar27,bVar50);
        uVar45 = (ushort)uVar33 >> 8;
        uVar46 = (ushort)((ulonglong)uVar33 >> 0x10) >> 8;
        uVar47 = (ushort)((ulonglong)uVar33 >> 0x20) >> 8;
        uVar48 = (ushort)((ulonglong)uVar33 >> 0x38);
        uVar30 = (ushort)(((uint7)(byte)*puVar24 << 0x30) >> 0x28);
        uVar6 = CONCAT21(uVar30,(char)*puVar23);
        uVar7 = CONCAT41((int)(((uint7)uVar6 << 0x20) >> 0x18),(char)uVar4);
        iVar21 = iVar21 + 4;
        uVar31 = (ushort)(((uint7)(byte)*(undefined4 *)((int)puVar24 + iVar28) << 0x30) >> 0x28);
        uVar8 = CONCAT21(uVar31,(char)*(undefined4 *)((int)puVar23 + iVar28));
        uVar5 = CONCAT43((int)(((uint7)uVar8 << 0x20) >> 0x18),CONCAT12((char)uVar27,uVar51));
        uVar33 = psllw((ulonglong)CONCAT52(uVar7,(ushort)(byte)uVar2),4);
        uVar43 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar5 >> 0x10),uVar51) & 0xffffffffffff00ff
                       ,4);
        sVar29 = (short)uVar33 + ((ushort)(byte)((uint)uVar2 >> 8) - (ushort)(byte)uVar2) * uVar45;
        sVar36 = (short)((ulonglong)uVar33 >> 0x10) +
                 ((ushort)(byte)((uint)uVar4 >> 8) - (short)uVar7) * uVar46;
        sVar38 = (short)((ulonglong)uVar33 >> 0x20) +
                 ((ushort)(byte)((uint)*puVar23 >> 8) - (short)uVar6) * uVar47;
        sVar39 = (short)((ulonglong)uVar33 >> 0x30) +
                 ((ushort)(byte)((uint)*puVar24 >> 8) - (uVar30 >> 8)) * uVar48;
        uVar2 = *puVar25;
        uVar3 = *(undefined4 *)((int)puVar25 + iVar28);
        puVar25 = (undefined4 *)((int)puVar25 + (int)*(char *)((int)puVar14 + 10));
        uVar4 = *puVar25;
        uVar34 = psllw(CONCAT26(sVar39,CONCAT24(sVar38,CONCAT22(sVar36,sVar29))),4);
        uVar27 = *(undefined4 *)((int)puVar25 + iVar28);
        uVar33 = *(undefined8 *)(uVar18 + 0x58);
        uVar30 = (short)uVar34 +
                 (((short)uVar43 + ((ushort)(byte)uVar10 - (ushort)bVar50) * uVar45) - sVar29) *
                 sVar49 + (short)uVar33;
        uVar45 = (short)((ulonglong)uVar34 >> 0x10) +
                 (((short)((ulonglong)uVar43 >> 0x10) +
                  ((ushort)(byte)uVar15 - (short)((uint7)uVar5 >> 0x10)) * uVar46) - sVar36) *
                 sVar49 + (short)((ulonglong)uVar33 >> 0x10);
        uVar47 = (short)((ulonglong)uVar34 >> 0x20) +
                 (((short)((ulonglong)uVar43 >> 0x20) +
                  ((ushort)(byte)((uint)*(undefined4 *)((int)puVar23 + iVar28) >> 8) - (short)uVar8)
                  * uVar47) - sVar38) * sVar49 + (short)((ulonglong)uVar33 >> 0x20);
        uVar40 = (short)((ulonglong)uVar34 >> 0x30) +
                 (((short)((ulonglong)uVar43 >> 0x30) +
                  ((ushort)(byte)((uint)*(undefined4 *)((int)puVar24 + iVar28) >> 8) - (uVar31 >> 8)
                  ) * uVar48) - sVar39) * sVar49 + (short)((ulonglong)uVar33 >> 0x30);
        uVar31 = uVar30 >> 8;
        uVar46 = uVar45 >> 8;
        uVar48 = uVar47 >> 8;
        uVar41 = uVar40 >> 8;
        puVar23 = (undefined4 *)((int)puVar25 + (int)*(char *)((int)puVar14 + 0xc));
        cVar1 = *(char *)((int)puVar14 + 0xe);
        *(uint *)(iVar12 + -4 + iVar21) =
             CONCAT13((uVar41 != 0) * (uVar41 < 0x100) * (char)(uVar40 >> 8) - (0xff < uVar41),
                      CONCAT12((uVar48 != 0) * (uVar48 < 0x100) * (char)(uVar47 >> 8) -
                               (0xff < uVar48),
                               CONCAT11((uVar46 != 0) * (uVar46 < 0x100) * (char)(uVar45 >> 8) -
                                        (0xff < uVar46),
                                        (uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar30 >> 8) -
                                        (0xff < uVar31))));
        puVar14 = puVar14 + 1;
      } while (iVar21 < iVar13);
      *(int *)(uVar18 + 0x9c) = iVar12;
      iVar21 = *(int *)(uVar18 + 0xb8);
      iVar17 = *(int *)(uVar18 + 4) + *(int *)(uVar18 + 0x80);
      if (iVar17 != 0) {
        uVar10 = *(uint *)(uVar18 + 0x94);
        if (*(int *)(uVar18 + 0x90) != 0) {
          puVar23 = (undefined4 *)(iVar21 + *(int *)(uVar18 + 0xb0));
          uVar27 = *puVar23;
          uVar4 = *(undefined4 *)((int)puVar23 + iVar28);
          uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar27 >> 0x18) <<
                                                           0x30) >> 0x28),
                                                   CONCAT14((char)((uint)uVar27 >> 0x10),uVar27)) >>
                                         0x20),uVar27) >> 0x18);
          uVar37 = (uint5)uVar10 & 0xffffffff00;
          uVar31 = (ushort)uVar27;
          uVar35 = (ulonglong)CONCAT43(uVar10,CONCAT12((char)((uint)uVar27 >> 8),uVar31)) &
                   0xffffffff00ffffff;
          uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar4 >> 0x18) <<
                                                           0x30) >> 0x28),
                                                   CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >>
                                         0x20),uVar4) >> 0x18);
          uVar44 = (uint5)uVar10 & 0xffffffff00;
          uVar33 = psllw(CONCAT62((int6)(uVar35 >> 0x10),uVar31) & 0xffffffffffff00ff,4);
          uVar33 = psllw(CONCAT26((short)((ulonglong)uVar33 >> 0x30) +
                                  ((short)(uVar44 >> 0x18) - (short)(uVar37 >> 0x18)) * sVar49,
                                  CONCAT24((short)((ulonglong)uVar33 >> 0x20) +
                                           ((short)(uVar44 >> 8) - (short)(uVar37 >> 8)) * sVar49,
                                           CONCAT22((short)((ulonglong)uVar33 >> 0x10) +
                                                    (((ushort)(CONCAT43(uVar10,CONCAT12((char)((uint
                                                  )uVar4 >> 8),(ushort)uVar4)) >> 0x10) & 0xff) -
                                                  (short)(uVar35 >> 0x10)) * sVar49,
                                                  (short)uVar33 +
                                                  (((ushort)uVar4 & 0xff) - (uVar31 & 0xff)) *
                                                  sVar49))),4);
          uVar31 = (short)uVar33 + (short)*(undefined8 *)(uVar18 + 0x58);
          uVar30 = uVar31 >> 8;
          iVar21 = (int)puVar23 - *(int *)(uVar18 + 0xb0);
          uVar10 = (uint)(byte)((uVar30 != 0) * (uVar30 < 0x100) * (char)(uVar31 >> 8) -
                               (0xff < uVar30));
        }
        do {
          *(char *)(iVar12 + iVar13) = (char)uVar10;
          iVar13 = iVar13 + 1;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      iVar13 = *(int *)(uVar18 + 0x7c);
      if (iVar13 != 0) {
        uVar10 = *(uint *)(uVar18 + 0x94);
        if (*(int *)(uVar18 + 0x90) != 0) {
          uVar27 = *(undefined4 *)(iVar21 + *(int *)(uVar18 + 0xac));
          uVar4 = *(undefined4 *)(iVar21 + *(int *)(uVar18 + 0xac) + iVar28);
          uVar31 = (ushort)(((uint7)(byte)((uint)uVar27 >> 0x18) << 0x30) >> 0x28);
          uVar5 = CONCAT25(uVar31,CONCAT14((char)((uint)uVar27 >> 0x10),uVar27));
          uVar30 = (ushort)uVar27;
          uVar35 = (ulonglong)
                   CONCAT43((int)(CONCAT34((int3)((uint7)uVar5 >> 0x20),uVar27) >> 0x18),
                            CONCAT12((char)((uint)uVar27 >> 8),uVar30)) & 0xffffffff00ffffff;
          uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar4 >> 0x18) <<
                                                           0x30) >> 0x28),
                                                   CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >>
                                         0x20),uVar4) >> 0x18);
          uVar37 = (uint5)uVar10 & 0xffffffff00;
          uVar33 = psllw(CONCAT62((int6)(uVar35 >> 0x10),uVar30) & 0xffffffffffff00ff,4);
          uVar33 = psllw(CONCAT26((short)((ulonglong)uVar33 >> 0x30) +
                                  ((short)(uVar37 >> 0x18) - (uVar31 >> 8)) * sVar49,
                                  CONCAT24((short)((ulonglong)uVar33 >> 0x20) +
                                           ((short)(uVar37 >> 8) - (short)((uint7)uVar5 >> 0x20)) *
                                           sVar49,CONCAT22((short)((ulonglong)uVar33 >> 0x10) +
                                                           (((ushort)(CONCAT43(uVar10,CONCAT12((char
                                                  )((uint)uVar4 >> 8),(ushort)uVar4)) >> 0x10) &
                                                  0xff) - (short)(uVar35 >> 0x10)) * sVar49,
                                                  (short)uVar33 +
                                                  (((ushort)uVar4 & 0xff) - (uVar30 & 0xff)) *
                                                  sVar49))),4);
          uVar31 = (short)uVar33 + (short)*(undefined8 *)(uVar18 + 0x58);
          uVar30 = uVar31 >> 8;
          uVar10 = (uint)(byte)((uVar30 != 0) * (uVar30 < 0x100) * (char)(uVar31 >> 8) -
                               (0xff < uVar30));
        }
        do {
          *(char *)(iVar12 + -1 + iVar13) = (char)uVar10;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
LAB_6708166f:
    iVar13 = *(int *)(uVar18 + 0x48) + 1;
    iVar12 = iVar12 + *(int *)(uVar18 + 0x30);
    if (*(int *)(uVar18 + 0x68) <= iVar13) {
      uVar27 = *(undefined4 *)(uVar18 + 0x94);
      for (iVar12 = *(int *)(uVar18 + 8) + *(int *)(uVar18 + 0x88); iVar12 != 0;
          iVar12 = iVar12 + -1) {
        iVar21 = *(int *)(uVar18 + 0x6c);
        *(undefined4 *)(uVar18 - 4) = 0x670816b8;
        uVar27 = FUN_670816f1(iVar21);
      }
      for (iVar12 = *(int *)(uVar18 + 0x84); iVar12 != 0; iVar12 = iVar12 + -1) {
        iVar21 = *(int *)(uVar18 + 0x6c);
        *(undefined4 *)(uVar18 - 4) = 0x670816dd;
        uVar27 = FUN_670816f1(iVar21);
      }
      return uVar27;
    }
  } while( true );
}


