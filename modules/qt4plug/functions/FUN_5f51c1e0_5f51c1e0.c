/* Module: qt4plug.dll
   Function: FUN_5f51c1e0
   Address: 5f51c1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f51c1e0(LPSTR param_1,SIZE_T param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = '\0';
  iVar1 = *(int *)(*param_3 + 4);
  if (iVar1 < 0x666c3333) {
    if (iVar1 != 0x666c3332) {
      if (iVar1 < 0x51444d44) {
        if (iVar1 == 0x51444d43) {
          lstrcpynA(param_1,"QDesign music",param_2);
          param_1[param_2 - 1] = '\0';
          return;
        }
        if (iVar1 < 0x4d414337) {
          if (iVar1 == 0x4d414336) {
            lstrcpynA(param_1,"MACE 6:1",param_2);
            param_1[param_2 - 1] = '\0';
            return;
          }
          if (iVar1 == 0x2e6d7033) {
LAB_5f51c417:
            lstrcpynA(param_1,"MPEG Layer-3",param_2);
            param_1[param_2 - 1] = '\0';
            return;
          }
          if (iVar1 == 0x4d414333) {
            lstrcpynA(param_1,"MACE 3:1",param_2);
            param_1[param_2 - 1] = '\0';
            return;
          }
        }
        else {
          if (iVar1 == 0x4e4f4e45) {
            return;
          }
          if (iVar1 == 0x51444d32) {
            lstrcpynA(param_1,"QDesign 2",param_2);
            param_1[param_2 - 1] = '\0';
            return;
          }
        }
      }
      else if (iVar1 < 0x63647833) {
        if (iVar1 == 0x63647832) {
          lstrcpynA(param_1,"CD/XA 2:1",param_2);
          param_1[param_2 - 1] = '\0';
          return;
        }
        if (iVar1 == 0x51636c70) {
          lstrcpynA(param_1,"QUALCOMM PureVoice",param_2);
          param_1[param_2 - 1] = '\0';
          return;
        }
        if (iVar1 == 0x616c6177) {
          lstrcpynA(param_1,"aLaw 2:1",param_2);
          param_1[param_2 - 1] = '\0';
          return;
        }
      }
      else {
        if (iVar1 == 0x63647834) {
          lstrcpynA(param_1,"CD/XA 4:1",param_2);
          param_1[param_2 - 1] = '\0';
          return;
        }
        if (iVar1 == 0x64766361) {
          lstrcpynA(param_1,"DV Audio",param_2);
          param_1[param_2 - 1] = '\0';
          return;
        }
      }
      goto LAB_5f51c440;
    }
  }
  else if (iVar1 < 0x6d730012) {
    if (iVar1 == 0x6d730011) {
      lstrcpynA(param_1,"DVI/Intel IMA ADPCM",param_2);
      param_1[param_2 - 1] = '\0';
      return;
    }
    if (iVar1 < 0x696e3235) {
      if ((iVar1 != 0x696e3234) && (iVar1 != 0x666c3634)) {
        if (iVar1 == 0x696d6134) {
          lstrcpynA(param_1,"IMA 4:1",param_2);
          param_1[param_2 - 1] = '\0';
          return;
        }
LAB_5f51c440:
        FUN_5f5275c0(DAT_5f5a4158,0x1b2,param_1,param_2);
        return;
      }
    }
    else if (iVar1 != 0x696e3332) {
      if (iVar1 == 0x6d730002) {
        lstrcpynA(param_1,"Microsoft ADPCM",param_2);
        param_1[param_2 - 1] = '\0';
        return;
      }
      goto LAB_5f51c440;
    }
  }
  else if (iVar1 < 0x736f7775) {
    if (iVar1 != 0x736f7774) {
      if (iVar1 == 0x6d730055) goto LAB_5f51c417;
      if (iVar1 != 0x72617720) goto LAB_5f51c440;
    }
  }
  else if (iVar1 != 0x74776f73) {
    if (iVar1 != 0x756c6177) goto LAB_5f51c440;
    lstrcpynA(param_1,"uLaw 2:1",param_2);
    param_1[param_2 - 1] = '\0';
  }
  return;
}


