/* Module: mcmpgdec.dll
   Function: FUN_1000b148
   Address: 1000b148
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000b148(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar9;
  short sVar10;
  undefined8 uVar8;
  int iVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  short sVar17;
  short sVar18;
  undefined8 uVar15;
  int iVar19;
  undefined8 uVar16;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  undefined8 uVar23;
  undefined8 uVar24;
  short sVar29;
  short sVar30;
  short sVar31;
  int iVar32;
  short sVar35;
  short sVar36;
  undefined8 uVar33;
  int iVar37;
  undefined8 uVar34;
  short sVar38;
  undefined8 uVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  undefined4 uVar46;
  short sVar47;
  short sVar48;
  short sVar50;
  short sVar51;
  undefined8 uVar49;
  short sVar52;
  
  iVar4 = 0;
  puVar3 = param_1;
  do {
    puVar2 = (undefined8 *)(iVar4 * 0x40 + _DAT_10036550);
    puVar1 = (undefined8 *)(DAT_10036560 + iVar4 * 8);
    uVar16 = *puVar3;
    uVar15 = puVar3[1];
    uVar46 = CONCAT22((short)((ulonglong)uVar15 >> 0x10),(short)((ulonglong)uVar16 >> 0x10));
    uVar6 = CONCAT22((short)uVar15,(short)uVar16);
    uVar8 = CONCAT44(uVar6,uVar6);
    uVar6 = CONCAT22((short)((ulonglong)uVar15 >> 0x20),(short)((ulonglong)uVar16 >> 0x20));
    uVar33 = pmaddwd(*puVar2,uVar8);
    uVar39 = pmaddwd(puVar2[1],CONCAT44(uVar6,uVar6));
    uVar24 = CONCAT44(uVar46,uVar46);
    uVar8 = pmaddwd(uVar8,puVar2[2]);
    uVar46 = (undefined4)
             (CONCAT26((short)((ulonglong)uVar15 >> 0x30),
                       CONCAT24((short)((ulonglong)uVar16 >> 0x30),uVar6)) >> 0x20);
    uVar34 = CONCAT44(uVar46,uVar46);
    uVar15 = pmaddwd(puVar2[4],uVar24);
    uVar16 = *puVar1;
    uVar49 = pmaddwd(puVar2[5],uVar34);
    uVar23 = pmaddwd(CONCAT44(uVar6,uVar6),puVar2[3]);
    iVar32 = (int)uVar33 + (int)uVar16 + (int)uVar39;
    iVar37 = (int)((ulonglong)uVar33 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20) +
             (int)((ulonglong)uVar39 >> 0x20);
    uVar33 = pmaddwd(uVar24,puVar2[6]);
    uVar39 = pmaddwd(uVar34,puVar2[7]);
    iVar14 = (int)uVar15 + (int)uVar49;
    iVar19 = (int)((ulonglong)uVar15 >> 0x20) + (int)((ulonglong)uVar49 >> 0x20);
    uVar16 = *puVar1;
    iVar7 = (int)uVar8 + (int)uVar16 + (int)uVar23;
    iVar11 = (int)((ulonglong)uVar8 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20) +
             (int)((ulonglong)uVar23 >> 0x20);
    iVar41 = (int)uVar33 + (int)uVar39;
    iVar42 = (int)((ulonglong)uVar33 >> 0x20) + (int)((ulonglong)uVar39 >> 0x20);
    uVar15 = packssdw(CONCAT44(iVar11 - iVar42 >> 0xc,iVar7 - iVar41 >> 0xc),
                      CONCAT44(iVar37 - iVar19 >> 0xc,iVar32 - iVar14 >> 0xc));
    uVar16 = packssdw(CONCAT44(iVar19 + iVar37 >> 0xc,iVar14 + iVar32 >> 0xc),
                      CONCAT44(iVar11 + iVar42 >> 0xc,iVar7 + iVar41 >> 0xc));
    uVar40 = (uint)((ulonglong)uVar15 >> 0x20);
    *puVar3 = uVar16;
    puVar3[1] = CONCAT44(uVar40 << 0x10,(uint)uVar15 << 0x10) |
                CONCAT44(uVar40 >> 0x10,(uint)uVar15 >> 0x10);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 2;
  } while (iVar4 < 8);
  uVar16 = param_1[6];
  uVar15 = param_1[10];
  uVar39 = pmulhw(DAT_10036570[2],uVar16);
  uVar33 = pmulhw(DAT_10036570[2],uVar15);
  uVar8 = param_1[2];
  uVar23 = param_1[0xe];
  uVar34 = pmulhw(*DAT_10036570,uVar8);
  uVar24 = pmulhw(*DAT_10036570,uVar23);
  sVar21 = (short)((ulonglong)uVar15 >> 0x10);
  sVar22 = (short)((ulonglong)uVar15 >> 0x20);
  sVar25 = (short)((ulonglong)uVar15 >> 0x30);
  sVar9 = (short)((ulonglong)uVar16 >> 0x10);
  sVar10 = (short)((ulonglong)uVar16 >> 0x20);
  sVar12 = (short)((ulonglong)uVar16 >> 0x30);
  sVar13 = ((short)uVar39 - (short)uVar15) + (short)uVar16;
  sVar17 = ((short)((ulonglong)uVar39 >> 0x10) - sVar21) + sVar9;
  sVar18 = ((short)((ulonglong)uVar39 >> 0x20) - sVar22) + sVar10;
  sVar20 = ((short)((ulonglong)uVar39 >> 0x30) - sVar25) + sVar12;
  sVar5 = (short)uVar33 + (short)uVar15 + (short)uVar16;
  sVar9 = (short)((ulonglong)uVar33 >> 0x10) + sVar21 + sVar9;
  sVar10 = (short)((ulonglong)uVar33 >> 0x20) + sVar22 + sVar10;
  sVar12 = (short)((ulonglong)uVar33 >> 0x30) + sVar25 + sVar12;
  sVar31 = (short)uVar34 - (short)uVar23;
  sVar35 = (short)((ulonglong)uVar34 >> 0x10) - (short)((ulonglong)uVar23 >> 0x10);
  sVar36 = (short)((ulonglong)uVar34 >> 0x20) - (short)((ulonglong)uVar23 >> 0x20);
  sVar38 = (short)((ulonglong)uVar34 >> 0x30) - (short)((ulonglong)uVar23 >> 0x30);
  sVar21 = (short)uVar24 + (short)uVar8;
  sVar25 = (short)((ulonglong)uVar24 >> 0x10) + (short)((ulonglong)uVar8 >> 0x10);
  sVar27 = (short)((ulonglong)uVar24 >> 0x20) + (short)((ulonglong)uVar8 >> 0x20);
  sVar29 = (short)((ulonglong)uVar24 >> 0x30) + (short)((ulonglong)uVar8 >> 0x30);
  sVar22 = sVar21 - sVar5;
  sVar26 = sVar25 - sVar9;
  sVar28 = sVar27 - sVar10;
  sVar30 = sVar29 - sVar12;
  sVar5 = sVar5 + sVar21;
  sVar9 = sVar9 + sVar25;
  sVar10 = sVar10 + sVar27;
  sVar12 = sVar12 + sVar29;
  sVar21 = sVar31 - sVar13;
  sVar25 = sVar35 - sVar17;
  sVar27 = sVar36 - sVar18;
  sVar29 = sVar38 - sVar20;
  sVar13 = sVar13 + sVar31;
  sVar17 = sVar17 + sVar35;
  sVar18 = sVar18 + sVar36;
  sVar20 = sVar20 + sVar38;
  uVar16 = param_1[4];
  uVar15 = param_1[0xc];
  uVar33 = pmulhw(DAT_10036570[1],uVar16);
  uVar39 = pmulhw(DAT_10036570[1],uVar15);
  uVar8 = pmulhw(CONCAT26((sVar20 + sVar30) * 2,
                          CONCAT24((sVar18 + sVar28) * 2,
                                   CONCAT22((sVar17 + sVar26) * 2,(sVar13 + sVar22) * 2))),
                 DAT_10036570[3]);
  uVar23 = pmulhw(CONCAT26((sVar30 - sVar20) * 2,
                           CONCAT24((sVar28 - sVar18) * 2,
                                    CONCAT22((sVar26 - sVar17) * 2,(sVar22 - sVar13) * 2))),
                  DAT_10036570[3]);
  sVar43 = (short)uVar33 - (short)uVar15;
  sVar44 = (short)((ulonglong)uVar33 >> 0x10) - (short)((ulonglong)uVar15 >> 0x10);
  sVar45 = (short)((ulonglong)uVar33 >> 0x20) - (short)((ulonglong)uVar15 >> 0x20);
  sVar47 = (short)((ulonglong)uVar33 >> 0x30) - (short)((ulonglong)uVar15 >> 0x30);
  sVar48 = (short)uVar39 + (short)uVar16;
  sVar50 = (short)((ulonglong)uVar39 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
  sVar51 = (short)((ulonglong)uVar39 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
  sVar52 = (short)((ulonglong)uVar39 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
  uVar16 = *param_1;
  uVar15 = param_1[8];
  sVar31 = (short)uVar16 - (short)uVar15;
  sVar18 = (short)((ulonglong)uVar15 >> 0x10);
  sVar17 = (short)((ulonglong)uVar16 >> 0x10);
  sVar35 = sVar17 - sVar18;
  sVar22 = (short)((ulonglong)uVar15 >> 0x20);
  sVar20 = (short)((ulonglong)uVar16 >> 0x20);
  sVar26 = (short)((ulonglong)uVar16 >> 0x30);
  sVar36 = sVar20 - sVar22;
  sVar28 = (short)((ulonglong)uVar15 >> 0x30);
  sVar38 = sVar26 - sVar28;
  sVar13 = (short)uVar15 + (short)uVar16;
  sVar18 = sVar18 + sVar17;
  sVar22 = sVar22 + sVar20;
  sVar28 = sVar28 + sVar26;
  sVar17 = sVar13 - sVar48;
  sVar20 = sVar18 - sVar50;
  sVar26 = sVar22 - sVar51;
  sVar30 = sVar28 - sVar52;
  sVar48 = sVar48 + sVar13;
  sVar50 = sVar50 + sVar18;
  sVar51 = sVar51 + sVar22;
  sVar52 = sVar52 + sVar28;
  sVar13 = sVar31 - sVar43;
  sVar18 = sVar35 - sVar44;
  sVar22 = sVar36 - sVar45;
  sVar28 = sVar38 - sVar47;
  sVar43 = sVar43 + sVar31;
  sVar44 = sVar44 + sVar35;
  sVar45 = sVar45 + sVar36;
  sVar47 = sVar47 + sVar38;
  uVar16 = psraw(CONCAT26(sVar52 - sVar12,
                          CONCAT24(sVar51 - sVar10,CONCAT22(sVar50 - sVar9,sVar48 - sVar5))),5);
  param_1[0xe] = uVar16;
  uVar16 = psraw(CONCAT26(sVar12 + sVar52,
                          CONCAT24(sVar10 + sVar51,CONCAT22(sVar9 + sVar50,sVar5 + sVar48))),5);
  *param_1 = uVar16;
  sVar5 = (short)((ulonglong)uVar8 >> 0x10);
  sVar9 = (short)((ulonglong)uVar8 >> 0x20);
  sVar10 = (short)((ulonglong)uVar8 >> 0x30);
  uVar16 = psraw(CONCAT26(sVar47 - sVar10,
                          CONCAT24(sVar45 - sVar9,CONCAT22(sVar44 - sVar5,sVar43 - (short)uVar8))),5
                );
  param_1[0xc] = uVar16;
  uVar16 = psraw(CONCAT26(sVar10 + sVar47,
                          CONCAT24(sVar9 + sVar45,CONCAT22(sVar5 + sVar44,(short)uVar8 + sVar43))),5
                );
  param_1[2] = uVar16;
  sVar5 = (short)((ulonglong)uVar23 >> 0x10);
  sVar9 = (short)((ulonglong)uVar23 >> 0x20);
  sVar10 = (short)((ulonglong)uVar23 >> 0x30);
  uVar16 = psraw(CONCAT26(sVar28 - sVar10,
                          CONCAT24(sVar22 - sVar9,CONCAT22(sVar18 - sVar5,sVar13 - (short)uVar23))),
                 5);
  param_1[10] = uVar16;
  uVar16 = psraw(CONCAT26(sVar10 + sVar28,
                          CONCAT24(sVar9 + sVar22,CONCAT22(sVar5 + sVar18,(short)uVar23 + sVar13))),
                 5);
  param_1[4] = uVar16;
  uVar16 = psraw(CONCAT26(sVar30 - sVar29,
                          CONCAT24(sVar26 - sVar27,CONCAT22(sVar20 - sVar25,sVar17 - sVar21))),5);
  param_1[8] = uVar16;
  uVar16 = psraw(CONCAT26(sVar29 + sVar30,
                          CONCAT24(sVar27 + sVar26,CONCAT22(sVar25 + sVar20,sVar21 + sVar17))),5);
  param_1[6] = uVar16;
  uVar16 = param_1[7];
  uVar15 = param_1[0xb];
  uVar39 = pmulhw(DAT_10036570[2],uVar16);
  uVar33 = pmulhw(DAT_10036570[2],uVar15);
  uVar8 = param_1[3];
  uVar23 = param_1[0xf];
  uVar34 = pmulhw(*DAT_10036570,uVar8);
  uVar24 = pmulhw(*DAT_10036570,uVar23);
  sVar21 = (short)((ulonglong)uVar15 >> 0x10);
  sVar22 = (short)((ulonglong)uVar15 >> 0x20);
  sVar25 = (short)((ulonglong)uVar15 >> 0x30);
  sVar9 = (short)((ulonglong)uVar16 >> 0x10);
  sVar10 = (short)((ulonglong)uVar16 >> 0x20);
  sVar12 = (short)((ulonglong)uVar16 >> 0x30);
  sVar13 = ((short)uVar39 - (short)uVar15) + (short)uVar16;
  sVar17 = ((short)((ulonglong)uVar39 >> 0x10) - sVar21) + sVar9;
  sVar18 = ((short)((ulonglong)uVar39 >> 0x20) - sVar22) + sVar10;
  sVar20 = ((short)((ulonglong)uVar39 >> 0x30) - sVar25) + sVar12;
  sVar5 = (short)uVar33 + (short)uVar15 + (short)uVar16;
  sVar9 = (short)((ulonglong)uVar33 >> 0x10) + sVar21 + sVar9;
  sVar10 = (short)((ulonglong)uVar33 >> 0x20) + sVar22 + sVar10;
  sVar12 = (short)((ulonglong)uVar33 >> 0x30) + sVar25 + sVar12;
  sVar31 = (short)uVar34 - (short)uVar23;
  sVar35 = (short)((ulonglong)uVar34 >> 0x10) - (short)((ulonglong)uVar23 >> 0x10);
  sVar36 = (short)((ulonglong)uVar34 >> 0x20) - (short)((ulonglong)uVar23 >> 0x20);
  sVar38 = (short)((ulonglong)uVar34 >> 0x30) - (short)((ulonglong)uVar23 >> 0x30);
  sVar21 = (short)uVar24 + (short)uVar8;
  sVar25 = (short)((ulonglong)uVar24 >> 0x10) + (short)((ulonglong)uVar8 >> 0x10);
  sVar27 = (short)((ulonglong)uVar24 >> 0x20) + (short)((ulonglong)uVar8 >> 0x20);
  sVar29 = (short)((ulonglong)uVar24 >> 0x30) + (short)((ulonglong)uVar8 >> 0x30);
  sVar22 = sVar21 - sVar5;
  sVar26 = sVar25 - sVar9;
  sVar28 = sVar27 - sVar10;
  sVar30 = sVar29 - sVar12;
  sVar5 = sVar5 + sVar21;
  sVar9 = sVar9 + sVar25;
  sVar10 = sVar10 + sVar27;
  sVar12 = sVar12 + sVar29;
  sVar21 = sVar31 - sVar13;
  sVar25 = sVar35 - sVar17;
  sVar27 = sVar36 - sVar18;
  sVar29 = sVar38 - sVar20;
  sVar13 = sVar13 + sVar31;
  sVar17 = sVar17 + sVar35;
  sVar18 = sVar18 + sVar36;
  sVar20 = sVar20 + sVar38;
  uVar16 = param_1[5];
  uVar15 = param_1[0xd];
  uVar33 = pmulhw(DAT_10036570[1],uVar16);
  uVar39 = pmulhw(DAT_10036570[1],uVar15);
  uVar8 = pmulhw(CONCAT26((sVar20 + sVar30) * 2,
                          CONCAT24((sVar18 + sVar28) * 2,
                                   CONCAT22((sVar17 + sVar26) * 2,(sVar13 + sVar22) * 2))),
                 DAT_10036570[3]);
  uVar23 = pmulhw(CONCAT26((sVar30 - sVar20) * 2,
                           CONCAT24((sVar28 - sVar18) * 2,
                                    CONCAT22((sVar26 - sVar17) * 2,(sVar22 - sVar13) * 2))),
                  DAT_10036570[3]);
  sVar43 = (short)uVar33 - (short)uVar15;
  sVar44 = (short)((ulonglong)uVar33 >> 0x10) - (short)((ulonglong)uVar15 >> 0x10);
  sVar45 = (short)((ulonglong)uVar33 >> 0x20) - (short)((ulonglong)uVar15 >> 0x20);
  sVar47 = (short)((ulonglong)uVar33 >> 0x30) - (short)((ulonglong)uVar15 >> 0x30);
  sVar48 = (short)uVar39 + (short)uVar16;
  sVar50 = (short)((ulonglong)uVar39 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
  sVar51 = (short)((ulonglong)uVar39 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
  sVar52 = (short)((ulonglong)uVar39 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
  uVar16 = param_1[1];
  uVar15 = param_1[9];
  sVar31 = (short)uVar16 - (short)uVar15;
  sVar18 = (short)((ulonglong)uVar15 >> 0x10);
  sVar17 = (short)((ulonglong)uVar16 >> 0x10);
  sVar35 = sVar17 - sVar18;
  sVar22 = (short)((ulonglong)uVar15 >> 0x20);
  sVar20 = (short)((ulonglong)uVar16 >> 0x20);
  sVar26 = (short)((ulonglong)uVar16 >> 0x30);
  sVar36 = sVar20 - sVar22;
  sVar28 = (short)((ulonglong)uVar15 >> 0x30);
  sVar38 = sVar26 - sVar28;
  sVar13 = (short)uVar15 + (short)uVar16;
  sVar18 = sVar18 + sVar17;
  sVar22 = sVar22 + sVar20;
  sVar28 = sVar28 + sVar26;
  sVar17 = sVar13 - sVar48;
  sVar20 = sVar18 - sVar50;
  sVar26 = sVar22 - sVar51;
  sVar30 = sVar28 - sVar52;
  sVar48 = sVar48 + sVar13;
  sVar50 = sVar50 + sVar18;
  sVar51 = sVar51 + sVar22;
  sVar52 = sVar52 + sVar28;
  sVar13 = sVar31 - sVar43;
  sVar18 = sVar35 - sVar44;
  sVar22 = sVar36 - sVar45;
  sVar28 = sVar38 - sVar47;
  sVar43 = sVar43 + sVar31;
  sVar44 = sVar44 + sVar35;
  sVar45 = sVar45 + sVar36;
  sVar47 = sVar47 + sVar38;
  uVar16 = psraw(CONCAT26(sVar52 - sVar12,
                          CONCAT24(sVar51 - sVar10,CONCAT22(sVar50 - sVar9,sVar48 - sVar5))),5);
  param_1[0xf] = uVar16;
  uVar16 = psraw(CONCAT26(sVar12 + sVar52,
                          CONCAT24(sVar10 + sVar51,CONCAT22(sVar9 + sVar50,sVar5 + sVar48))),5);
  param_1[1] = uVar16;
  sVar5 = (short)((ulonglong)uVar8 >> 0x10);
  sVar9 = (short)((ulonglong)uVar8 >> 0x20);
  sVar10 = (short)((ulonglong)uVar8 >> 0x30);
  uVar16 = psraw(CONCAT26(sVar47 - sVar10,
                          CONCAT24(sVar45 - sVar9,CONCAT22(sVar44 - sVar5,sVar43 - (short)uVar8))),5
                );
  param_1[0xd] = uVar16;
  uVar16 = psraw(CONCAT26(sVar10 + sVar47,
                          CONCAT24(sVar9 + sVar45,CONCAT22(sVar5 + sVar44,(short)uVar8 + sVar43))),5
                );
  param_1[3] = uVar16;
  sVar5 = (short)((ulonglong)uVar23 >> 0x10);
  sVar9 = (short)((ulonglong)uVar23 >> 0x20);
  sVar10 = (short)((ulonglong)uVar23 >> 0x30);
  uVar16 = psraw(CONCAT26(sVar28 - sVar10,
                          CONCAT24(sVar22 - sVar9,CONCAT22(sVar18 - sVar5,sVar13 - (short)uVar23))),
                 5);
  param_1[0xb] = uVar16;
  uVar16 = psraw(CONCAT26(sVar10 + sVar28,
                          CONCAT24(sVar9 + sVar22,CONCAT22(sVar5 + sVar18,(short)uVar23 + sVar13))),
                 5);
  param_1[5] = uVar16;
  uVar16 = psraw(CONCAT26(sVar30 - sVar29,
                          CONCAT24(sVar26 - sVar27,CONCAT22(sVar20 - sVar25,sVar17 - sVar21))),5);
  param_1[9] = uVar16;
  uVar16 = psraw(CONCAT26(sVar29 + sVar30,
                          CONCAT24(sVar27 + sVar26,CONCAT22(sVar25 + sVar20,sVar21 + sVar17))),5);
  param_1[7] = uVar16;
  return;
}


