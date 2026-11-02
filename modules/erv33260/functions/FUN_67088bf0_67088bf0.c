/* Module: erv33260.dll
   Function: FUN_67088bf0
   Address: 67088bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_67088bf0(int param_1,undefined8 *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  unkuint9 Var40;
  undefined1 auVar41 [11];
  undefined1 auVar42 [13];
  undefined1 auVar43 [15];
  unkuint9 Var44;
  undefined1 auVar45 [11];
  undefined1 auVar46 [15];
  unkuint9 Var47;
  undefined1 auVar48 [11];
  undefined1 auVar49 [13];
  undefined1 auVar50 [15];
  unkuint9 Var51;
  undefined1 auVar52 [11];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  ulonglong *puVar77;
  int iVar78;
  int iVar79;
  undefined1 auVar80 [16];
  
  sVar76 = sRam6709a7de;
  sVar75 = sRam6709a7dc;
  sVar74 = sRam6709a7da;
  sVar73 = sRam6709a7d8;
  sVar72 = sRam6709a7d6;
  sVar71 = sRam6709a7d4;
  sVar70 = sRam6709a7d2;
  sVar69 = _DAT_6709a7d0;
  sVar68 = sRam6709a7ce;
  sVar67 = sRam6709a7cc;
  sVar66 = sRam6709a7ca;
  sVar65 = sRam6709a7c8;
  sVar64 = sRam6709a7c6;
  sVar63 = sRam6709a7c4;
  sVar62 = sRam6709a7c2;
  sVar61 = _DAT_6709a7c0;
  if (param_4 < 8) {
    FUN_670875d0(param_1,(undefined4 *)param_2,param_3,param_4);
  }
  else {
    puVar77 = (ulonglong *)(param_1 - param_3);
    iVar79 = param_4;
    iVar78 = param_4;
    do {
      do {
        uVar1 = *(ulonglong *)((int)puVar77 + param_3 * 2);
        auVar16._8_6_ = 0;
        auVar16._0_8_ = uVar1;
        auVar16[0xe] = (char)(uVar1 >> 0x38);
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar1;
        auVar20[0xc] = (char)(uVar1 >> 0x30);
        auVar20._13_2_ = auVar16._13_2_;
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar1;
        auVar24._12_3_ = auVar20._12_3_;
        auVar28._8_2_ = 0;
        auVar28._0_8_ = uVar1;
        auVar28[10] = (char)(uVar1 >> 0x28);
        auVar28._11_4_ = auVar24._11_4_;
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar1;
        auVar32._10_5_ = auVar28._10_5_;
        auVar36[8] = (char)(uVar1 >> 0x20);
        auVar36._0_8_ = uVar1;
        auVar36._9_6_ = auVar32._9_6_;
        auVar39._7_8_ = 0;
        auVar39._0_7_ = auVar36._8_7_;
        Var40 = CONCAT81(SUB158(auVar39 << 0x40,7),(char)(uVar1 >> 0x18));
        auVar53._9_6_ = 0;
        auVar53._0_9_ = Var40;
        auVar41._1_10_ = SUB1510(auVar53 << 0x30,5);
        auVar41[0] = (char)(uVar1 >> 0x10);
        auVar54._11_4_ = 0;
        auVar54._0_11_ = auVar41;
        auVar42._1_12_ = SUB1512(auVar54 << 0x20,3);
        auVar42[0] = (char)(uVar1 >> 8);
        uVar2 = *(ulonglong *)((int)puVar77 + param_3);
        auVar13._8_6_ = 0;
        auVar13._0_8_ = uVar2;
        auVar13[0xe] = (char)(uVar2 >> 0x38);
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar2;
        auVar17[0xc] = (char)(uVar2 >> 0x30);
        auVar17._13_2_ = auVar13._13_2_;
        auVar21._8_4_ = 0;
        auVar21._0_8_ = uVar2;
        auVar21._12_3_ = auVar17._12_3_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar2;
        auVar25[10] = (char)(uVar2 >> 0x28);
        auVar25._11_4_ = auVar21._11_4_;
        auVar29._8_2_ = 0;
        auVar29._0_8_ = uVar2;
        auVar29._10_5_ = auVar25._10_5_;
        auVar33[8] = (char)(uVar2 >> 0x20);
        auVar33._0_8_ = uVar2;
        auVar33._9_6_ = auVar29._9_6_;
        auVar43._7_8_ = 0;
        auVar43._0_7_ = auVar33._8_7_;
        Var44 = CONCAT81(SUB158(auVar43 << 0x40,7),(char)(uVar2 >> 0x18));
        auVar55._9_6_ = 0;
        auVar55._0_9_ = Var44;
        auVar45._1_10_ = SUB1510(auVar55 << 0x30,5);
        auVar45[0] = (char)(uVar2 >> 0x10);
        auVar56._11_4_ = 0;
        auVar56._0_11_ = auVar45;
        auVar37[2] = (char)(uVar2 >> 8);
        auVar37._0_2_ = (ushort)uVar2;
        auVar37._3_12_ = SUB1512(auVar56 << 0x20,3);
        uVar3 = *puVar77;
        auVar14._8_6_ = 0;
        auVar14._0_8_ = uVar3;
        auVar14[0xe] = (char)(uVar3 >> 0x38);
        auVar18._8_4_ = 0;
        auVar18._0_8_ = uVar3;
        auVar18[0xc] = (char)(uVar3 >> 0x30);
        auVar18._13_2_ = auVar14._13_2_;
        auVar22._8_4_ = 0;
        auVar22._0_8_ = uVar3;
        auVar22._12_3_ = auVar18._12_3_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar3;
        auVar26[10] = (char)(uVar3 >> 0x28);
        auVar26._11_4_ = auVar22._11_4_;
        auVar30._8_2_ = 0;
        auVar30._0_8_ = uVar3;
        auVar30._10_5_ = auVar26._10_5_;
        auVar34[8] = (char)(uVar3 >> 0x20);
        auVar34._0_8_ = uVar3;
        auVar34._9_6_ = auVar30._9_6_;
        auVar46._7_8_ = 0;
        auVar46._0_7_ = auVar34._8_7_;
        Var47 = CONCAT81(SUB158(auVar46 << 0x40,7),(char)(uVar3 >> 0x18));
        auVar57._9_6_ = 0;
        auVar57._0_9_ = Var47;
        auVar48._1_10_ = SUB1510(auVar57 << 0x30,5);
        auVar48[0] = (char)(uVar3 >> 0x10);
        auVar58._11_4_ = 0;
        auVar58._0_11_ = auVar48;
        auVar49._1_12_ = SUB1512(auVar58 << 0x20,3);
        auVar49[0] = (char)(uVar3 >> 8);
        uVar4 = *(ulonglong *)((int)puVar77 + param_3 * 3);
        auVar15._8_6_ = 0;
        auVar15._0_8_ = uVar4;
        auVar15[0xe] = (char)(uVar4 >> 0x38);
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar4;
        auVar19[0xc] = (char)(uVar4 >> 0x30);
        auVar19._13_2_ = auVar15._13_2_;
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar4;
        auVar23._12_3_ = auVar19._12_3_;
        auVar27._8_2_ = 0;
        auVar27._0_8_ = uVar4;
        auVar27[10] = (char)(uVar4 >> 0x28);
        auVar27._11_4_ = auVar23._11_4_;
        auVar31._8_2_ = 0;
        auVar31._0_8_ = uVar4;
        auVar31._10_5_ = auVar27._10_5_;
        auVar35[8] = (char)(uVar4 >> 0x20);
        auVar35._0_8_ = uVar4;
        auVar35._9_6_ = auVar31._9_6_;
        auVar50._7_8_ = 0;
        auVar50._0_7_ = auVar35._8_7_;
        Var51 = CONCAT81(SUB158(auVar50 << 0x40,7),(char)(uVar4 >> 0x18));
        auVar59._9_6_ = 0;
        auVar59._0_9_ = Var51;
        auVar52._1_10_ = SUB1510(auVar59 << 0x30,5);
        auVar52[0] = (char)(uVar4 >> 0x10);
        auVar60._11_4_ = 0;
        auVar60._0_11_ = auVar52;
        auVar38[2] = (char)(uVar4 >> 8);
        auVar38._0_2_ = (ushort)uVar4;
        auVar38._3_12_ = SUB1512(auVar60 << 0x20,3);
        puVar77 = puVar77 + 1;
        auVar80._0_2_ =
             ((((ushort)(byte)uVar1 * sVar61 - (ushort)(byte)uVar3) +
              ((ushort)uVar2 & 0xff) * sVar61 * 2) - ((ushort)uVar4 & 0xff)) + sVar69;
        auVar80._2_2_ =
             (((auVar42._0_2_ * sVar62 - auVar49._0_2_) + auVar37._2_2_ * sVar62 * 2) -
             auVar38._2_2_) + sVar70;
        auVar80._4_2_ =
             (((auVar41._0_2_ * sVar63 - auVar48._0_2_) + auVar45._0_2_ * sVar63 * 2) -
             auVar52._0_2_) + sVar71;
        auVar80._6_2_ =
             ((((short)Var40 * sVar64 - (short)Var47) + (short)Var44 * sVar64 * 2) - (short)Var51) +
             sVar72;
        auVar80._8_2_ =
             (((auVar36._8_2_ * sVar65 - auVar34._8_2_) + auVar33._8_2_ * sVar65 * 2) -
             auVar35._8_2_) + sVar73;
        auVar80._10_2_ =
             (((auVar28._10_2_ * sVar66 - auVar26._10_2_) + auVar25._10_2_ * sVar66 * 2) -
             auVar27._10_2_) + sVar74;
        auVar80._12_2_ =
             (((auVar20._12_2_ * sVar67 - auVar18._12_2_) + auVar17._12_2_ * sVar67 * 2) -
             auVar19._12_2_) + sVar75;
        auVar80._14_2_ =
             ((((auVar16._13_2_ >> 8) * sVar68 - (auVar14._13_2_ >> 8)) +
              (auVar13._13_2_ >> 8) * sVar68 * 2) - (auVar15._13_2_ >> 8)) + sVar76;
        auVar80 = psraw(auVar80,4);
        sVar5 = auVar80._0_2_;
        sVar6 = auVar80._2_2_;
        sVar7 = auVar80._4_2_;
        sVar8 = auVar80._6_2_;
        sVar9 = auVar80._8_2_;
        sVar10 = auVar80._10_2_;
        sVar11 = auVar80._12_2_;
        sVar12 = auVar80._14_2_;
        *param_2 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * auVar80[0xe] - (0xff < sVar12),
                            CONCAT16((0 < sVar11) * (sVar11 < 0x100) * auVar80[0xc] -
                                     (0xff < sVar11),
                                     CONCAT15((0 < sVar10) * (sVar10 < 0x100) * auVar80[10] -
                                              (0xff < sVar10),
                                              CONCAT14((0 < sVar9) * (sVar9 < 0x100) * auVar80[8] -
                                                       (0xff < sVar9),
                                                       CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                auVar80[6] - (0xff < sVar8),
                                                                CONCAT12((0 < sVar7) *
                                                                         (sVar7 < 0x100) *
                                                                         auVar80[4] - (0xff < sVar7)
                                                                         ,CONCAT11((0 < sVar6) *
                                                                                   (sVar6 < 0x100) *
                                                                                   auVar80[2] -
                                                                                   (0xff < sVar6),
                                                                                   (0 < sVar5) *
                                                                                   (sVar5 < 0x100) *
                                                                                   auVar80[0] -
                                                                                   (0xff < sVar5))))
                                                      ))));
        param_2 = param_2 + 1;
        iVar79 = iVar79 + -8;
      } while (iVar79 != 0);
      puVar77 = (ulonglong *)((int)puVar77 + (param_3 - param_4));
      param_2 = (undefined8 *)((int)param_2 + (0x10 - param_4));
      iVar78 = iVar78 + -1;
      iVar79 = param_4;
    } while (iVar78 != 0);
  }
  return;
}


