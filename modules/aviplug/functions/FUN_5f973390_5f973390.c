/* Module: aviplug.dll
   Function: FUN_5f973390
   Address: 5f973390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f973390(int param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined2 uVar7;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined8 uVar15;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined8 uVar19;
  short sVar24;
  short sVar25;
  undefined8 uVar23;
  short sVar26;
  undefined4 uVar8;
  
  iVar5 = 5;
  puVar6 = (uint *)(param_1 + 8);
  do {
    iVar4 = 5;
    do {
      uVar19 = 0;
      uVar15 = 0;
      uVar3 = *puVar6;
      uVar23 = 0;
      while( true ) {
        sVar16 = (short)((ulonglong)uVar15 >> 0x10);
        sVar17 = (short)((ulonglong)uVar15 >> 0x20);
        sVar18 = (short)((ulonglong)uVar15 >> 0x30);
        sVar20 = (short)((ulonglong)uVar19 >> 0x10);
        sVar21 = (short)((ulonglong)uVar19 >> 0x20);
        sVar22 = (short)((ulonglong)uVar19 >> 0x30);
        sVar24 = (short)((ulonglong)uVar23 >> 0x10);
        sVar25 = (short)((ulonglong)uVar23 >> 0x20);
        sVar26 = (short)((ulonglong)uVar23 >> 0x30);
        if (uVar3 == 0x1556) break;
        puVar1 = puVar6 + 1;
        uVar3 = uVar3 >> 0xe;
        uVar2 = (uint)((int)*puVar1 < 0);
        puVar6 = puVar6 + 2;
        uVar7 = (undefined2)
                ((*puVar1 ^ -uVar2) + uVar2 << (int)*(undefined8 *)(&DAT_5f9dcaa0 + uVar3 * 8));
        uVar8 = CONCAT22(uVar7,uVar7);
        uVar13 = CONCAT44(uVar8,uVar8);
        uVar9 = *(ulonglong *)(&DAT_5f9dcaa8 + uVar3 * 8) & uVar13;
        uVar11 = *(ulonglong *)(&DAT_5f9dcab0 + uVar3 * 8) & uVar13;
        uVar13 = *(ulonglong *)(&DAT_5f9dcab8 + uVar3 * 8) & uVar13;
        uVar15 = CONCAT26(sVar18 + (short)(uVar9 >> 0x30),
                          CONCAT24(sVar17 + (short)(uVar9 >> 0x20),
                                   CONCAT22(sVar16 + (short)(uVar9 >> 0x10),
                                            (short)uVar15 + (short)uVar9)));
        uVar19 = CONCAT26(sVar22 + (short)(uVar11 >> 0x30),
                          CONCAT24(sVar21 + (short)(uVar11 >> 0x20),
                                   CONCAT22(sVar20 + (short)(uVar11 >> 0x10),
                                            (short)uVar19 + (short)uVar11)));
        uVar23 = CONCAT26(sVar26 + (short)(uVar13 >> 0x30),
                          CONCAT24(sVar25 + (short)(uVar13 >> 0x20),
                                   CONCAT22(sVar24 + (short)(uVar13 >> 0x10),
                                            (short)uVar23 + (short)uVar13)));
        uVar3 = *puVar6;
      }
      uVar14 = *(undefined8 *)(&UNK_5f9dcb20 + iVar4 * 8);
      uVar10 = psllw(uVar15,uVar14);
      uVar12 = psllw(uVar19,uVar14);
      sVar16 = sVar16 + (short)((ulonglong)uVar10 >> 0x10);
      uVar14 = psllw(uVar23,uVar14);
      sVar20 = sVar20 + (short)((ulonglong)uVar12 >> 0x10);
      sVar24 = sVar24 + (short)((ulonglong)uVar14 >> 0x10);
      *param_2 = (ulonglong)CONCAT24(sVar16,CONCAT22(sVar16,(short)uVar15 + (short)uVar10)) &
                 0xffffffff0000ffff;
      param_2[1] = (ulonglong)
                   CONCAT24(sVar18 + (short)((ulonglong)uVar10 >> 0x30),
                            (uint)(ushort)(sVar17 + (short)((ulonglong)uVar10 >> 0x20)));
      param_2[2] = (ulonglong)CONCAT24(sVar20,CONCAT22(sVar20,(short)uVar19 + (short)uVar12)) &
                   0xffffffff0000ffff;
      param_2[3] = (ulonglong)
                   CONCAT24(sVar22 + (short)((ulonglong)uVar12 >> 0x30),
                            (uint)(ushort)(sVar21 + (short)((ulonglong)uVar12 >> 0x20)));
      param_2[4] = (ulonglong)CONCAT24(sVar24,CONCAT22(sVar24,(short)uVar23 + (short)uVar14)) &
                   0xffffffff0000ffff;
      param_2[5] = (ulonglong)
                   CONCAT24(sVar26 + (short)((ulonglong)uVar14 >> 0x30),
                            (uint)(ushort)(sVar25 + (short)((ulonglong)uVar14 >> 0x20)));
      puVar6 = puVar6 + 4;
      param_2 = param_2 + 6;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


