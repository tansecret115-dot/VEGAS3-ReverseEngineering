/* Module: erv23260.dll
   Function: FUN_638258a6
   Address: 638258a6
   Source: Ghidra pseudocode (Stage 10 batch) */


ulonglong FUN_638258a6(void)

{
  char *unaff_ESI;
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char in_MM4_Ba;
  char in_MM4_Bb;
  char in_MM4_Bc;
  char in_MM4_Bd;
  char in_MM4_Be;
  char in_MM4_Bf;
  char in_MM4_Bg;
  char in_MM4_Bh;
  undefined8 in_MM5;
  ulonglong in_MM6;
  
  cVar1 = (char)((ulonglong)in_MM5 >> 8);
  cVar2 = (char)((ulonglong)in_MM5 >> 0x10);
  cVar3 = (char)((ulonglong)in_MM5 >> 0x18);
  cVar4 = (char)((ulonglong)in_MM5 >> 0x20);
  cVar5 = (char)((ulonglong)in_MM5 >> 0x28);
  cVar6 = (char)((ulonglong)in_MM5 >> 0x30);
  return (CONCAT17(((char)((ulonglong)in_MM5 >> 0x38) + cVar6) - in_MM4_Bh,
                   CONCAT16((cVar6 + cVar5) - in_MM4_Bg,
                            CONCAT15((cVar5 + cVar4) - in_MM4_Bf,
                                     CONCAT14((cVar4 + cVar3) - in_MM4_Be,
                                              CONCAT13((cVar3 + cVar2) - in_MM4_Bd,
                                                       CONCAT12((cVar2 + cVar1) - in_MM4_Bc,
                                                                CONCAT11((cVar1 + (char)in_MM5) -
                                                                         in_MM4_Bb,
                                                                         ((char)in_MM5 - in_MM4_Ba)
                                                                         + *unaff_ESI))))))) &
         in_MM6) >> 1;
}


