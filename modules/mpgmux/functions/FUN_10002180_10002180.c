/* Module: mpgmux.dll
   Function: FUN_10002180
   Address: 10002180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10002180(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint unaff_EDI;
  longlong lVar10;
  byte local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x134);
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x130);
  uVar5 = FUN_1000cdf6((LPCSTR)(param_2 + 3),0x8002,unaff_EDI);
  if (uVar5 == 0xffffffff) {
    return;
  }
  local_4 = *param_2;
  iVar8 = param_2[1] + local_4;
  iVar4 = local_4;
  local_c = uVar5;
  while( true ) {
    if (iVar8 <= iVar4) {
      FUN_1000ca30(uVar5);
      return;
    }
    iVar6 = param_2[2];
    local_b4 = (byte)((uint)iVar6 >> 0x18);
    local_b2 = (undefined1)((uint)iVar6 >> 8);
    local_b1 = (undefined1)param_2[2];
    local_b3 = (undefined1)((uint)iVar6 >> 0x10);
    uVar5 = *(uint *)(iVar2 + iVar4 * 4);
    lVar10 = __allmul(uVar5,(int)uVar5 >> 0x1f,0x800,0);
    uVar5 = local_c;
    lVar10 = FUN_1000cd00(local_c,(LONG)(lVar10 + 0x437),(LONG)((ulonglong)(lVar10 + 0x437) >> 0x20)
                          ,0);
    if ((lVar10 == -1) || (iVar6 = FUN_1000cb10(uVar5,(char *)&local_b4,4), iVar6 != 4)) break;
    local_8 = iVar4 + 1;
    if (local_8 < iVar8) {
      uVar5 = *(int *)(iVar2 + local_8 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffff;
      local_b4 = (byte)(uVar5 >> 0x18) | 0x80;
      local_b2 = (undefined1)(uVar5 >> 8);
      local_b3 = (undefined1)(uVar5 >> 0x10);
      local_b1 = (undefined1)uVar5;
      uVar5 = *(int *)(iVar2 + local_8 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU | 0x80000000
      ;
    }
    else {
      local_b2 = 0xff;
      local_b3 = 0xff;
      local_b4 = 0xbf;
      local_b1 = 0xff;
      uVar5 = 0x3fffffff;
    }
    local_64 = (undefined1)(uVar5 >> 0x18);
    local_61 = (undefined1)uVar5;
    local_63 = (undefined1)(uVar5 >> 0x10);
    local_62 = (undefined1)(uVar5 >> 8);
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 45000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002327;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 45000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_10002327:
    local_68 = (undefined1)(uVar5 >> 0x18);
    local_67 = (undefined1)(uVar5 >> 0x10);
    local_66 = (undefined1)(uVar5 >> 8);
    local_65 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 90000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002381;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 90000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_10002381:
    local_6c = (undefined1)(uVar5 >> 0x18);
    local_6b = (undefined1)(uVar5 >> 0x10);
    local_6a = (undefined1)(uVar5 >> 8);
    local_69 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 0x20f58) {
          uVar5 = 0x3fffffff;
          goto LAB_100023db;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 0x20f58);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_100023db:
    local_70 = (undefined1)(uVar5 >> 0x18);
    local_6f = (undefined1)(uVar5 >> 0x10);
    local_6e = (undefined1)(uVar5 >> 8);
    local_6d = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 180000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002435;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 180000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_10002435:
    local_74 = (undefined1)(uVar5 >> 0x18);
    local_73 = (undefined1)(uVar5 >> 0x10);
    local_72 = (undefined1)(uVar5 >> 8);
    local_71 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 0x36ee8) {
          uVar5 = 0x3fffffff;
          goto LAB_1000248f;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 0x36ee8);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_1000248f:
    local_78 = (undefined1)(uVar5 >> 0x18);
    local_77 = (undefined1)(uVar5 >> 0x10);
    local_76 = (undefined1)(uVar5 >> 8);
    local_75 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 270000) {
          uVar5 = 0x3fffffff;
          goto LAB_100024e9;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 270000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_100024e9:
    local_7c = (undefined1)(uVar5 >> 0x18);
    local_7b = (undefined1)(uVar5 >> 0x10);
    local_7a = (undefined1)(uVar5 >> 8);
    local_79 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 0x4ce78) {
          uVar5 = 0x3fffffff;
          goto LAB_10002543;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 0x4ce78);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_10002543:
    local_80 = (undefined1)(uVar5 >> 0x18);
    local_7f = (undefined1)(uVar5 >> 0x10);
    local_7e = (undefined1)(uVar5 >> 8);
    local_7d = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 360000) {
          uVar5 = 0x3fffffff;
          goto LAB_1000259d;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 360000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_1000259d:
    local_84 = (undefined1)(uVar5 >> 0x18);
    local_83 = (undefined1)(uVar5 >> 0x10);
    local_82 = (undefined1)(uVar5 >> 8);
    local_81 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 0x62e08) {
          uVar5 = 0x3fffffff;
          goto LAB_100025f7;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 0x62e08);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_100025f7:
    local_88 = (undefined1)(uVar5 >> 0x18);
    local_87 = (undefined1)(uVar5 >> 0x10);
    local_86 = (undefined1)(uVar5 >> 8);
    local_85 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 450000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002651;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 450000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_10002651:
    local_8c = (undefined1)(uVar5 >> 0x18);
    local_8b = (undefined1)(uVar5 >> 0x10);
    local_8a = (undefined1)(uVar5 >> 8);
    local_89 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 0x78d98) {
          uVar5 = 0x3fffffff;
          goto LAB_100026ab;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 0x78d98);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_100026ab:
    local_90 = (undefined1)(uVar5 >> 0x18);
    local_8f = (undefined1)(uVar5 >> 0x10);
    local_8e = (undefined1)(uVar5 >> 8);
    local_8d = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 540000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002705;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 540000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_10002705:
    local_94 = (undefined1)(uVar5 >> 0x18);
    local_93 = (undefined1)(uVar5 >> 0x10);
    local_92 = (undefined1)(uVar5 >> 8);
    local_91 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 0x8ed28) {
          uVar5 = 0x3fffffff;
          goto LAB_1000275f;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 0x8ed28);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_1000275f:
    local_98 = (undefined1)(uVar5 >> 0x18);
    local_97 = (undefined1)(uVar5 >> 0x10);
    local_96 = (undefined1)(uVar5 >> 8);
    local_95 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 630000) {
          uVar5 = 0x3fffffff;
          goto LAB_100027b9;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 630000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_100027b9:
    local_9c = (undefined1)(uVar5 >> 0x18);
    local_9b = (undefined1)(uVar5 >> 0x10);
    local_9a = (undefined1)(uVar5 >> 8);
    local_99 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 0xa4cb8) {
          uVar5 = 0x3fffffff;
          bVar3 = 0;
          goto LAB_1000281a;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 0xa4cb8);
    bVar3 = 1;
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_1000281a:
    local_9d = (undefined1)uVar5;
    local_a0 = (undefined1)(uVar5 >> 0x18);
    local_9f = (undefined1)(uVar5 >> 0x10);
    local_9e = (undefined1)(uVar5 >> 8);
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 900000) {
          uVar5 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_10002887;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 900000);
    bVar3 = 1;
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
LAB_10002887:
    local_a4 = (undefined1)(uVar5 >> 0x18);
    local_a3 = (undefined1)(uVar5 >> 0x10);
    local_a2 = (undefined1)(uVar5 >> 8);
    local_a1 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 2700000) {
          uVar5 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_100028f3;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 2700000);
    bVar3 = 1;
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
LAB_100028f3:
    local_a8 = (undefined1)(uVar5 >> 0x18);
    local_a7 = (undefined1)(uVar5 >> 0x10);
    local_a6 = (undefined1)(uVar5 >> 8);
    local_a5 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 5400000) {
          uVar5 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_1000295e;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 5400000);
    bVar3 = 1;
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
LAB_1000295e:
    local_ac = (undefined1)(uVar5 >> 0x18);
    local_ab = (undefined1)(uVar5 >> 0x10);
    local_a9 = (undefined1)uVar5;
    local_aa = (undefined1)(uVar5 >> 8);
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar6 = iVar4;
    do {
      if (iVar8 <= iVar6) {
        if (iVar7 < 10800000) {
          uVar5 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
        }
        else {
          uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
        }
        goto LAB_100029d6;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar7 < 10800000);
    uVar5 = *(int *)(iVar2 + -4 + iVar6 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
LAB_100029d6:
    local_b0 = (undefined1)(uVar5 >> 0x18);
    local_ae = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_ad = (undefined1)uVar5;
    local_af = (undefined1)(uVar5 >> 0x10);
    if (iVar6 < local_4) {
      uVar5 = 0x3fffffff;
    }
    else {
      uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + -4 + iVar4 * 4) & 0x3fffffffU |
              0x80000000;
    }
    local_60 = (undefined1)(uVar5 >> 0x18);
    local_5f = (undefined1)(uVar5 >> 0x10);
    local_5e = (undefined1)(uVar5 >> 8);
    local_5d = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 45000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002a79;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 45000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002a79:
    local_5c = (undefined1)(uVar5 >> 0x18);
    local_5a = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_5b = (undefined1)(uVar5 >> 0x10);
    local_59 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 90000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002ad4;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 90000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002ad4:
    local_58 = (undefined1)(uVar5 >> 0x18);
    local_57 = (undefined1)(uVar5 >> 0x10);
    iVar6 = iVar4 + -1;
    local_56 = (undefined1)(uVar5 >> 8);
    local_55 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 0x20f58) {
          uVar5 = 0x3fffffff;
          goto LAB_10002b2f;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 0x20f58);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002b2f:
    local_54 = (undefined1)(uVar5 >> 0x18);
    local_52 = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_53 = (undefined1)(uVar5 >> 0x10);
    local_51 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 180000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002b8a;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 180000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002b8a:
    local_50 = (undefined1)(uVar5 >> 0x18);
    local_4f = (undefined1)(uVar5 >> 0x10);
    iVar6 = iVar4 + -1;
    local_4e = (undefined1)(uVar5 >> 8);
    local_4d = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 0x36ee8) {
          uVar5 = 0x3fffffff;
          goto LAB_10002be5;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 0x36ee8);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002be5:
    local_4c = (undefined1)(uVar5 >> 0x18);
    local_4a = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_4b = (undefined1)(uVar5 >> 0x10);
    local_49 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 270000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002c4c;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 270000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002c4c:
    local_48 = (undefined1)(uVar5 >> 0x18);
    local_47 = (undefined1)(uVar5 >> 0x10);
    iVar6 = iVar4 + -1;
    local_46 = (undefined1)(uVar5 >> 8);
    local_45 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 0x4ce78) {
          uVar5 = 0x3fffffff;
          goto LAB_10002cb3;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 0x4ce78);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002cb3:
    local_44 = (undefined1)(uVar5 >> 0x18);
    local_42 = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_43 = (undefined1)(uVar5 >> 0x10);
    local_41 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 360000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002d1a;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 360000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002d1a:
    local_40 = (undefined1)(uVar5 >> 0x18);
    local_3f = (undefined1)(uVar5 >> 0x10);
    iVar6 = iVar4 + -1;
    local_3e = (undefined1)(uVar5 >> 8);
    local_3d = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 0x62e08) {
          uVar5 = 0x3fffffff;
          goto LAB_10002d81;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 0x62e08);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002d81:
    local_3c = (undefined1)(uVar5 >> 0x18);
    local_3a = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_3b = (undefined1)(uVar5 >> 0x10);
    local_39 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 450000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002de8;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 450000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002de8:
    local_38 = (undefined1)(uVar5 >> 0x18);
    local_37 = (undefined1)(uVar5 >> 0x10);
    iVar6 = iVar4 + -1;
    local_36 = (undefined1)(uVar5 >> 8);
    local_35 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 0x78d98) {
          uVar5 = 0x3fffffff;
          goto LAB_10002e4f;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 0x78d98);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002e4f:
    local_34 = (undefined1)(uVar5 >> 0x18);
    local_32 = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_33 = (undefined1)(uVar5 >> 0x10);
    local_31 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 540000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002eb6;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 540000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002eb6:
    local_30 = (undefined1)(uVar5 >> 0x18);
    local_2f = (undefined1)(uVar5 >> 0x10);
    iVar6 = iVar4 + -1;
    local_2e = (undefined1)(uVar5 >> 8);
    local_2d = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 0x8ed28) {
          uVar5 = 0x3fffffff;
          goto LAB_10002f1d;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 0x8ed28);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002f1d:
    local_2c = (undefined1)(uVar5 >> 0x18);
    local_2a = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_2b = (undefined1)(uVar5 >> 0x10);
    local_29 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 630000) {
          uVar5 = 0x3fffffff;
          goto LAB_10002f84;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 630000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002f84:
    local_28 = (undefined1)(uVar5 >> 0x18);
    local_27 = (undefined1)(uVar5 >> 0x10);
    iVar6 = iVar4 + -1;
    local_26 = (undefined1)(uVar5 >> 8);
    local_25 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 0xa4cb8) {
          uVar5 = 0x3fffffff;
          bVar3 = 0;
          goto LAB_10002ff2;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 0xa4cb8);
    bVar3 = 1;
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_10002ff2:
    local_21 = (undefined1)uVar5;
    local_24 = (undefined1)(uVar5 >> 0x18);
    local_23 = (undefined1)(uVar5 >> 0x10);
    local_22 = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 900000) {
          uVar5 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_10003068;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 900000);
    bVar3 = 1;
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) | 0xc0000000;
LAB_10003068:
    local_20 = (undefined1)(uVar5 >> 0x18);
    local_1f = (undefined1)(uVar5 >> 0x10);
    local_1e = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_1d = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 2700000) {
          uVar5 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_100030e1;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 2700000);
    bVar3 = 1;
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) | 0xc0000000;
LAB_100030e1:
    local_1c = (undefined1)(uVar5 >> 0x18);
    local_1b = (undefined1)(uVar5 >> 0x10);
    local_1a = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_19 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 5400000) {
          uVar5 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_10003159;
        }
        break;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 5400000);
    bVar3 = 1;
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) | 0xc0000000;
LAB_10003159:
    local_18 = (undefined1)(uVar5 >> 0x18);
    local_17 = (undefined1)(uVar5 >> 0x10);
    local_16 = (undefined1)(uVar5 >> 8);
    iVar6 = iVar4 + -1;
    local_15 = (undefined1)uVar5;
    iVar7 = 0;
    piVar9 = (int *)(iVar1 + iVar6 * 4);
    do {
      if (iVar6 < local_4) {
        if (iVar7 < 10800000) {
          uVar5 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
        }
        else {
          uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) | 0xc0000000;
        }
        goto LAB_100031da;
      }
      iVar7 = iVar7 + *piVar9;
      iVar6 = iVar6 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar7 < 10800000);
    uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar6 * 4) | 0xc0000000;
LAB_100031da:
    local_14 = (undefined1)(uVar5 >> 0x18);
    local_11 = (undefined1)uVar5;
    local_13 = (undefined1)(uVar5 >> 0x10);
    local_12 = (undefined1)(uVar5 >> 8);
    if (iVar4 + -1 < local_4) {
      uVar5 = 0xbfffffff;
    }
    else {
      uVar5 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + -4 + iVar4 * 4) & 0x3fffffffU |
              0x80000000;
    }
    local_10 = (undefined1)(uVar5 >> 0x18);
    local_f = (undefined1)(uVar5 >> 0x10);
    local_e = (undefined1)(uVar5 >> 8);
    local_d = (undefined1)uVar5;
    uVar5 = *(uint *)(iVar2 + iVar4 * 4);
    lVar10 = __allmul(uVar5,(int)uVar5 >> 0x1f,0x800,0);
    uVar5 = local_c;
    lVar10 = FUN_1000cd00(local_c,(LONG)(lVar10 + 0x4f1),(LONG)((ulonglong)(lVar10 + 0x4f1) >> 0x20)
                          ,0);
    if ((lVar10 == -1) ||
       (iVar6 = FUN_1000cb10(uVar5,(char *)&local_b4,0xa8), iVar4 = local_8, iVar6 != 0xa8)) break;
  }
  FUN_1000ca30(uVar5);
  return;
}


