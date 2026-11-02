/* Module: g2plug.dll
   Function: FUN_5f85e9a0
   Address: 5f85e9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f85e9a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined6 uVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  short sVar17;
  undefined8 uVar19;
  undefined8 uVar18;
  
  uVar10 = (ushort)*(byte *)(param_1 + 0xb2);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar5 = (undefined1)((uint)DAT_5f898128 >> 0x18);
  sVar7 = CONCAT11(uVar5,(char)((uint)uVar1 >> 0x18));
  uVar4 = (undefined1)((uint)DAT_5f898128 >> 0x10);
  uVar18 = CONCAT35(CONCAT21(sVar7,uVar4),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1));
  uVar3 = (undefined1)((uint)DAT_5f898128 >> 8);
  uVar6 = CONCAT51(CONCAT41((int)((ulonglong)uVar18 >> 0x20),uVar3),(char)((uint)uVar1 >> 8));
  sVar17 = CONCAT11((char)DAT_5f898128,(char)uVar1);
  sVar8 = CONCAT11(uVar5,(char)((uint)uVar2 >> 0x18));
  uVar19 = psllw(CONCAT62(uVar6,sVar17),8);
  uVar9 = (CONCAT11((char)DAT_5f898128,(char)uVar2) - sVar17) * uVar10 +
          (short)uVar19 + (short)DAT_5f876f48;
  uVar11 = (CONCAT11(uVar3,(char)((uint)uVar2 >> 8)) - (short)uVar6) * uVar10 +
           (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)DAT_5f876f48 >> 0x10);
  uVar13 = ((short)(CONCAT35(CONCAT21(sVar8,uVar4),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                   0x20) - (short)((ulonglong)uVar18 >> 0x20)) * uVar10 +
           (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)DAT_5f876f48 >> 0x20);
  uVar15 = (sVar8 - sVar7) * uVar10 +
           (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)DAT_5f876f48 >> 0x30);
  uVar10 = uVar9 >> 8;
  uVar12 = uVar11 >> 8;
  uVar14 = uVar13 >> 8;
  uVar16 = uVar15 >> 8;
  *(undefined4 *)(param_1 + 0x3c) =
       CONCAT13((uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar15 >> 8) - (0xff < uVar16),
                CONCAT12((uVar14 != 0) * (uVar14 < 0x100) * (char)(uVar13 >> 8) - (0xff < uVar14),
                         CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)(uVar11 >> 8) -
                                  (0xff < uVar12),
                                  (uVar10 != 0) * (uVar10 < 0x100) * (char)(uVar9 >> 8) -
                                  (0xff < uVar10))));
  return;
}


