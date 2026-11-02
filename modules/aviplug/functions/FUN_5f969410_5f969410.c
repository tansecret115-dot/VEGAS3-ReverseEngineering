/* Module: aviplug.dll
   Function: FUN_5f969410
   Address: 5f969410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f969410(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined7 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined8 *puVar11;
  byte bVar13;
  undefined8 uVar12;
  undefined8 uVar14;
  uint5 uVar16;
  undefined8 uVar15;
  undefined8 uVar17;
  ushort uVar18;
  int iVar19;
  uint5 uVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  ushort uVar25;
  uint5 uVar28;
  undefined8 uVar27;
  ulonglong uVar20;
  ulonglong uVar26;
  
  uVar8 = 0x40;
  piVar9 = (int *)(param_2 + 0x80);
  do {
    while( true ) {
      do {
        do {
          puVar11 = param_2;
          uVar1 = *param_1;
          uVar2 = param_1[1];
          uVar4 = (ushort)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar5 = CONCAT25(uVar4,CONCAT14((char)((uint)uVar1 >> 0x10),uVar1));
          bVar13 = (byte)((uint)uVar1 >> 8);
          uVar3 = param_1[2];
          uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                        0x20),uVar2) >> 0x18);
          uVar28 = (uint5)uVar6 & 0xffffffff00;
          uVar25 = (ushort)uVar2;
          uVar26 = (ulonglong)CONCAT43(uVar6,CONCAT12((char)((uint)uVar2 >> 8),uVar25)) &
                   0xffffffff00ffffff;
          uVar2 = param_1[3];
          uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar3 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                        0x20),uVar3) >> 0x18);
          uVar16 = (uint5)uVar6 & 0xffffffff00;
          uVar7 = (ulonglong)CONCAT41(uVar6,(char)((uint)uVar3 >> 8)) & 0xffffffff00ff;
          uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                        0x20),uVar2) >> 0x18);
          uVar21 = (uint5)uVar6 & 0xffffffff00;
          uVar18 = (ushort)uVar2;
          uVar20 = (ulonglong)CONCAT43(uVar6,CONCAT12((char)((uint)uVar2 >> 8),uVar18)) &
                   0xffffffff00ffffff;
          uVar12 = pmaddwd(CONCAT44((int)CONCAT62((int6)(uVar26 >> 0x10),uVar25),
                                    (uint)CONCAT12(bVar13,(ushort)(byte)uVar1)) & 0xffff00ffffffffff
                           ,DAT_5f9da608);
          uVar24 = CONCAT26((uVar4 >> 8) + (short)(uVar28 >> 0x18) + (short)(uVar16 >> 0x18) +
                            (short)(uVar21 >> 0x18),
                            CONCAT24((short)((uint7)uVar5 >> 0x20) + (short)(uVar28 >> 8) +
                                     (short)(uVar16 >> 8) + (short)(uVar21 >> 8),
                                     CONCAT22((ushort)bVar13 + (short)(uVar26 >> 0x10) +
                                              (short)uVar7 + (short)(uVar20 >> 0x10),
                                              (ushort)(byte)uVar1 + (uVar25 & 0xff) +
                                              (ushort)(byte)uVar3 + (uVar18 & 0xff))));
          uVar14 = pmaddwd(CONCAT44((int)(uVar28 >> 8),(uint)(uint3)((uint7)uVar5 >> 0x20)),
                           DAT_5f9da610);
          uVar15 = pmaddwd(CONCAT44((int)CONCAT62((int6)(uVar20 >> 0x10),uVar18),
                                    (int)CONCAT62((int6)uVar7,(ushort)(byte)uVar3)) &
                           0xffff00ffffffffff,DAT_5f9da608);
          uVar17 = pmaddwd(CONCAT44((int)(uVar21 >> 8),(int)(uVar16 >> 8)),DAT_5f9da610);
          uVar27 = pshufw(DAT_5f9da610,uVar24,0x4e);
          iVar19 = (int)DAT_5f9da618;
          iVar22 = (int)((ulonglong)DAT_5f9da618 >> 0x20);
          uVar24 = pmaddwd(uVar24,DAT_5f9da620);
          uVar27 = pmaddwd(uVar27,DAT_5f9da628);
          piVar10 = piVar9 + 1;
          param_1 = param_1 + 4;
          uVar8 = uVar8 - 1;
          *puVar11 = CONCAT44(((int)((ulonglong)uVar12 >> 0x20) + (int)((ulonglong)uVar14 >> 0x20))
                              - iVar22 >> 8,((int)uVar12 + (int)uVar14) - iVar19 >> 8);
          iVar23 = (int)uVar24 + (int)uVar27 >> 10;
          puVar11[1] = CONCAT44(((int)((ulonglong)uVar15 >> 0x20) - iVar22) +
                                (int)((ulonglong)uVar17 >> 0x20) >> 8,
                                ((int)uVar15 - iVar19) + (int)uVar17 >> 8);
          uVar12 = pshufw(uVar27,CONCAT44((int)((ulonglong)uVar24 >> 0x20) +
                                          (int)((ulonglong)uVar27 >> 0x20) >> 10,iVar23),0x4e);
          *piVar9 = iVar23;
          piVar9[0x40] = (int)uVar12;
          piVar9 = piVar10;
          param_2 = puVar11 + 2;
        } while ((uVar8 & 1) != 0);
        param_2 = puVar11 + 0x1e;
      } while ((uVar8 & 3) != 0);
      if ((uVar8 & 7) == 0) break;
      param_1 = (undefined4 *)((int)param_1 + param_4);
    }
    param_1 = (undefined4 *)((int)param_1 + (param_3 - param_4) + -0x80);
    param_2 = puVar11 + -0x5e;
  } while (uVar8 != 0);
  return;
}


