/* Module: erv33260.dll
   Function: FUN_6708a6e0
   Address: 6708a6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl
FUN_6708a6e0(undefined8 *param_1,byte *param_2,int param_3,uint param_4,byte *param_5,
            undefined8 *param_6)

{
  byte *pbVar1;
  undefined2 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ushort uVar29;
  ulonglong uVar28;
  ushort uVar31;
  ulonglong uVar30;
  
  bVar15 = (param_4 & 4) == 0;
  bVar16 = (param_4 & 1) == 0;
  if (!bVar16 && !bVar15) {
    FUN_6708a500((int)param_2,param_3,(int)param_6);
  }
  pbVar3 = param_2;
  if (!bVar15) {
    pbVar3 = param_2 + -param_3;
  }
  if (!bVar16) {
    param_2 = param_2 + -1;
  }
  iVar10 = 0x800;
  if (!bVar16) {
    iVar6 = 8;
    iVar10 = 0;
    pbVar13 = param_2;
    do {
      bVar9 = *pbVar13;
      pbVar1 = pbVar13 + param_3;
      pbVar13 = pbVar13 + param_3 * 2;
      iVar10 = iVar10 + (uint)bVar9 + (uint)*pbVar1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar17 = psadbw(0,*(undefined8 *)pbVar3);
  uVar24 = psadbw(0,*(undefined8 *)(pbVar3 + 8));
  iVar6 = CONCAT22((short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar24 >> 0x10),
                   (short)uVar17 + (short)uVar24);
  if (bVar15) {
    iVar6 = iVar10;
  }
  if (bVar16) {
    iVar10 = iVar6;
  }
  uVar4 = iVar6 + iVar10 + 0x10;
  uVar5 = uVar4 >> 5;
  bVar9 = (byte)(uVar4 >> 0x18);
  uVar21 = (undefined1)(uVar5 >> 0x10);
  uVar20 = (undefined1)(uVar5 >> 8);
  uVar17 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(bVar9 >> 5,bVar9 >> 5),uVar21
                                                             ),CONCAT14(uVar21,uVar5)) >> 0x20),
                                      uVar20),uVar20),CONCAT11((char)uVar5,(char)uVar5));
  uVar17 = pshufw(uVar17,uVar17,0);
  puVar11 = (undefined4 *)((uint)param_2 & 0xfffffffc);
  iVar10 = 0x10;
  uVar28 = 0;
  uVar30 = 0;
  puVar14 = param_6;
  do {
    uVar24 = *param_1;
    uVar27 = param_1[1];
    uVar18 = psadbw(uVar17,uVar24);
    uVar25 = psadbw(uVar17,uVar27);
    uVar19 = psadbw(*(undefined8 *)pbVar3,uVar24);
    uVar26 = psadbw(*(undefined8 *)(pbVar3 + 8),uVar27);
    uVar5 = CONCAT22((short)(uVar28 >> 0x10) + (short)((ulonglong)uVar18 >> 0x10) +
                     (short)((ulonglong)uVar25 >> 0x10),
                     (short)uVar28 + (short)uVar18 + (short)uVar25);
    uVar29 = (short)(uVar28 >> 0x20) + (short)((ulonglong)uVar18 >> 0x20) +
             (short)((ulonglong)uVar25 >> 0x20) + (short)uVar19 + (short)uVar26;
    uVar28 = (ulonglong)CONCAT24(uVar29,uVar5);
    uVar23 = *puVar11;
    uVar22 = (undefined1)((uint)uVar23 >> 0x18);
    uVar21 = (undefined1)((uint)uVar23 >> 0x10);
    uVar20 = (undefined1)((uint)uVar23 >> 8);
    uVar18 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar22,uVar22),uVar21),
                                                       CONCAT14(uVar21,uVar23)) >> 0x20),uVar20),
                               uVar20),CONCAT11((char)uVar23,(char)uVar23));
    uVar18 = pshufw(uVar18,uVar18,0xff);
    uVar19 = psadbw(uVar18,uVar24);
    uVar18 = psadbw(uVar18,uVar27);
    uVar24 = psadbw(*puVar14,uVar24);
    uVar27 = psadbw(puVar14[1],uVar27);
    uVar4 = CONCAT22((short)(uVar30 >> 0x10) + (short)((ulonglong)uVar19 >> 0x10) +
                     (short)((ulonglong)uVar18 >> 0x10),
                     (short)uVar30 + (short)uVar19 + (short)uVar18);
    uVar31 = (short)(uVar30 >> 0x20) + (short)((ulonglong)uVar19 >> 0x20) +
             (short)((ulonglong)uVar18 >> 0x20) + (short)uVar24 + (short)uVar27;
    uVar30 = (ulonglong)CONCAT24(uVar31,uVar4);
    param_1 = (undefined8 *)((int)param_1 + param_3);
    puVar11 = (undefined4 *)((int)puVar11 + param_3);
    puVar14 = puVar14 + 2;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  uVar12 = 0xffffffff;
  uVar7 = (uint)uVar29;
  if (bVar15) {
    uVar7 = uVar12;
  }
  uVar8 = uVar5;
  if (uVar7 < uVar5) {
    uVar8 = uVar7;
  }
  bVar9 = uVar7 < uVar5;
  if (bVar16) {
    uVar4 = uVar12;
  }
  if (uVar4 < uVar8) {
    bVar9 = 2;
    uVar8 = uVar4;
  }
  uVar4 = (uint)uVar31;
  if (bVar16 || bVar15) {
    uVar4 = uVar12;
  }
  if (uVar4 < uVar8) {
    bVar9 = 3;
    uVar8 = uVar4;
  }
  *param_5 = bVar9;
  if (bVar9 != 3) {
    if (bVar9 < 2) {
      iVar10 = 0x10;
      uVar24 = uVar17;
      if (-1 < (char)(bVar9 - 1)) {
        uVar17 = *(undefined8 *)pbVar3;
        uVar24 = *(undefined8 *)(pbVar3 + 8);
      }
      do {
        *param_6 = uVar17;
        param_6[1] = uVar24;
        param_6 = param_6 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    else {
      puVar11 = (undefined4 *)((uint)param_2 & 0xfffffffc);
      iVar10 = 0x10;
      do {
        uVar23 = *puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + param_3);
        uVar20 = (undefined1)((uint)uVar23 >> 0x18);
        uVar2 = CONCAT11(uVar20,uVar20);
        uVar23 = (undefined4)(CONCAT26(uVar2,(uint6)CONCAT22(uVar2,uVar2) << 0x20) >> 0x20);
        uVar17 = CONCAT44(uVar23,uVar23);
        *param_6 = uVar17;
        param_6[1] = uVar17;
        param_6 = param_6 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return uVar8;
}


