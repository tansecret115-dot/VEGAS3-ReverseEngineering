/* Module: erv23260.dll
   Function: FUN_638242b0
   Address: 638242b0
   Source: Ghidra pseudocode (Stage 10 batch) */


ulonglong FUN_638242b0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  undefined8 *unaff_ESI;
  undefined8 *puVar3;
  undefined8 *unaff_EDI;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined8 in_MM7;
  
  iVar1 = unaff_EBP * 3;
  iVar2 = unaff_EBP * 9;
  uVar6 = *unaff_ESI;
  uVar13 = unaff_ESI[1];
  uVar16 = *unaff_EDI;
  uVar16 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar6 >> 0x20) - (short)((ulonglong)uVar16 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                      (short)((ulonglong)uVar16 >> 0x10),
                                      (short)uVar6 - (short)uVar16)));
  uVar6 = unaff_EDI[1];
  uVar13 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar13 >> 0x20) - (short)((ulonglong)uVar6 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                      (short)((ulonglong)uVar6 >> 0x10),(short)uVar13 - (short)uVar6
                                     )));
  uVar11 = pmaddwd(uVar16,uVar16);
  uVar6 = *(undefined8 *)(iVar1 + (int)unaff_ESI);
  uVar8 = pmaddwd(uVar13,uVar13);
  uVar13 = *(undefined8 *)(iVar1 + 8 + (int)unaff_ESI);
  uVar16 = *(undefined8 *)(iVar1 + (int)unaff_EDI);
  uVar5 = *(undefined8 *)(iVar1 + 8 + (int)unaff_EDI);
  uVar16 = psllw(CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                                   (short)((ulonglong)uVar16 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                            (short)((ulonglong)uVar16 >> 0x10),
                                            (short)uVar6 - (short)uVar16))),8);
  uVar6 = *(undefined8 *)((int)unaff_ESI + unaff_EBP * 6);
  uVar17 = pmaddwd(uVar16,uVar16);
  uVar16 = *(undefined8 *)((int)unaff_ESI + unaff_EBP * 6 + 8);
  uVar5 = psllw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar5 >> 0x30),
                         CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                                  (short)((ulonglong)uVar5 >> 0x20),
                                  CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                           (short)((ulonglong)uVar5 >> 0x10),
                                           (short)uVar13 - (short)uVar5))),8);
  uVar13 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 6);
  uVar13 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar13 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar6 >> 0x20) - (short)((ulonglong)uVar13 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                      (short)((ulonglong)uVar13 >> 0x10),
                                      (short)uVar6 - (short)uVar13)));
  uVar5 = pmaddwd(uVar5,uVar5);
  uVar6 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 6 + 8);
  uVar16 = CONCAT26((short)((ulonglong)uVar16 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar16 >> 0x20) - (short)((ulonglong)uVar6 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar16 >> 0x10) -
                                      (short)((ulonglong)uVar6 >> 0x10),(short)uVar16 - (short)uVar6
                                     )));
  uVar9 = pmaddwd(uVar13,uVar13);
  uVar6 = *(undefined8 *)(iVar2 + (int)unaff_ESI);
  uVar12 = paddusw(uVar11,uVar17);
  uVar13 = *(undefined8 *)(iVar2 + 8 + (int)unaff_ESI);
  uVar17 = pmaddwd(uVar16,uVar16);
  uVar16 = *(undefined8 *)(iVar2 + (int)unaff_EDI);
  uVar11 = paddusw(uVar8,uVar5);
  uVar5 = *(undefined8 *)(iVar2 + 8 + (int)unaff_EDI);
  uVar12 = paddusw(uVar12,uVar9);
  uVar8 = *(undefined8 *)((int)unaff_ESI + unaff_EBP * 0xc);
  uVar9 = psllw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar5 >> 0x30),
                         CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                                  (short)((ulonglong)uVar5 >> 0x20),
                                  CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                           (short)((ulonglong)uVar5 >> 0x10),
                                           (short)uVar13 - (short)uVar5))),8);
  uVar13 = *(undefined8 *)((int)unaff_ESI + unaff_EBP * 0xc + 8);
  uVar5 = psllw(CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                         CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                                  (short)((ulonglong)uVar16 >> 0x20),
                                  CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                           (short)((ulonglong)uVar16 >> 0x10),
                                           (short)uVar6 - (short)uVar16))),8);
  uVar6 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 0xc);
  uVar16 = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar8 >> 0x20) - (short)((ulonglong)uVar6 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar8 >> 0x10) -
                                      (short)((ulonglong)uVar6 >> 0x10),(short)uVar8 - (short)uVar6)
                            ));
  uVar5 = pmaddwd(uVar5,uVar5);
  uVar6 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 0xc + 8);
  uVar13 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar13 >> 0x20) - (short)((ulonglong)uVar6 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                      (short)((ulonglong)uVar6 >> 0x10),(short)uVar13 - (short)uVar6
                                     )));
  uVar6 = pmaddwd(uVar16,uVar16);
  iVar2 = unaff_EBP * 7;
  uVar16 = pmaddwd(uVar13,uVar13);
  puVar3 = (undefined8 *)((int)unaff_ESI + iVar2);
  uVar18 = pmaddwd(uVar9,uVar9);
  puVar4 = (undefined8 *)((int)unaff_EDI + iVar2);
  uVar9 = paddusw(uVar5,uVar6);
  uVar6 = puVar3[unaff_EBP];
  uVar8 = paddusw(uVar11,uVar17);
  uVar13 = puVar3[unaff_EBP + 1];
  uVar18 = paddusw(uVar18,uVar16);
  uVar16 = puVar4[unaff_EBP];
  uVar5 = puVar4[unaff_EBP + 1];
  uVar6 = psllw(CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                         CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                                  (short)((ulonglong)uVar16 >> 0x20),
                                  CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                           (short)((ulonglong)uVar16 >> 0x10),
                                           (short)uVar6 - (short)uVar16))),8);
  uVar16 = pmaddwd(uVar6,uVar6);
  uVar6 = psllw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar5 >> 0x30),
                         CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                                  (short)((ulonglong)uVar5 >> 0x20),
                                  CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                           (short)((ulonglong)uVar5 >> 0x10),
                                           (short)uVar13 - (short)uVar5))),8);
  uVar17 = pmaddwd(uVar6,uVar6);
  uVar13 = paddusw(uVar12,uVar8);
  uVar6 = *(undefined8 *)(iVar2 + (int)puVar3);
  uVar11 = paddusw(uVar9,uVar16);
  uVar16 = paddusw(uVar13,uVar11);
  uVar18 = paddusw(uVar18,uVar17);
  uVar13 = *(undefined8 *)(iVar2 + 8 + (int)puVar3);
  uVar9 = paddusw(uVar16,uVar18);
  uVar16 = *(undefined8 *)(iVar2 + (int)puVar4);
  uVar6 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                   CONCAT24((short)((ulonglong)uVar6 >> 0x20) - (short)((ulonglong)uVar16 >> 0x20),
                            CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                     (short)((ulonglong)uVar16 >> 0x10),(short)uVar6 - (short)uVar16
                                    )));
  uVar5 = pmaddwd(uVar6,uVar6);
  uVar9 = paddusw(CONCAT44((int)uVar9,(int)uVar17),uVar9);
  uVar6 = *(undefined8 *)(iVar2 + 8 + (int)puVar4);
  uVar16 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar13 >> 0x20) - (short)((ulonglong)uVar6 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                      (short)((ulonglong)uVar6 >> 0x10),(short)uVar13 - (short)uVar6
                                     )));
  uVar6 = *(undefined8 *)((int)puVar3 + unaff_EBP * 6);
  uVar13 = *(undefined8 *)((int)puVar3 + unaff_EBP * 6 + 8);
  uVar7 = pmaddwd(uVar16,uVar16);
  uVar16 = paddusw(uVar11,uVar5);
  if ((int)(uint)((ulonglong)uVar9 >> 0x2f) <= (int)in_MM7) {
    uVar5 = *(undefined8 *)((int)puVar4 + unaff_EBP * 6);
    uVar19 = paddusw(uVar18,uVar7);
    uVar11 = *(undefined8 *)((int)puVar4 + unaff_EBP * 6 + 8);
    uVar5 = psllw(CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar5 >> 0x30),
                           CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                                    (short)((ulonglong)uVar5 >> 0x20),
                                    CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                             (short)((ulonglong)uVar5 >> 0x10),
                                             (short)uVar6 - (short)uVar5))),8);
    uVar6 = *(undefined8 *)((int)puVar3 + unaff_EBP * 4);
    uVar14 = pmaddwd(uVar5,uVar5);
    uVar5 = *(undefined8 *)((int)puVar3 + unaff_EBP * 4 + 8);
    uVar11 = psllw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar11 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                                     (short)((ulonglong)uVar11 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                              (short)((ulonglong)uVar11 >> 0x10),
                                              (short)uVar13 - (short)uVar11))),8);
    uVar13 = *(undefined8 *)((int)puVar4 + unaff_EBP * 4);
    uVar9 = pmaddwd(uVar11,uVar11);
    uVar11 = *(undefined8 *)((int)puVar4 + unaff_EBP * 4 + 8);
    uVar6 = psllw(CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar13 >> 0x30),
                           CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                                    (short)((ulonglong)uVar13 >> 0x20),
                                    CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                             (short)((ulonglong)uVar13 >> 0x10),
                                             (short)uVar6 - (short)uVar13))),8);
    uVar17 = pmaddwd(uVar6,uVar6);
    uVar6 = psllw(CONCAT26((short)((ulonglong)uVar5 >> 0x30) - (short)((ulonglong)uVar11 >> 0x30),
                           CONCAT24((short)((ulonglong)uVar5 >> 0x20) -
                                    (short)((ulonglong)uVar11 >> 0x20),
                                    CONCAT22((short)((ulonglong)uVar5 >> 0x10) -
                                             (short)((ulonglong)uVar11 >> 0x10),
                                             (short)uVar5 - (short)uVar11))),8);
    uVar18 = pmaddwd(uVar6,uVar6);
    uVar6 = *(undefined8 *)(iVar1 + (int)puVar3);
    uVar5 = paddusw(uVar16,uVar14);
    uVar13 = *(undefined8 *)(iVar1 + 8 + (int)puVar3);
    uVar9 = paddusw(uVar19,uVar9);
    uVar16 = *(undefined8 *)(iVar1 + (int)puVar4);
    uVar16 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                               (short)((ulonglong)uVar16 >> 0x20),
                               CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                        (short)((ulonglong)uVar16 >> 0x10),
                                        (short)uVar6 - (short)uVar16)));
    uVar11 = paddusw(uVar5,uVar17);
    uVar6 = *(undefined8 *)(iVar1 + 8 + (int)puVar4);
    uVar13 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                               (short)((ulonglong)uVar6 >> 0x20),
                               CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                        (short)((ulonglong)uVar6 >> 0x10),
                                        (short)uVar13 - (short)uVar6)));
    uVar5 = pmaddwd(uVar16,uVar16);
    uVar6 = *(undefined8 *)((int)puVar3 + unaff_EBP);
    uVar17 = pmaddwd(uVar13,uVar13);
    uVar13 = *(undefined8 *)((int)puVar3 + unaff_EBP + 8);
    uVar18 = paddusw(uVar9,uVar18);
    uVar16 = *(undefined8 *)((int)puVar4 + unaff_EBP);
    uVar16 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                               (short)((ulonglong)uVar16 >> 0x20),
                               CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                        (short)((ulonglong)uVar16 >> 0x10),
                                        (short)uVar6 - (short)uVar16)));
    uVar5 = paddusw(uVar11,uVar5);
    uVar6 = *(undefined8 *)((int)puVar4 + unaff_EBP + 8);
    uVar13 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                               (short)((ulonglong)uVar6 >> 0x20),
                               CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                        (short)((ulonglong)uVar6 >> 0x10),
                                        (short)uVar13 - (short)uVar6)));
    uVar11 = pmaddwd(uVar16,uVar16);
    uVar6 = *puVar3;
    uVar9 = pmaddwd(uVar13,uVar13);
    uVar13 = puVar3[1];
    uVar18 = paddusw(uVar18,uVar17);
    uVar16 = *puVar4;
    uVar17 = paddusw(uVar5,uVar11);
    uVar5 = puVar4[1];
    uVar9 = paddusw(uVar18,uVar9);
    uVar7 = paddusw(CONCAT44((int)uVar17,(int)uVar11),uVar17);
    uVar10 = paddusw(CONCAT44((int)uVar9,(int)uVar17),uVar9);
    uVar9 = psubusw(in_MM7,uVar7 >> 0x30);
    uVar11 = *(undefined8 *)((int)puVar3 + unaff_EBP * -2);
    uVar19 = psubusw(uVar9,uVar10 >> 0x30);
    uVar9 = *(undefined8 *)((int)puVar3 + unaff_EBP * -2 + 8);
    uVar17 = *(undefined8 *)((int)puVar4 + unaff_EBP * -2);
    uVar16 = psllw(CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                                     (short)((ulonglong)uVar16 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                              (short)((ulonglong)uVar16 >> 0x10),
                                              (short)uVar6 - (short)uVar16))),8);
    uVar6 = *(undefined8 *)((int)puVar4 + unaff_EBP * -2 + 8);
    uVar13 = psllw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar5 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                                     (short)((ulonglong)uVar5 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                              (short)((ulonglong)uVar5 >> 0x10),
                                              (short)uVar13 - (short)uVar5))),8);
    uVar18 = pmaddwd(uVar16,uVar16);
    uVar16 = psllw(CONCAT26((short)((ulonglong)uVar11 >> 0x30) - (short)((ulonglong)uVar17 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar11 >> 0x20) -
                                     (short)((ulonglong)uVar17 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar11 >> 0x10) -
                                              (short)((ulonglong)uVar17 >> 0x10),
                                              (short)uVar11 - (short)uVar17))),8);
    uVar11 = pmaddwd(uVar16,uVar16);
    uVar16 = psllw(CONCAT26((short)((ulonglong)uVar9 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar9 >> 0x20) -
                                     (short)((ulonglong)uVar6 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar9 >> 0x10) -
                                              (short)((ulonglong)uVar6 >> 0x10),
                                              (short)uVar9 - (short)uVar6))),8);
    uVar6 = *(undefined8 *)((int)puVar3 + unaff_EBP * -3);
    uVar5 = pmaddwd(uVar13,uVar13);
    uVar13 = *(undefined8 *)((int)puVar3 + unaff_EBP * -3 + 8);
    uVar17 = pmaddwd(uVar16,uVar16);
    uVar16 = *(undefined8 *)((int)puVar4 + unaff_EBP * -3);
    uVar16 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                               (short)((ulonglong)uVar16 >> 0x20),
                               CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                        (short)((ulonglong)uVar16 >> 0x10),
                                        (short)uVar6 - (short)uVar16)));
    uVar18 = paddusw(uVar11,uVar18);
    uVar6 = *(undefined8 *)((int)puVar4 + unaff_EBP * -3 + 8);
    uVar9 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                     CONCAT24((short)((ulonglong)uVar13 >> 0x20) - (short)((ulonglong)uVar6 >> 0x20)
                              ,CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                        (short)((ulonglong)uVar6 >> 0x10),
                                        (short)uVar13 - (short)uVar6)));
    uVar11 = pmaddwd(uVar16,uVar16);
    uVar6 = *(undefined8 *)((int)puVar3 + unaff_EBP * -5);
    uVar5 = paddusw(uVar5,uVar17);
    uVar13 = *(undefined8 *)((int)puVar3 + unaff_EBP * -5 + 8);
    uVar9 = pmaddwd(uVar9,uVar9);
    uVar16 = *(undefined8 *)((int)puVar4 + unaff_EBP * -5);
    uVar16 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                               (short)((ulonglong)uVar16 >> 0x20),
                               CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                        (short)((ulonglong)uVar16 >> 0x10),
                                        (short)uVar6 - (short)uVar16)));
    uVar14 = paddusw(uVar18,uVar11);
    uVar6 = *(undefined8 *)((int)puVar4 + unaff_EBP * -5 + 8);
    uVar18 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar6 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                               (short)((ulonglong)uVar6 >> 0x20),
                               CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                        (short)((ulonglong)uVar6 >> 0x10),
                                        (short)uVar13 - (short)uVar6)));
    uVar17 = pmaddwd(uVar16,uVar16);
    uVar6 = *(undefined8 *)((int)puVar3 + unaff_EBP * -6);
    uVar11 = paddusw(uVar5,uVar9);
    uVar13 = *(undefined8 *)((int)puVar3 + unaff_EBP * -6 + 8);
    uVar9 = pmaddwd(uVar18,uVar18);
    uVar16 = *(undefined8 *)((int)puVar4 + unaff_EBP * -6);
    uVar17 = paddusw(uVar14,uVar17);
    uVar5 = *(undefined8 *)((int)puVar4 + unaff_EBP * -6 + 8);
    uVar6 = psllw(CONCAT26((short)((ulonglong)uVar6 >> 0x30) - (short)((ulonglong)uVar16 >> 0x30),
                           CONCAT24((short)((ulonglong)uVar6 >> 0x20) -
                                    (short)((ulonglong)uVar16 >> 0x20),
                                    CONCAT22((short)((ulonglong)uVar6 >> 0x10) -
                                             (short)((ulonglong)uVar16 >> 0x10),
                                             (short)uVar6 - (short)uVar16))),8);
    uVar16 = pmaddwd(uVar6,uVar6);
    uVar13 = psllw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) - (short)((ulonglong)uVar5 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar13 >> 0x20) -
                                     (short)((ulonglong)uVar5 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar13 >> 0x10) -
                                              (short)((ulonglong)uVar5 >> 0x10),
                                              (short)uVar13 - (short)uVar5))),8);
    uVar6 = paddusw(uVar11,uVar8);
    uVar13 = pmaddwd(uVar13,uVar13);
    uVar5 = paddusw(uVar17,uVar12);
    uVar6 = paddusw(uVar9,uVar6);
    uVar5 = paddusw(uVar5,uVar16);
    uVar6 = paddusw(uVar6,uVar13);
    uVar20 = paddusw(uVar5,CONCAT44((int)uVar5,(int)uVar16));
    uVar15 = paddusw(uVar6,CONCAT44((int)uVar6,(int)uVar13));
    uVar6 = psubusw(uVar19,uVar20 >> 0x30);
    uVar15 = psubusw(uVar6,uVar15 >> 0x30);
    psubusw(uVar15 >> 0x20,uVar15);
    return (ulonglong)CONCAT24((short)(uVar10 >> 0x30),(uint)(ushort)(uVar7 >> 0x30));
  }
  return uVar7;
}


