/* Module: aviplug.dll
   Function: FUN_5f96ac50
   Address: 5f96ac50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96ac50(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined7 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  byte bVar15;
  undefined8 uVar14;
  undefined8 uVar16;
  uint5 uVar18;
  undefined8 uVar17;
  undefined8 uVar19;
  ushort uVar20;
  int iVar21;
  uint5 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  ushort uVar27;
  uint5 uVar30;
  undefined8 uVar29;
  ulonglong uVar22;
  ulonglong uVar28;
  
  uVar7 = 0x40;
  puVar9 = (undefined4 *)((int)param_1 + param_3 * 2);
  piVar10 = (int *)(param_2 + 0x80);
  do {
    do {
      do {
        do {
          puVar13 = param_2;
          puVar12 = param_1;
          puVar8 = puVar9;
          uVar25 = *puVar12;
          uVar1 = puVar12[1];
          uVar3 = (ushort)(((uint7)(byte)((uint)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar4 = CONCAT25(uVar3,CONCAT14((char)((uint)uVar25 >> 0x10),uVar25));
          bVar15 = (byte)((uint)uVar25 >> 8);
          uVar2 = *puVar8;
          uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                        0x20),uVar1) >> 0x18);
          uVar30 = (uint5)uVar5 & 0xffffffff00;
          uVar27 = (ushort)uVar1;
          uVar28 = (ulonglong)CONCAT43(uVar5,CONCAT12((char)((uint)uVar1 >> 8),uVar27)) &
                   0xffffffff00ffffff;
          uVar1 = puVar8[1];
          uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                        0x20),uVar2) >> 0x18);
          uVar18 = (uint5)uVar5 & 0xffffffff00;
          uVar6 = (ulonglong)CONCAT41(uVar5,(char)((uint)uVar2 >> 8)) & 0xffffffff00ff;
          uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                        0x20),uVar1) >> 0x18);
          uVar23 = (uint5)uVar5 & 0xffffffff00;
          uVar20 = (ushort)uVar1;
          uVar22 = (ulonglong)CONCAT43(uVar5,CONCAT12((char)((uint)uVar1 >> 8),uVar20)) &
                   0xffffffff00ffffff;
          uVar14 = pmaddwd(CONCAT44((int)CONCAT62((int6)(uVar28 >> 0x10),uVar27),
                                    (uint)CONCAT12(bVar15,(ushort)(byte)uVar25)) &
                           0xffff00ffffffffff,DAT_5f9da608);
          uVar25 = CONCAT22((ushort)bVar15 + (short)(uVar28 >> 0x10) + (short)uVar6 +
                            (short)(uVar22 >> 0x10),
                            (ushort)(byte)uVar25 + (uVar27 & 0xff) + (ushort)(byte)uVar2 +
                            (uVar20 & 0xff));
          uVar26 = CONCAT26((uVar3 >> 8) + (short)(uVar30 >> 0x18) + (short)(uVar18 >> 0x18) +
                            (short)(uVar23 >> 0x18),
                            CONCAT24((short)((uint7)uVar4 >> 0x20) + (short)(uVar30 >> 8) +
                                     (short)(uVar18 >> 8) + (short)(uVar23 >> 8),uVar25));
          uVar16 = pmaddwd(CONCAT44((int)(uVar30 >> 8),(uint)(uint3)((uint7)uVar4 >> 0x20)),
                           DAT_5f9da610);
          uVar17 = pmaddwd(CONCAT44((int)CONCAT62((int6)(uVar22 >> 0x10),uVar20),
                                    (int)CONCAT62((int6)uVar6,(ushort)(byte)uVar2)) &
                           0xffff00ffffffffff,DAT_5f9da608);
          uVar19 = pmaddwd(CONCAT44((int)(uVar23 >> 8),(int)(uVar18 >> 8)),DAT_5f9da610);
          iVar21 = (int)DAT_5f9da618;
          iVar24 = (int)((ulonglong)DAT_5f9da618 >> 0x20);
          uVar29 = pmaddwd(uVar26,DAT_5f9da620);
          uVar26 = pmaddwd(CONCAT44(uVar25,(int)((ulonglong)uVar26 >> 0x20)),DAT_5f9da628);
          piVar11 = piVar10 + 1;
          uVar7 = uVar7 - 1;
          *puVar13 = CONCAT44(((int)((ulonglong)uVar14 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20))
                              - iVar24 >> 8,((int)uVar14 + (int)uVar16) - iVar21 >> 8);
          puVar13[8] = CONCAT44(((int)((ulonglong)uVar17 >> 0x20) - iVar24) +
                                (int)((ulonglong)uVar19 >> 0x20) >> 8,
                                ((int)uVar17 - iVar21) + (int)uVar19 >> 8);
          *piVar10 = (int)uVar26 + (int)uVar29 >> 10;
          piVar10[0x40] = (int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20) >> 10;
          puVar9 = puVar8 + 2;
          piVar10 = piVar11;
          param_1 = puVar12 + 2;
          param_2 = puVar13 + 1;
        } while ((uVar7 & 3) != 0);
        param_2 = puVar13 + 0x1d;
      } while ((uVar7 & 7) != 0);
      param_1 = (undefined4 *)((int)puVar12 + param_3 + -0x38);
      puVar9 = (undefined4 *)((int)puVar8 + param_3 + -0x38);
      param_2 = puVar13 + -0x1f;
    } while ((uVar7 & 0xf) != 0);
    param_1 = (undefined4 *)((int)param_1 + param_3 * 2);
    puVar9 = (undefined4 *)((int)puVar9 + param_3 * 2);
    param_2 = puVar13 + -0x17;
  } while (((uVar7 & 0x1f) != 0) || (param_2 = puVar13 + 9, uVar7 != 0));
  return;
}


