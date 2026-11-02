/* Module: g2plug.dll
   Function: FUN_5f813090
   Address: 5f813090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f813090(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  SFG2_PARAMS *pSVar1;
  uint uVar2;
  HWND pHVar3;
  WPARAM wParam;
  LRESULT LVar4;
  undefined4 uVar5;
  UINT UVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  code *pcVar10;
  BOOL BVar11;
  
  pSVar1 = *(SFG2_PARAMS **)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (pSVar1 == (SFG2_PARAMS *)0x0) {
    return 0x80070057;
  }
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_5f8112a0(param_1,param_4,(int *)&DAT_5f86b4d0);
      return 1;
    }
    if (param_2 == 2) {
      FUN_5f814610();
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if ((param_2 == 0x18) && (param_3 != 0)) {
      FUN_5f812810(this,param_1);
      return 0;
    }
  }
  else {
    if (param_2 == 0x110) {
      return 1;
    }
    if (param_2 == 0x111) {
      uVar8 = param_3 & 0xffff;
      uVar2 = param_3 >> 0x10;
      switch(uVar8) {
      case 0x3e9:
        FUN_5f812810(this,param_1);
        lVar7 = SfRealG2_AdvDlg(param_1,pSVar1);
        if (lVar7 == 0) {
          *(undefined4 *)((int)this + 0x24) = 1;
        }
        break;
      case 0x3ee:
      case 0x3ef:
      case 0x3f0:
      case 0x3f3:
      case 0x408:
      case 0x409:
      case 0x40a:
      case 0x40b:
        if (*(int *)(pSVar1 + 0x14c) != 0) {
          UVar6 = IsDlgButtonChecked(param_1,0x3ee);
          if (((((UVar6 == 0) && (UVar6 = IsDlgButtonChecked(param_1,0x3ef), UVar6 == 0)) &&
               (UVar6 = IsDlgButtonChecked(param_1,0x3f0), UVar6 == 0)) &&
              ((UVar6 = IsDlgButtonChecked(param_1,0x40b), UVar6 == 0 &&
               (UVar6 = IsDlgButtonChecked(param_1,0x3f3), UVar6 == 0)))) &&
             ((UVar6 = IsDlgButtonChecked(param_1,0x408), UVar6 == 0 &&
              ((UVar6 = IsDlgButtonChecked(param_1,0x409), UVar6 == 0 &&
               (UVar6 = IsDlgButtonChecked(param_1,0x40a), UVar6 == 0)))))) {
            CheckDlgButton(param_1,uVar8,1);
          }
          *(undefined4 *)((int)this + 0x24) = 1;
          return 0;
        }
        CheckDlgButton(param_1,0x3ee,0);
        CheckDlgButton(param_1,0x3ef,0);
        CheckDlgButton(param_1,0x3f0,0);
        CheckDlgButton(param_1,0x40b,0);
        CheckDlgButton(param_1,0x3f3,0);
        CheckDlgButton(param_1,0x408,0);
        CheckDlgButton(param_1,0x409,0);
        CheckDlgButton(param_1,0x40a,0);
        CheckDlgButton(param_1,uVar8,1);
        *(undefined4 *)((int)this + 0x24) = 1;
        return 0;
      case 0x3f4:
        if (uVar2 == 1) {
          *(undefined4 *)((int)this + 0x24) = 1;
          return 0;
        }
        break;
      case 0x3f5:
        if (uVar2 == 1) {
          FUN_5f812810(this,param_1);
          uVar8 = (uint)(*(int *)(pSVar1 + 0x148) != -1);
          uVar2 = uVar8;
          pHVar3 = GetDlgItem(param_1,0x402);
          EnableWindow(pHVar3,uVar2);
          uVar2 = uVar8;
          pHVar3 = GetDlgItem(param_1,0x3fd);
          EnableWindow(pHVar3,uVar2);
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = (uint)(*(int *)(pSVar1 + 0x3e3) == 5);
          }
          uVar8 = uVar2;
          pHVar3 = GetDlgItem(param_1,0x400);
          EnableWindow(pHVar3,uVar8);
          uVar8 = uVar2;
          pHVar3 = GetDlgItem(param_1,0x3fe);
          EnableWindow(pHVar3,uVar8);
          uVar8 = uVar2;
          pHVar3 = GetDlgItem(param_1,0x401);
          EnableWindow(pHVar3,uVar8);
          pHVar3 = GetDlgItem(param_1,0x3ff);
          EnableWindow(pHVar3,uVar2);
          *(undefined4 *)((int)this + 0x24) = 1;
          return 1;
        }
        break;
      case 0x3f6:
        *(undefined4 *)(pSVar1 + 0x14c) = 1;
        *(undefined4 *)((int)this + 0x24) = 1;
        return 0;
      case 0x3f7:
        UVar6 = IsDlgButtonChecked(param_1,0x3ee);
        if (UVar6 == 0) {
          UVar6 = IsDlgButtonChecked(param_1,0x3ef);
        }
        else {
          CheckDlgButton(param_1,0x3ef,0);
        }
        if (UVar6 == 0) {
          UVar6 = IsDlgButtonChecked(param_1,0x3f0);
        }
        else {
          CheckDlgButton(param_1,0x3f0,0);
        }
        if (UVar6 == 0) {
          UVar6 = IsDlgButtonChecked(param_1,0x40b);
        }
        else {
          CheckDlgButton(param_1,0x40b,0);
        }
        if (UVar6 == 0) {
          UVar6 = IsDlgButtonChecked(param_1,0x3f3);
        }
        else {
          CheckDlgButton(param_1,0x3f3,0);
        }
        if (UVar6 == 0) {
          UVar6 = IsDlgButtonChecked(param_1,0x408);
        }
        else {
          CheckDlgButton(param_1,0x408,0);
        }
        if (UVar6 == 0) {
          UVar6 = IsDlgButtonChecked(param_1,0x409);
        }
        else {
          CheckDlgButton(param_1,0x409,0);
        }
        if (UVar6 == 0) {
          IsDlgButtonChecked(param_1,0x40a);
        }
        else {
          CheckDlgButton(param_1,0x40a,0);
        }
        *(undefined4 *)(pSVar1 + 0x14c) = 0;
        *(undefined4 *)((int)this + 0x24) = 1;
        return 0;
      case 0x3fd:
        if (uVar2 == 1) {
          FUN_5f812810(this,param_1);
          SetDlgItemInt(param_1,0x3fe,*(UINT *)(pSVar1 + 999),1);
          SetDlgItemInt(param_1,0x3ff,*(UINT *)(pSVar1 + 0x3eb),1);
          uVar8 = (uint)(*(int *)(pSVar1 + 0x3e3) == 5);
          uVar2 = uVar8;
          pHVar3 = GetDlgItem(param_1,0x400);
          EnableWindow(pHVar3,uVar2);
          uVar2 = uVar8;
          pHVar3 = GetDlgItem(param_1,0x3fe);
          EnableWindow(pHVar3,uVar2);
          uVar2 = uVar8;
          pHVar3 = GetDlgItem(param_1,0x401);
          EnableWindow(pHVar3,uVar2);
          pHVar3 = GetDlgItem(param_1,0x3ff);
          EnableWindow(pHVar3,uVar8);
          *(undefined4 *)((int)this + 0x24) = 1;
          return 1;
        }
        break;
      case 0x3fe:
      case 0x3ff:
        if (uVar2 == 0x300) {
          *(undefined4 *)((int)this + 0x24) = 1;
          return 0;
        }
        break;
      case 0x406:
        if (uVar2 == 1) {
          pHVar3 = GetDlgItem(param_1,0x406);
          wParam = SendMessageA(pHVar3,0x147,0,0);
          if (wParam != 0xffffffff) {
            LVar4 = SendMessageA(pHVar3,0x150,wParam,0);
            *(LRESULT *)(pSVar1 + 0x13c) = LVar4;
            LVar4 = SendMessageA(pHVar3,0x150,wParam,0);
            if (LVar4 == 6) {
              BVar11 = 1;
              pHVar3 = GetDlgItem(param_1,0x3f7);
              pcVar10 = EnableWindow_exref;
              EnableWindow(pHVar3,BVar11);
              pcVar9 = GetDlgItem_exref;
            }
            else {
              CheckRadioButton(param_1,0x3f6,0x3f7,0x3f6);
              pcVar9 = GetDlgItem_exref;
              BVar11 = 0;
              *(undefined4 *)(pSVar1 + 0x14c) = 1;
              pHVar3 = GetDlgItem(param_1,0x3f7);
              pcVar10 = EnableWindow_exref;
              EnableWindow(pHVar3,BVar11);
            }
            if (3 >= *(int *)(pSVar1 + 0x13c)) {
              *(undefined4 *)(pSVar1 + 0x148) = 0xffffffff;
            }
            uVar5 = (*pcVar9)(param_1,0x3f5,3 < *(int *)(pSVar1 + 0x13c));
            (*pcVar10)(uVar5);
          }
          *(undefined4 *)((int)this + 0x24) = 1;
          return 0;
        }
      }
    }
  }
  return 0;
}


