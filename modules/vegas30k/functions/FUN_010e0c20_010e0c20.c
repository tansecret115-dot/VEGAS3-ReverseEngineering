/* Module: vegas30k.dll
   Function: FUN_010e0c20
   Address: 010e0c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010e0c20(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_194;
  int local_190;
  undefined1 local_184 [4];
  int local_180;
  int local_17c;
  undefined1 local_178 [8];
  code *pcStack_170;
  code *pcStack_16c;
  code *pcStack_160;
  code *local_15c;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  byte bStack_141;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  byte bStack_139;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  byte bStack_131;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  byte bStack_129;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined1 auStack_c0 [4];
  undefined1 local_bc [8];
  code *pcStack_b4;
  code *pcStack_a4;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  byte bStack_85;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  byte bStack_7d;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  byte bStack_75;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  byte bStack_6d;
  int iStack_60;
  int iStack_5c;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar1 = param_1[0x15];
  local_190 = param_1[7];
  local_17c = param_1[0xc];
  iVar6 = param_1[0x10];
  uVar2 = _SfGetPixelType_4(param_1[0xe]);
  uVar3 = _SfGetPixelType_4(param_1[5]);
  _SfGetPixelBitsPerChannel_8(uVar2,local_184);
  _SfGetPixelBitsPerChannel_8(uVar3,local_184);
  _SfXCHGGetFunctionPointers_20(uVar3,uVar2,param_1[0x19],local_178,0);
  _SfXCHGGetFunctionPointers_20(uVar3,uVar2,param_1[0x19],local_bc,0);
  local_ec = param_1[0x16];
  local_e8 = param_1[0xd];
  local_e4 = param_1[0x17];
  if (*param_1 == 0) {
    uVar4 = param_1[0x13];
    iVar5 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 3U)) >> 2;
    uVar4 = uVar4 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    local_180 = param_1[0x14];
    iVar7 = 0;
    local_30 = local_ec;
    local_2c = local_e8;
    local_28 = local_e4;
    if (0 < local_180) {
      do {
        local_194 = iVar5;
        if ((*(int *)(param_1[0x12] + 0xc) - iVar7 & 1U) == param_2) {
          local_118 = param_1[0x11];
          local_114 = local_190;
          local_110 = param_1[8];
          local_11c = iVar6;
          if (0 < iVar5) {
            do {
              (*local_15c)(local_178);
              (*local_15c)(&local_17c);
              local_194 = local_194 + -1;
            } while (local_194 != 0);
          }
          local_194 = uVar4;
          if (0 < (int)uVar4) {
            do {
              (*pcStack_16c)(local_178);
              (*pcStack_16c)(&local_17c);
              local_194 = local_194 - 1;
            } while (local_194 != 0);
          }
        }
        else {
          if (iVar7 < 1) {
            local_11c = 0;
          }
          else {
            local_11c = -uVar1;
          }
          local_11c = local_11c + iVar6;
          iStack_60 = ((local_180 + -1 <= iVar7) - 1 & uVar1) + iVar6;
          local_114 = local_190;
          local_118 = param_1[0x11];
          local_110 = param_1[8];
          iStack_5c = local_118;
          if (0 < iVar5) {
            do {
              (*local_15c)(local_178);
              (*pcStack_a4)(auStack_c0);
              uStack_144 = (undefined1)
                           ((CONCAT12(uStack_86,CONCAT11(uStack_87,uStack_88)) & 0xff) +
                            (CONCAT12(uStack_142,CONCAT11(uStack_143,uStack_144)) & 0xff) >> 1);
              uStack_143 = (undefined1)
                           ((CONCAT12(bStack_85,CONCAT11(uStack_86,uStack_87)) & 0xff) +
                            (CONCAT12(bStack_141,CONCAT11(uStack_142,uStack_143)) & 0xff) >> 1);
              uStack_142 = (undefined1)
                           ((CONCAT11(bStack_85,uStack_86) & 0xff) +
                            (CONCAT11(bStack_141,uStack_142) & 0xff) >> 1);
              bStack_141 = (byte)((uint)bStack_85 + (uint)bStack_141 >> 1);
              uStack_13c = (undefined1)
                           ((CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_80)) & 0xff) +
                            (CONCAT12(uStack_13a,CONCAT11(uStack_13b,uStack_13c)) & 0xff) >> 1);
              uStack_13b = (undefined1)
                           ((CONCAT12(bStack_7d,CONCAT11(uStack_7e,uStack_7f)) & 0xff) +
                            (CONCAT12(bStack_139,CONCAT11(uStack_13a,uStack_13b)) & 0xff) >> 1);
              uStack_13a = (undefined1)
                           ((CONCAT11(bStack_7d,uStack_7e) & 0xff) +
                            (CONCAT11(bStack_139,uStack_13a) & 0xff) >> 1);
              bStack_139 = (byte)((uint)bStack_7d + (uint)bStack_139 >> 1);
              uStack_134 = (undefined1)
                           ((CONCAT12(uStack_76,CONCAT11(uStack_77,uStack_78)) & 0xff) +
                            (CONCAT12(uStack_132,CONCAT11(uStack_133,uStack_134)) & 0xff) >> 1);
              uStack_133 = (undefined1)
                           ((CONCAT12(bStack_75,CONCAT11(uStack_76,uStack_77)) & 0xff) +
                            (CONCAT12(bStack_131,CONCAT11(uStack_132,uStack_133)) & 0xff) >> 1);
              uStack_132 = (undefined1)
                           ((CONCAT11(bStack_75,uStack_76) & 0xff) +
                            (CONCAT11(bStack_131,uStack_132) & 0xff) >> 1);
              bStack_131 = (byte)((uint)bStack_75 + (uint)bStack_131 >> 1);
              uStack_12c = (undefined1)
                           ((CONCAT12(uStack_6e,CONCAT11(uStack_6f,uStack_70)) & 0xff) +
                            (CONCAT12(uStack_12a,CONCAT11(uStack_12b,uStack_12c)) & 0xff) >> 1);
              uStack_12b = (undefined1)
                           ((CONCAT12(bStack_6d,CONCAT11(uStack_6e,uStack_6f)) & 0xff) +
                            (CONCAT12(bStack_129,CONCAT11(uStack_12a,uStack_12b)) & 0xff) >> 1);
              uStack_12a = (undefined1)
                           ((CONCAT11(bStack_6d,uStack_6e) & 0xff) +
                            (CONCAT11(bStack_129,uStack_12a) & 0xff) >> 1);
              bStack_129 = (byte)((uint)bStack_6d + (uint)bStack_129 >> 1);
              (*pcStack_160)(&local_180);
              local_194 = local_194 + -1;
            } while (local_194 != 0);
          }
          local_194 = uVar4;
          if (0 < (int)uVar4) {
            do {
              (*pcStack_16c)(local_178);
              (*pcStack_b4)(auStack_c0);
              uStack_144 = (undefined1)
                           ((CONCAT12(uStack_86,CONCAT11(uStack_87,uStack_88)) & 0xff) +
                            (CONCAT12(uStack_142,CONCAT11(uStack_143,uStack_144)) & 0xff) >> 1);
              uStack_143 = (undefined1)
                           ((CONCAT12(bStack_85,CONCAT11(uStack_86,uStack_87)) & 0xff) +
                            (CONCAT12(bStack_141,CONCAT11(uStack_142,uStack_143)) & 0xff) >> 1);
              uStack_142 = (undefined1)
                           ((CONCAT11(bStack_85,uStack_86) & 0xff) +
                            (CONCAT11(bStack_141,uStack_142) & 0xff) >> 1);
              bStack_141 = (byte)((uint)bStack_85 + (uint)bStack_141 >> 1);
              (*pcStack_170)(&local_180);
              local_194 = local_194 - 1;
            } while (local_194 != 0);
          }
        }
        iVar6 = iVar6 + uVar1;
        local_190 = local_190 + local_17c;
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_180);
    }
  }
  return 0;
}


