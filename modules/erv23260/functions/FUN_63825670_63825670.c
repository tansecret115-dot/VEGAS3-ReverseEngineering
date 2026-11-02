/* Module: erv23260.dll
   Function: FUN_63825670
   Address: 63825670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_63825670(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  undefined8 *unaff_ESI;
  undefined8 *unaff_EDI;
  short sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  bVar7 = 1;
  uVar18 = 0;
  do {
    uVar11 = *unaff_ESI;
    do {
      do {
        bVar9 = bVar7;
        uVar12 = *(undefined8 *)((int)unaff_ESI + unaff_EBP);
        sVar10 = (short)uVar11;
        uVar4 = (ulonglong)uVar11 >> 0x10;
        sVar13 = (short)((ulonglong)DAT_63837380 >> 0x10);
        uVar5 = (ulonglong)uVar11 >> 0x20;
        uVar6 = (ulonglong)uVar11 >> 0x30;
        sVar14 = (short)((ulonglong)DAT_63837380 >> 0x20);
        sVar15 = (short)((ulonglong)DAT_63837380 >> 0x30);
        uVar11 = *(undefined8 *)((int)unaff_ESI + unaff_EBP * 2);
        sVar1 = (short)((ulonglong)DAT_63837b78 >> 0x10);
        sVar2 = (short)((ulonglong)DAT_63837b78 >> 0x20);
        sVar3 = (short)((ulonglong)DAT_63837b78 >> 0x30);
        uVar17 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
        uVar17 = CONCAT26((((ushort)((ushort)(byte)((ulonglong)uVar11 >> 0x38) * sVar3) >> 2) -
                          (short)((ulonglong)uVar17 >> 0x30)) +
                          ((ushort)((ushort)(byte)((ulonglong)uVar12 >> 0x38) * sVar3) >> 2),
                          CONCAT24((((ushort)((short)((ulonglong)uVar11 >> 0x28) * sVar2) >> 2) -
                                   (short)((ulonglong)uVar17 >> 0x20)) +
                                   ((ushort)((short)((ulonglong)uVar12 >> 0x28) * sVar2) >> 2),
                                   CONCAT22((((ushort)((short)((ulonglong)uVar11 >> 0x18) * sVar1)
                                             >> 2) - (short)((ulonglong)uVar17 >> 0x10)) +
                                            ((ushort)((short)((ulonglong)uVar12 >> 0x18) * sVar1) >>
                                            2),(((ushort)((short)((ulonglong)uVar11 >> 8) *
                                                         (short)DAT_63837b78) >> 2) - (short)uVar17)
                                               + ((ushort)((short)((ulonglong)uVar12 >> 8) *
                                                          (short)DAT_63837b78) >> 2))));
        uVar16 = psllw(*unaff_EDI,8);
        uVar16 = CONCAT26((short)((ulonglong)uVar16 >> 0x30) -
                          (((ushort)(sVar15 * (short)((ulonglong)uVar12 >> 0x30)) >> 2) +
                          ((ushort)((short)uVar6 * sVar15) >> 2)),
                          CONCAT24((short)((ulonglong)uVar16 >> 0x20) -
                                   (((ushort)(sVar14 * (short)((ulonglong)uVar12 >> 0x20)) >> 2) +
                                   ((ushort)((short)uVar5 * sVar14) >> 2)),
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) -
                                            (((ushort)(sVar13 * (short)((ulonglong)uVar12 >> 0x10))
                                             >> 2) + ((ushort)((short)uVar4 * sVar13) >> 2)),
                                            (short)uVar16 -
                                            (((ushort)((short)DAT_63837380 * (short)uVar12) >> 2) +
                                            ((ushort)(sVar10 * (short)DAT_63837380) >> 2)))));
        uVar12 = pmaddwd(uVar17,uVar17);
        uVar17 = pmaddwd(uVar16,uVar16);
        unaff_EDI = (undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
        unaff_ESI = (undefined8 *)((int)unaff_ESI + unaff_EBP * 2);
        uVar18 = paddusw(uVar18,uVar12);
        uVar18 = paddusw(uVar18,uVar17);
        bVar7 = bVar9 + 0x80;
      } while (bVar9 < 0x80);
      bVar8 = bVar9 - 0x40;
      paddusw(CONCAT44((int)uVar18,(int)uVar11),uVar18);
      bVar7 = bVar8;
    } while ((-1 < (char)bVar8) ||
            (bVar9 = bVar9 + 0x3e, bVar7 = bVar9, bVar9 != 0 && -0x7f < (char)bVar8));
    unaff_EDI = unaff_EDI + unaff_EBP * -2 + 1;
    unaff_ESI = unaff_ESI + unaff_EBP * -2 + 1;
    bVar7 = 3;
    unaff_EBP = unaff_EBP & 0xfffffff;
  } while (bVar9 == 0);
  return unaff_EBX;
}


