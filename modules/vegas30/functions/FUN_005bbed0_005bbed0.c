/* Module: vegas30.exe
   Function: FUN_005bbed0
   Address: 005bbed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_005bbed0(int *****param_1,undefined4 param_2,int ****param_3,undefined4 *param_4)

{
  int ******ppppppiVar1;
  int iVar2;
  int ***unaff_ESI;
  int *****pppppiVar3;
  int *****pppppiVar4;
  int ****ppppiVar5;
  int *****pppppiVar6;
  int ****ppppiVar7;
  int *****pppppiStack_1ec;
  int ******ppppppiStack_1e8;
  int *****pppppiStack_1e4;
  int *****pppppiStack_1e0;
  int *****pppppiStack_1dc;
  int *****apppppiStack_1d8 [2];
  int ****ppppiStack_1d0;
  int ****ppppiStack_1cc;
  int *****pppppiStack_1c8;
  int ****ppppiStack_1c4;
  int *****pppppiStack_1c0;
  int *****pppppiStack_1bc;
  int *****pppppiStack_1b8;
  int ****ppppiStack_1b4;
  int ***pppiStack_1b0;
  int *****pppppiStack_1ac;
  int ***pppiStack_1a8;
  int ***pppiStack_1a4;
  int **ppiStack_1a0;
  int ****ppppiStack_19c;
  int ***local_188 [2];
  int ****ppppiStack_180;
  int ****ppppiStack_17c;
  int ****ppppiStack_178;
  int ****ppppiStack_174;
  int ***pppiStack_170;
  int ****ppppiStack_16c;
  int ****ppppiStack_168;
  int ****ppppiStack_164;
  int *****pppppiStack_160;
  int ***pppiStack_15c;
  int *****pppppiStack_158;
  int ***pppiStack_154;
  int ****ppppiStack_150;
  int ****ppppiStack_14c;
  int ****ppppiStack_148;
  int ****ppppiStack_144;
  int ***pppiStack_140;
  int ****ppppiStack_13c;
  int ****ppppiStack_138;
  int ****ppppiStack_134;
  int ****ppppiStack_130;
  int ***pppiStack_12c;
  int ****ppppiStack_124;
  int ****ppppiStack_120;
  int ***pppiStack_104;
  int ***pppiStack_100;
  int ***pppiStack_fc;
  int ***pppiStack_f8;
  int ***pppiStack_f4;
  int ***pppiStack_f0;
  int ***pppiStack_ec;
  int ***pppiStack_e8;
  int ***pppiStack_e4;
  int ***pppiStack_e0;
  int ***pppiStack_dc;
  int ***pppiStack_d8;
  int ***pppiStack_d4;
  int ***pppiStack_d0;
  undefined4 uStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  int ***apppiStack_bc [9];
  uint uStack_98;
  int ***apppiStack_94 [4];
  int iStack_84;
  int *****pppppiStack_80;
  int *****pppppiStack_7c;
  int iStack_78;
  int iStack_70;
  int *****pppppiStack_6c;
  int *****pppppiStack_68;
  int iStack_64;
  int ****ppppiStack_60;
  int ****ppppiStack_5c;
  int ****ppppiStack_58;
  int ***pppiStack_54;
  int ***pppiStack_50;
  int ***pppiStack_4c;
  int ***pppiStack_48;
  int ***pppiStack_3c;
  int ***pppiStack_38;
  int ***pppiStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_3 == (int ****)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  ppppiStack_19c = local_188 + 1;
  ppiStack_1a0 = (int **)0x1;
  pppiStack_1a4 = (int ***)0x0;
  pppiStack_1a8 = (int ***)0x0;
  pppppiStack_1ac = param_1;
  local_188[0] = (int ***)0x0;
  pppiStack_1b0 = (int ***)0x5bbf17;
  iVar2 = (*(code *)(*param_1)[5])();
  if (iVar2 < 0) {
LAB_005bbf58:
    if (((ppppiStack_19c == (int ****)0x70) || (ppppiStack_19c == (int ****)0x68)) ||
       (ppppiStack_19c == (int ****)0x58)) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      ppppiVar5 = apppiStack_bc + 0xc;
      for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppppiVar5 = (int ***)0x0;
        ppppiVar5 = ppppiVar5 + 1;
      }
      uStack_2c = DAT_006484fc;
      pppiStack_1b0 = (int ***)&stack0xfffffe70;
      ppppiStack_1b4 = ppppiStack_19c;
      pppppiStack_1b8 = (int *****)(apppiStack_bc + 0xc);
      uStack_28 = 0;
      pppppiStack_1bc = param_1;
      pppppiStack_1c0 = (int *****)0x5bc8fd;
      iVar2 = (*(code *)(*param_1)[3])();
      if (iVar2 < 0) {
        return iVar2;
      }
      if (0x40000 < uStack_98) {
        return -0x7ffb1fea;
      }
      if (uStack_98 == 0x20000) {
        pppppiStack_1c0 = (int *****)0x62a064;
        ppppiStack_1c4 = (int ****)0x8004e084;
        pppppiStack_1c8 = (int *****)0x5bc934;
        SfErrorHandler_DetailsAddString();
        return -0x7ffb1fea;
      }
      param_3[0x88] = pppiStack_54;
      param_3[0x8c] = pppiStack_4c;
      param_3[0x8d] = pppiStack_48;
      param_3[0x30b] = pppiStack_34;
      ppppiVar5 = apppiStack_bc + 10;
      ppppiVar7 = param_3 + 0x116;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppppiVar7 = *ppppiVar5;
        ppppiVar5 = ppppiVar5 + 1;
        ppppiVar7 = ppppiVar7 + 1;
      }
      param_3[0x316] = pppiStack_38;
      param_3[0x89] = pppiStack_50;
      param_3[0x30a] = pppiStack_3c;
      if (ppppiStack_60 != (int ****)0x0) {
        ppppiStack_1c4 = param_3 + 0x2e;
        pppppiStack_1c0 = (int *****)ppppiStack_60;
        pppppiStack_1c8 = param_1;
        ppppiStack_1cc = (int ****)0x5bc9cd;
        iVar2 = FUN_005be000();
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      if (ppppiStack_5c != (int ****)0x0) {
        pppppiStack_1c0 = (int *****)ppppiStack_5c;
        ppppiStack_1c4 = param_3 + 0x120;
        pppppiStack_1c8 = param_1;
        ppppiStack_1cc = (int ****)0x5bc9f3;
        iVar2 = FUN_005be000();
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      if (ppppiStack_58 != (int ****)0x0) {
        pppppiStack_1c0 = (int *****)ppppiStack_58;
        ppppiStack_1c4 = param_3 + 0x8e;
        pppppiStack_1c8 = param_1;
        ppppiStack_1cc = (int ****)0x5bca19;
        iVar2 = FUN_005be000();
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      if (iStack_64 == 0) {
        return 0;
      }
      pppppiStack_1c0 = (int *****)&pppiStack_1a8;
      ppppiStack_1c4 = (int ****)0x1;
      pppppiStack_1c8 = (int *****)0x0;
      ppppiStack_1cc = (int ****)0x0;
      ppppiStack_1d0 = (int ****)param_1;
      pppppiStack_1ac = (int *****)0x0;
      apppppiStack_1d8[1] = (int *****)0x5bca4c;
      iVar2 = (*(code *)(*param_1)[5])();
      if (iVar2 < 0) {
LAB_005bca8d:
        if ((pppppiStack_1c0 == (int *****)0x100) || (pppppiStack_1c0 == (int *****)0xf8)) {
          pppppiStack_1bc = (int *****)0x0;
          if (iStack_78 < 1) {
            return 0;
          }
          do {
            apppppiStack_1d8[1] = (int *****)0x1;
            apppppiStack_1d8[0] = pppppiStack_1bc;
            ppppiVar5 = &pppiStack_1b0;
            for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
              *ppppiVar5 = (int ***)0x0;
              ppppiVar5 = ppppiVar5 + 1;
            }
            pppppiStack_1dc = (int *****)param_3;
            pppppiStack_1e0 = (int *****)0x5bcd18;
            ppppiStack_1c4 = (int ****)FUN_005b9fc0();
            apppppiStack_1d8[1] = &ppppiStack_1b4;
            pppppiStack_1dc = (int *****)&pppiStack_1b0;
            apppppiStack_1d8[0] = pppppiStack_1c0;
            apppiStack_bc[1] = (int ***)0x0;
            pppppiStack_1e4 = (int *****)0x5bcd3c;
            pppppiStack_1e0 = param_1;
            iVar2 = (*(code *)(*param_1)[3])();
            if (iVar2 < 0) {
              apppppiStack_1d8[1] = (int *****)0x0;
              apppppiStack_1d8[0] = (int *****)0x1;
              pppppiStack_1dc = (int *****)ppppiStack_1c4;
              pppppiStack_1e0 = (int *****)param_3;
              pppppiStack_1e4 = (int *****)0x5bcee4;
              FUN_005ba030();
              return iVar2;
            }
            if (ppppiStack_1c4 != (int ****)0x0) {
              ppppiStack_1c4[0xd] = (int ***)pppppiStack_1ac;
              ppppiStack_1c4[0xe] = pppiStack_1a8;
              ppppiStack_1c4[0xc] = pppiStack_1a4;
              if ((pppiStack_1a4 != (int ***)0x1c) && (pppiStack_1a4 != (int ***)0x20)) {
                ppppiStack_1c4[0xc] = (int ***)0x1c;
              }
              ppppiStack_1c4[0x2e] = unaff_ESI;
              ppppiStack_1c4[0x2f] = (int ***)DAT_00648668;
              ppppiStack_1c4[0x31] = (int ***)0x0;
              ppppiStack_1c4[0x32] = (int ***)0x1;
              ppppiVar5 = local_188;
              ppppiVar7 = ppppiStack_1c4 + 0x10;
              for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
                *ppppiVar7 = *ppppiVar5;
                ppppiVar5 = ppppiVar5 + 1;
                ppppiVar7 = ppppiVar7 + 1;
              }
              ppppiStack_1c4[0x33] = pppiStack_140;
              ppppiStack_1c4[0x34] = (int ***)ppppiStack_13c;
              ppppiStack_1c4[0x35] = (int ***)ppppiStack_138;
              ppppiStack_1c4[0x36] = (int ***)ppppiStack_134;
              ppppiStack_1c4[0x37] = pppiStack_f0;
              ppppiStack_1c4[0x38] = pppiStack_ec;
              ppppiStack_1c4[0x39] = pppiStack_e8;
              ppppiStack_1c4[0x3a] = pppiStack_e4;
              ppppiStack_1c4[0x3f] = apppiStack_bc[0];
              ppppiStack_1c4[0x3b] = pppiStack_d0;
              ppppiStack_1c4[0x3c] = pppiStack_c8;
              ppppiStack_1c4[0x3d] = pppiStack_c4;
              ppppiStack_1c4[0x3e] = pppiStack_c0;
              param_3[0x30e] = (int ***)ppppiStack_148;
              param_3[0x314] = pppiStack_d8;
              param_3[0x312] = pppiStack_e0;
              param_3[0x30f] = (int ***)ppppiStack_144;
              apppppiStack_1d8[1] = (int *****)(uint)(pppppiStack_1bc == (int *****)ppppiStack_144);
              apppppiStack_1d8[0] = (int *****)0x1;
              pppppiStack_1dc = (int *****)ppppiStack_1c4;
              pppppiStack_1e0 = (int *****)param_3;
              param_3[0x315] = pppiStack_d4;
              pppppiStack_1e4 = (int *****)0x5bcead;
              FUN_005ba030();
            }
            pppppiStack_1bc = (int *****)((int)pppppiStack_1bc + 1);
          } while ((int)pppppiStack_1bc < iStack_78);
          return 0;
        }
      }
      else {
        apppppiStack_1d8[1] = &ppppiStack_1c4;
        pppppiStack_1dc = (int *****)&pppppiStack_1c0;
        apppppiStack_1d8[0] = (int *****)0x4;
        pppppiStack_1e0 = param_1;
        pppppiStack_1e4 = (int *****)0x5bca62;
        iVar2 = (*(code *)(*param_1)[3])();
        if (iVar2 < 0) goto LAB_005bca8d;
        if (ppppiStack_1c4 != (int ****)0x4) {
          pppppiStack_1c0 = (int *****)0x0;
        }
        apppppiStack_1d8[1] = (int *****)0x0;
        apppppiStack_1d8[0] = (int *****)0x0;
        pppppiStack_1dc = pppppiStack_1b8;
        pppppiStack_1e0 = pppppiStack_1bc;
        pppppiStack_1e4 = param_1;
        ppppppiStack_1e8 = (int ******)0x5bca89;
        iVar2 = (*(code *)(*param_1)[5])();
        if (-1 < iVar2) goto LAB_005bca8d;
      }
      apppppiStack_1d8[1] = (int *****)&pppppiStack_1bc;
      apppppiStack_1d8[0] = (int *****)0x1;
      pppppiStack_1dc = (int *****)0x0;
      pppppiStack_1e0 = (int *****)0x0;
      pppppiStack_1e4 = param_1;
      ppppiStack_1c4 = (int ****)0x0;
      ppppppiStack_1e8 = (int ******)0x5bcabe;
      iVar2 = (*(code *)(*param_1)[5])();
      if (-1 < iVar2) {
        ppppppiStack_1e8 = apppppiStack_1d8 + 1;
        pppppiStack_1ec = (int *****)0x4;
        iVar2 = (*(code *)(*param_1)[3])(param_1,apppppiStack_1d8);
        if (-1 < iVar2) {
          if (apppppiStack_1d8[1] != (int *****)0x4) {
            apppppiStack_1d8[0] = (int *****)0x0;
          }
          ppppppiStack_1e8 = (int ******)0x0;
          pppppiStack_1ec = (int *****)0x0;
          iVar2 = (*(code *)(*param_1)[5])(param_1,ppppiStack_1d0,ppppiStack_1cc);
          if (iVar2 < 0) {
            return -0x7ffb1ff8;
          }
        }
      }
      if (apppppiStack_1d8[0] != (int *****)0xb8) {
        return -0x7ffb1ff8;
      }
      ppppppiStack_1e8 = (int ******)0x1;
      pppppiVar4 = &ppppiStack_1c4;
      for (iVar2 = 0x2e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pppppiVar4 = (int ****)0x0;
        pppppiVar4 = pppppiVar4 + 1;
      }
      pppppiStack_1ec = pppppiStack_160;
      apppppiStack_1d8[0] = (int *****)FUN_005b9fc0(param_3);
      ppppppiStack_1e8 = &pppppiStack_1c8;
      pppppiStack_1ec = (int *****)0xb8;
      iVar2 = (*(code *)(*param_1)[3])(param_1,&ppppiStack_1c4);
      ppppppiVar1 = ppppppiStack_1e8;
      if (iVar2 < 0) {
        FUN_005ba030(param_3,ppppppiStack_1e8,1,0);
        return iVar2;
      }
      if (ppppppiStack_1e8 != (int ******)0x0) {
        ppppppiStack_1e8[0xd] = (int *****)ppppiStack_1d0;
        ppppppiVar1[0xe] = (int *****)ppppiStack_1cc;
        ppppppiVar1[0xc] = pppppiStack_1c8;
        if ((pppppiStack_1c8 != (int *****)0x1c) && (pppppiStack_1c8 != (int *****)0x20)) {
          ppppppiVar1[0xc] = (int *****)0x1c;
        }
        ppppppiStack_1e8[0x2e] = pppppiStack_1b8;
        ppppppiStack_1e8[0x2f] = (int *****)DAT_00648668;
        ppppppiStack_1e8[0x31] = (int *****)0x0;
        ppppppiStack_1e8[0x32] = (int *****)0x1;
        pppppiVar4 = &ppppiStack_1b4;
        pppppiVar3 = (int *****)(ppppppiStack_1e8 + 0x10);
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pppppiVar3 = *pppppiVar4;
          pppppiVar4 = pppppiVar4 + 1;
          pppppiVar3 = pppppiVar3 + 1;
        }
        ppppppiStack_1e8[0x33] = (int *****)ppppiStack_16c;
        ppppppiStack_1e8[0x34] = (int *****)ppppiStack_168;
        ppppppiStack_1e8[0x35] = (int *****)ppppiStack_164;
        ppppppiStack_1e8[0x36] = pppppiStack_160;
        ppppppiStack_1e8[0x37] = (int *****)ppppiStack_13c;
        ppppppiStack_1e8[0x38] = (int *****)ppppiStack_138;
        ppppppiStack_1e8[0x39] = (int *****)ppppiStack_134;
        ppppppiStack_1e8[0x3c] = (int *****)0x0;
        ppppppiStack_1e8[0x3b] = (int *****)0x0;
        ppppppiStack_1e8[0x3a] = (int *****)ppppiStack_130;
        ppppppiStack_1e8[0x3d] = (int *****)0x0;
        ppppppiStack_1e8[0x3e] = (int *****)0x2;
        param_3[0x30e] = (int ***)ppppiStack_174;
        param_3[0x30f] = pppiStack_170;
        param_3[0x312] = pppiStack_12c;
        param_3[0x314] = (int ***)ppppiStack_124;
        param_3[0x315] = (int ***)ppppiStack_120;
        FUN_005ba030(param_3,ppppppiStack_1e8,1,1);
      }
      param_3[0x30e] = (int ***)ppppiStack_174;
      param_3[0x30f] = pppiStack_170;
      param_3[0x312] = pppiStack_12c;
      ppppiStack_138 = ppppiStack_124;
      ppppiStack_134 = ppppiStack_120;
      goto LAB_005bc350;
    }
  }
  else {
    pppiStack_1b0 = &ppiStack_1a0;
    pppppiStack_1b8 = &ppppiStack_19c;
    ppppiStack_1b4 = (int ****)0x4;
    pppppiStack_1bc = param_1;
    pppppiStack_1c0 = (int *****)0x5bbf2d;
    iVar2 = (*(code *)(*param_1)[3])();
    if (iVar2 < 0) goto LAB_005bbf58;
    if (ppiStack_1a0 != (int **)0x4) {
      ppppiStack_19c = (int ****)0x0;
    }
    pppiStack_1b0 = (int ***)0x0;
    ppppiStack_1b4 = (int ****)0x0;
    pppppiStack_1c0 = param_1;
    ppppiStack_1c4 = (int ****)0x5bbf54;
    iVar2 = (*(code *)(*param_1)[5])();
    if (-1 < iVar2) goto LAB_005bbf58;
  }
  pppiStack_1b0 = (int ***)&stack0xfffffe68;
  ppppiStack_1b4 = (int ****)0x1;
  pppppiStack_1b8 = (int *****)0x0;
  pppppiStack_1bc = (int *****)0x0;
  pppppiStack_1c0 = param_1;
  ppppiStack_19c = (int ****)0x0;
  ppppiStack_1c4 = (int ****)0x5bbf8e;
  iVar2 = (*(code *)(*param_1)[5])();
  if (iVar2 < 0) {
LAB_005bbfd3:
    if (pppiStack_1b0 == (int ***)&DAT_00000060) {
      ppppiStack_1cc = apppiStack_bc + 7;
      ppppiVar5 = apppiStack_bc + 7;
      for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppppiVar5 = (int ***)0x0;
        ppppiVar5 = ppppiVar5 + 1;
      }
      ppppiStack_1c4 = &pppiStack_1a4;
      pppppiStack_1c8 = (int *****)0x60;
      ppppiStack_1d0 = (int ****)param_1;
      apppppiStack_1d8[1] = (int *****)0x5bc003;
      iVar2 = (*(code *)(*param_1)[3])();
      if (iVar2 < 0) {
        return iVar2;
      }
      param_3[0x88] = (int ***)ppppiStack_60;
      param_3[0x8c] = (int ***)ppppiStack_58;
      ppppiVar5 = apppiStack_bc + 5;
      ppppiVar7 = param_3 + 0x116;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppppiVar7 = *ppppiVar5;
        ppppiVar5 = ppppiVar5 + 1;
        ppppiVar7 = ppppiVar7 + 1;
      }
      param_3[0x8d] = pppiStack_54;
      param_3[0x89] = (int ***)ppppiStack_5c;
      if (pppppiStack_6c != (int *****)0x0) {
        apppppiStack_1d8[0] = (int *****)(param_3 + 0x2e);
        apppppiStack_1d8[1] = pppppiStack_6c;
        pppppiStack_1dc = param_1;
        pppppiStack_1e0 = (int *****)0x5bc071;
        iVar2 = FUN_005be000();
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      if (pppppiStack_68 != (int *****)0x0) {
        apppppiStack_1d8[1] = pppppiStack_68;
        apppppiStack_1d8[0] = (int *****)(param_3 + 0x120);
        pppppiStack_1dc = param_1;
        pppppiStack_1e0 = (int *****)0x5bc097;
        iVar2 = FUN_005be000();
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      if (iStack_70 == 0) {
        return 0;
      }
      apppppiStack_1d8[1] = (int *****)&pppppiStack_1bc;
      apppppiStack_1d8[0] = (int *****)0x1;
      pppppiStack_1dc = (int *****)0x0;
      pppppiStack_1e0 = (int *****)0x0;
      pppppiStack_1e4 = param_1;
      pppppiStack_1c0 = (int *****)0x0;
      ppppppiStack_1e8 = (int ******)0x5bc0ca;
      iVar2 = (*(code *)(*param_1)[5])();
      if (iVar2 < 0) {
LAB_005bc10b:
        if ((apppppiStack_1d8[1] == (int *****)0x100) || (apppppiStack_1d8[1] == (int *****)0xf8)) {
          ppppiStack_1d0 = (int ****)0x0;
          if (iStack_84 < 1) {
            return 0;
          }
          do {
            ppppppiStack_1e8 = (int ******)0x1;
            pppppiStack_1ec = (int *****)ppppiStack_1d0;
            pppppiVar4 = &ppppiStack_1c4;
            for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
              *pppppiVar4 = (int ****)0x0;
              pppppiVar4 = pppppiVar4 + 1;
            }
            apppppiStack_1d8[0] = (int *****)FUN_005b9fc0(param_3);
            ppppppiStack_1e8 = &pppppiStack_1c8;
            pppppiStack_1ec = apppppiStack_1d8[1];
            uStack_cc = 0;
            iVar2 = (*(code *)(*param_1)[3])(param_1,&ppppiStack_1c4);
            if (iVar2 < 0) {
              ppppppiStack_1e8 = (int ******)0x0;
              pppppiStack_1ec = (int *****)0x1;
              FUN_005ba030(param_3,apppppiStack_1d8[0]);
              return iVar2;
            }
            if (apppppiStack_1d8[0] != (int *****)0x0) {
              apppppiStack_1d8[0][0xd] = (int ****)pppppiStack_1c0;
              apppppiStack_1d8[0][0xe] = (int ****)pppppiStack_1bc;
              apppppiStack_1d8[0][0xc] = (int ****)pppppiStack_1b8;
              if ((pppppiStack_1b8 != (int *****)0x1c) && (pppppiStack_1b8 != (int *****)0x20)) {
                apppppiStack_1d8[0][0xc] = (int ****)0x1c;
              }
              apppppiStack_1d8[0][0x2e] = (int ****)pppiStack_1a8;
              apppppiStack_1d8[0][0x2f] = DAT_00648668;
              apppppiStack_1d8[0][0x31] = (int ****)0x0;
              apppppiStack_1d8[0][0x32] = (int ****)0x1;
              pppppiVar4 = &ppppiStack_19c;
              ppppiVar5 = (int ****)(apppppiStack_1d8[0] + 0x10);
              for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
                *ppppiVar5 = (int ***)*pppppiVar4;
                pppppiVar4 = pppppiVar4 + 1;
                ppppiVar5 = ppppiVar5 + 1;
              }
              apppppiStack_1d8[0][0x33] = (int ****)pppiStack_154;
              apppppiStack_1d8[0][0x34] = ppppiStack_150;
              apppppiStack_1d8[0][0x35] = ppppiStack_14c;
              apppppiStack_1d8[0][0x36] = ppppiStack_148;
              apppppiStack_1d8[0][0x37] = (int ****)pppiStack_104;
              apppppiStack_1d8[0][0x38] = (int ****)pppiStack_100;
              apppppiStack_1d8[0][0x39] = (int ****)pppiStack_fc;
              apppppiStack_1d8[0][0x3a] = (int ****)pppiStack_f8;
              apppppiStack_1d8[0][0x3f] = (int ****)pppiStack_d0;
              apppppiStack_1d8[0][0x3b] = (int ****)pppiStack_e4;
              apppppiStack_1d8[0][0x3c] = (int ****)pppiStack_dc;
              apppppiStack_1d8[0][0x3d] = (int ****)pppiStack_d8;
              apppppiStack_1d8[0][0x3e] = (int ****)pppiStack_d4;
              param_3[0x30e] = pppiStack_15c;
              param_3[0x314] = pppiStack_ec;
              param_3[0x312] = pppiStack_f4;
              param_3[0x30f] = (int ***)pppppiStack_158;
              ppppppiStack_1e8 = (int ******)(uint)((int *****)ppppiStack_1d0 == pppppiStack_158);
              pppppiStack_1ec = (int *****)0x1;
              param_3[0x315] = pppiStack_e8;
              FUN_005ba030(param_3,apppppiStack_1d8[0]);
            }
            ppppiStack_1d0 = (int ****)((int)ppppiStack_1d0 + 1);
          } while ((int)ppppiStack_1d0 < iStack_84);
          return 0;
        }
      }
      else {
        ppppppiStack_1e8 = apppppiStack_1d8;
        pppppiStack_1ec = (int *****)0x4;
        iVar2 = (*(code *)(*param_1)[3])(param_1,apppppiStack_1d8 + 1);
        if (iVar2 < 0) goto LAB_005bc10b;
        if (apppppiStack_1d8[0] != (int *****)0x4) {
          apppppiStack_1d8[1] = (int *****)0x0;
        }
        ppppppiStack_1e8 = (int ******)0x0;
        pppppiStack_1ec = (int *****)0x0;
        iVar2 = (*(code *)(*param_1)[5])(param_1,ppppiStack_1d0,ppppiStack_1cc);
        if (-1 < iVar2) goto LAB_005bc10b;
      }
      ppppppiStack_1e8 = (int ******)&ppppiStack_1d0;
      pppppiStack_1ec = (int *****)0x1;
      apppppiStack_1d8[1] = (int *****)0x0;
      pppppiVar4 = param_1;
      iVar2 = (*(code *)(*param_1)[5])(param_1,0,0);
      if ((-1 < iVar2) &&
         (iVar2 = (*(code *)(*param_1)[3])(param_1,&ppppppiStack_1e8,4,&pppppiStack_1ec), -1 < iVar2
         )) {
        if (pppppiStack_1ec != (int *****)0x4) {
          ppppppiStack_1e8 = (int ******)0x0;
        }
        iVar2 = (*(code *)(*param_1)[5])(param_1,pppppiStack_1e4,pppppiStack_1e0,0,0);
        if (iVar2 < 0) {
          return -0x7ffb1ff8;
        }
      }
      if (ppppppiStack_1e8 != (int ******)0xb8) {
        return -0x7ffb1ff8;
      }
      pppppiVar3 = (int *****)apppppiStack_1d8;
      for (iVar2 = 0x2e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pppppiVar3 = (int ****)0x0;
        pppppiVar3 = pppppiVar3 + 1;
      }
      ppppppiStack_1e8 = (int ******)FUN_005b9fc0(param_3,ppppiStack_174,1);
      iVar2 = (*(code *)(*param_1)[3])(param_1,apppppiStack_1d8,0xb8,&pppppiStack_1dc);
      if (iVar2 < 0) {
        FUN_005ba030(param_3,pppppiVar4,1,0);
        return iVar2;
      }
      if (pppppiVar4 != (int *****)0x0) {
        pppppiVar4[0xd] = (int ****)pppppiStack_1e4;
        pppppiVar4[0xe] = (int ****)pppppiStack_1e0;
        pppppiVar4[0xc] = (int ****)pppppiStack_1dc;
        if ((pppppiStack_1dc != (int *****)0x1c) && (pppppiStack_1dc != (int *****)0x20)) {
          pppppiVar4[0xc] = (int ****)0x1c;
        }
        pppppiVar4[0x2e] = ppppiStack_1cc;
        pppppiVar4[0x2f] = DAT_00648668;
        pppppiVar4[0x31] = (int ****)0x0;
        pppppiVar4[0x32] = (int ****)0x1;
        pppppiVar3 = (int *****)&pppppiStack_1c8;
        pppppiVar6 = pppppiVar4 + 0x10;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pppppiVar6 = *pppppiVar3;
          pppppiVar3 = pppppiVar3 + 1;
          pppppiVar6 = pppppiVar6 + 1;
        }
        pppppiVar4[0x33] = ppppiStack_180;
        pppppiVar4[0x34] = ppppiStack_17c;
        pppppiVar4[0x35] = ppppiStack_178;
        pppppiVar4[0x36] = ppppiStack_174;
        pppppiVar4[0x37] = ppppiStack_150;
        pppppiVar4[0x38] = ppppiStack_14c;
        pppppiVar4[0x39] = ppppiStack_148;
        pppppiVar4[0x3c] = (int ****)0x0;
        pppppiVar4[0x3b] = (int ****)0x0;
        pppppiVar4[0x3a] = ppppiStack_144;
        pppppiVar4[0x3d] = (int ****)0x0;
        pppppiVar4[0x3e] = (int ****)0x2;
        param_3[0x30e] = local_188[0];
        param_3[0x30f] = local_188[1];
        param_3[0x312] = pppiStack_140;
        param_3[0x314] = (int ***)ppppiStack_138;
        param_3[0x315] = (int ***)ppppiStack_134;
        FUN_005ba030(param_3,pppppiVar4,1,1);
      }
      param_3[0x30e] = local_188[0];
      param_3[0x30f] = local_188[1];
      param_3[0x312] = pppiStack_140;
      goto LAB_005bc350;
    }
  }
  else {
    ppppiStack_1c4 = (int ****)&ppppiStack_1b4;
    ppppiStack_1cc = &pppiStack_1b0;
    pppppiStack_1c8 = (int *****)0x4;
    ppppiStack_1d0 = (int ****)param_1;
    apppppiStack_1d8[1] = (int *****)0x5bbfa4;
    iVar2 = (*(code *)(*param_1)[3])();
    if (iVar2 < 0) goto LAB_005bbfd3;
    if (ppppiStack_1b4 != (int ****)0x4) {
      pppiStack_1b0 = (int ***)0x0;
    }
    ppppiStack_1c4 = (int ****)0x0;
    pppppiStack_1c8 = (int *****)0x0;
    ppppiStack_1cc = (int ****)pppiStack_1a8;
    ppppiStack_1d0 = (int ****)pppppiStack_1ac;
    apppppiStack_1d8[1] = param_1;
    apppppiStack_1d8[0] = (int *****)0x5bbfcb;
    iVar2 = (*(code *)(*param_1)[5])();
    if (-1 < iVar2) goto LAB_005bbfd3;
  }
  ppppiStack_1c4 = (int ****)&pppppiStack_1ac;
  pppppiStack_1c8 = (int *****)0x1;
  ppppiStack_1cc = (int ****)0x0;
  ppppiStack_1d0 = (int ****)0x0;
  apppppiStack_1d8[1] = param_1;
  ppppiStack_1b4 = (int ****)0x0;
  apppppiStack_1d8[0] = (int *****)0x5bc584;
  iVar2 = (*(code *)(*param_1)[5])();
  if (-1 < iVar2) {
    apppppiStack_1d8[0] = &ppppiStack_1c4;
    pppppiStack_1e0 = (int *****)&pppppiStack_1c8;
    pppppiStack_1dc = (int *****)0x4;
    pppppiStack_1e4 = param_1;
    ppppppiStack_1e8 = (int ******)0x5bc59a;
    iVar2 = (*(code *)(*param_1)[3])();
    if (-1 < iVar2) {
      if ((int *****)ppppiStack_1c4 != (int *****)0x4) {
        pppppiStack_1c8 = (int *****)0x0;
      }
      apppppiStack_1d8[0] = (int *****)0x0;
      pppppiStack_1dc = (int *****)0x0;
      pppppiStack_1e0 = pppppiStack_1bc;
      pppppiStack_1e4 = pppppiStack_1c0;
      ppppppiStack_1e8 = (int ******)param_1;
      pppppiStack_1ec = (int *****)0x5bc5c1;
      iVar2 = (*(code *)(*param_1)[5])();
      if (iVar2 < 0) {
        return -0x7ffb1f7d;
      }
    }
  }
  if (pppppiStack_1c8 != (int *****)0x50) {
    return -0x7ffb1f7d;
  }
  pppppiStack_1e0 = (int *****)(apppiStack_bc + 2);
  ppppiVar5 = apppiStack_bc + 2;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppppiVar5 = (int ***)0x0;
    ppppiVar5 = ppppiVar5 + 1;
  }
  apppppiStack_1d8[0] = (int *****)&pppppiStack_1b8;
  pppppiStack_1dc = (int *****)0x50;
  pppppiStack_1e4 = param_1;
  ppppppiStack_1e8 = (int ******)0x5bc5f9;
  iVar2 = (*(code *)(*param_1)[3])();
  if (iVar2 < 0) {
    return iVar2;
  }
  ppppiVar5 = apppiStack_bc;
  ppppiVar7 = param_3 + 0x116;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppppiVar7 = *ppppiVar5;
    ppppiVar5 = ppppiVar5 + 1;
    ppppiVar7 = ppppiVar7 + 1;
  }
  if (pppppiStack_80 != (int *****)0x0) {
    ppppppiStack_1e8 = (int ******)pppppiStack_80;
    pppppiStack_1ec = (int *****)(param_3 + 0x2e);
    iVar2 = FUN_005be000(param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  if (pppppiStack_7c != (int *****)0x0) {
    ppppppiStack_1e8 = (int ******)pppppiStack_7c;
    pppppiStack_1ec = (int *****)(param_3 + 0x120);
    iVar2 = FUN_005be000(param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  if (iStack_84 == 0) {
    return 0;
  }
  ppppppiStack_1e8 = (int ******)&ppppiStack_1d0;
  pppppiStack_1ec = (int *****)0x1;
  apppppiStack_1d8[0] = (int *****)0x0;
  iVar2 = (*(code *)(*param_1)[5])(param_1,0,0);
  if ((-1 < iVar2) &&
     (iVar2 = (*(code *)(*param_1)[3])(param_1,&pppppiStack_1ec,4,&ppppppiStack_1e8), -1 < iVar2)) {
    if (ppppppiStack_1e8 != (int ******)0x4) {
      pppppiStack_1ec = (int *****)0x0;
    }
    iVar2 = (*(code *)(*param_1)[5])(param_1,pppppiStack_1e4,pppppiStack_1e0,0,0);
    if (iVar2 < 0) {
      return -0x7ffb1ff8;
    }
  }
  if (pppppiStack_1ec != (int *****)0xb8) {
    return -0x7ffb1ff8;
  }
  pppppiVar4 = (int *****)apppppiStack_1d8;
  for (iVar2 = 0x2e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pppppiVar4 = (int ****)0x0;
    pppppiVar4 = pppppiVar4 + 1;
  }
  pppppiStack_1ec = (int *****)FUN_005b9fc0(param_3,ppppiStack_174,1);
  pppppiVar4 = (int *****)&pppppiStack_1dc;
  iVar2 = (*(code *)(*param_1)[3])(param_1,apppppiStack_1d8,0xb8);
  if (iVar2 < 0) {
    FUN_005ba030(param_3,pppppiVar4,1,0);
    return iVar2;
  }
  if (pppppiVar4 != (int *****)0x0) {
    pppppiVar3 = pppppiVar4;
    pppppiVar4[0xd] = (int ****)pppppiStack_1e4;
    pppppiVar4[0xe] = (int ****)pppppiStack_1e0;
    pppppiVar4[0xc] = (int ****)pppppiStack_1dc;
    if ((pppppiStack_1dc != (int *****)0x1c) && (pppppiStack_1dc != (int *****)0x20)) {
      pppppiVar4[0xc] = (int ****)0x1c;
    }
    pppppiVar3[0x2e] = ppppiStack_1cc;
    pppppiVar3[0x2f] = DAT_00648668;
    pppppiVar3[0x31] = (int ****)0x0;
    pppppiVar3[0x32] = (int ****)0x1;
    pppppiVar4 = (int *****)&pppppiStack_1c8;
    pppppiVar6 = pppppiVar3 + 0x10;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pppppiVar6 = *pppppiVar4;
      pppppiVar4 = pppppiVar4 + 1;
      pppppiVar6 = pppppiVar6 + 1;
    }
    pppppiVar3[0x33] = ppppiStack_180;
    pppppiVar3[0x34] = ppppiStack_17c;
    pppppiVar3[0x35] = ppppiStack_178;
    pppppiVar3[0x36] = ppppiStack_174;
    pppppiVar3[0x37] = ppppiStack_150;
    pppppiVar3[0x38] = ppppiStack_14c;
    pppppiVar3[0x39] = ppppiStack_148;
    pppppiVar3[0x3c] = (int ****)0x0;
    pppppiVar3[0x3b] = (int ****)0x0;
    pppppiVar3[0x3a] = ppppiStack_144;
    pppppiVar3[0x3d] = (int ****)0x0;
    pppppiVar3[0x3e] = (int ****)0x2;
    param_3[0x30e] = local_188[0];
    param_3[0x30f] = local_188[1];
    param_3[0x312] = pppiStack_140;
    param_3[0x314] = (int ***)ppppiStack_138;
    param_3[0x315] = (int ***)ppppiStack_134;
    FUN_005ba030(param_3,pppppiVar3,1,1);
  }
  param_3[0x30e] = local_188[0];
  param_3[0x30f] = local_188[1];
  param_3[0x312] = pppiStack_140;
LAB_005bc350:
  param_3[0x314] = (int ***)ppppiStack_138;
  param_3[0x315] = (int ***)ppppiStack_134;
  return 0;
}


