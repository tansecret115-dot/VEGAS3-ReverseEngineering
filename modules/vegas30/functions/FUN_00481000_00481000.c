/* Module: vegas30.exe
   Function: FUN_00481000
   Address: 00481000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00481000(int param_1,HWND param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  HWND pHVar2;
  UINT UVar3;
  undefined4 uVar4;
  WPARAM WVar5;
  int nIDButton;
  undefined4 uVar6;
  LPARAM LVar7;
  LONG dwNewLong;
  undefined4 uVar8;
  
  if (0x53 < param_3) {
    if (param_3 == 0x110) {
      uVar8 = 0x8001;
      uVar6 = 0;
      uVar4 = 0;
      pHVar2 = GetParent(param_2);
      _SfWndCenter_16(pHVar2,uVar4,uVar6,uVar8);
      _SfSetEditCtrlFont_8(param_2,0);
      LVar7 = _SfLoadImage_24(DAT_00647204,0x412,0,0x30,0x30,0x1020);
      WVar5 = 0;
      UVar3 = 0xf7;
      pHVar2 = GetDlgItem(param_2,0x63f);
      SendMessageA(pHVar2,UVar3,WVar5,LVar7);
      LVar7 = _SfLoadImage_24(DAT_00647204,0x406,0,0x30,0x30,0x1020);
      WVar5 = 0;
      UVar3 = 0xf7;
      pHVar2 = GetDlgItem(param_2,0x63e);
      SendMessageA(pHVar2,UVar3,WVar5,LVar7);
      LVar7 = _SfLoadImage_24(DAT_00647204,0x407,0,0x30,0x30,0x1020);
      WVar5 = 0;
      UVar3 = 0xf7;
      pHVar2 = GetDlgItem(param_2,0x649);
      SendMessageA(pHVar2,UVar3,WVar5,LVar7);
      LVar7 = _SfLoadImage_24(DAT_00647204,0x408,0,0x30,0x30,0x1020);
      WVar5 = 0;
      UVar3 = 0xf7;
      pHVar2 = GetDlgItem(param_2,0x64a);
      SendMessageA(pHVar2,UVar3,WVar5,LVar7);
      LVar7 = _SfLoadImage_24(DAT_00647204,0x405,0,0x30,0x30,0x1020);
      WVar5 = 0;
      UVar3 = 0xf7;
      pHVar2 = GetDlgItem(param_2,0x64b);
      SendMessageA(pHVar2,UVar3,WVar5,LVar7);
      LVar7 = _SfLoadImage_24(DAT_00647204,0x404,0,0x30,0x30,0x1020);
      WVar5 = 0;
      UVar3 = 0xf7;
      pHVar2 = GetDlgItem(param_2,0x64c);
      SendMessageA(pHVar2,UVar3,WVar5,LVar7);
    }
    else if (param_3 == 0x111) {
      switch(param_4 & 0xffff) {
      case 0x63e:
      case 0x63f:
      case 0x649:
      case 0x64a:
      case 0x64b:
      case 0x64c:
        CheckDlgButton(param_2,0x63f,0);
        CheckDlgButton(param_2,0x63e,0);
        CheckDlgButton(param_2,0x649,0);
        CheckDlgButton(param_2,0x64a,0);
        CheckDlgButton(param_2,0x64b,0);
        CheckDlgButton(param_2,0x64c,0);
        CheckDlgButton(param_2,param_4 & 0xffff,1);
        LVar7 = 2;
        WVar5 = 0;
        UVar3 = 0x470;
        pHVar2 = GetParent(param_2);
        PostMessageA(pHVar2,UVar3,WVar5,LVar7);
        LVar7 = 0;
        WVar5 = 1;
        UVar3 = 0x471;
        pHVar2 = GetParent(param_2);
        PostMessageA(pHVar2,UVar3,WVar5,LVar7);
        return 0;
      }
    }
    return 0;
  }
  if (param_3 == 0x53) {
    _SfHelp_ContextPopupHelp_24(0,param_2,0,*(undefined4 *)(param_5 + 8),&DAT_0063e328,0);
    return 1;
  }
  if (param_3 == 0xf) {
    FUN_00481470(param_2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
    return 0;
  }
  if (param_3 != 0x4e) {
    return 0;
  }
  uVar1 = *(uint *)(param_5 + 8);
  if (uVar1 < 0xffffff30) {
    return 0;
  }
  if (0xffffff31 < uVar1) {
    if (uVar1 != 0xffffff38) {
      return 0;
    }
    LVar7 = 0;
    WVar5 = 0;
    UVar3 = 0x470;
    pHVar2 = GetParent(param_2);
    PostMessageA(pHVar2,UVar3,WVar5,LVar7);
    CheckDlgButton(param_2,0x63f,0);
    CheckDlgButton(param_2,0x63e,0);
    CheckDlgButton(param_2,0x649,0);
    CheckDlgButton(param_2,0x64a,0);
    CheckDlgButton(param_2,0x64b,0);
    CheckDlgButton(param_2,0x64c,0);
    switch(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234)) {
    case 1:
      nIDButton = 0x649;
      break;
    case 2:
    case 3:
      nIDButton = 0x64a;
      break;
    case 4:
      nIDButton = 0x64b;
      break;
    default:
      nIDButton = 0x63e;
      break;
    case 6:
      nIDButton = 0x64c;
    }
    CheckDlgButton(param_2,nIDButton,1);
    LVar7 = 2;
    WVar5 = 0;
    UVar3 = 0x470;
    pHVar2 = GetParent(param_2);
    PostMessageA(pHVar2,UVar3,WVar5,LVar7);
    return 1;
  }
  UVar3 = IsDlgButtonChecked(param_2,0x649);
  if (UVar3 == 0) {
    UVar3 = IsDlgButtonChecked(param_2,0x64a);
    if (UVar3 == 0) {
      UVar3 = IsDlgButtonChecked(param_2,0x64b);
      if (UVar3 == 0) {
        UVar3 = IsDlgButtonChecked(param_2,0x63e);
        if (UVar3 == 0) {
          UVar3 = IsDlgButtonChecked(param_2,0x64c);
          if (UVar3 == 0) goto LAB_004811cf;
          dwNewLong = 0x2278;
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234) = 6;
        }
        else {
          dwNewLong = 0x2273;
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234) = 5;
        }
      }
      else {
        dwNewLong = 0x2273;
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234) = 4;
      }
    }
    else {
      dwNewLong = 0x2274;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234) = 2;
    }
  }
  else {
    dwNewLong = 0x2273;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234) = 1;
  }
  SetWindowLongA(param_2,0,dwNewLong);
LAB_004811cf:
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x21c) = 0;
  DAT_0064ab74 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234);
  return 1;
}


