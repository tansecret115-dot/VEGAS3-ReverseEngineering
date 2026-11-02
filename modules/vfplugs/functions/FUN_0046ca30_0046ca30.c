/* Module: vfplugs.dll
   Function: FUN_0046ca30
   Address: 0046ca30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ca30(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  short sVar12;
  undefined6 uVar13;
  short sVar14;
  short sVar15;
  undefined6 uVar16;
  short sVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  short sVar27;
  undefined8 uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  short sVar38;
  undefined8 uVar40;
  undefined8 uVar28;
  undefined8 uVar39;
  
  uVar20 = (ushort)*(byte *)(param_1 + 0xb2);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  uVar11 = (undefined1)((uint)DAT_005358e8 >> 0x18);
  sVar12 = CONCAT11(uVar11,(char)((uint)uVar1 >> 0x18));
  uVar10 = (undefined1)((uint)DAT_005358e8 >> 0x10);
  uVar9 = (undefined1)((uint)DAT_005358e8 >> 8);
  uVar8 = (undefined1)DAT_005358e8;
  sVar14 = CONCAT11(uVar11,(char)((uint)uVar2 >> 0x18));
  uVar28 = CONCAT35(CONCAT21(sVar14,uVar10),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2));
  uVar13 = CONCAT51(CONCAT41((int)((ulonglong)uVar28 >> 0x20),uVar9),(char)((uint)uVar2 >> 8));
  sVar27 = CONCAT11(uVar8,(char)uVar2);
  sVar15 = CONCAT11(uVar11,(char)((uint)uVar3 >> 0x18));
  sVar17 = CONCAT11(uVar11,(char)((uint)uVar4 >> 0x18));
  uVar39 = CONCAT35(CONCAT21(sVar17,uVar10),CONCAT14((char)((uint)uVar4 >> 0x10),uVar4));
  uVar16 = CONCAT51(CONCAT41((int)((ulonglong)uVar39 >> 0x20),uVar9),(char)((uint)uVar4 >> 8));
  sVar38 = CONCAT11(uVar8,(char)uVar4);
  uVar29 = psllw(CONCAT62(uVar13,sVar27),8);
  uVar40 = psllw(CONCAT62(uVar16,sVar38),8);
  sVar5 = (short)((ulonglong)DAT_004940b8 >> 0x10);
  sVar6 = (short)((ulonglong)DAT_004940b8 >> 0x20);
  sVar7 = (short)((ulonglong)DAT_004940b8 >> 0x30);
  uVar18 = (CONCAT11(uVar8,(char)uVar1) - sVar27) * uVar20 + (short)uVar29 + (short)DAT_004940b8;
  uVar21 = (CONCAT11(uVar9,(char)((uint)uVar1 >> 8)) - (short)uVar13) * uVar20 +
           (short)((ulonglong)uVar29 >> 0x10) + sVar5;
  uVar23 = ((short)(CONCAT35(CONCAT21(sVar12,uVar10),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                   0x20) - (short)((ulonglong)uVar28 >> 0x20)) * uVar20 +
           (short)((ulonglong)uVar29 >> 0x20) + sVar6;
  uVar25 = (sVar12 - sVar14) * uVar20 + (short)((ulonglong)uVar29 >> 0x30) + sVar7;
  uVar30 = (CONCAT11(uVar8,(char)uVar3) - sVar38) * uVar20 + (short)uVar40 + (short)DAT_004940b8;
  uVar32 = (CONCAT11(uVar9,(char)((uint)uVar3 >> 8)) - (short)uVar16) * uVar20 +
           (short)((ulonglong)uVar40 >> 0x10) + sVar5;
  uVar34 = ((short)(CONCAT35(CONCAT21(sVar15,uVar10),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                   0x20) - (short)((ulonglong)uVar39 >> 0x20)) * uVar20 +
           (short)((ulonglong)uVar40 >> 0x20) + sVar6;
  uVar36 = (sVar15 - sVar17) * uVar20 + (short)((ulonglong)uVar40 >> 0x30) + sVar7;
  uVar19 = uVar18 >> 8;
  uVar22 = uVar21 >> 8;
  uVar24 = uVar23 >> 8;
  uVar26 = uVar25 >> 8;
  uVar31 = uVar30 >> 8;
  uVar33 = uVar32 >> 8;
  uVar35 = uVar34 >> 8;
  uVar37 = uVar36 >> 8;
  *(uint *)(param_1 + 0x3c) =
       CONCAT13((uVar26 != 0) * (uVar26 < 0x100) * (char)(uVar25 >> 8) - (0xff < uVar26),
                CONCAT12((uVar24 != 0) * (uVar24 < 0x100) * (char)(uVar23 >> 8) - (0xff < uVar24),
                         CONCAT11((uVar22 != 0) * (uVar22 < 0x100) * (char)(uVar21 >> 8) -
                                  (0xff < uVar22),
                                  (uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar18 >> 8) -
                                  (0xff < uVar19))));
  *(uint *)(param_1 + 0x44) =
       CONCAT13((uVar37 != 0) * (uVar37 < 0x100) * (char)(uVar36 >> 8) - (0xff < uVar37),
                CONCAT12((uVar35 != 0) * (uVar35 < 0x100) * (char)(uVar34 >> 8) - (0xff < uVar35),
                         CONCAT11((uVar33 != 0) * (uVar33 < 0x100) * (char)(uVar32 >> 8) -
                                  (0xff < uVar33),
                                  (uVar31 != 0) * (uVar31 < 0x100) * (char)(uVar30 >> 8) -
                                  (0xff < uVar31))));
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar11 = (undefined1)((uint)DAT_005358e8 >> 0x18);
  sVar12 = CONCAT11(uVar11,(char)((uint)uVar1 >> 0x18));
  uVar10 = (undefined1)((uint)DAT_005358e8 >> 0x10);
  uVar9 = (undefined1)((uint)DAT_005358e8 >> 8);
  uVar8 = (undefined1)DAT_005358e8;
  sVar14 = CONCAT11(uVar11,(char)((uint)uVar2 >> 0x18));
  uVar28 = CONCAT35(CONCAT21(sVar14,uVar10),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2));
  uVar13 = CONCAT51(CONCAT41((int)((ulonglong)uVar28 >> 0x20),uVar9),(char)((uint)uVar2 >> 8));
  sVar27 = CONCAT11(uVar8,(char)uVar2);
  sVar15 = CONCAT11(uVar11,(char)((uint)uVar3 >> 0x18));
  sVar17 = CONCAT11(uVar11,(char)((uint)uVar4 >> 0x18));
  uVar39 = CONCAT35(CONCAT21(sVar17,uVar10),CONCAT14((char)((uint)uVar4 >> 0x10),uVar4));
  uVar16 = CONCAT51(CONCAT41((int)((ulonglong)uVar39 >> 0x20),uVar9),(char)((uint)uVar4 >> 8));
  sVar38 = CONCAT11(uVar8,(char)uVar4);
  uVar29 = psllw(CONCAT62(uVar13,sVar27),8);
  uVar40 = psllw(CONCAT62(uVar16,sVar38),8);
  sVar5 = (short)((ulonglong)DAT_004940b8 >> 0x10);
  sVar6 = (short)((ulonglong)DAT_004940b8 >> 0x20);
  sVar7 = (short)((ulonglong)DAT_004940b8 >> 0x30);
  uVar18 = (CONCAT11(uVar8,(char)uVar1) - sVar27) * uVar20 + (short)uVar29 + (short)DAT_004940b8;
  uVar19 = (CONCAT11(uVar9,(char)((uint)uVar1 >> 8)) - (short)uVar13) * uVar20 +
           (short)((ulonglong)uVar29 >> 0x10) + sVar5;
  uVar22 = ((short)(CONCAT35(CONCAT21(sVar12,uVar10),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                   0x20) - (short)((ulonglong)uVar28 >> 0x20)) * uVar20 +
           (short)((ulonglong)uVar29 >> 0x20) + sVar6;
  uVar24 = (sVar12 - sVar14) * uVar20 + (short)((ulonglong)uVar29 >> 0x30) + sVar7;
  uVar26 = (CONCAT11(uVar8,(char)uVar3) - sVar38) * uVar20 + (short)uVar40 + (short)DAT_004940b8;
  uVar31 = (CONCAT11(uVar9,(char)((uint)uVar3 >> 8)) - (short)uVar16) * uVar20 +
           (short)((ulonglong)uVar40 >> 0x10) + sVar5;
  uVar33 = ((short)(CONCAT35(CONCAT21(sVar15,uVar10),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                   0x20) - (short)((ulonglong)uVar39 >> 0x20)) * uVar20 +
           (short)((ulonglong)uVar40 >> 0x20) + sVar6;
  uVar35 = (sVar15 - sVar17) * uVar20 + (short)((ulonglong)uVar40 >> 0x30) + sVar7;
  uVar20 = uVar18 >> 8;
  uVar21 = uVar19 >> 8;
  uVar23 = uVar22 >> 8;
  uVar25 = uVar24 >> 8;
  uVar30 = uVar26 >> 8;
  uVar32 = uVar31 >> 8;
  uVar34 = uVar33 >> 8;
  uVar36 = uVar35 >> 8;
  *(uint *)(param_1 + 0x4c) =
       CONCAT13((uVar25 != 0) * (uVar25 < 0x100) * (char)(uVar24 >> 8) - (0xff < uVar25),
                CONCAT12((uVar23 != 0) * (uVar23 < 0x100) * (char)(uVar22 >> 8) - (0xff < uVar23),
                         CONCAT11((uVar21 != 0) * (uVar21 < 0x100) * (char)(uVar19 >> 8) -
                                  (0xff < uVar21),
                                  (uVar20 != 0) * (uVar20 < 0x100) * (char)(uVar18 >> 8) -
                                  (0xff < uVar20))));
  *(uint *)(param_1 + 0x54) =
       CONCAT13((uVar36 != 0) * (uVar36 < 0x100) * (char)(uVar35 >> 8) - (0xff < uVar36),
                CONCAT12((uVar34 != 0) * (uVar34 < 0x100) * (char)(uVar33 >> 8) - (0xff < uVar34),
                         CONCAT11((uVar32 != 0) * (uVar32 < 0x100) * (char)(uVar31 >> 8) -
                                  (0xff < uVar32),
                                  (uVar30 != 0) * (uVar30 < 0x100) * (char)(uVar26 >> 8) -
                                  (0xff < uVar30))));
  return;
}


