/* Module: erv23260.dll
   Function: FUN_63825724
   Address: 63825724
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63825724(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte unaff_BL;
  byte unaff_BH;
  int unaff_EBP;
  undefined8 *unaff_ESI;
  undefined8 *unaff_EDI;
  undefined8 *puVar4;
  ulonglong extraout_MM1;
  ulonglong uVar5;
  ulonglong extraout_MM1_00;
  ulonglong extraout_MM1_01;
  ulonglong extraout_MM1_02;
  ulonglong extraout_MM1_03;
  ulonglong extraout_MM1_04;
  ulonglong in_MM2;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong in_MM3;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uStack00000008;
  undefined8 uStack00000018;
  undefined8 uStack00000028;
  undefined8 uStack00000038;
  undefined8 uStack00000048;
  undefined8 uStack00000058;
  undefined8 uStack00000068;
  
  if ((bool)(unaff_BL & 1)) {
    uVar9 = 0xfe;
    uVar10 = 0xfe;
    uVar11 = 0xfe;
    uVar12 = 0xfe;
    uVar13 = 0xfe;
    uVar14 = 0xfe;
    uVar15 = 0xfe;
    uVar16 = 0xfe;
    if ((bool)(unaff_BH & 1)) {
      uVar7 = FUN_638259b4();
      uVar8 = *unaff_EDI;
      uVar5 = extraout_MM1_03 >> 1;
      uStack00000008 =
           CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (char)(uVar7 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar7 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar7 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar8 >> 0x20) -
                                               (char)(uVar7 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                        (char)(uVar7 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                                 (char)(uVar7 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar8 >>
                                                                                8) -
                                                                          (char)(uVar7 >> 8),
                                                                          (char)uVar8 - (char)uVar7)
                                                                ))))));
      in_MM2 = in_MM2 & CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                                );
      uVar8 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
      uVar6 = in_MM2 >> 1;
      uStack00000018 =
           CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (byte)(extraout_MM1_03 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar5 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar5 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar8 >> 0x20) -
                                               (char)(uVar5 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                        (char)(uVar5 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                                 (char)(uVar5 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar8 >>
                                                                                8) -
                                                                          (char)(uVar5 >> 8),
                                                                          (char)uVar8 - (char)uVar5)
                                                                ))))));
      uVar8 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
      in_MM3 = in_MM3 & CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                                );
      uVar7 = in_MM3 >> 1;
      uVar2 = *(undefined8 *)(extraout_ECX_01 + (int)unaff_EDI);
      uStack00000028 =
           CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (byte)(in_MM2 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar6 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar6 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar8 >> 0x20) -
                                               (char)(uVar6 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                        (char)(uVar6 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                                 (char)(uVar6 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar8 >>
                                                                                8) -
                                                                          (char)(uVar6 >> 8),
                                                                          (char)uVar8 - (char)uVar6)
                                                                ))))));
      uStack00000038 =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (byte)(in_MM3 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)(uVar7 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) - (char)(uVar7 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                               (char)(uVar7 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                        (char)(uVar7 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                                 (char)(uVar7 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) -
                                                                          (char)(uVar7 >> 8),
                                                                          (char)uVar2 - (char)uVar7)
                                                                ))))));
      puVar4 = (undefined8 *)((int)unaff_EDI + unaff_EBP * 4);
      uVar5 = FUN_638259d1();
      uVar8 = *puVar4;
      uVar7 = extraout_MM1_04 >> 1;
    }
    else {
      uVar7 = FUN_638258a6();
      uVar8 = *unaff_EDI;
      uVar5 = extraout_MM1_01 >> 1;
      uVar2 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
      uStack00000008 =
           CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (char)(uVar7 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar7 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar7 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar8 >> 0x20) -
                                               (char)(uVar7 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                        (char)(uVar7 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                                 (char)(uVar7 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar8 >>
                                                                                8) -
                                                                          (char)(uVar7 >> 8),
                                                                          (char)uVar8 - (char)uVar7)
                                                                ))))));
      uVar8 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
      uStack00000018 =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (byte)(extraout_MM1_01 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)(uVar5 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) - (char)(uVar5 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                               (char)(uVar5 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                        (char)(uVar5 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                                 (char)(uVar5 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) -
                                                                          (char)(uVar5 >> 8),
                                                                          (char)uVar2 - (char)uVar5)
                                                                ))))));
      uVar2 = *(undefined8 *)(extraout_ECX_00 + (int)unaff_EDI);
      in_MM2 = in_MM2 & CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                                );
      in_MM3 = in_MM3 & CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                                );
      uVar6 = in_MM2 >> 1;
      uStack00000028 =
           CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (byte)(in_MM2 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar6 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar6 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar8 >> 0x20) -
                                               (char)(uVar6 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                        (char)(uVar6 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                                 (char)(uVar6 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar8 >>
                                                                                8) -
                                                                          (char)(uVar6 >> 8),
                                                                          (char)uVar8 - (char)uVar6)
                                                                ))))));
      uVar7 = in_MM3 >> 1;
      uStack00000038 =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (byte)(in_MM3 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)(uVar7 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) - (char)(uVar7 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                               (char)(uVar7 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                        (char)(uVar7 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                                 (char)(uVar7 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) -
                                                                          (char)(uVar7 >> 8),
                                                                          (char)uVar2 - (char)uVar7)
                                                                ))))));
      uVar5 = FUN_638258a6();
      uVar8 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 4);
      uVar7 = extraout_MM1_02 >> 1;
      puVar4 = (undefined8 *)((int)unaff_EDI + unaff_EBP * 4);
    }
  }
  else {
    uVar8 = *(undefined8 *)((int)unaff_ESI + unaff_EBP);
    uVar9 = 0xfe;
    uVar10 = 0xfe;
    uVar11 = 0xfe;
    uVar12 = 0xfe;
    uVar13 = 0xfe;
    uVar14 = 0xfe;
    uVar15 = 0xfe;
    uVar16 = 0xfe;
    if ((bool)(unaff_BH & 1)) {
      uVar7 = FUN_63825805();
      uVar8 = *unaff_EDI;
      uVar5 = extraout_MM1 >> 1;
      uVar2 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
      uStack00000008 =
           CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (char)(uVar7 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar7 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar7 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar8 >> 0x20) -
                                               (char)(uVar7 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                        (char)(uVar7 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                                 (char)(uVar7 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar8 >>
                                                                                8) -
                                                                          (char)(uVar7 >> 8),
                                                                          (char)uVar8 - (char)uVar7)
                                                                ))))));
      uStack00000018 =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (byte)(extraout_MM1 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)(uVar5 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) - (char)(uVar5 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                               (char)(uVar5 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                        (char)(uVar5 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                                 (char)(uVar5 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) -
                                                                          (char)(uVar5 >> 8),
                                                                          (char)uVar2 - (char)uVar5)
                                                                ))))));
      uVar8 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
      in_MM2 = in_MM2 & CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                                );
      uVar2 = *(undefined8 *)(extraout_ECX + (int)unaff_EDI);
      uVar6 = in_MM2 >> 1;
      in_MM3 = in_MM3 & CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                                );
      puVar4 = (undefined8 *)((int)unaff_EDI + unaff_EBP * 4);
      uStack00000028 =
           CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (byte)(in_MM2 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar6 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar6 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar8 >> 0x20) -
                                               (char)(uVar6 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                        (char)(uVar6 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                                 (char)(uVar6 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar8 >>
                                                                                8) -
                                                                          (char)(uVar6 >> 8),
                                                                          (char)uVar8 - (char)uVar6)
                                                                ))))));
      uVar7 = in_MM3 >> 1;
      uStack00000038 =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (byte)(in_MM3 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)(uVar7 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) - (char)(uVar7 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                               (char)(uVar7 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                        (char)(uVar7 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                                 (char)(uVar7 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) -
                                                                          (char)(uVar7 >> 8),
                                                                          (char)uVar2 - (char)uVar7)
                                                                ))))));
      uVar5 = FUN_63825805();
      uVar8 = *puVar4;
      uVar7 = extraout_MM1_00 >> 1;
    }
    else {
      uVar2 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
      uVar3 = *unaff_EDI;
      uStack00000018 =
           CONCAT17(-((char)((ulonglong)uVar8 >> 0x38) - (char)((ulonglong)uVar2 >> 0x38)),
                    CONCAT16(-((char)((ulonglong)uVar8 >> 0x30) - (char)((ulonglong)uVar2 >> 0x30)),
                             CONCAT15(-((char)((ulonglong)uVar8 >> 0x28) -
                                       (char)((ulonglong)uVar2 >> 0x28)),
                                      CONCAT14(-((char)((ulonglong)uVar8 >> 0x20) -
                                                (char)((ulonglong)uVar2 >> 0x20)),
                                               CONCAT13(-((char)((ulonglong)uVar8 >> 0x18) -
                                                         (char)((ulonglong)uVar2 >> 0x18)),
                                                        CONCAT12(-((char)((ulonglong)uVar8 >> 0x10)
                                                                  - (char)((ulonglong)uVar2 >> 0x10)
                                                                  ),CONCAT11(-((char)((ulonglong)
                                                                                      uVar8 >> 8) -
                                                                              (char)((ulonglong)
                                                                                     uVar2 >> 8)),
                                                                             -((char)uVar8 -
                                                                              (char)uVar2))))))));
      uVar8 = *unaff_ESI;
      uStack00000008 =
           CONCAT17((char)((ulonglong)uVar3 >> 0x38) - (char)((ulonglong)uVar8 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar3 >> 0x30) - (char)((ulonglong)uVar8 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar3 >> 0x28) -
                                      (char)((ulonglong)uVar8 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar3 >> 0x20) -
                                               (char)((ulonglong)uVar8 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar3 >> 0x18) -
                                                        (char)((ulonglong)uVar8 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar3 >> 0x10) -
                                                                 (char)((ulonglong)uVar8 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar3 >>
                                                                                8) -
                                                                          (char)((ulonglong)uVar8 >>
                                                                                8),(char)uVar3 -
                                                                                   (char)uVar8))))))
                   );
      uVar8 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
      uVar2 = *(undefined8 *)(unaff_EBP * 3 + (int)unaff_EDI);
      uVar3 = *(undefined8 *)((int)unaff_ESI + unaff_EBP * 2);
      uStack00000028 =
           CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (char)((ulonglong)uVar3 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)((ulonglong)uVar3 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar8 >> 0x28) -
                                      (char)((ulonglong)uVar3 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar8 >> 0x20) -
                                               (char)((ulonglong)uVar3 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                        (char)((ulonglong)uVar3 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                                 (char)((ulonglong)uVar3 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar8 >>
                                                                                8) -
                                                                          (char)((ulonglong)uVar3 >>
                                                                                8),(char)uVar8 -
                                                                                   (char)uVar3))))))
                   );
      uVar8 = *(undefined8 *)(unaff_EBP * 3 + (int)unaff_ESI);
      uStack00000038 =
           CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (char)((ulonglong)uVar8 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)((ulonglong)uVar8 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar2 >> 0x28) -
                                      (char)((ulonglong)uVar8 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar2 >> 0x20) -
                                               (char)((ulonglong)uVar8 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                        (char)((ulonglong)uVar8 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                                 (char)((ulonglong)uVar8 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar2 >>
                                                                                8) -
                                                                          (char)((ulonglong)uVar8 >>
                                                                                8),(char)uVar2 -
                                                                                   (char)uVar8))))))
                   );
      puVar1 = (ulonglong *)((int)unaff_ESI + unaff_EBP * 4);
      puVar4 = (undefined8 *)((int)unaff_EDI + unaff_EBP * 4);
      uVar8 = *(undefined8 *)((int)puVar1 + unaff_EBP * 2);
      uVar7 = *(ulonglong *)((int)puVar1 + unaff_EBP);
      uVar6 = CONCAT17((char)((ulonglong)uVar8 >> 0x38) * '\x02',
                       CONCAT16((char)((ulonglong)uVar8 >> 0x30) * '\x02',
                                CONCAT15((char)((ulonglong)uVar8 >> 0x28) * '\x02',
                                         CONCAT14((char)((ulonglong)uVar8 >> 0x20) * '\x02',
                                                  CONCAT13((char)((ulonglong)uVar8 >> 0x18) * '\x02'
                                                           ,CONCAT12((char)((ulonglong)uVar8 >> 0x10
                                                                           ) * '\x02',
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar8 >> 8) *
                                                                              '\x02',(char)uVar8 *
                                                                                     '\x02')))))));
      uVar5 = *puVar1;
      uVar8 = *puVar4;
    }
  }
  uVar2 = *(undefined8 *)((int)puVar4 + unaff_EBP);
  uStack00000048 =
       CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (char)(uVar5 >> 0x38),
                CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar5 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar5 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar8 >> 0x20) - (char)(uVar5 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                    (char)(uVar5 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                             (char)(uVar5 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar8 >> 8)
                                                                      - (char)(uVar5 >> 8),
                                                                      (char)uVar8 - (char)uVar5)))))
                        ));
  uVar8 = *(undefined8 *)((int)puVar4 + unaff_EBP * 2);
  uStack00000058 =
       CONCAT17((char)((ulonglong)uVar2 >> 0x38) - (char)(uVar7 >> 0x38),
                CONCAT16((char)((ulonglong)uVar2 >> 0x30) - (char)(uVar7 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar2 >> 0x28) - (char)(uVar7 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar2 >> 0x20) - (char)(uVar7 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar2 >> 0x18) -
                                                    (char)(uVar7 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar2 >> 0x10) -
                                                             (char)(uVar7 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar2 >> 8)
                                                                      - (char)(uVar7 >> 8),
                                                                      (char)uVar2 - (char)uVar7)))))
                        ));
  uVar6 = uVar6 & CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,
                                                  CONCAT12(uVar11,CONCAT11(uVar10,uVar9)))))));
  uVar7 = uVar6 >> 1;
  uStack00000068 =
       CONCAT17((char)((ulonglong)uVar8 >> 0x38) - (byte)(uVar6 >> 0x39),
                CONCAT16((char)((ulonglong)uVar8 >> 0x30) - (char)(uVar7 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar8 >> 0x28) - (char)(uVar7 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar8 >> 0x20) - (char)(uVar7 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar8 >> 0x18) -
                                                    (char)(uVar7 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar8 >> 0x10) -
                                                             (char)(uVar7 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar8 >> 8)
                                                                      - (char)(uVar7 >> 8),
                                                                      (char)uVar8 - (char)uVar7)))))
                        ));
  FUN_63826e43();
  return;
}


