/* Module: erv23260.dll
   Function: FUN_638259b4
   Address: 638259b4
   Source: Ghidra pseudocode (Stage 10 batch) */


ulonglong FUN_638259b4(void)

{
  undefined8 uVar1;
  int unaff_EBP;
  char *unaff_ESI;
  ulonglong uVar2;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 in_MM4;
  undefined8 in_MM5;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong in_MM6;
  
  cVar5 = (char)((ulonglong)in_MM5 >> 8);
  cVar6 = (char)((ulonglong)in_MM5 >> 0x10);
  cVar7 = (char)((ulonglong)in_MM5 >> 0x18);
  cVar8 = (char)((ulonglong)in_MM5 >> 0x20);
  cVar9 = (char)((ulonglong)in_MM5 >> 0x28);
  cVar10 = (char)((ulonglong)in_MM5 >> 0x30);
  uVar2 = CONCAT17(cVar10 - ((char)((ulonglong)in_MM4 >> 0x38) - (char)((ulonglong)in_MM5 >> 0x38)),
                   CONCAT16(cVar9 - ((char)((ulonglong)in_MM4 >> 0x30) - cVar10),
                            CONCAT15(cVar8 - ((char)((ulonglong)in_MM4 >> 0x28) - cVar9),
                                     CONCAT14(cVar7 - ((char)((ulonglong)in_MM4 >> 0x20) - cVar8),
                                              CONCAT13(cVar6 - ((char)((ulonglong)in_MM4 >> 0x18) -
                                                               cVar7),
                                                       CONCAT12(cVar5 - ((char)((ulonglong)in_MM4 >>
                                                                               0x10) - cVar6),
                                                                CONCAT11((char)in_MM5 -
                                                                         ((char)((ulonglong)in_MM4
                                                                                >> 8) - cVar5),
                                                                         *unaff_ESI -
                                                                         ((char)in_MM4 -
                                                                         (char)in_MM5))))))));
  uVar11 = uVar2 & in_MM6;
  uVar1 = *(undefined8 *)(unaff_ESI + unaff_EBP + 1);
  cVar5 = (char)((ulonglong)uVar1 >> 8);
  cVar6 = (char)((ulonglong)uVar1 >> 0x10);
  cVar7 = (char)((ulonglong)uVar1 >> 0x18);
  cVar8 = (char)((ulonglong)uVar1 >> 0x20);
  cVar9 = (char)((ulonglong)uVar1 >> 0x28);
  cVar10 = (char)((ulonglong)uVar1 >> 0x30);
  uVar3 = CONCAT17(cVar10 - (-1 - (char)((ulonglong)uVar1 >> 0x38)),
                   CONCAT16(cVar9 - (-1 - cVar10),
                            CONCAT15(cVar8 - (-1 - cVar9),
                                     CONCAT14(cVar7 - (-1 - cVar8),
                                              CONCAT13(cVar6 - (-1 - cVar7),
                                                       CONCAT12(cVar5 - (-1 - cVar6),
                                                                CONCAT11((char)uVar1 - (-1 - cVar5),
                                                                         unaff_ESI[unaff_EBP] -
                                                                         (-1 - (char)uVar1))))))));
  uVar12 = uVar11 >> 1;
  uVar2 = ~in_MM6 & uVar2 & uVar3;
  uVar3 = uVar3 & in_MM6;
  uVar4 = uVar3 >> 1;
  return (CONCAT17((char)(uVar2 >> 0x38) + (byte)(uVar11 >> 0x39) + (byte)(uVar3 >> 0x39),
                   CONCAT16((char)(uVar2 >> 0x30) + (char)(uVar12 >> 0x30) + (char)(uVar4 >> 0x30),
                            CONCAT15((char)(uVar2 >> 0x28) + (char)(uVar12 >> 0x28) +
                                     (char)(uVar4 >> 0x28),
                                     CONCAT14((char)(uVar2 >> 0x20) + (char)(uVar12 >> 0x20) +
                                              (char)(uVar4 >> 0x20),
                                              CONCAT13((char)(uVar2 >> 0x18) +
                                                       (char)(uVar12 >> 0x18) +
                                                       (char)(uVar4 >> 0x18),
                                                       CONCAT12((char)(uVar2 >> 0x10) +
                                                                (char)(uVar12 >> 0x10) +
                                                                (char)(uVar4 >> 0x10),
                                                                CONCAT11((char)(uVar2 >> 8) +
                                                                         (char)(uVar12 >> 8) +
                                                                         (char)(uVar4 >> 8),
                                                                         (char)uVar2 + (char)uVar12
                                                                         + (char)uVar4))))))) &
         in_MM6) >> 1;
}


