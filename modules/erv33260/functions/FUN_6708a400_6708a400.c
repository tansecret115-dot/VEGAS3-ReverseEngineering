/* Module: erv33260.dll
   Function: FUN_6708a400
   Address: 6708a400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 __cdecl FUN_6708a400(ulonglong *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar21;
  byte bVar22;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  ulonglong uVar23;
  ulonglong uVar24;
  byte bVar31;
  ulonglong uVar32;
  short sVar33;
  char cVar34;
  undefined1 uVar36;
  char cVar37;
  undefined1 uVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  undefined8 uVar35;
  char cVar44;
  
  uVar8 = param_3 >> 1;
  iVar9 = 0xf;
  sVar33 = 0;
  bVar1 = (byte)(param_3 >> 0x18);
  uVar38 = (undefined1)(uVar8 >> 0x10);
  uVar36 = (undefined1)(uVar8 >> 8);
  uVar35 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(bVar1 >> 1,bVar1 >> 1),uVar38
                                                             ),CONCAT14(uVar38,uVar8)) >> 0x20),
                                      uVar36),uVar36),CONCAT11((char)uVar8,(char)uVar8));
  uVar35 = pshufw(uVar35,uVar35,0);
  do {
    uVar21 = *param_1;
    uVar23 = uVar21 >> 8 | param_1[1] << 0x38;
    uVar32 = psubusb(uVar21,uVar23);
    uVar24 = psubusb(uVar23,uVar21);
    uVar24 = uVar24 | uVar32;
    uVar23 = psubusb(uVar21,*(undefined8 *)((int)param_1 + param_2));
    uVar21 = psubusb(*(undefined8 *)((int)param_1 + param_2),uVar21);
    uVar23 = uVar23 | uVar21;
    bVar1 = (byte)DAT_6718f970;
    bVar22 = (byte)uVar24;
    bVar2 = (byte)((ulonglong)DAT_6718f970 >> 8);
    bVar25 = (byte)(uVar24 >> 8);
    bVar3 = (byte)((ulonglong)DAT_6718f970 >> 0x10);
    bVar26 = (byte)(uVar24 >> 0x10);
    bVar4 = (byte)((ulonglong)DAT_6718f970 >> 0x18);
    bVar27 = (byte)(uVar24 >> 0x18);
    bVar5 = (byte)((ulonglong)DAT_6718f970 >> 0x20);
    bVar28 = (byte)(uVar24 >> 0x20);
    bVar6 = (byte)((ulonglong)DAT_6718f970 >> 0x28);
    bVar29 = (byte)(uVar24 >> 0x28);
    bVar7 = (byte)((ulonglong)DAT_6718f970 >> 0x30);
    bVar30 = (byte)(uVar24 >> 0x30);
    bVar31 = (byte)(uVar24 >> 0x38);
    bVar11 = (byte)((ulonglong)DAT_6718f970 >> 0x38);
    bVar10 = (byte)uVar23;
    bVar14 = (byte)(uVar23 >> 8);
    bVar15 = (byte)(uVar23 >> 0x10);
    bVar16 = (byte)(uVar23 >> 0x18);
    bVar17 = (byte)(uVar23 >> 0x20);
    bVar18 = (byte)(uVar23 >> 0x28);
    bVar19 = (byte)(uVar23 >> 0x30);
    bVar20 = (byte)(uVar23 >> 0x38);
    cVar34 = (char)uVar35;
    cVar37 = (char)((ulonglong)uVar35 >> 8);
    cVar39 = (char)((ulonglong)uVar35 >> 0x10);
    cVar40 = (char)((ulonglong)uVar35 >> 0x18);
    cVar41 = (char)((ulonglong)uVar35 >> 0x20);
    cVar42 = (char)((ulonglong)uVar35 >> 0x28);
    cVar43 = (char)((ulonglong)uVar35 >> 0x30);
    cVar44 = (char)((ulonglong)uVar35 >> 0x38);
    uVar12 = psadbw(CONCAT17(-(cVar44 < (char)((bVar11 < bVar20) * bVar11 |
                                              (bVar11 >= bVar20) * bVar20)),
                             CONCAT16(-(cVar43 < (char)((bVar7 < bVar19) * bVar7 |
                                                       (bVar7 >= bVar19) * bVar19)),
                                      CONCAT15(-(cVar42 < (char)((bVar6 < bVar18) * bVar6 |
                                                                (bVar6 >= bVar18) * bVar18)),
                                               CONCAT14(-(cVar41 < (char)((bVar5 < bVar17) * bVar5 |
                                                                         (bVar5 >= bVar17) * bVar17)
                                                         ),CONCAT13(-(cVar40 < (char)((bVar4 < 
                                                  bVar16) * bVar4 | (bVar4 >= bVar16) * bVar16)),
                                                  CONCAT12(-(cVar39 < (char)((bVar3 < bVar15) *
                                                                             bVar3 | (bVar3 >= 
                                                  bVar15) * bVar15)),
                                                  CONCAT11(-(cVar37 < (char)((bVar2 < bVar14) *
                                                                             bVar2 | (bVar2 >= 
                                                  bVar14) * bVar14)),
                                                  -(cVar34 < (char)((bVar1 < bVar10) * bVar1 |
                                                                   (bVar1 >= bVar10) * bVar10)))))))
                                     )) |
                    CONCAT17(-(cVar44 < (char)((bVar11 < bVar31) * bVar11 |
                                              (bVar11 >= bVar31) * bVar31)),
                             CONCAT16(-(cVar43 < (char)((bVar7 < bVar30) * bVar7 |
                                                       (bVar7 >= bVar30) * bVar30)),
                                      CONCAT15(-(cVar42 < (char)((bVar6 < bVar29) * bVar6 |
                                                                (bVar6 >= bVar29) * bVar29)),
                                               CONCAT14(-(cVar41 < (char)((bVar5 < bVar28) * bVar5 |
                                                                         (bVar5 >= bVar28) * bVar28)
                                                         ),CONCAT13(-(cVar40 < (char)((bVar4 < 
                                                  bVar27) * bVar4 | (bVar4 >= bVar27) * bVar27)),
                                                  CONCAT12(-(cVar39 < (char)((bVar3 < bVar26) *
                                                                             bVar3 | (bVar3 >= 
                                                  bVar26) * bVar26)),
                                                  CONCAT11(-(cVar37 < (char)((bVar2 < bVar25) *
                                                                             bVar2 | (bVar2 >= 
                                                  bVar25) * bVar25)),
                                                  -(cVar34 < (char)((bVar1 < bVar22) * bVar1 |
                                                                   (bVar1 >= bVar22) * bVar22)))))))
                                     )),0);
    uVar21 = param_1[1];
    uVar13 = *(undefined8 *)((int)param_1 + param_2 + 8);
    uVar23 = psubusb(uVar21,uVar21 >> 8);
    uVar24 = psubusb(uVar21 >> 8,uVar21);
    uVar24 = uVar24 | uVar23;
    uVar23 = psubusb(uVar21,uVar13);
    uVar21 = psubusb(uVar13,uVar21);
    uVar23 = uVar23 | uVar21;
    bVar19 = (byte)uVar24;
    bVar20 = (byte)(uVar24 >> 8);
    bVar22 = (byte)(uVar24 >> 0x10);
    bVar25 = (byte)(uVar24 >> 0x18);
    bVar26 = (byte)(uVar24 >> 0x20);
    bVar27 = (byte)(uVar24 >> 0x28);
    bVar28 = (byte)(uVar24 >> 0x30);
    bVar11 = (byte)uVar23;
    bVar10 = (byte)(uVar23 >> 8);
    bVar14 = (byte)(uVar23 >> 0x10);
    bVar15 = (byte)(uVar23 >> 0x18);
    bVar16 = (byte)(uVar23 >> 0x20);
    bVar17 = (byte)(uVar23 >> 0x28);
    bVar18 = (byte)(uVar23 >> 0x30);
    uVar13 = psadbw((ulonglong)
                    (CONCAT16(-(cVar43 < (char)((bVar7 < bVar18) * bVar7 |
                                               (bVar7 >= bVar18) * bVar18)),
                              CONCAT15(-(cVar42 < (char)((bVar6 < bVar17) * bVar6 |
                                                        (bVar6 >= bVar17) * bVar17)),
                                       CONCAT14(-(cVar41 < (char)((bVar5 < bVar16) * bVar5 |
                                                                 (bVar5 >= bVar16) * bVar16)),
                                                CONCAT13(-(cVar40 < (char)((bVar4 < bVar15) * bVar4
                                                                          | (bVar4 >= bVar15) *
                                                                            bVar15)),
                                                         CONCAT12(-(cVar39 < (char)((bVar3 < bVar14)
                                                                                    * bVar3 |
                                                                                   (bVar3 >= bVar14)
                                                                                   * bVar14)),
                                                                  CONCAT11(-(cVar37 < (char)((bVar2 
                                                  < bVar10) * bVar2 | (bVar2 >= bVar10) * bVar10)),
                                                  -(cVar34 < (char)((bVar1 < bVar11) * bVar1 |
                                                                   (bVar1 >= bVar11) * bVar11)))))))
                             ) |
                    CONCAT16(-(cVar43 < (char)((bVar7 < bVar28) * bVar7 | (bVar7 >= bVar28) * bVar28
                                              )),
                             CONCAT15(-(cVar42 < (char)((bVar6 < bVar27) * bVar6 |
                                                       (bVar6 >= bVar27) * bVar27)),
                                      CONCAT14(-(cVar41 < (char)((bVar5 < bVar26) * bVar5 |
                                                                (bVar5 >= bVar26) * bVar26)),
                                               CONCAT13(-(cVar40 < (char)((bVar4 < bVar25) * bVar4 |
                                                                         (bVar4 >= bVar25) * bVar25)
                                                         ),CONCAT12(-(cVar39 < (char)((bVar3 < 
                                                  bVar22) * bVar3 | (bVar3 >= bVar22) * bVar22)),
                                                  CONCAT11(-(cVar37 < (char)((bVar2 < bVar20) *
                                                                             bVar2 | (bVar2 >= 
                                                  bVar20) * bVar20)),
                                                  -(cVar34 < (char)((bVar1 < bVar19) * bVar1 |
                                                                   (bVar1 >= bVar19) * bVar19)))))))
                            )) << 8,0);
    sVar33 = sVar33 + (short)uVar12 + (short)uVar13;
    if ((char)sVar33 < (char)-(char)*(undefined4 *)(&DAT_67092020 + param_3 * 4)) {
      return 1;
    }
    param_1 = (ulonglong *)((int)param_1 + param_2);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return 0;
}


