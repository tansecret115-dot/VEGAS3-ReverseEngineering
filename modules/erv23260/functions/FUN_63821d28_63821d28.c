/* Module: erv23260.dll
   Function: FUN_63821d28
   Address: 63821d28
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63821d28(undefined4 param_1,uint param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  int extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  int extraout_ECX_08;
  uint extraout_ECX_09;
  uint extraout_ECX_10;
  int extraout_ECX_11;
  uint extraout_ECX_12;
  uint extraout_ECX_13;
  uint uVar6;
  int extraout_ECX_14;
  int extraout_ECX_15;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar17;
  short sVar21;
  undefined8 in_MM4;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  undefined8 uVar15;
  undefined8 uVar16;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar35;
  short sVar39;
  undefined8 in_MM5;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  undefined8 uVar33;
  undefined8 uVar34;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar56;
  short sVar60;
  undefined8 in_MM6;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar74;
  short sVar77;
  undefined8 in_MM7;
  short sVar75;
  short sVar76;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar51;
  
  iVar2 = *param_4;
  iVar3 = param_4[1];
  iVar4 = param_4[2];
  iVar5 = param_4[3];
  pmaddwd((ulonglong)(uint)(param_3[1] >> 1),(ulonglong)param_2);
  if (0x3f < (param_3[1] + 0x20U | *param_3 + 0x20U)) {
    FUN_63822404();
    param_2 = extraout_ECX;
  }
  FUN_63822238(param_2,param_2 * 3);
  sVar68 = (short)DAT_638357a0;
  sVar11 = (short)in_MM4 + sVar68;
  sVar74 = (short)((ulonglong)DAT_638357a0 >> 0x10);
  sVar17 = (short)((ulonglong)in_MM4 >> 0x10) + sVar74;
  sVar77 = (short)((ulonglong)DAT_638357a0 >> 0x20);
  sVar21 = (short)((ulonglong)in_MM4 >> 0x20) + sVar77;
  sVar80 = (short)((ulonglong)DAT_638357a0 >> 0x30);
  sVar25 = (short)((ulonglong)in_MM4 >> 0x30) + sVar80;
  uVar16 = CONCAT26(sVar25,CONCAT24(sVar21,CONCAT22(sVar17,sVar11)));
  sVar29 = (short)in_MM5 + sVar68;
  sVar35 = (short)((ulonglong)in_MM5 >> 0x10) + sVar74;
  sVar39 = (short)((ulonglong)in_MM5 >> 0x20) + sVar77;
  sVar43 = (short)((ulonglong)in_MM5 >> 0x30) + sVar80;
  uVar34 = CONCAT26(sVar43,CONCAT24(sVar39,CONCAT22(sVar35,sVar29)));
  sVar47 = (short)in_MM6 + sVar68;
  sVar56 = (short)((ulonglong)in_MM6 >> 0x10) + sVar74;
  sVar60 = (short)((ulonglong)in_MM6 >> 0x20) + sVar77;
  sVar64 = (short)((ulonglong)in_MM6 >> 0x30) + sVar80;
  uVar51 = CONCAT26(sVar64,CONCAT24(sVar60,CONCAT22(sVar56,sVar47)));
  sVar68 = (short)in_MM7 + sVar68;
  sVar74 = (short)((ulonglong)in_MM7 >> 0x10) + sVar74;
  sVar77 = (short)((ulonglong)in_MM7 >> 0x20) + sVar77;
  sVar80 = (short)((ulonglong)in_MM7 >> 0x30) + sVar80;
  uVar55 = CONCAT26(sVar80,CONCAT24(sVar77,CONCAT22(sVar74,sVar68)));
  FUN_63822238(extraout_ECX_00,extraout_EDX);
  sVar69 = (short)DAT_638357a0;
  sVar12 = (short)uVar16 + sVar69;
  sVar75 = (short)((ulonglong)DAT_638357a0 >> 0x10);
  sVar18 = (short)((ulonglong)uVar16 >> 0x10) + sVar75;
  sVar78 = (short)((ulonglong)DAT_638357a0 >> 0x20);
  sVar22 = (short)((ulonglong)uVar16 >> 0x20) + sVar78;
  sVar81 = (short)((ulonglong)DAT_638357a0 >> 0x30);
  sVar26 = (short)((ulonglong)uVar16 >> 0x30) + sVar81;
  uVar16 = CONCAT26(sVar26,CONCAT24(sVar22,CONCAT22(sVar18,sVar12)));
  sVar30 = (short)uVar34 + sVar69;
  sVar36 = (short)((ulonglong)uVar34 >> 0x10) + sVar75;
  sVar40 = (short)((ulonglong)uVar34 >> 0x20) + sVar78;
  sVar44 = (short)((ulonglong)uVar34 >> 0x30) + sVar81;
  uVar34 = CONCAT26(sVar44,CONCAT24(sVar40,CONCAT22(sVar36,sVar30)));
  sVar48 = (short)uVar51 + sVar69;
  sVar57 = (short)((ulonglong)uVar51 >> 0x10) + sVar75;
  sVar61 = (short)((ulonglong)uVar51 >> 0x20) + sVar78;
  sVar65 = (short)((ulonglong)uVar51 >> 0x30) + sVar81;
  uVar51 = CONCAT26(sVar65,CONCAT24(sVar61,CONCAT22(sVar57,sVar48)));
  sVar69 = (short)uVar55 + sVar69;
  sVar75 = (short)((ulonglong)uVar55 >> 0x10) + sVar75;
  sVar78 = (short)((ulonglong)uVar55 >> 0x20) + sVar78;
  sVar81 = (short)((ulonglong)uVar55 >> 0x30) + sVar81;
  uVar55 = CONCAT26(sVar81,CONCAT24(sVar78,CONCAT22(sVar75,sVar69)));
  FUN_63822238(extraout_ECX_01,extraout_EDX_00);
  sVar70 = (short)DAT_638357a0;
  sVar13 = (short)uVar16 + sVar70;
  sVar76 = (short)((ulonglong)DAT_638357a0 >> 0x10);
  sVar19 = (short)((ulonglong)uVar16 >> 0x10) + sVar76;
  sVar79 = (short)((ulonglong)DAT_638357a0 >> 0x20);
  sVar23 = (short)((ulonglong)uVar16 >> 0x20) + sVar79;
  sVar82 = (short)((ulonglong)DAT_638357a0 >> 0x30);
  sVar27 = (short)((ulonglong)uVar16 >> 0x30) + sVar82;
  uVar16 = CONCAT26(sVar27,CONCAT24(sVar23,CONCAT22(sVar19,sVar13)));
  sVar31 = (short)uVar34 + sVar70;
  sVar37 = (short)((ulonglong)uVar34 >> 0x10) + sVar76;
  sVar41 = (short)((ulonglong)uVar34 >> 0x20) + sVar79;
  sVar45 = (short)((ulonglong)uVar34 >> 0x30) + sVar82;
  uVar34 = CONCAT26(sVar45,CONCAT24(sVar41,CONCAT22(sVar37,sVar31)));
  sVar49 = (short)uVar51 + sVar70;
  sVar58 = (short)((ulonglong)uVar51 >> 0x10) + sVar76;
  sVar62 = (short)((ulonglong)uVar51 >> 0x20) + sVar79;
  sVar66 = (short)((ulonglong)uVar51 >> 0x30) + sVar82;
  uVar51 = CONCAT26(sVar66,CONCAT24(sVar62,CONCAT22(sVar58,sVar49)));
  sVar70 = (short)uVar55 + sVar70;
  sVar76 = (short)((ulonglong)uVar55 >> 0x10) + sVar76;
  sVar79 = (short)((ulonglong)uVar55 >> 0x20) + sVar79;
  sVar82 = (short)((ulonglong)uVar55 >> 0x30) + sVar82;
  uVar55 = CONCAT26(sVar82,CONCAT24(sVar79,CONCAT22(sVar76,sVar70)));
  FUN_63822238(extraout_ECX_02,extraout_EDX_01);
  sVar7 = (short)DAT_638357a0;
  sVar14 = (short)uVar16 + sVar7;
  sVar8 = (short)((ulonglong)DAT_638357a0 >> 0x10);
  sVar20 = (short)((ulonglong)uVar16 >> 0x10) + sVar8;
  sVar9 = (short)((ulonglong)DAT_638357a0 >> 0x20);
  sVar24 = (short)((ulonglong)uVar16 >> 0x20) + sVar9;
  sVar10 = (short)((ulonglong)DAT_638357a0 >> 0x30);
  sVar28 = (short)((ulonglong)uVar16 >> 0x30) + sVar10;
  uVar16 = CONCAT26(sVar28,CONCAT24(sVar24,CONCAT22(sVar20,sVar14)));
  sVar32 = (short)uVar34 + sVar7;
  sVar38 = (short)((ulonglong)uVar34 >> 0x10) + sVar8;
  sVar42 = (short)((ulonglong)uVar34 >> 0x20) + sVar9;
  sVar46 = (short)((ulonglong)uVar34 >> 0x30) + sVar10;
  uVar34 = CONCAT26(sVar46,CONCAT24(sVar42,CONCAT22(sVar38,sVar32)));
  sVar50 = (short)uVar51 + sVar7;
  sVar59 = (short)((ulonglong)uVar51 >> 0x10) + sVar8;
  sVar63 = (short)((ulonglong)uVar51 >> 0x20) + sVar9;
  sVar67 = (short)((ulonglong)uVar51 >> 0x30) + sVar10;
  uVar51 = CONCAT26(sVar67,CONCAT24(sVar63,CONCAT22(sVar59,sVar50)));
  uVar55 = CONCAT26((short)((ulonglong)uVar55 >> 0x30) + sVar10,
                    CONCAT24((short)((ulonglong)uVar55 >> 0x20) + sVar9,
                             CONCAT22((short)((ulonglong)uVar55 >> 0x10) + sVar8,
                                      (short)uVar55 + sVar7)));
  pmaddwd((ulonglong)(uint)(param_3[iVar2 * 2 + 1] >> 1),(ulonglong)extraout_ECX_03);
  uVar6 = extraout_ECX_03;
  if (0x3f < (param_3[iVar2 * 2 + 1] + 0x20U | param_3[iVar2 * 2] + 0x20U)) {
    FUN_63822404();
    uVar6 = extraout_ECX_04;
  }
  uVar71 = uVar55;
  FUN_63822238(uVar6,uVar6 * 3);
  sVar11 = (short)uVar16 + sVar11;
  sVar17 = (short)((ulonglong)uVar16 >> 0x10) + sVar17;
  sVar21 = (short)((ulonglong)uVar16 >> 0x20) + sVar21;
  sVar25 = (short)((ulonglong)uVar16 >> 0x30) + sVar25;
  uVar16 = CONCAT26(sVar25,CONCAT24(sVar21,CONCAT22(sVar17,sVar11)));
  sVar29 = (short)uVar34 + sVar29;
  sVar35 = (short)((ulonglong)uVar34 >> 0x10) + sVar35;
  sVar39 = (short)((ulonglong)uVar34 >> 0x20) + sVar39;
  sVar43 = (short)((ulonglong)uVar34 >> 0x30) + sVar43;
  uVar34 = CONCAT26(sVar43,CONCAT24(sVar39,CONCAT22(sVar35,sVar29)));
  sVar47 = (short)uVar51 + sVar47;
  sVar56 = (short)((ulonglong)uVar51 >> 0x10) + sVar56;
  sVar60 = (short)((ulonglong)uVar51 >> 0x20) + sVar60;
  sVar64 = (short)((ulonglong)uVar51 >> 0x30) + sVar64;
  uVar51 = CONCAT26(sVar64,CONCAT24(sVar60,CONCAT22(sVar56,sVar47)));
  sVar68 = (short)uVar71 + sVar68;
  sVar74 = (short)((ulonglong)uVar71 >> 0x10) + sVar74;
  sVar77 = (short)((ulonglong)uVar71 >> 0x20) + sVar77;
  sVar80 = (short)((ulonglong)uVar71 >> 0x30) + sVar80;
  uVar71 = CONCAT26(sVar80,CONCAT24(sVar77,CONCAT22(sVar74,sVar68)));
  FUN_63822238(extraout_ECX_05,extraout_EDX_02);
  sVar13 = (short)uVar16 + sVar13;
  sVar19 = (short)((ulonglong)uVar16 >> 0x10) + sVar19;
  sVar23 = (short)((ulonglong)uVar16 >> 0x20) + sVar23;
  sVar27 = (short)((ulonglong)uVar16 >> 0x30) + sVar27;
  uVar16 = CONCAT26(sVar27,CONCAT24(sVar23,CONCAT22(sVar19,sVar13)));
  sVar31 = (short)uVar34 + sVar31;
  sVar37 = (short)((ulonglong)uVar34 >> 0x10) + sVar37;
  sVar41 = (short)((ulonglong)uVar34 >> 0x20) + sVar41;
  sVar45 = (short)((ulonglong)uVar34 >> 0x30) + sVar45;
  uVar34 = CONCAT26(sVar45,CONCAT24(sVar41,CONCAT22(sVar37,sVar31)));
  uVar51 = CONCAT26((short)((ulonglong)uVar51 >> 0x30) + sVar66,
                    CONCAT24((short)((ulonglong)uVar51 >> 0x20) + sVar62,
                             CONCAT22((short)((ulonglong)uVar51 >> 0x10) + sVar58,
                                      (short)uVar51 + sVar49)));
  uVar71 = CONCAT26((short)((ulonglong)uVar71 >> 0x30) + sVar82,
                    CONCAT24((short)((ulonglong)uVar71 >> 0x20) + sVar79,
                             CONCAT22((short)((ulonglong)uVar71 >> 0x10) + sVar76,
                                      (short)uVar71 + sVar70)));
  pmaddwd((ulonglong)(uint)(param_3[iVar3 * 2 + 1] >> 1),(ulonglong)extraout_ECX_06);
  uVar6 = extraout_ECX_06;
  if (0x3f < (param_3[iVar3 * 2 + 1] + 0x20U | param_3[iVar3 * 2] + 0x20U)) {
    FUN_63822404();
    uVar6 = extraout_ECX_07;
  }
  uVar52 = uVar51;
  uVar54 = uVar71;
  FUN_63822238(uVar6,uVar6 * 3);
  sVar12 = (short)uVar16 + sVar12;
  sVar18 = (short)((ulonglong)uVar16 >> 0x10) + sVar18;
  sVar22 = (short)((ulonglong)uVar16 >> 0x20) + sVar22;
  sVar26 = (short)((ulonglong)uVar16 >> 0x30) + sVar26;
  uVar16 = CONCAT26(sVar26,CONCAT24(sVar22,CONCAT22(sVar18,sVar12)));
  sVar30 = (short)uVar34 + sVar30;
  sVar36 = (short)((ulonglong)uVar34 >> 0x10) + sVar36;
  sVar40 = (short)((ulonglong)uVar34 >> 0x20) + sVar40;
  sVar44 = (short)((ulonglong)uVar34 >> 0x30) + sVar44;
  uVar34 = CONCAT26(sVar44,CONCAT24(sVar40,CONCAT22(sVar36,sVar30)));
  sVar48 = (short)uVar52 + sVar48;
  sVar57 = (short)((ulonglong)uVar52 >> 0x10) + sVar57;
  sVar61 = (short)((ulonglong)uVar52 >> 0x20) + sVar61;
  sVar65 = (short)((ulonglong)uVar52 >> 0x30) + sVar65;
  uVar52 = CONCAT26(sVar65,CONCAT24(sVar61,CONCAT22(sVar57,sVar48)));
  sVar69 = (short)uVar54 + sVar69;
  sVar75 = (short)((ulonglong)uVar54 >> 0x10) + sVar75;
  sVar78 = (short)((ulonglong)uVar54 >> 0x20) + sVar78;
  sVar81 = (short)((ulonglong)uVar54 >> 0x30) + sVar81;
  uVar54 = CONCAT26(sVar81,CONCAT24(sVar78,CONCAT22(sVar75,sVar69)));
  FUN_63822238(extraout_ECX_08,extraout_EDX_03);
  sVar14 = (short)uVar16 + sVar14;
  sVar20 = (short)((ulonglong)uVar16 >> 0x10) + sVar20;
  sVar24 = (short)((ulonglong)uVar16 >> 0x20) + sVar24;
  sVar28 = (short)((ulonglong)uVar16 >> 0x30) + sVar28;
  uVar16 = CONCAT26(sVar28,CONCAT24(sVar24,CONCAT22(sVar20,sVar14)));
  sVar32 = (short)uVar34 + sVar32;
  sVar38 = (short)((ulonglong)uVar34 >> 0x10) + sVar38;
  sVar42 = (short)((ulonglong)uVar34 >> 0x20) + sVar42;
  sVar46 = (short)((ulonglong)uVar34 >> 0x30) + sVar46;
  uVar34 = CONCAT26(sVar46,CONCAT24(sVar42,CONCAT22(sVar38,sVar32)));
  uVar52 = CONCAT26((short)((ulonglong)uVar52 >> 0x30) + sVar67,
                    CONCAT24((short)((ulonglong)uVar52 >> 0x20) + sVar63,
                             CONCAT22((short)((ulonglong)uVar52 >> 0x10) + sVar59,
                                      (short)uVar52 + sVar50)));
  uVar55 = CONCAT26((short)((ulonglong)uVar54 >> 0x30) + (short)((ulonglong)uVar55 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar54 >> 0x20) + (short)((ulonglong)uVar55 >> 0x20)
                             ,CONCAT22((short)((ulonglong)uVar54 >> 0x10) +
                                       (short)((ulonglong)uVar55 >> 0x10),
                                       (short)uVar54 + (short)uVar55)));
  pmaddwd((ulonglong)(uint)(param_3[iVar4 * 2 + 1] >> 1),(ulonglong)extraout_ECX_09);
  uVar6 = extraout_ECX_09;
  if (0x3f < (param_3[iVar4 * 2 + 1] + 0x20U | param_3[iVar4 * 2] + 0x20U)) {
    FUN_63822404();
    uVar6 = extraout_ECX_10;
  }
  uVar54 = uVar52;
  uVar73 = uVar55;
  FUN_63822238(uVar6,uVar6 * 3);
  uVar15 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar26,
                          CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar22,
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar18,
                                            (short)uVar16 + sVar12))),3);
  uVar33 = psraw(CONCAT26((short)((ulonglong)uVar34 >> 0x30) + sVar44,
                          CONCAT24((short)((ulonglong)uVar34 >> 0x20) + sVar40,
                                   CONCAT22((short)((ulonglong)uVar34 >> 0x10) + sVar36,
                                            (short)uVar34 + sVar30))),3);
  uVar53 = psraw(CONCAT26((short)((ulonglong)uVar54 >> 0x30) + sVar65,
                          CONCAT24((short)((ulonglong)uVar54 >> 0x20) + sVar61,
                                   CONCAT22((short)((ulonglong)uVar54 >> 0x10) + sVar57,
                                            (short)uVar54 + sVar48))),3);
  uVar72 = psraw(CONCAT26((short)((ulonglong)uVar73 >> 0x30) + sVar81,
                          CONCAT24((short)((ulonglong)uVar73 >> 0x20) + sVar78,
                                   CONCAT22((short)((ulonglong)uVar73 >> 0x10) + sVar75,
                                            (short)uVar73 + sVar69))),3);
  uVar16 = uVar15;
  uVar34 = uVar33;
  uVar54 = uVar53;
  uVar73 = uVar72;
  FUN_63822238(extraout_ECX_11,extraout_EDX_04);
  uVar73 = psraw(CONCAT26((short)((ulonglong)uVar73 >> 0x30) + sVar80,
                          CONCAT24((short)((ulonglong)uVar73 >> 0x20) + sVar77,
                                   CONCAT22((short)((ulonglong)uVar73 >> 0x10) + sVar74,
                                            (short)uVar73 + sVar68))),3);
  uVar54 = psraw(CONCAT26((short)((ulonglong)uVar54 >> 0x30) + sVar64,
                          CONCAT24((short)((ulonglong)uVar54 >> 0x20) + sVar60,
                                   CONCAT22((short)((ulonglong)uVar54 >> 0x10) + sVar56,
                                            (short)uVar54 + sVar47))),3);
  sVar68 = (short)uVar73;
  sVar69 = (short)((ulonglong)uVar73 >> 0x10);
  sVar70 = (short)((ulonglong)uVar73 >> 0x20);
  sVar7 = (short)((ulonglong)uVar73 >> 0x30);
  sVar74 = (short)uVar72;
  sVar75 = (short)((ulonglong)uVar72 >> 0x10);
  sVar76 = (short)((ulonglong)uVar72 >> 0x20);
  sVar8 = (short)((ulonglong)uVar72 >> 0x30);
  uVar73 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar72 >> 0x30) -
                    (0xff < sVar8),
                    CONCAT16((0 < sVar76) * (sVar76 < 0x100) * (char)((ulonglong)uVar72 >> 0x20) -
                             (0xff < sVar76),
                             CONCAT15((0 < sVar75) * (sVar75 < 0x100) *
                                      (char)((ulonglong)uVar72 >> 0x10) - (0xff < sVar75),
                                      CONCAT14((0 < sVar74) * (sVar74 < 0x100) * (char)uVar72 -
                                               (0xff < sVar74),
                                               CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                        (char)((ulonglong)uVar73 >> 0x30) -
                                                        (0xff < sVar7),
                                                        CONCAT12((0 < sVar70) * (sVar70 < 0x100) *
                                                                 (char)((ulonglong)uVar73 >> 0x20) -
                                                                 (0xff < sVar70),
                                                                 CONCAT11((0 < sVar69) *
                                                                          (sVar69 < 0x100) *
                                                                          (char)((ulonglong)uVar73
                                                                                >> 0x10) -
                                                                          (0xff < sVar69),
                                                                          (0 < sVar68) *
                                                                          (sVar68 < 0x100) *
                                                                          (char)uVar73 -
                                                                          (0xff < sVar68))))))));
  sVar68 = (short)uVar54;
  sVar69 = (short)((ulonglong)uVar54 >> 0x10);
  sVar70 = (short)((ulonglong)uVar54 >> 0x20);
  sVar7 = (short)((ulonglong)uVar54 >> 0x30);
  sVar74 = (short)uVar53;
  sVar75 = (short)((ulonglong)uVar53 >> 0x10);
  sVar76 = (short)((ulonglong)uVar53 >> 0x20);
  sVar8 = (short)((ulonglong)uVar53 >> 0x30);
  uVar54 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar53 >> 0x30) -
                    (0xff < sVar8),
                    CONCAT16((0 < sVar76) * (sVar76 < 0x100) * (char)((ulonglong)uVar53 >> 0x20) -
                             (0xff < sVar76),
                             CONCAT15((0 < sVar75) * (sVar75 < 0x100) *
                                      (char)((ulonglong)uVar53 >> 0x10) - (0xff < sVar75),
                                      CONCAT14((0 < sVar74) * (sVar74 < 0x100) * (char)uVar53 -
                                               (0xff < sVar74),
                                               CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                        (char)((ulonglong)uVar54 >> 0x30) -
                                                        (0xff < sVar7),
                                                        CONCAT12((0 < sVar70) * (sVar70 < 0x100) *
                                                                 (char)((ulonglong)uVar54 >> 0x20) -
                                                                 (0xff < sVar70),
                                                                 CONCAT11((0 < sVar69) *
                                                                          (sVar69 < 0x100) *
                                                                          (char)((ulonglong)uVar54
                                                                                >> 0x10) -
                                                                          (0xff < sVar69),
                                                                          (0 < sVar68) *
                                                                          (sVar68 < 0x100) *
                                                                          (char)uVar54 -
                                                                          (0xff < sVar68))))))));
  *(undefined8 *)(extraout_EDX_05 + (int)param_5) = uVar73;
  uVar34 = psraw(CONCAT26((short)((ulonglong)uVar34 >> 0x30) + sVar43,
                          CONCAT24((short)((ulonglong)uVar34 >> 0x20) + sVar39,
                                   CONCAT22((short)((ulonglong)uVar34 >> 0x10) + sVar35,
                                            (short)uVar34 + sVar29))),3);
  *(undefined8 *)((int)param_5 + extraout_ECX_12 * 2) = uVar54;
  uVar16 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar25,
                          CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar21,
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar17,
                                            (short)uVar16 + sVar11))),3);
  sVar68 = (short)uVar34;
  sVar69 = (short)((ulonglong)uVar34 >> 0x10);
  sVar70 = (short)((ulonglong)uVar34 >> 0x20);
  sVar7 = (short)((ulonglong)uVar34 >> 0x30);
  sVar74 = (short)uVar33;
  sVar75 = (short)((ulonglong)uVar33 >> 0x10);
  sVar76 = (short)((ulonglong)uVar33 >> 0x20);
  sVar8 = (short)((ulonglong)uVar33 >> 0x30);
  uVar34 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar33 >> 0x30) -
                    (0xff < sVar8),
                    CONCAT16((0 < sVar76) * (sVar76 < 0x100) * (char)((ulonglong)uVar33 >> 0x20) -
                             (0xff < sVar76),
                             CONCAT15((0 < sVar75) * (sVar75 < 0x100) *
                                      (char)((ulonglong)uVar33 >> 0x10) - (0xff < sVar75),
                                      CONCAT14((0 < sVar74) * (sVar74 < 0x100) * (char)uVar33 -
                                               (0xff < sVar74),
                                               CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                        (char)((ulonglong)uVar34 >> 0x30) -
                                                        (0xff < sVar7),
                                                        CONCAT12((0 < sVar70) * (sVar70 < 0x100) *
                                                                 (char)((ulonglong)uVar34 >> 0x20) -
                                                                 (0xff < sVar70),
                                                                 CONCAT11((0 < sVar69) *
                                                                          (sVar69 < 0x100) *
                                                                          (char)((ulonglong)uVar34
                                                                                >> 0x10) -
                                                                          (0xff < sVar69),
                                                                          (0 < sVar68) *
                                                                          (sVar68 < 0x100) *
                                                                          (char)uVar34 -
                                                                          (0xff < sVar68))))))));
  iVar2 = param_3[iVar5 * 2 + 1];
  iVar3 = param_3[iVar5 * 2];
  sVar68 = (short)uVar16;
  sVar69 = (short)((ulonglong)uVar16 >> 0x10);
  sVar70 = (short)((ulonglong)uVar16 >> 0x20);
  sVar7 = (short)((ulonglong)uVar16 >> 0x30);
  sVar74 = (short)uVar15;
  sVar75 = (short)((ulonglong)uVar15 >> 0x10);
  sVar76 = (short)((ulonglong)uVar15 >> 0x20);
  sVar8 = (short)((ulonglong)uVar15 >> 0x30);
  uVar16 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar15 >> 0x30) -
                    (0xff < sVar8),
                    CONCAT16((0 < sVar76) * (sVar76 < 0x100) * (char)((ulonglong)uVar15 >> 0x20) -
                             (0xff < sVar76),
                             CONCAT15((0 < sVar75) * (sVar75 < 0x100) *
                                      (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar75),
                                      CONCAT14((0 < sVar74) * (sVar74 < 0x100) * (char)uVar15 -
                                               (0xff < sVar74),
                                               CONCAT13((0 < sVar7) * (sVar7 < 0x100) *
                                                        (char)((ulonglong)uVar16 >> 0x30) -
                                                        (0xff < sVar7),
                                                        CONCAT12((0 < sVar70) * (sVar70 < 0x100) *
                                                                 (char)((ulonglong)uVar16 >> 0x20) -
                                                                 (0xff < sVar70),
                                                                 CONCAT11((0 < sVar69) *
                                                                          (sVar69 < 0x100) *
                                                                          (char)((ulonglong)uVar16
                                                                                >> 0x10) -
                                                                          (0xff < sVar69),
                                                                          (0 < sVar68) *
                                                                          (sVar68 < 0x100) *
                                                                          (char)uVar16 -
                                                                          (0xff < sVar68))))))));
  pmaddwd((ulonglong)(uint)(iVar2 >> 1),(ulonglong)extraout_ECX_12);
  *(undefined8 *)(extraout_ECX_12 + (int)param_5) = uVar34;
  uVar6 = extraout_ECX_12;
  if (0x3f < (iVar2 + 0x20U | iVar3 + 0x20U)) {
    FUN_63822404();
    uVar6 = extraout_ECX_13;
  }
  *param_5 = uVar16;
  puVar1 = (undefined8 *)((int)param_5 + uVar6 * 4);
  FUN_63822238(uVar6,uVar6 * 3);
  uVar15 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar28,
                          CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar24,
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar20,
                                            (short)uVar16 + sVar14))),3);
  uVar33 = psraw(CONCAT26((short)((ulonglong)uVar34 >> 0x30) + sVar46,
                          CONCAT24((short)((ulonglong)uVar34 >> 0x20) + sVar42,
                                   CONCAT22((short)((ulonglong)uVar34 >> 0x10) + sVar38,
                                            (short)uVar34 + sVar32))),3);
  uVar54 = psraw(CONCAT26((short)((ulonglong)uVar54 >> 0x30) + (short)((ulonglong)uVar52 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar54 >> 0x20) +
                                   (short)((ulonglong)uVar52 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar54 >> 0x10) +
                                            (short)((ulonglong)uVar52 >> 0x10),
                                            (short)uVar54 + (short)uVar52))),3);
  uVar73 = psraw(CONCAT26((short)((ulonglong)uVar73 >> 0x30) + (short)((ulonglong)uVar55 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar73 >> 0x20) +
                                   (short)((ulonglong)uVar55 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar73 >> 0x10) +
                                            (short)((ulonglong)uVar55 >> 0x10),
                                            (short)uVar73 + (short)uVar55))),3);
  uVar16 = uVar15;
  uVar34 = uVar33;
  uVar55 = uVar54;
  uVar52 = uVar73;
  FUN_63822238(extraout_ECX_14,extraout_EDX_06);
  uVar16 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar27,
                          CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar23,
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar19,
                                            (short)uVar16 + sVar13))),3);
  uVar34 = psraw(CONCAT26((short)((ulonglong)uVar34 >> 0x30) + sVar45,
                          CONCAT24((short)((ulonglong)uVar34 >> 0x20) + sVar41,
                                   CONCAT22((short)((ulonglong)uVar34 >> 0x10) + sVar37,
                                            (short)uVar34 + sVar31))),3);
  sVar68 = (short)uVar16;
  sVar70 = (short)((ulonglong)uVar16 >> 0x10);
  sVar74 = (short)((ulonglong)uVar16 >> 0x20);
  sVar76 = (short)((ulonglong)uVar16 >> 0x30);
  sVar77 = (short)uVar15;
  sVar79 = (short)((ulonglong)uVar15 >> 0x10);
  sVar80 = (short)((ulonglong)uVar15 >> 0x20);
  sVar82 = (short)((ulonglong)uVar15 >> 0x30);
  sVar69 = (short)uVar34;
  sVar7 = (short)((ulonglong)uVar34 >> 0x10);
  sVar75 = (short)((ulonglong)uVar34 >> 0x20);
  sVar8 = (short)((ulonglong)uVar34 >> 0x30);
  sVar78 = (short)uVar33;
  sVar9 = (short)((ulonglong)uVar33 >> 0x10);
  sVar81 = (short)((ulonglong)uVar33 >> 0x20);
  sVar10 = (short)((ulonglong)uVar33 >> 0x30);
  *puVar1 = CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)((ulonglong)uVar15 >> 0x30) -
                     (0xff < sVar82),
                     CONCAT16((0 < sVar80) * (sVar80 < 0x100) * (char)((ulonglong)uVar15 >> 0x20) -
                              (0xff < sVar80),
                              CONCAT15((0 < sVar79) * (sVar79 < 0x100) *
                                       (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar79),
                                       CONCAT14((0 < sVar77) * (sVar77 < 0x100) * (char)uVar15 -
                                                (0xff < sVar77),
                                                CONCAT13((0 < sVar76) * (sVar76 < 0x100) *
                                                         (char)((ulonglong)uVar16 >> 0x30) -
                                                         (0xff < sVar76),
                                                         CONCAT12((0 < sVar74) * (sVar74 < 0x100) *
                                                                  (char)((ulonglong)uVar16 >> 0x20)
                                                                  - (0xff < sVar74),
                                                                  CONCAT11((0 < sVar70) *
                                                                           (sVar70 < 0x100) *
                                                                           (char)((ulonglong)uVar16
                                                                                 >> 0x10) -
                                                                           (0xff < sVar70),
                                                                           (0 < sVar68) *
                                                                           (sVar68 < 0x100) *
                                                                           (char)uVar16 -
                                                                           (0xff < sVar68))))))));
  uVar16 = psraw(CONCAT26((short)((ulonglong)uVar55 >> 0x30) + (short)((ulonglong)uVar51 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar55 >> 0x20) +
                                   (short)((ulonglong)uVar51 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar55 >> 0x10) +
                                            (short)((ulonglong)uVar51 >> 0x10),
                                            (short)uVar55 + (short)uVar51))),3);
  *(ulonglong *)(extraout_ECX_15 + (int)puVar1) =
       CONCAT17((0 < sVar10) * (sVar10 < 0x100) * (char)((ulonglong)uVar33 >> 0x30) -
                (0xff < sVar10),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)((ulonglong)uVar33 >> 0x20) -
                         (0xff < sVar81),
                         CONCAT15((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar33 >> 0x10)
                                  - (0xff < sVar9),
                                  CONCAT14((0 < sVar78) * (sVar78 < 0x100) * (char)uVar33 -
                                           (0xff < sVar78),
                                           CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                    (char)((ulonglong)uVar34 >> 0x30) -
                                                    (0xff < sVar8),
                                                    CONCAT12((0 < sVar75) * (sVar75 < 0x100) *
                                                             (char)((ulonglong)uVar34 >> 0x20) -
                                                             (0xff < sVar75),
                                                             CONCAT11((0 < sVar7) * (sVar7 < 0x100)
                                                                      * (char)((ulonglong)uVar34 >>
                                                                              0x10) - (0xff < sVar7)
                                                                      ,(0 < sVar69) *
                                                                       (sVar69 < 0x100) *
                                                                       (char)uVar34 -
                                                                       (0xff < sVar69))))))));
  uVar34 = psraw(CONCAT26((short)((ulonglong)uVar52 >> 0x30) + (short)((ulonglong)uVar71 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar52 >> 0x20) +
                                   (short)((ulonglong)uVar71 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar52 >> 0x10) +
                                            (short)((ulonglong)uVar71 >> 0x10),
                                            (short)uVar52 + (short)uVar71))),3);
  sVar68 = (short)uVar16;
  sVar70 = (short)((ulonglong)uVar16 >> 0x10);
  sVar74 = (short)((ulonglong)uVar16 >> 0x20);
  sVar76 = (short)((ulonglong)uVar16 >> 0x30);
  sVar77 = (short)uVar54;
  sVar79 = (short)((ulonglong)uVar54 >> 0x10);
  sVar80 = (short)((ulonglong)uVar54 >> 0x20);
  sVar82 = (short)((ulonglong)uVar54 >> 0x30);
  sVar69 = (short)uVar34;
  sVar7 = (short)((ulonglong)uVar34 >> 0x10);
  sVar75 = (short)((ulonglong)uVar34 >> 0x20);
  sVar8 = (short)((ulonglong)uVar34 >> 0x30);
  sVar78 = (short)uVar73;
  sVar9 = (short)((ulonglong)uVar73 >> 0x10);
  sVar81 = (short)((ulonglong)uVar73 >> 0x20);
  sVar10 = (short)((ulonglong)uVar73 >> 0x30);
  *(ulonglong *)((int)puVar1 + extraout_ECX_15 * 2) =
       CONCAT17((0 < sVar82) * (sVar82 < 0x100) * (char)((ulonglong)uVar54 >> 0x30) -
                (0xff < sVar82),
                CONCAT16((0 < sVar80) * (sVar80 < 0x100) * (char)((ulonglong)uVar54 >> 0x20) -
                         (0xff < sVar80),
                         CONCAT15((0 < sVar79) * (sVar79 < 0x100) *
                                  (char)((ulonglong)uVar54 >> 0x10) - (0xff < sVar79),
                                  CONCAT14((0 < sVar77) * (sVar77 < 0x100) * (char)uVar54 -
                                           (0xff < sVar77),
                                           CONCAT13((0 < sVar76) * (sVar76 < 0x100) *
                                                    (char)((ulonglong)uVar16 >> 0x30) -
                                                    (0xff < sVar76),
                                                    CONCAT12((0 < sVar74) * (sVar74 < 0x100) *
                                                             (char)((ulonglong)uVar16 >> 0x20) -
                                                             (0xff < sVar74),
                                                             CONCAT11((0 < sVar70) *
                                                                      (sVar70 < 0x100) *
                                                                      (char)((ulonglong)uVar16 >>
                                                                            0x10) - (0xff < sVar70),
                                                                      (0 < sVar68) *
                                                                      (sVar68 < 0x100) *
                                                                      (char)uVar16 - (0xff < sVar68)
                                                                     )))))));
  *(ulonglong *)(extraout_EDX_07 + (int)puVar1) =
       CONCAT17((0 < sVar10) * (sVar10 < 0x100) * (char)((ulonglong)uVar73 >> 0x30) -
                (0xff < sVar10),
                CONCAT16((0 < sVar81) * (sVar81 < 0x100) * (char)((ulonglong)uVar73 >> 0x20) -
                         (0xff < sVar81),
                         CONCAT15((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar73 >> 0x10)
                                  - (0xff < sVar9),
                                  CONCAT14((0 < sVar78) * (sVar78 < 0x100) * (char)uVar73 -
                                           (0xff < sVar78),
                                           CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                    (char)((ulonglong)uVar34 >> 0x30) -
                                                    (0xff < sVar8),
                                                    CONCAT12((0 < sVar75) * (sVar75 < 0x100) *
                                                             (char)((ulonglong)uVar34 >> 0x20) -
                                                             (0xff < sVar75),
                                                             CONCAT11((0 < sVar7) * (sVar7 < 0x100)
                                                                      * (char)((ulonglong)uVar34 >>
                                                                              0x10) - (0xff < sVar7)
                                                                      ,(0 < sVar69) *
                                                                       (sVar69 < 0x100) *
                                                                       (char)uVar34 -
                                                                       (0xff < sVar69))))))));
  return;
}


