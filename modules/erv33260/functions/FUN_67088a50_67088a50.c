/* Module: erv33260.dll
   Function: FUN_67088a50
   Address: 67088a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_67088a50(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
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
  unkuint9 Var36;
  undefined1 auVar37 [11];
  undefined1 auVar38 [13];
  undefined1 auVar39 [15];
  unkuint9 Var40;
  undefined1 auVar41 [11];
  undefined1 auVar42 [15];
  unkuint9 Var43;
  undefined1 auVar44 [11];
  undefined1 auVar45 [13];
  undefined1 auVar46 [15];
  unkuint9 Var47;
  undefined1 auVar48 [11];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
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
  int iVar73;
  int iVar74;
  int iVar75;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 auVar76 [16];
  
  sVar72 = sRam6709a7de;
  sVar71 = sRam6709a7dc;
  sVar70 = sRam6709a7da;
  sVar69 = sRam6709a7d8;
  sVar68 = sRam6709a7d6;
  sVar67 = sRam6709a7d4;
  sVar66 = sRam6709a7d2;
  sVar65 = _DAT_6709a7d0;
  sVar64 = sRam6709a7ce;
  sVar63 = sRam6709a7cc;
  sVar62 = sRam6709a7ca;
  sVar61 = sRam6709a7c8;
  sVar60 = sRam6709a7c6;
  sVar59 = sRam6709a7c4;
  sVar58 = sRam6709a7c2;
  sVar57 = _DAT_6709a7c0;
  if (param_4 < 8) {
    FUN_670874d0(param_1,param_2,param_3,param_4);
  }
  else {
    iVar74 = param_1 + -1;
    iVar75 = param_4;
    iVar73 = param_4;
    do {
      do {
        auVar76 = *(undefined1 (*) [16])(iVar74 + -8 + iVar75);
        uVar82 = auVar76[8];
        auVar12[0xd] = 0;
        auVar12._0_13_ = auVar76._1_13_;
        auVar12[0xe] = uVar82;
        uVar81 = auVar76[7];
        auVar16[0xc] = uVar81;
        auVar16._0_12_ = auVar76._1_12_;
        auVar16._13_2_ = auVar12._13_2_;
        auVar20[0xb] = 0;
        auVar20._0_11_ = auVar76._1_11_;
        auVar20._12_3_ = auVar16._12_3_;
        uVar80 = auVar76[6];
        auVar24[10] = uVar80;
        auVar24._0_10_ = auVar76._1_10_;
        auVar24._11_4_ = auVar20._11_4_;
        auVar28[9] = 0;
        auVar28._0_9_ = auVar76._1_9_;
        auVar28._10_5_ = auVar24._10_5_;
        uVar79 = auVar76[5];
        auVar32[8] = uVar79;
        auVar32._0_8_ = auVar76._1_8_;
        auVar32._9_6_ = auVar28._9_6_;
        auVar35._7_8_ = 0;
        auVar35._0_7_ = auVar32._8_7_;
        uVar78 = auVar76[4];
        Var36 = CONCAT81(SUB158(auVar35 << 0x40,7),uVar78);
        auVar49._9_6_ = 0;
        auVar49._0_9_ = Var36;
        bVar77 = auVar76[3];
        auVar37._1_10_ = SUB1510(auVar49 << 0x30,5);
        auVar37[0] = bVar77;
        auVar50._11_4_ = 0;
        auVar50._0_11_ = auVar37;
        auVar38._1_12_ = SUB1512(auVar50 << 0x20,3);
        auVar38[0] = auVar76[2];
        auVar9[0xd] = 0;
        auVar9._0_13_ = auVar76._2_13_;
        auVar9[0xe] = auVar76[9];
        auVar13[0xc] = uVar82;
        auVar13._0_12_ = auVar76._2_12_;
        auVar13._13_2_ = auVar9._13_2_;
        auVar17[0xb] = 0;
        auVar17._0_11_ = auVar76._2_11_;
        auVar17._12_3_ = auVar13._12_3_;
        auVar21[10] = uVar81;
        auVar21._0_10_ = auVar76._2_10_;
        auVar21._11_4_ = auVar17._11_4_;
        auVar25[9] = 0;
        auVar25._0_9_ = auVar76._2_9_;
        auVar25._10_5_ = auVar21._10_5_;
        auVar29[8] = uVar80;
        auVar29._0_8_ = auVar76._2_8_;
        auVar29._9_6_ = auVar25._9_6_;
        auVar39._7_8_ = 0;
        auVar39._0_7_ = auVar29._8_7_;
        Var40 = CONCAT81(SUB158(auVar39 << 0x40,7),uVar79);
        auVar51._9_6_ = 0;
        auVar51._0_9_ = Var40;
        auVar41._1_10_ = SUB1510(auVar51 << 0x30,5);
        auVar41[0] = uVar78;
        auVar52._11_4_ = 0;
        auVar52._0_11_ = auVar41;
        auVar33[2] = bVar77;
        auVar33._0_2_ = auVar76._2_2_;
        auVar33._3_12_ = SUB1512(auVar52 << 0x20,3);
        auVar10[0xd] = 0;
        auVar10._0_13_ = auVar76._3_13_;
        auVar10[0xe] = auVar76[10];
        auVar14[0xc] = auVar76[9];
        auVar14._0_12_ = auVar76._3_12_;
        auVar14._13_2_ = auVar10._13_2_;
        auVar18[0xb] = 0;
        auVar18._0_11_ = auVar76._3_11_;
        auVar18._12_3_ = auVar14._12_3_;
        auVar22[10] = uVar82;
        auVar22._0_10_ = auVar76._3_10_;
        auVar22._11_4_ = auVar18._11_4_;
        auVar26[9] = 0;
        auVar26._0_9_ = auVar76._3_9_;
        auVar26._10_5_ = auVar22._10_5_;
        auVar30[8] = uVar81;
        auVar30._0_8_ = auVar76._3_8_;
        auVar30._9_6_ = auVar26._9_6_;
        auVar42._7_8_ = 0;
        auVar42._0_7_ = auVar30._8_7_;
        Var43 = CONCAT81(SUB158(auVar42 << 0x40,7),uVar80);
        auVar53._9_6_ = 0;
        auVar53._0_9_ = Var43;
        auVar44._1_10_ = SUB1510(auVar53 << 0x30,5);
        auVar44[0] = uVar79;
        auVar54._11_4_ = 0;
        auVar54._0_11_ = auVar44;
        auVar45._1_12_ = SUB1512(auVar54 << 0x20,3);
        auVar45[0] = uVar78;
        auVar11[0xd] = 0;
        auVar11._0_13_ = auVar76._0_13_;
        auVar11[0xe] = uVar81;
        auVar15[0xc] = uVar80;
        auVar15._0_12_ = auVar76._0_12_;
        auVar15._13_2_ = auVar11._13_2_;
        auVar19[0xb] = 0;
        auVar19._0_11_ = auVar76._0_11_;
        auVar19._12_3_ = auVar15._12_3_;
        auVar23[10] = uVar79;
        auVar23._0_10_ = auVar76._0_10_;
        auVar23._11_4_ = auVar19._11_4_;
        auVar27[9] = 0;
        auVar27._0_9_ = auVar76._0_9_;
        auVar27._10_5_ = auVar23._10_5_;
        auVar31[8] = uVar78;
        auVar31._0_8_ = auVar76._0_8_;
        auVar31._9_6_ = auVar27._9_6_;
        auVar46._7_8_ = 0;
        auVar46._0_7_ = auVar31._8_7_;
        Var47 = CONCAT81(SUB158(auVar46 << 0x40,7),bVar77);
        auVar55._9_6_ = 0;
        auVar55._0_9_ = Var47;
        auVar48._1_10_ = SUB1510(auVar55 << 0x30,5);
        auVar48[0] = auVar76[2];
        auVar56._11_4_ = 0;
        auVar56._0_11_ = auVar48;
        auVar34[2] = auVar76[1];
        auVar34._0_2_ = auVar76._0_2_;
        auVar34._3_12_ = SUB1512(auVar56 << 0x20,3);
        auVar76._0_2_ =
             ((((auVar76._2_2_ & 0xff) * sVar57 + (ushort)auVar76[1] * sVar57 * 2) -
              (auVar76._0_2_ & 0xff)) - (ushort)bVar77) + sVar65;
        auVar76._2_2_ =
             (((auVar33._2_2_ * sVar58 + auVar38._0_2_ * sVar58 * 2) - auVar34._2_2_) -
             auVar45._0_2_) + sVar66;
        auVar76._4_2_ =
             (((auVar41._0_2_ * sVar59 + auVar37._0_2_ * sVar59 * 2) - auVar48._0_2_) -
             auVar44._0_2_) + sVar67;
        auVar76._6_2_ =
             ((((short)Var40 * sVar60 + (short)Var36 * sVar60 * 2) - (short)Var47) - (short)Var43) +
             sVar68;
        auVar76._8_2_ =
             (((auVar29._8_2_ * sVar61 + auVar32._8_2_ * sVar61 * 2) - auVar31._8_2_) -
             auVar30._8_2_) + sVar69;
        auVar76._10_2_ =
             (((auVar21._10_2_ * sVar62 + auVar24._10_2_ * sVar62 * 2) - auVar23._10_2_) -
             auVar22._10_2_) + sVar70;
        auVar76._12_2_ =
             (((auVar13._12_2_ * sVar63 + auVar16._12_2_ * sVar63 * 2) - auVar15._12_2_) -
             auVar14._12_2_) + sVar71;
        auVar76._14_2_ =
             ((((auVar9._13_2_ >> 8) * sVar64 + (auVar12._13_2_ >> 8) * sVar64 * 2) -
              (auVar11._13_2_ >> 8)) - (auVar10._13_2_ >> 8)) + sVar72;
        auVar76 = psraw(auVar76,4);
        sVar1 = auVar76._0_2_;
        sVar2 = auVar76._2_2_;
        sVar3 = auVar76._4_2_;
        sVar4 = auVar76._6_2_;
        sVar5 = auVar76._8_2_;
        sVar6 = auVar76._10_2_;
        sVar7 = auVar76._12_2_;
        sVar8 = auVar76._14_2_;
        *(ulonglong *)(param_2 + -8 + iVar75) =
             CONCAT17((0 < sVar8) * (sVar8 < 0x100) * auVar76[0xe] - (0xff < sVar8),
                      CONCAT16((0 < sVar7) * (sVar7 < 0x100) * auVar76[0xc] - (0xff < sVar7),
                               CONCAT15((0 < sVar6) * (sVar6 < 0x100) * auVar76[10] - (0xff < sVar6)
                                        ,CONCAT14((0 < sVar5) * (sVar5 < 0x100) * auVar76[8] -
                                                  (0xff < sVar5),
                                                  CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                           auVar76[6] - (0xff < sVar4),
                                                           CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                                                    auVar76[4] - (0xff < sVar3),
                                                                    CONCAT11((0 < sVar2) *
                                                                             (sVar2 < 0x100) *
                                                                             auVar76[2] -
                                                                             (0xff < sVar2),
                                                                             (0 < sVar1) *
                                                                             (sVar1 < 0x100) *
                                                                             auVar76[0] -
                                                                             (0xff < sVar1))))))));
        iVar75 = iVar75 + -8;
      } while (iVar75 != 0);
      iVar74 = iVar74 + param_3;
      param_2 = param_2 + 0x10;
      iVar73 = iVar73 + -1;
      iVar75 = param_4;
    } while (iVar73 != 0);
  }
  return;
}


