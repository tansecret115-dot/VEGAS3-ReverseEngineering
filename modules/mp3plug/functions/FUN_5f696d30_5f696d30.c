/* Module: mp3plug.dll
   Function: FUN_5f696d30
   Address: 5f696d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f696d30(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  UINT UVar2;
  BOOL BVar3;
  HWND pHVar4;
  int iVar5;
  WPARAM wParam;
  
  if (0x53 < param_2) {
    if (param_2 == 0x110) {
      return 1;
    }
    if (param_2 != 0x111) {
      return 0;
    }
    uVar1 = param_3 & 0xffff;
    if (uVar1 < 0x417) {
      if (uVar1 == 0x416) {
        UVar2 = IsDlgButtonChecked(param_1,0x416);
        FUN_5f696990(param_1,UVar2);
        *(undefined4 *)((int)this + 0x24) = 1;
        return 1;
      }
      if (uVar1 < 0x3ee) {
        if (uVar1 < 0x3ea) {
          if (uVar1 != 9) {
            return 0;
          }
          return 1;
        }
      }
      else {
        if (uVar1 < 0x406) {
          return 0;
        }
        if (0x407 < uVar1) {
          return 0;
        }
      }
    }
    else if (uVar1 != 0x432) {
      if (uVar1 < 0x448) {
        return 0;
      }
      if (uVar1 < 1099) {
        UVar2 = IsDlgButtonChecked(param_1,0x416);
        if ((UVar2 == 0) || (UVar2 = IsDlgButtonChecked(param_1,0x448), UVar2 != 0)) {
          BVar3 = 0;
        }
        else {
          BVar3 = 1;
        }
        pHVar4 = GetDlgItem(param_1,0x419);
        EnableWindow(pHVar4,BVar3);
        UVar2 = IsDlgButtonChecked(param_1,0x416);
        if ((UVar2 == 0) || (UVar2 = IsDlgButtonChecked(param_1,0x448), UVar2 != 0)) {
          BVar3 = 0;
        }
        else {
          BVar3 = 1;
        }
        pHVar4 = GetDlgItem(param_1,0x3ec);
        EnableWindow(pHVar4,BVar3);
        UVar2 = IsDlgButtonChecked(param_1,0x448);
        if (UVar2 == 0) {
          SendDlgItemMessageA(param_1,0x3ea,0xc5,0xff,0);
          SendDlgItemMessageA(param_1,0x3eb,0xc5,0xff,0);
          SendDlgItemMessageA(param_1,0x406,0xc5,0xff,0);
          wParam = 0xff;
        }
        else {
          SendDlgItemMessageA(param_1,0x3ea,0xc5,0x1e,0);
          SendDlgItemMessageA(param_1,0x3eb,0xc5,0x1e,0);
          SendDlgItemMessageA(param_1,0x406,0xc5,0x1e,0);
          wParam = 0x1e;
        }
        iVar5 = 0xc5;
        SendDlgItemMessageA(param_1,0x3ed,0xc5,wParam,0);
        *(undefined4 *)(iVar5 + 0x24) = 1;
        return 1;
      }
      return 0;
    }
    if (param_3 >> 0x10 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
    }
    return 0;
  }
  if (param_2 == 0x53) {
    FUN_5f688010(param_1,param_4,(int *)&DAT_5f72d190);
    return 1;
  }
  if (param_2 == 2) {
    FUN_5f697160();
    *(undefined4 *)((int)this + 0x10) = 0;
    return 1;
  }
  if (param_2 != 0x18) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  FUN_5f696ac0(this,param_1);
  return 0;
}


