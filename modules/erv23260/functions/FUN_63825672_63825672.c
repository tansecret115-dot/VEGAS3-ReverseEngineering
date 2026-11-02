/* Module: erv23260.dll
   Function: FUN_63825672
   Address: 63825672
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_63825672(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte in_AL;
  byte bVar7;
  byte bVar8;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  undefined8 *unaff_ESI;
  undefined8 *unaff_EDI;
  short sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar17 = 0;
  do {
    uVar10 = *unaff_ESI;
    do {
      do {
        bVar8 = in_AL;
        uVar11 = *(undefined8 *)((int)unaff_ESI + unaff_EBP);
        sVar9 = (short)uVar10;
        uVar4 = (ulonglong)uVar10 >> 0x10;
        sVar12 = (short)((ulonglong)DAT_63837380 >> 0x10);
        uVar5 = (ulonglong)uVar10 >> 0x20;
        uVar6 = (ulonglong)uVar10 >> 0x30;
        sVar13 = (short)((ulonglong)DAT_63837380 >> 0x20);
        sVar14 = (short)((ulonglong)DAT_63837380 >> 0x30);
        uVar10 = *(undefined8 *)((int)unaff_ESI + unaff_EBP * 2);
        sVar1 = (short)((ulonglong)DAT_63837b78 >> 0x10);
        sVar2 = (short)((ulonglong)DAT_63837b78 >> 0x20);
        sVar3 = (short)((ulonglong)DAT_63837b78 >> 0x30);
        uVar16 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
        uVar16 = CONCAT26((((ushort)((ushort)(byte)((ulonglong)uVar10 >> 0x38) * sVar3) >> 2) -
                          (short)((ulonglong)uVar16 >> 0x30)) +
                          ((ushort)((ushort)(byte)((ulonglong)uVar11 >> 0x38) * sVar3) >> 2),
                          CONCAT24((((ushort)((short)((ulonglong)uVar10 >> 0x28) * sVar2) >> 2) -
                                   (short)((ulonglong)uVar16 >> 0x20)) +
                                   ((ushort)((short)((ulonglong)uVar11 >> 0x28) * sVar2) >> 2),
                                   CONCAT22((((ushort)((short)((ulonglong)uVar10 >> 0x18) * sVar1)
                                             >> 2) - (short)((ulonglong)uVar16 >> 0x10)) +
                                            ((ushort)((short)((ulonglong)uVar11 >> 0x18) * sVar1) >>
                                            2),(((ushort)((short)((ulonglong)uVar10 >> 8) *
                                                         (short)DAT_63837b78) >> 2) - (short)uVar16)
                                               + ((ushort)((short)((ulonglong)uVar11 >> 8) *
                                                          (short)DAT_63837b78) >> 2))));
        uVar15 = psllw(*unaff_EDI,8);
        uVar15 = CONCAT26((short)((ulonglong)uVar15 >> 0x30) -
                          (((ushort)(sVar14 * (short)((ulonglong)uVar11 >> 0x30)) >> 2) +
                          ((ushort)((short)uVar6 * sVar14) >> 2)),
                          CONCAT24((short)((ulonglong)uVar15 >> 0x20) -
                                   (((ushort)(sVar13 * (short)((ulonglong)uVar11 >> 0x20)) >> 2) +
                                   ((ushort)((short)uVar5 * sVar13) >> 2)),
                                   CONCAT22((short)((ulonglong)uVar15 >> 0x10) -
                                            (((ushort)(sVar12 * (short)((ulonglong)uVar11 >> 0x10))
                                             >> 2) + ((ushort)((short)uVar4 * sVar12) >> 2)),
                                            (short)uVar15 -
                                            (((ushort)((short)DAT_63837380 * (short)uVar11) >> 2) +
                                            ((ushort)(sVar9 * (short)DAT_63837380) >> 2)))));
        uVar11 = pmaddwd(uVar16,uVar16);
        uVar16 = pmaddwd(uVar15,uVar15);
        unaff_EDI = (undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
        unaff_ESI = (undefined8 *)((int)unaff_ESI + unaff_EBP * 2);
        uVar17 = paddusw(uVar17,uVar11);
        uVar17 = paddusw(uVar17,uVar16);
        in_AL = bVar8 + 0x80;
      } while (bVar8 < 0x80);
      bVar7 = bVar8 - 0x40;
      paddusw(CONCAT44((int)uVar17,(int)uVar10),uVar17);
      in_AL = bVar7;
    } while ((-1 < (char)bVar7) ||
            (bVar8 = bVar8 + 0x3e, in_AL = bVar8, bVar8 != 0 && -0x7f < (char)bVar7));
    unaff_EDI = unaff_EDI + unaff_EBP * -2 + 1;
    unaff_ESI = unaff_ESI + unaff_EBP * -2 + 1;
    in_AL = 3;
    unaff_EBP = unaff_EBP & 0xfffffff;
  } while (bVar8 == 0);
  return unaff_EBX;
}


