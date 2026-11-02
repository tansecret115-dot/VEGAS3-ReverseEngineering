/* Module: erv33260.dll
   Function: FUN_67089290
   Address: 67089290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_67089290(int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
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
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  undefined1 auVar50 [15];
  unkuint9 Var51;
  undefined1 auVar52 [11];
  undefined1 auVar53 [13];
  undefined1 auVar54 [15];
  undefined1 auVar55 [11];
  undefined1 auVar56 [15];
  unkuint9 Var57;
  undefined1 auVar58 [11];
  undefined1 auVar59 [13];
  undefined1 auVar60 [15];
  undefined1 auVar61 [11];
  undefined1 auVar62 [15];
  undefined1 auVar63 [11];
  undefined1 auVar64 [15];
  unkuint9 Var65;
  undefined1 auVar66 [11];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  short sVar89;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  uint uVar95;
  int iVar96;
  uint uVar97;
  int iVar98;
  int iVar99;
  short sVar100;
  ushort uVar101;
  ushort uVar102;
  short sVar103;
  ushort uVar104;
  ushort uVar105;
  short sVar106;
  ushort uVar107;
  ushort uVar108;
  short sVar109;
  ushort uVar110;
  ushort uVar111;
  short sVar112;
  ushort uVar113;
  ushort uVar114;
  short sVar115;
  ushort uVar116;
  ushort uVar117;
  short sVar118;
  ushort uVar119;
  ushort uVar120;
  short sVar121;
  ushort uVar122;
  ushort uVar123;
  byte bVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar133 [16];
  undefined1 local_14 [4];
  
  sVar94 = sRam6709a7fe;
  sVar93 = sRam6709a7fc;
  sVar92 = sRam6709a7fa;
  sVar91 = sRam6709a7f8;
  sVar90 = sRam6709a7f6;
  sVar89 = sRam6709a7f4;
  sVar88 = sRam6709a7f2;
  sVar87 = _DAT_6709a7f0;
  sVar86 = sRam6709a7ce;
  sVar85 = sRam6709a7cc;
  sVar84 = sRam6709a7ca;
  sVar83 = sRam6709a7c8;
  sVar82 = sRam6709a7c6;
  sVar81 = sRam6709a7c4;
  sVar80 = sRam6709a7c2;
  sVar79 = _DAT_6709a7c0;
  if (param_4 < 8) {
    FUN_67087aa0(param_1,param_2,param_3,param_4);
  }
  else {
    uVar97 = (uint)(local_14 + param_4 * -4) & 0xfffffff0;
    iVar98 = 2;
    iVar96 = param_4;
    uVar95 = uVar97;
    do {
      do {
        iVar96 = iVar96 + -8;
        auVar133 = *(undefined1 (*) [16])(param_1 + iVar96);
        auVar7[0xd] = 0;
        auVar7._0_13_ = auVar133._1_13_;
        auVar7[0xe] = auVar133[8];
        uVar132 = auVar133[7];
        auVar13[0xc] = uVar132;
        auVar13._0_12_ = auVar133._1_12_;
        auVar13._13_2_ = auVar7._13_2_;
        auVar19[0xb] = 0;
        auVar19._0_11_ = auVar133._1_11_;
        auVar19._12_3_ = auVar13._12_3_;
        uVar131 = auVar133[6];
        auVar25[10] = uVar131;
        auVar25._0_10_ = auVar133._1_10_;
        auVar25._11_4_ = auVar19._11_4_;
        auVar31[9] = 0;
        auVar31._0_9_ = auVar133._1_9_;
        auVar31._10_5_ = auVar25._10_5_;
        uVar130 = auVar133[5];
        auVar37[8] = uVar130;
        auVar37._0_8_ = auVar133._1_8_;
        auVar37._9_6_ = auVar31._9_6_;
        auVar50._7_8_ = 0;
        auVar50._0_7_ = auVar37._8_7_;
        uVar129 = auVar133[4];
        Var51 = CONCAT81(SUB158(auVar50 << 0x40,7),uVar129);
        auVar67._9_6_ = 0;
        auVar67._0_9_ = Var51;
        uVar128 = auVar133[3];
        auVar52._1_10_ = SUB1510(auVar67 << 0x30,5);
        auVar52[0] = uVar128;
        auVar68._11_4_ = 0;
        auVar68._0_11_ = auVar52;
        bVar127 = auVar133[2];
        auVar53._1_12_ = SUB1512(auVar68 << 0x20,3);
        auVar53[0] = bVar127;
        auVar124._0_2_ = (ushort)auVar133[1] * sVar79;
        auVar124._2_2_ = auVar53._0_2_ * sVar80;
        auVar124._4_2_ = auVar52._0_2_ * sVar81;
        auVar124._6_2_ = (short)Var51 * sVar82;
        auVar124._8_2_ = auVar37._8_2_ * sVar83;
        auVar124._10_2_ = auVar25._10_2_ * sVar84;
        auVar124._12_2_ = auVar13._12_2_ * sVar85;
        auVar124._14_2_ = (auVar7._13_2_ >> 8) * sVar86;
        auVar2[0xd] = 0;
        auVar2._0_13_ = auVar133._0_13_;
        auVar2[0xe] = uVar132;
        auVar8[0xc] = uVar131;
        auVar8._0_12_ = auVar133._0_12_;
        auVar8._13_2_ = auVar2._13_2_;
        auVar14[0xb] = 0;
        auVar14._0_11_ = auVar133._0_11_;
        auVar14._12_3_ = auVar8._12_3_;
        auVar20[10] = uVar130;
        auVar20._0_10_ = auVar133._0_10_;
        auVar20._11_4_ = auVar14._11_4_;
        auVar26[9] = 0;
        auVar26._0_9_ = auVar133._0_9_;
        auVar26._10_5_ = auVar20._10_5_;
        auVar32[8] = uVar129;
        auVar32._0_8_ = auVar133._0_8_;
        auVar32._9_6_ = auVar26._9_6_;
        auVar54._7_8_ = 0;
        auVar54._0_7_ = auVar32._8_7_;
        Var51 = CONCAT81(SUB158(auVar54 << 0x40,7),uVar128);
        auVar69._9_6_ = 0;
        auVar69._0_9_ = Var51;
        auVar55._1_10_ = SUB1510(auVar69 << 0x30,5);
        auVar55[0] = bVar127;
        auVar70._11_4_ = 0;
        auVar70._0_11_ = auVar55;
        auVar38[2] = auVar133[1];
        auVar38._0_2_ = auVar133._0_2_;
        auVar38._3_12_ = SUB1512(auVar70 << 0x20,3);
        auVar3[0xd] = 0;
        auVar3._0_13_ = auVar133._2_13_;
        auVar3[0xe] = auVar133[9];
        auVar9[0xc] = auVar133[8];
        auVar9._0_12_ = auVar133._2_12_;
        auVar9._13_2_ = auVar3._13_2_;
        auVar15[0xb] = 0;
        auVar15._0_11_ = auVar133._2_11_;
        auVar15._12_3_ = auVar9._12_3_;
        auVar21[10] = uVar132;
        auVar21._0_10_ = auVar133._2_10_;
        auVar21._11_4_ = auVar15._11_4_;
        auVar27[9] = 0;
        auVar27._0_9_ = auVar133._2_9_;
        auVar27._10_5_ = auVar21._10_5_;
        auVar33[8] = uVar131;
        auVar33._0_8_ = auVar133._2_8_;
        auVar33._9_6_ = auVar27._9_6_;
        auVar56._7_8_ = 0;
        auVar56._0_7_ = auVar33._8_7_;
        Var57 = CONCAT81(SUB158(auVar56 << 0x40,7),uVar130);
        auVar71._9_6_ = 0;
        auVar71._0_9_ = Var57;
        auVar58._1_10_ = SUB1510(auVar71 << 0x30,5);
        auVar58[0] = uVar129;
        auVar72._11_4_ = 0;
        auVar72._0_11_ = auVar58;
        auVar59._1_12_ = SUB1512(auVar72 << 0x20,3);
        auVar59[0] = uVar128;
        auVar125 = psraw(auVar124,1);
        psVar1 = (short *)(uVar95 + iVar96 * 4);
        *psVar1 = (auVar133._0_2_ & 0xff) * sVar79 + auVar124._0_2_ + (ushort)bVar127 +
                  auVar125._0_2_;
        psVar1[1] = auVar38._2_2_ * sVar80 + auVar124._2_2_ + auVar59._0_2_ + auVar125._2_2_;
        psVar1[2] = auVar55._0_2_ * sVar81 + auVar124._4_2_ + auVar58._0_2_ + auVar125._4_2_;
        psVar1[3] = (short)Var51 * sVar82 + auVar124._6_2_ + (short)Var57 + auVar125._6_2_;
        psVar1[4] = auVar32._8_2_ * sVar83 + auVar124._8_2_ + auVar33._8_2_ + auVar125._8_2_;
        psVar1[5] = auVar20._10_2_ * sVar84 + auVar124._10_2_ + auVar21._10_2_ + auVar125._10_2_;
        psVar1[6] = auVar8._12_2_ * sVar85 + auVar124._12_2_ + auVar9._12_2_ + auVar125._12_2_;
        psVar1[7] = (auVar2._13_2_ >> 8) * sVar86 + auVar124._14_2_ + (auVar3._13_2_ >> 8) +
                    auVar125._14_2_;
      } while (7 < iVar96);
      param_1 = param_1 + param_3;
      uVar95 = uVar95 + 0x10;
      iVar98 = iVar98 + -1;
      iVar96 = param_4;
      iVar99 = param_4;
    } while (iVar98 != 0);
    do {
      do {
        iVar96 = iVar96 + -8;
        auVar133 = *(undefined1 (*) [16])(param_1 + iVar96);
        auVar4[0xd] = 0;
        auVar4._0_13_ = auVar133._1_13_;
        auVar4[0xe] = auVar133[8];
        uVar132 = auVar133[7];
        auVar10[0xc] = uVar132;
        auVar10._0_12_ = auVar133._1_12_;
        auVar10._13_2_ = auVar4._13_2_;
        auVar16[0xb] = 0;
        auVar16._0_11_ = auVar133._1_11_;
        auVar16._12_3_ = auVar10._12_3_;
        uVar131 = auVar133[6];
        auVar22[10] = uVar131;
        auVar22._0_10_ = auVar133._1_10_;
        auVar22._11_4_ = auVar16._11_4_;
        auVar28[9] = 0;
        auVar28._0_9_ = auVar133._1_9_;
        auVar28._10_5_ = auVar22._10_5_;
        uVar130 = auVar133[5];
        auVar34[8] = uVar130;
        auVar34._0_8_ = auVar133._1_8_;
        auVar34._9_6_ = auVar28._9_6_;
        auVar60._7_8_ = 0;
        auVar60._0_7_ = auVar34._8_7_;
        uVar129 = auVar133[4];
        Var51 = CONCAT81(SUB158(auVar60 << 0x40,7),uVar129);
        auVar73._9_6_ = 0;
        auVar73._0_9_ = Var51;
        uVar128 = auVar133[3];
        auVar61._1_10_ = SUB1510(auVar73 << 0x30,5);
        auVar61[0] = uVar128;
        auVar74._11_4_ = 0;
        auVar74._0_11_ = auVar61;
        auVar39[2] = auVar133[2];
        auVar39._0_2_ = auVar133._1_2_;
        auVar39._3_12_ = SUB1512(auVar74 << 0x20,3);
        auVar125._0_2_ = auVar133._1_2_ & 0xff;
        auVar125._2_13_ = auVar39._2_13_;
        auVar125[0xf] = 0;
        auVar126 = psllw(auVar125,3);
        auVar124 = *(undefined1 (*) [16])(uVar97 + 0x10 + iVar96 * 4);
        auVar5[0xd] = 0;
        auVar5._0_13_ = auVar133._0_13_;
        auVar5[0xe] = uVar132;
        auVar11[0xc] = uVar131;
        auVar11._0_12_ = auVar133._0_12_;
        auVar11._13_2_ = auVar5._13_2_;
        auVar17[0xb] = 0;
        auVar17._0_11_ = auVar133._0_11_;
        auVar17._12_3_ = auVar11._12_3_;
        auVar23[10] = uVar130;
        auVar23._0_10_ = auVar133._0_10_;
        auVar23._11_4_ = auVar17._11_4_;
        auVar29[9] = 0;
        auVar29._0_9_ = auVar133._0_9_;
        auVar29._10_5_ = auVar23._10_5_;
        auVar35[8] = uVar129;
        auVar35._0_8_ = auVar133._0_8_;
        auVar35._9_6_ = auVar29._9_6_;
        auVar62._7_8_ = 0;
        auVar62._0_7_ = auVar35._8_7_;
        Var57 = CONCAT81(SUB158(auVar62 << 0x40,7),uVar128);
        auVar75._9_6_ = 0;
        auVar75._0_9_ = Var57;
        auVar63._1_10_ = SUB1510(auVar75 << 0x30,5);
        auVar63[0] = auVar133[2];
        auVar76._11_4_ = 0;
        auVar76._0_11_ = auVar63;
        auVar40[2] = auVar133[1];
        auVar40._0_2_ = auVar133._0_2_;
        auVar40._3_12_ = SUB1512(auVar76 << 0x20,3);
        auVar6[0xd] = 0;
        auVar6._0_13_ = auVar133._2_13_;
        auVar6[0xe] = auVar133[9];
        auVar12[0xc] = auVar133[8];
        auVar12._0_12_ = auVar133._2_12_;
        auVar12._13_2_ = auVar6._13_2_;
        auVar18[0xb] = 0;
        auVar18._0_11_ = auVar133._2_11_;
        auVar18._12_3_ = auVar12._12_3_;
        auVar24[10] = uVar132;
        auVar24._0_10_ = auVar133._2_10_;
        auVar24._11_4_ = auVar18._11_4_;
        auVar30[9] = 0;
        auVar30._0_9_ = auVar133._2_9_;
        auVar30._10_5_ = auVar24._10_5_;
        auVar36[8] = uVar131;
        auVar36._0_8_ = auVar133._2_8_;
        auVar36._9_6_ = auVar30._9_6_;
        auVar64._7_8_ = 0;
        auVar64._0_7_ = auVar36._8_7_;
        Var65 = CONCAT81(SUB158(auVar64 << 0x40,7),uVar130);
        auVar77._9_6_ = 0;
        auVar77._0_9_ = Var65;
        auVar66._1_10_ = SUB1510(auVar77 << 0x30,5);
        auVar66[0] = uVar129;
        auVar78._11_4_ = 0;
        auVar78._0_11_ = auVar66;
        auVar41[2] = uVar128;
        auVar41._0_2_ = auVar133._2_2_;
        auVar41._3_12_ = SUB1512(auVar78 << 0x20,3);
        sVar100 = (auVar133._0_2_ & 0xff) * sVar79 + auVar126._0_2_ + auVar125._0_2_ +
                  (auVar133._2_2_ & 0xff);
        sVar103 = auVar40._2_2_ * sVar80 + auVar126._2_2_ + auVar39._2_2_ + auVar41._2_2_;
        sVar106 = auVar63._0_2_ * sVar81 + auVar126._4_2_ + auVar61._0_2_ + auVar66._0_2_;
        sVar109 = (short)Var57 * sVar82 + auVar126._6_2_ + (short)Var51 + (short)Var65;
        sVar112 = auVar35._8_2_ * sVar83 + auVar126._8_2_ + auVar34._8_2_ + auVar36._8_2_;
        sVar115 = auVar23._10_2_ * sVar84 + auVar126._10_2_ + auVar22._10_2_ + auVar24._10_2_;
        sVar118 = auVar11._12_2_ * sVar85 + auVar126._12_2_ + auVar10._12_2_ + auVar12._12_2_;
        sVar121 = (auVar5._13_2_ >> 8) * sVar86 + auVar126._14_2_ + (auVar4._13_2_ >> 8) +
                  (auVar6._13_2_ >> 8);
        psVar1 = (short *)(uVar97 + iVar96 * 4);
        sVar42 = *psVar1;
        sVar43 = psVar1[1];
        sVar44 = psVar1[2];
        sVar45 = psVar1[3];
        sVar46 = psVar1[4];
        sVar47 = psVar1[5];
        sVar48 = psVar1[6];
        sVar49 = psVar1[7];
        *(undefined1 (*) [16])(uVar97 + iVar96 * 4) = auVar124;
        auVar133 = psllw(auVar124,3);
        psVar1 = (short *)(uVar97 + 0x10 + iVar96 * 4);
        *psVar1 = sVar100;
        psVar1[1] = sVar103;
        psVar1[2] = sVar106;
        psVar1[3] = sVar109;
        psVar1[4] = sVar112;
        psVar1[5] = sVar115;
        psVar1[6] = sVar118;
        psVar1[7] = sVar121;
        uVar101 = sVar100 + auVar133._0_2_ + auVar124._0_2_ + sVar42 * sVar79 + sVar87;
        uVar104 = sVar103 + auVar133._2_2_ + auVar124._2_2_ + sVar43 * sVar80 + sVar88;
        uVar107 = sVar106 + auVar133._4_2_ + auVar124._4_2_ + sVar44 * sVar81 + sVar89;
        uVar110 = sVar109 + auVar133._6_2_ + auVar124._6_2_ + sVar45 * sVar82 + sVar90;
        uVar113 = sVar112 + auVar133._8_2_ + auVar124._8_2_ + sVar46 * sVar83 + sVar91;
        uVar116 = sVar115 + auVar133._10_2_ + auVar124._10_2_ + sVar47 * sVar84 + sVar92;
        uVar119 = sVar118 + auVar133._12_2_ + auVar124._12_2_ + sVar48 * sVar85 + sVar93;
        uVar122 = sVar121 + auVar133._14_2_ + auVar124._14_2_ + sVar49 * sVar86 + sVar94;
        uVar102 = uVar101 >> 8;
        uVar105 = uVar104 >> 8;
        uVar108 = uVar107 >> 8;
        uVar111 = uVar110 >> 8;
        uVar114 = uVar113 >> 8;
        uVar117 = uVar116 >> 8;
        uVar120 = uVar119 >> 8;
        uVar123 = uVar122 >> 8;
        *(ulonglong *)(param_2 + iVar96) =
             CONCAT17((uVar123 != 0) * (uVar123 < 0x100) * (char)(uVar122 >> 8) - (0xff < uVar123),
                      CONCAT16((uVar120 != 0) * (uVar120 < 0x100) * (char)(uVar119 >> 8) -
                               (0xff < uVar120),
                               CONCAT15((uVar117 != 0) * (uVar117 < 0x100) * (char)(uVar116 >> 8) -
                                        (0xff < uVar117),
                                        CONCAT14((uVar114 != 0) * (uVar114 < 0x100) *
                                                 (char)(uVar113 >> 8) - (0xff < uVar114),
                                                 CONCAT13((uVar111 != 0) * (uVar111 < 0x100) *
                                                          (char)(uVar110 >> 8) - (0xff < uVar111),
                                                          CONCAT12((uVar108 != 0) *
                                                                   (uVar108 < 0x100) *
                                                                   (char)(uVar107 >> 8) -
                                                                   (0xff < uVar108),
                                                                   CONCAT11((uVar105 != 0) *
                                                                            (uVar105 < 0x100) *
                                                                            (char)(uVar104 >> 8) -
                                                                            (0xff < uVar105),
                                                                            (uVar102 != 0) *
                                                                            (uVar102 < 0x100) *
                                                                            (char)(uVar101 >> 8) -
                                                                            (0xff < uVar102))))))));
      } while (7 < iVar96);
      param_1 = param_1 + param_3;
      param_2 = param_2 + 0x10;
      iVar99 = iVar99 + -1;
      iVar96 = param_4;
    } while (iVar99 != 0);
  }
  return;
}


