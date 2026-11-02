/* Module: aviplug.dll
   Function: FUN_5f968980
   Address: 5f968980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f968980(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined7 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  byte bVar12;
  undefined8 uVar11;
  undefined8 uVar13;
  uint5 uVar15;
  undefined8 uVar14;
  undefined8 uVar16;
  ushort uVar17;
  int iVar18;
  uint5 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  ushort uVar24;
  uint5 uVar27;
  undefined8 uVar26;
  ulonglong uVar19;
  ulonglong uVar25;
  
  uVar7 = 0x40;
  piVar8 = (int *)(param_2 + 0x80);
  do {
    while( true ) {
      do {
        do {
          puVar10 = param_2;
          uVar22 = *param_1;
          uVar1 = param_1[1];
          uVar3 = (ushort)(((uint7)(byte)((uint)uVar22 >> 0x18) << 0x30) >> 0x28);
          uVar4 = CONCAT25(uVar3,CONCAT14((char)((uint)uVar22 >> 0x10),uVar22));
          bVar12 = (byte)((uint)uVar22 >> 8);
          uVar2 = param_1[2];
          uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                        0x20),uVar1) >> 0x18);
          uVar27 = (uint5)uVar5 & 0xffffffff00;
          uVar24 = (ushort)uVar1;
          uVar25 = (ulonglong)CONCAT43(uVar5,CONCAT12((char)((uint)uVar1 >> 8),uVar24)) &
                   0xffffffff00ffffff;
          uVar1 = param_1[3];
          uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                        0x20),uVar2) >> 0x18);
          uVar15 = (uint5)uVar5 & 0xffffffff00;
          uVar6 = (ulonglong)CONCAT41(uVar5,(char)((uint)uVar2 >> 8)) & 0xffffffff00ff;
          uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                        0x20),uVar1) >> 0x18);
          uVar20 = (uint5)uVar5 & 0xffffffff00;
          uVar17 = (ushort)uVar1;
          uVar19 = (ulonglong)CONCAT43(uVar5,CONCAT12((char)((uint)uVar1 >> 8),uVar17)) &
                   0xffffffff00ffffff;
          uVar11 = pmaddwd(CONCAT44((int)CONCAT62((int6)(uVar25 >> 0x10),uVar24),
                                    (uint)CONCAT12(bVar12,(ushort)(byte)uVar22)) &
                           0xffff00ffffffffff,DAT_5f9da608);
          uVar22 = CONCAT22((ushort)bVar12 + (short)(uVar25 >> 0x10) + (short)uVar6 +
                            (short)(uVar19 >> 0x10),
                            (ushort)(byte)uVar22 + (uVar24 & 0xff) + (ushort)(byte)uVar2 +
                            (uVar17 & 0xff));
          uVar23 = CONCAT26((uVar3 >> 8) + (short)(uVar27 >> 0x18) + (short)(uVar15 >> 0x18) +
                            (short)(uVar20 >> 0x18),
                            CONCAT24((short)((uint7)uVar4 >> 0x20) + (short)(uVar27 >> 8) +
                                     (short)(uVar15 >> 8) + (short)(uVar20 >> 8),uVar22));
          uVar13 = pmaddwd(CONCAT44((int)(uVar27 >> 8),(uint)(uint3)((uint7)uVar4 >> 0x20)),
                           DAT_5f9da610);
          uVar14 = pmaddwd(CONCAT44((int)CONCAT62((int6)(uVar19 >> 0x10),uVar17),
                                    (int)CONCAT62((int6)uVar6,(ushort)(byte)uVar2)) &
                           0xffff00ffffffffff,DAT_5f9da608);
          uVar16 = pmaddwd(CONCAT44((int)(uVar20 >> 8),(int)(uVar15 >> 8)),DAT_5f9da610);
          iVar18 = (int)DAT_5f9da618;
          iVar21 = (int)((ulonglong)DAT_5f9da618 >> 0x20);
          uVar26 = pmaddwd(uVar23,DAT_5f9da620);
          uVar23 = pmaddwd(CONCAT44(uVar22,(int)((ulonglong)uVar23 >> 0x20)),DAT_5f9da628);
          piVar9 = piVar8 + 1;
          param_1 = param_1 + 4;
          uVar7 = uVar7 - 1;
          *puVar10 = CONCAT44(((int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar13 >> 0x20))
                              - iVar21 >> 8,((int)uVar11 + (int)uVar13) - iVar18 >> 8);
          puVar10[1] = CONCAT44(((int)((ulonglong)uVar14 >> 0x20) - iVar21) +
                                (int)((ulonglong)uVar16 >> 0x20) >> 8,
                                ((int)uVar14 - iVar18) + (int)uVar16 >> 8);
          *piVar8 = (int)uVar23 + (int)uVar26 >> 10;
          piVar8[0x40] = (int)((ulonglong)uVar23 >> 0x20) + (int)((ulonglong)uVar26 >> 0x20) >> 10;
          piVar8 = piVar9;
          param_2 = puVar10 + 2;
        } while ((uVar7 & 1) != 0);
        param_2 = puVar10 + 0x1e;
      } while ((uVar7 & 3) != 0);
      if ((uVar7 & 7) == 0) break;
      param_1 = (undefined4 *)((int)param_1 + param_4);
    }
    param_1 = (undefined4 *)((int)param_1 + (param_3 - param_4) + -0x80);
    param_2 = puVar10 + -0x5e;
  } while (uVar7 != 0);
  return;
}


