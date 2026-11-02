/* Module: aviplug.dll
   Function: FUN_5f96aa70
   Address: 5f96aa70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96aa70(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined7 uVar6;
  uint uVar7;
  ushort uVar8;
  undefined7 uVar9;
  uint3 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 uVar27;
  uint5 uVar28;
  undefined8 uVar29;
  uint uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar34;
  uint5 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  uint5 uVar26;
  uint5 uVar33;
  
  uVar16 = 0x20;
  puVar18 = (undefined4 *)((int)param_1 + param_3 * 2);
  puVar19 = param_2 + 0x80;
  do {
    do {
      do {
        do {
          puVar22 = param_2;
          puVar21 = param_1;
          puVar17 = puVar18;
          uVar1 = *puVar21;
          uVar2 = puVar21[1];
          uVar5 = (ushort)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar6 = CONCAT25(uVar5,CONCAT14((char)((uint)uVar1 >> 0x10),uVar1));
          uVar10 = (uint3)((uint7)uVar6 >> 0x20);
          uVar12 = (ulonglong)
                   CONCAT41((int)(CONCAT34(uVar10,uVar1) >> 0x18),(char)((uint)uVar1 >> 8)) &
                   0xffffffff00ff;
          uVar23 = puVar21[2];
          uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                        0x20),uVar2) >> 0x18);
          uVar26 = (uint5)uVar7 & 0xffffffff00;
          uVar25 = (ulonglong)CONCAT43(uVar7,CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) &
                   0xffffffff00ffffff;
          uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar23 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar23 >> 0x10),uVar23)) >>
                                        0x20),uVar23) >> 0x18);
          uVar28 = (uint5)uVar7 & 0xffffffff00;
          uVar13 = (ulonglong)CONCAT41(uVar7,(char)((uint)uVar23 >> 8)) & 0xffffffff00ff;
          uVar34 = CONCAT62((int6)uVar13,(ushort)(byte)uVar23);
          uVar24 = CONCAT44((int)CONCAT62((int6)(uVar25 >> 0x10),(short)uVar2),(uint)uVar10) &
                   0xffff00ffffffffff;
          uVar36 = pmaddwd(DAT_5f9da708,CONCAT62((int6)uVar12,(ushort)(byte)uVar1));
          uVar31 = pmaddwd(DAT_5f9da710,uVar24);
          uVar29 = pmaddwd(DAT_5f9da710,uVar34);
          uVar34 = pmaddwd(DAT_5f9da708,CONCAT44((int)uVar34,(int)(uVar26 >> 8)));
          iVar3 = (int)DAT_5f9da718;
          iVar4 = (int)((ulonglong)DAT_5f9da718 >> 0x20);
          *puVar22 = CONCAT44(((int)((ulonglong)uVar36 >> 0x20) + (int)((ulonglong)uVar31 >> 0x20))
                              - iVar4 >> 8,((int)uVar36 + (int)uVar31) - iVar3 >> 8);
          uVar2 = *puVar17;
          uVar27 = puVar17[1];
          uVar8 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar9 = CONCAT25(uVar8,CONCAT14((char)((uint)uVar2 >> 0x10),uVar2));
          uVar10 = (uint3)((uint7)uVar9 >> 0x20);
          uVar14 = (ulonglong)
                   CONCAT41((int)(CONCAT34(uVar10,uVar2) >> 0x18),(char)((uint)uVar2 >> 8)) &
                   0xffffffff00ff;
          puVar22[1] = CONCAT44(((int)((ulonglong)uVar34 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20)
                                ) - iVar4 >> 8,((int)uVar34 + (int)uVar29) - iVar3 >> 8);
          uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar27 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar27 >> 0x10),uVar27)) >>
                                        0x20),uVar27) >> 0x18);
          uVar33 = (uint5)uVar7 & 0xffffffff00;
          uVar11 = (uint)CONCAT52((int5)(CONCAT43(uVar7,CONCAT12((char)((uint)uVar27 >> 8),
                                                                 (short)uVar27)) >> 0x10),
                                  (short)uVar27);
          uVar30 = uVar11 & 0xff00ff;
          uVar27 = puVar17[2];
          uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar27 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar27 >> 0x10),uVar27)) >>
                                        0x20),uVar27) >> 0x18);
          uVar35 = (uint5)uVar7 & 0xffffffff00;
          uVar15 = (ulonglong)CONCAT41(uVar7,(char)((uint)uVar27 >> 8)) & 0xffffffff00ff;
          uVar34 = CONCAT62((int6)uVar15,(ushort)(byte)uVar27);
          uVar27 = CONCAT22((short)uVar13 + (short)uVar15,
                            (ushort)(byte)uVar23 + (ushort)(byte)uVar27);
          uVar37 = pmaddwd(CONCAT62((int6)uVar14,(ushort)(byte)uVar2),DAT_5f9da708);
          uVar23 = CONCAT22((uVar5 >> 8) + (uVar8 >> 8),
                            (short)((uint7)uVar6 >> 0x20) + (short)((uint7)uVar9 >> 0x20));
          uVar29 = pmaddwd(CONCAT44(uVar11,(uint)uVar10) & 0xff00ffffffffff,DAT_5f9da710);
          uVar31 = pmaddwd(CONCAT44((int)uVar34,(int)(uVar33 >> 8)),DAT_5f9da708);
          uVar36 = pmaddwd(uVar34,DAT_5f9da710);
          puVar20 = puVar19 + 1;
          iVar3 = (int)DAT_5f9da718;
          iVar4 = (int)((ulonglong)DAT_5f9da718 >> 0x20);
          uVar34 = CONCAT44(uVar27,uVar23);
          puVar22[8] = CONCAT44(((int)((ulonglong)uVar37 >> 0x20) + (int)((ulonglong)uVar29 >> 0x20)
                                ) - iVar4 >> 8,((int)uVar37 + (int)uVar29) - iVar3 >> 8);
          puVar22[9] = CONCAT44(((int)((ulonglong)uVar36 >> 0x20) + (int)((ulonglong)uVar31 >> 0x20)
                                ) - iVar4 >> 8,((int)uVar36 + (int)uVar31) - iVar3 >> 8);
          uVar31 = CONCAT44((int)(CONCAT26((short)(uVar28 >> 0x18) + (short)(uVar35 >> 0x18),
                                           CONCAT24((short)(uVar28 >> 8) + (short)(uVar35 >> 8),
                                                    uVar27)) >> 0x20),
                            (int)(CONCAT26((short)(uVar25 >> 0x10) + (short)(uVar30 >> 0x10),
                                           CONCAT24((short)(uVar24 >> 0x20) + (short)uVar30,uVar23))
                                 >> 0x20));
          uVar29 = CONCAT44(CONCAT22((short)(uVar26 >> 0x18) + (short)(uVar33 >> 0x18),
                                     (short)(uVar26 >> 8) + (short)(uVar33 >> 8)),
                            CONCAT22((short)uVar12 + (short)uVar14,
                                     (ushort)(byte)uVar1 + (ushort)(byte)uVar2));
          uVar32 = pmaddwd(uVar34,_DAT_5f9da720);
          uVar37 = pmaddwd(uVar31,_DAT_5f9da728);
          uVar36 = pmaddwd(uVar29,_DAT_5f9da730);
          uVar34 = pmaddwd(uVar34,_DAT_5f9da738);
          uVar31 = pmaddwd(uVar31,_DAT_5f9da740);
          uVar29 = pmaddwd(uVar29,_DAT_5f9da748);
          uVar16 = uVar16 - 1;
          *puVar19 = CONCAT44((int)((ulonglong)uVar32 >> 0x20) + (int)((ulonglong)uVar37 >> 0x20) +
                              (int)((ulonglong)uVar36 >> 0x20) >> 10,
                              (int)uVar32 + (int)uVar37 + (int)uVar36 >> 10);
          puVar19[0x20] =
               CONCAT44((int)((ulonglong)uVar34 >> 0x20) + (int)((ulonglong)uVar31 >> 0x20) +
                        (int)((ulonglong)uVar29 >> 0x20) >> 10,
                        (int)uVar34 + (int)uVar31 + (int)uVar29 >> 10);
          puVar18 = puVar17 + 3;
          puVar19 = puVar20;
          param_1 = puVar21 + 3;
          param_2 = puVar22 + 2;
        } while ((uVar16 & 1) != 0);
        param_2 = puVar22 + 0x1e;
      } while ((uVar16 & 3) != 0);
      param_1 = (undefined4 *)((int)puVar21 + param_3 + -0x24);
      puVar18 = (undefined4 *)((int)puVar17 + param_3 + -0x24);
      param_2 = puVar22 + -0x1e;
    } while ((uVar16 & 7) != 0);
    param_1 = (undefined4 *)((int)param_1 + param_3 * 2);
    puVar18 = (undefined4 *)((int)puVar18 + param_3 * 2);
    param_2 = puVar22 + -0x16;
  } while (((uVar16 & 0xf) != 0) || (param_2 = puVar22 + 10, uVar16 != 0));
  return;
}


