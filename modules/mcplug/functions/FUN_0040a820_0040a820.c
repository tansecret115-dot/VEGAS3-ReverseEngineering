/* Module: mcplug.dll
   Function: FUN_0040a820
   Address: 0040a820
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0040a820(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int unaff_EDI;
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
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x134);
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x130);
  iVar5 = _open((char *)(param_2 + 3),0x8002);
  if (iVar5 == -1) {
    return;
  }
  local_4 = *param_2;
  iVar8 = param_2[1] + local_4;
  iVar4 = local_4;
  local_c = iVar5;
  while( true ) {
    if (iVar8 <= iVar4) {
      _close(iVar5);
      return;
    }
    iVar5 = param_2[2];
    local_b4 = (byte)((uint)iVar5 >> 0x18);
    local_b2 = (undefined1)((uint)iVar5 >> 8);
    local_b1 = (undefined1)param_2[2];
    local_b3 = (undefined1)((uint)iVar5 >> 0x10);
    uVar7 = *(uint *)(iVar2 + iVar4 * 4);
    lVar10 = __allmul(uVar7,(int)uVar7 >> 0x1f,0x800,0);
    iVar5 = local_c;
    lVar10 = _lseeki64(local_c,lVar10 + 0x437U >> 0x20,unaff_EDI);
    if ((lVar10 == -1) || (iVar6 = _write(iVar5,&local_b4,4), iVar6 != 4)) break;
    local_8 = iVar4 + 1;
    if (local_8 < iVar8) {
      uVar7 = *(int *)(iVar2 + local_8 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffff;
      local_b4 = (byte)(uVar7 >> 0x18) | 0x80;
      local_b2 = (undefined1)(uVar7 >> 8);
      local_b3 = (undefined1)(uVar7 >> 0x10);
      local_b1 = (undefined1)uVar7;
      uVar7 = *(int *)(iVar2 + local_8 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU | 0x80000000
      ;
    }
    else {
      local_b2 = 0xff;
      local_b3 = 0xff;
      local_b4 = 0xbf;
      local_b1 = 0xff;
      uVar7 = 0x3fffffff;
    }
    local_64 = (undefined1)(uVar7 >> 0x18);
    local_61 = (undefined1)uVar7;
    local_63 = (undefined1)(uVar7 >> 0x10);
    local_62 = (undefined1)(uVar7 >> 8);
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 45000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040a9ca;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 45000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040a9ca:
    local_68 = (undefined1)(uVar7 >> 0x18);
    local_67 = (undefined1)(uVar7 >> 0x10);
    local_66 = (undefined1)(uVar7 >> 8);
    local_65 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 90000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040aa24;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 90000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040aa24:
    local_6c = (undefined1)(uVar7 >> 0x18);
    local_6b = (undefined1)(uVar7 >> 0x10);
    local_6a = (undefined1)(uVar7 >> 8);
    local_69 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 0x20f58) {
          uVar7 = 0x3fffffff;
          goto LAB_0040aa7e;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 0x20f58);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040aa7e:
    local_70 = (undefined1)(uVar7 >> 0x18);
    local_6f = (undefined1)(uVar7 >> 0x10);
    local_6e = (undefined1)(uVar7 >> 8);
    local_6d = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 180000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040aad8;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 180000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040aad8:
    local_74 = (undefined1)(uVar7 >> 0x18);
    local_73 = (undefined1)(uVar7 >> 0x10);
    local_72 = (undefined1)(uVar7 >> 8);
    local_71 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 0x36ee8) {
          uVar7 = 0x3fffffff;
          goto LAB_0040ab32;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 0x36ee8);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040ab32:
    local_78 = (undefined1)(uVar7 >> 0x18);
    local_77 = (undefined1)(uVar7 >> 0x10);
    local_76 = (undefined1)(uVar7 >> 8);
    local_75 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 270000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040ab8c;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 270000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040ab8c:
    local_7c = (undefined1)(uVar7 >> 0x18);
    local_7b = (undefined1)(uVar7 >> 0x10);
    local_7a = (undefined1)(uVar7 >> 8);
    local_79 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 0x4ce78) {
          uVar7 = 0x3fffffff;
          goto LAB_0040abe6;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 0x4ce78);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040abe6:
    local_80 = (undefined1)(uVar7 >> 0x18);
    local_7f = (undefined1)(uVar7 >> 0x10);
    local_7e = (undefined1)(uVar7 >> 8);
    local_7d = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 360000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040ac40;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 360000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040ac40:
    local_84 = (undefined1)(uVar7 >> 0x18);
    local_83 = (undefined1)(uVar7 >> 0x10);
    local_82 = (undefined1)(uVar7 >> 8);
    local_81 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 0x62e08) {
          uVar7 = 0x3fffffff;
          goto LAB_0040ac9a;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 0x62e08);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040ac9a:
    local_88 = (undefined1)(uVar7 >> 0x18);
    local_87 = (undefined1)(uVar7 >> 0x10);
    local_86 = (undefined1)(uVar7 >> 8);
    local_85 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 450000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040acf4;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 450000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040acf4:
    local_8c = (undefined1)(uVar7 >> 0x18);
    local_8b = (undefined1)(uVar7 >> 0x10);
    local_8a = (undefined1)(uVar7 >> 8);
    local_89 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 0x78d98) {
          uVar7 = 0x3fffffff;
          goto LAB_0040ad4e;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 0x78d98);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040ad4e:
    local_90 = (undefined1)(uVar7 >> 0x18);
    local_8f = (undefined1)(uVar7 >> 0x10);
    local_8e = (undefined1)(uVar7 >> 8);
    local_8d = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 540000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040ada8;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 540000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040ada8:
    local_94 = (undefined1)(uVar7 >> 0x18);
    local_93 = (undefined1)(uVar7 >> 0x10);
    local_92 = (undefined1)(uVar7 >> 8);
    local_91 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 0x8ed28) {
          uVar7 = 0x3fffffff;
          goto LAB_0040ae02;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 0x8ed28);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040ae02:
    local_98 = (undefined1)(uVar7 >> 0x18);
    local_97 = (undefined1)(uVar7 >> 0x10);
    local_96 = (undefined1)(uVar7 >> 8);
    local_95 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 630000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040ae5c;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 630000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040ae5c:
    local_9c = (undefined1)(uVar7 >> 0x18);
    local_9b = (undefined1)(uVar7 >> 0x10);
    local_9a = (undefined1)(uVar7 >> 8);
    local_99 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 0xa4cb8) {
          uVar7 = 0x3fffffff;
          bVar3 = 0;
          goto LAB_0040aebd;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 0xa4cb8);
    bVar3 = 1;
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) & 0x3fffffffU |
            0x80000000;
LAB_0040aebd:
    local_9d = (undefined1)uVar7;
    local_a0 = (undefined1)(uVar7 >> 0x18);
    local_9f = (undefined1)(uVar7 >> 0x10);
    local_9e = (undefined1)(uVar7 >> 8);
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 900000) {
          uVar7 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_0040af2a;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 900000);
    bVar3 = 1;
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
LAB_0040af2a:
    local_a4 = (undefined1)(uVar7 >> 0x18);
    local_a3 = (undefined1)(uVar7 >> 0x10);
    local_a2 = (undefined1)(uVar7 >> 8);
    local_a1 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 2700000) {
          uVar7 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_0040af96;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 2700000);
    bVar3 = 1;
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
LAB_0040af96:
    local_a8 = (undefined1)(uVar7 >> 0x18);
    local_a7 = (undefined1)(uVar7 >> 0x10);
    local_a6 = (undefined1)(uVar7 >> 8);
    local_a5 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 5400000) {
          uVar7 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_0040b001;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 5400000);
    bVar3 = 1;
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
LAB_0040b001:
    local_ac = (undefined1)(uVar7 >> 0x18);
    local_ab = (undefined1)(uVar7 >> 0x10);
    local_a9 = (undefined1)uVar7;
    local_aa = (undefined1)(uVar7 >> 8);
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      if (iVar8 <= iVar5) {
        if (iVar6 < 10800000) {
          uVar7 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
        }
        else {
          uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
        }
        goto LAB_0040b079;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 10800000);
    uVar7 = *(int *)(iVar2 + -4 + iVar5 * 4) - *(int *)(iVar2 + iVar4 * 4) | 0xc0000000;
LAB_0040b079:
    local_b0 = (undefined1)(uVar7 >> 0x18);
    local_ae = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_ad = (undefined1)uVar7;
    local_af = (undefined1)(uVar7 >> 0x10);
    if (iVar5 < local_4) {
      uVar7 = 0x3fffffff;
    }
    else {
      uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + -4 + iVar4 * 4) & 0x3fffffffU |
              0x80000000;
    }
    local_60 = (undefined1)(uVar7 >> 0x18);
    local_5f = (undefined1)(uVar7 >> 0x10);
    local_5e = (undefined1)(uVar7 >> 8);
    local_5d = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 45000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b11c;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 45000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b11c:
    local_5c = (undefined1)(uVar7 >> 0x18);
    local_5a = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_5b = (undefined1)(uVar7 >> 0x10);
    local_59 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 90000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b177;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 90000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b177:
    local_58 = (undefined1)(uVar7 >> 0x18);
    local_57 = (undefined1)(uVar7 >> 0x10);
    iVar5 = iVar4 + -1;
    local_56 = (undefined1)(uVar7 >> 8);
    local_55 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 0x20f58) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b1d2;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 0x20f58);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b1d2:
    local_54 = (undefined1)(uVar7 >> 0x18);
    local_52 = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_53 = (undefined1)(uVar7 >> 0x10);
    local_51 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 180000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b22d;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 180000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b22d:
    local_50 = (undefined1)(uVar7 >> 0x18);
    local_4f = (undefined1)(uVar7 >> 0x10);
    iVar5 = iVar4 + -1;
    local_4e = (undefined1)(uVar7 >> 8);
    local_4d = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 0x36ee8) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b288;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 0x36ee8);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b288:
    local_4c = (undefined1)(uVar7 >> 0x18);
    local_4a = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_4b = (undefined1)(uVar7 >> 0x10);
    local_49 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 270000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b2ef;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 270000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b2ef:
    local_48 = (undefined1)(uVar7 >> 0x18);
    local_47 = (undefined1)(uVar7 >> 0x10);
    iVar5 = iVar4 + -1;
    local_46 = (undefined1)(uVar7 >> 8);
    local_45 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 0x4ce78) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b356;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 0x4ce78);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b356:
    local_44 = (undefined1)(uVar7 >> 0x18);
    local_42 = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_43 = (undefined1)(uVar7 >> 0x10);
    local_41 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 360000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b3bd;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 360000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b3bd:
    local_40 = (undefined1)(uVar7 >> 0x18);
    local_3f = (undefined1)(uVar7 >> 0x10);
    iVar5 = iVar4 + -1;
    local_3e = (undefined1)(uVar7 >> 8);
    local_3d = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 0x62e08) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b424;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 0x62e08);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b424:
    local_3c = (undefined1)(uVar7 >> 0x18);
    local_3a = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_3b = (undefined1)(uVar7 >> 0x10);
    local_39 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 450000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b48b;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 450000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b48b:
    local_38 = (undefined1)(uVar7 >> 0x18);
    local_37 = (undefined1)(uVar7 >> 0x10);
    iVar5 = iVar4 + -1;
    local_36 = (undefined1)(uVar7 >> 8);
    local_35 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 0x78d98) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b4f2;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 0x78d98);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b4f2:
    local_34 = (undefined1)(uVar7 >> 0x18);
    local_32 = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_33 = (undefined1)(uVar7 >> 0x10);
    local_31 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 540000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b559;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 540000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b559:
    local_30 = (undefined1)(uVar7 >> 0x18);
    local_2f = (undefined1)(uVar7 >> 0x10);
    iVar5 = iVar4 + -1;
    local_2e = (undefined1)(uVar7 >> 8);
    local_2d = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 0x8ed28) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b5c0;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 0x8ed28);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b5c0:
    local_2c = (undefined1)(uVar7 >> 0x18);
    local_2a = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_2b = (undefined1)(uVar7 >> 0x10);
    local_29 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 630000) {
          uVar7 = 0x3fffffff;
          goto LAB_0040b627;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 630000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b627:
    local_28 = (undefined1)(uVar7 >> 0x18);
    local_27 = (undefined1)(uVar7 >> 0x10);
    iVar5 = iVar4 + -1;
    local_26 = (undefined1)(uVar7 >> 8);
    local_25 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 0xa4cb8) {
          uVar7 = 0x3fffffff;
          bVar3 = 0;
          goto LAB_0040b695;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 0xa4cb8);
    bVar3 = 1;
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) & 0x3fffffffU | 0x80000000
    ;
LAB_0040b695:
    local_21 = (undefined1)uVar7;
    local_24 = (undefined1)(uVar7 >> 0x18);
    local_23 = (undefined1)(uVar7 >> 0x10);
    local_22 = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 900000) {
          uVar7 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_0040b70b;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 900000);
    bVar3 = 1;
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) | 0xc0000000;
LAB_0040b70b:
    local_20 = (undefined1)(uVar7 >> 0x18);
    local_1f = (undefined1)(uVar7 >> 0x10);
    local_1e = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_1d = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 2700000) {
          uVar7 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_0040b784;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 2700000);
    bVar3 = 1;
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) | 0xc0000000;
LAB_0040b784:
    local_1c = (undefined1)(uVar7 >> 0x18);
    local_1b = (undefined1)(uVar7 >> 0x10);
    local_1a = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_19 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 5400000) {
          uVar7 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
          bVar3 = 0;
          goto LAB_0040b7fc;
        }
        break;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 5400000);
    bVar3 = 1;
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) | 0xc0000000;
LAB_0040b7fc:
    local_18 = (undefined1)(uVar7 >> 0x18);
    local_17 = (undefined1)(uVar7 >> 0x10);
    local_16 = (undefined1)(uVar7 >> 8);
    iVar5 = iVar4 + -1;
    local_15 = (undefined1)uVar7;
    iVar6 = 0;
    piVar9 = (int *)(iVar1 + iVar5 * 4);
    do {
      if (iVar5 < local_4) {
        if (iVar6 < 10800000) {
          uVar7 = (-(uint)bVar3 & 0x40000000) + 0x3fffffff;
        }
        else {
          uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) | 0xc0000000;
        }
        goto LAB_0040b87d;
      }
      iVar6 = iVar6 + *piVar9;
      iVar5 = iVar5 + -1;
      piVar9 = piVar9 + -1;
    } while (iVar6 < 10800000);
    uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + 4 + iVar5 * 4) | 0xc0000000;
LAB_0040b87d:
    local_14 = (undefined1)(uVar7 >> 0x18);
    local_11 = (undefined1)uVar7;
    local_13 = (undefined1)(uVar7 >> 0x10);
    local_12 = (undefined1)(uVar7 >> 8);
    if (iVar4 + -1 < local_4) {
      uVar7 = 0xbfffffff;
    }
    else {
      uVar7 = *(int *)(iVar2 + iVar4 * 4) - *(int *)(iVar2 + -4 + iVar4 * 4) & 0x3fffffffU |
              0x80000000;
    }
    local_10 = (undefined1)(uVar7 >> 0x18);
    local_f = (undefined1)(uVar7 >> 0x10);
    local_e = (undefined1)(uVar7 >> 8);
    local_d = (undefined1)uVar7;
    uVar7 = *(uint *)(iVar2 + iVar4 * 4);
    lVar10 = __allmul(uVar7,(int)uVar7 >> 0x1f,0x800,0);
    iVar5 = local_c;
    lVar10 = _lseeki64(local_c,lVar10 + 0x4f1U >> 0x20,unaff_EDI);
    if ((lVar10 == -1) || (iVar6 = _write(iVar5,&local_b4,0xa8), iVar4 = local_8, iVar6 != 0xa8))
    break;
  }
  _close(iVar5);
  return;
}


