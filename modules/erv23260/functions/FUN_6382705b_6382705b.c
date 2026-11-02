/* Module: erv23260.dll
   Function: FUN_6382705b
   Address: 6382705b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6382705b(void)

{
  uint uVar1;
  int unaff_EBP;
  int unaff_ESI;
  bool bVar2;
  undefined8 uVar3;
  short sVar6;
  short sVar7;
  ulonglong uVar4;
  short sVar8;
  ulonglong uVar5;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 auStack_70 [28];
  
  uVar12 = *(undefined8 *)(unaff_ESI + 0x20);
  uVar13 = CONCAT44(auStack_70[unaff_EBP],auStack_70[unaff_EBP]);
  uVar1 = 0xfffffffc;
  uVar10 = psraw(uVar12,0xf);
  uVar3 = *(undefined8 *)(unaff_ESI + -0x40);
  uVar4 = CONCAT26((short)((ulonglong)uVar12 >> 0x30) + (short)(uVar10 >> 0x30),
                   CONCAT24((short)((ulonglong)uVar12 >> 0x20) + (short)(uVar10 >> 0x20),
                            CONCAT22((short)((ulonglong)uVar12 >> 0x10) + (short)(uVar10 >> 0x10),
                                     (short)uVar12 + (short)uVar10)));
  do {
    do {
      uVar11 = psllw(uVar10,0xf);
      uVar11 = uVar11 | uVar4 ^ uVar10;
      uVar12 = pmulhw(uVar4 ^ uVar10,uVar13);
      uVar4 = psraw(uVar3,0xf);
      sVar6 = (short)(uVar4 >> 0x10);
      sVar7 = (short)(uVar4 >> 0x20);
      sVar8 = (short)(uVar4 >> 0x30);
      uVar10 = CONCAT26((short)((ulonglong)uVar3 >> 0x30) + sVar8,
                        CONCAT24((short)((ulonglong)uVar3 >> 0x20) + sVar7,
                                 CONCAT22((short)((ulonglong)uVar3 >> 0x10) + sVar6,
                                          (short)uVar3 + (short)uVar4))) ^ uVar4;
      uVar5 = psllw(uVar4,0xf);
      uVar5 = uVar5 | uVar10;
      uVar10 = pmulhw(uVar10,uVar13);
      uVar12 = paddsw(uVar12,DAT_638373a0);
      uVar9 = uVar4 ^ uVar10;
      uVar3 = paddsw(uVar10,DAT_638373a0);
      *(ulonglong *)(&stack0x000001b4 + uVar1 * 8) =
           CONCAT44(CONCAT22((short)((ulonglong)uVar12 >> 0x10),(short)(uVar11 >> 0x10)),
                    CONCAT22((short)uVar12,(short)uVar11));
      *(ulonglong *)(&stack0x000001bc + uVar1 * 8) =
           CONCAT26((short)((ulonglong)uVar12 >> 0x30),
                    CONCAT24((short)(uVar11 >> 0x30),
                             CONCAT22((short)((ulonglong)uVar12 >> 0x20),(short)(uVar11 >> 0x20))));
      uVar12 = *(undefined8 *)(unaff_ESI + 0x38 + uVar1 * 4);
      *(ulonglong *)(unaff_ESI + -0x30 + uVar1 * 4) =
           CONCAT26((short)(uVar9 >> 0x30) - sVar8,
                    CONCAT24((short)(uVar9 >> 0x20) - sVar7,
                             CONCAT22((short)(uVar9 >> 0x10) - sVar6,(short)uVar9 - (short)uVar4)));
      *(ulonglong *)(&stack0x000000f4 + uVar1 * 8) =
           CONCAT44(CONCAT22((short)((ulonglong)uVar3 >> 0x10),(short)(uVar5 >> 0x10)),
                    CONCAT22((short)uVar3,(short)uVar5));
      *(ulonglong *)(&stack0x000000fc + uVar1 * 8) =
           CONCAT26((short)((ulonglong)uVar3 >> 0x30),
                    CONCAT24((short)(uVar5 >> 0x30),
                             CONCAT22((short)((ulonglong)uVar3 >> 0x20),(short)(uVar5 >> 0x20))));
      uVar10 = psraw(uVar12,0xf);
      uVar3 = *(undefined8 *)(unaff_ESI + -0x28 + uVar1 * 4);
      uVar4 = CONCAT26((short)((ulonglong)uVar12 >> 0x30) + (short)(uVar10 >> 0x30),
                       CONCAT24((short)((ulonglong)uVar12 >> 0x20) + (short)(uVar10 >> 0x20),
                                CONCAT22((short)((ulonglong)uVar12 >> 0x10) +
                                         (short)(uVar10 >> 0x10),(short)uVar12 + (short)uVar10)));
      bVar2 = uVar1 < 0xbffffffe;
      uVar1 = uVar1 + 0x40000002;
    } while (bVar2);
  } while ((char)uVar1 != '\x14');
  return;
}


