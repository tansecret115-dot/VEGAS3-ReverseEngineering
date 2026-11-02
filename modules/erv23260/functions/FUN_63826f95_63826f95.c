/* Module: erv23260.dll
   Function: FUN_63826f95
   Address: 63826f95
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63826f95(void)

{
  uint in_EAX;
  int unaff_EBP;
  undefined8 *unaff_ESI;
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 in_MM6_Da;
  undefined8 uVar10;
  undefined4 auStack_70 [28];
  
  uVar6 = *unaff_ESI;
  uVar10 = CONCAT44(auStack_70[unaff_EBP],auStack_70[unaff_EBP]);
  uVar3 = psraw(uVar6,0xf);
  uVar9 = 0;
  uVar5 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) + (short)(uVar3 >> 0x30),
                   CONCAT24((short)((ulonglong)uVar6 >> 0x20) + (short)(uVar3 >> 0x20),
                            CONCAT22((short)((ulonglong)uVar6 >> 0x10) + (short)(uVar3 >> 0x10),
                                     (short)uVar6 + (short)uVar3)));
  do {
    do {
      uVar6 = *(undefined8 *)((int)unaff_ESI + in_EAX * 4 + 8);
      bVar1 = in_EAX < 0xbffffffc;
      in_EAX = in_EAX + 0x40000004;
      uVar4 = psllw(uVar3,0xf);
      uVar8 = psraw(uVar6,0xf);
      uVar4 = uVar4 | uVar5 ^ uVar3;
      uVar2 = psubusw(uVar5 ^ uVar3,CONCAT44(in_MM6_Da,in_MM6_Da));
      uVar2 = pmulhw(uVar2,uVar10);
      uVar5 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) + (short)(uVar8 >> 0x30),
                       CONCAT24((short)((ulonglong)uVar6 >> 0x20) + (short)(uVar8 >> 0x20),
                                CONCAT22((short)((ulonglong)uVar6 >> 0x10) + (short)(uVar8 >> 0x10),
                                         (short)uVar6 + (short)uVar8))) ^ uVar8;
      uVar3 = psllw(uVar8,0xf);
      uVar3 = uVar3 | uVar5;
      uVar6 = psubusw(uVar5,CONCAT44(in_MM6_Da,in_MM6_Da));
      uVar9 = paddusw(uVar9,uVar2);
      uVar7 = pmulhw(uVar6,uVar10);
      uVar6 = paddsw(uVar2,DAT_638373a0);
      uVar9 = paddusw(uVar9,uVar7);
      uVar2 = paddsw(uVar7,DAT_638373a0);
      *(ulonglong *)(&stack0x00000134 + in_EAX * 8) =
           CONCAT44(CONCAT22((short)((ulonglong)uVar6 >> 0x10),(short)(uVar4 >> 0x10)),
                    CONCAT22((short)uVar6,(short)uVar4));
      *(ulonglong *)(&stack0x0000013c + in_EAX * 8) =
           CONCAT26((short)((ulonglong)uVar6 >> 0x30),
                    CONCAT24((short)(uVar4 >> 0x30),
                             CONCAT22((short)((ulonglong)uVar6 >> 0x20),(short)(uVar4 >> 0x20))));
      uVar6 = *(undefined8 *)((int)unaff_ESI + in_EAX * 4);
      *(ulonglong *)(&stack0x00000144 + in_EAX * 8) =
           CONCAT44(CONCAT22((short)((ulonglong)uVar2 >> 0x10),(short)(uVar3 >> 0x10)),
                    CONCAT22((short)uVar2,(short)uVar3));
      *(ulonglong *)(&stack0x0000014c + in_EAX * 8) =
           CONCAT26((short)((ulonglong)uVar2 >> 0x30),
                    CONCAT24((short)(uVar3 >> 0x30),
                             CONCAT22((short)((ulonglong)uVar2 >> 0x20),(short)(uVar3 >> 0x20))));
      uVar3 = psraw(uVar6,0xf);
      uVar5 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) + (short)(uVar3 >> 0x30),
                       CONCAT24((short)((ulonglong)uVar6 >> 0x20) + (short)(uVar3 >> 0x20),
                                CONCAT22((short)((ulonglong)uVar6 >> 0x10) + (short)(uVar3 >> 0x10),
                                         (short)uVar6 + (short)uVar3)));
    } while (bVar1);
    uVar9 = pmaddwd(uVar9,0x1000100010001);
  } while ((char)in_EAX < '\x1f');
  return;
}


