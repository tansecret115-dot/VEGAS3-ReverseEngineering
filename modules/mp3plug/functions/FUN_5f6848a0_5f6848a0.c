/* Module: mp3plug.dll
   Function: FUN_5f6848a0
   Address: 5f6848a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6848a0(HWND param_1,uint param_2,uint param_3,int *param_4)

{
  LONG LVar1;
  uint uVar2;
  BOOL BVar3;
  HWND pHVar4;
  UINT UVar5;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (0x53 < param_2) {
    if (param_2 == 0x110) {
      FUN_5f6af600(param_1,(HWND)0x0,(int *)0x0,0x8001);
      SetWindowLongA(param_1,8,(LONG)param_4);
      FUN_5f684ad0(param_1,param_4);
    }
    else {
      if (param_2 != 0x111) {
        return 0;
      }
      GetWindowLongA(param_1,8);
      uVar2 = param_3 & 0xffff;
      if (0x416 < uVar2) {
        if (uVar2 < 0x448) {
          return 0;
        }
        if (uVar2 < 1099) {
          UVar5 = IsDlgButtonChecked(param_1,0x416);
          if ((UVar5 == 0) || (UVar5 = IsDlgButtonChecked(param_1,0x448), UVar5 != 0)) {
            BVar3 = 0;
          }
          else {
            BVar3 = 1;
          }
          pHVar4 = GetDlgItem(param_1,0x419);
          EnableWindow(pHVar4,BVar3);
          UVar5 = IsDlgButtonChecked(param_1,0x416);
          if ((UVar5 == 0) || (UVar5 = IsDlgButtonChecked(param_1,0x448), UVar5 != 0)) {
            BVar3 = 0;
          }
          else {
            BVar3 = 1;
          }
          pHVar4 = GetDlgItem(param_1,0x3ec);
          EnableWindow(pHVar4,BVar3);
          UVar5 = IsDlgButtonChecked(param_1,0x448);
          if (UVar5 == 0) {
            SendDlgItemMessageA(param_1,0x3ea,0xc5,0xff,0);
            SendDlgItemMessageA(param_1,0x3eb,0xc5,0xff,0);
            SendDlgItemMessageA(param_1,0x406,0xc5,0xff,0);
            SendDlgItemMessageA(param_1,0x3ed,0xc5,0xff,0);
            return 1;
          }
          SendDlgItemMessageA(param_1,0x3ea,0xc5,0x1e,0);
          SendDlgItemMessageA(param_1,0x3eb,0xc5,0x1e,0);
          SendDlgItemMessageA(param_1,0x406,0xc5,0x1e,0);
          SendDlgItemMessageA(param_1,0x3ed,0xc5,0x1e,0);
          return 1;
        }
        return 0;
      }
      if (uVar2 != 0x416) {
        if (uVar2 != 9) {
          return 0;
        }
        return 1;
      }
    }
    UVar5 = IsDlgButtonChecked(param_1,0x416);
    FUN_5f685150(param_1,UVar5);
    return 1;
  }
  if (param_2 == 0x53) {
    FUN_5f688010(param_1,(int)param_4,(int *)&DAT_5f72c6e8);
    return 1;
  }
  if (param_2 == 2) {
    FUN_5f684fa0(param_1,LVar1);
    return 1;
  }
  if (param_2 != 0x18) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  LVar1 = GetWindowLongA(param_1,8);
  if (LVar1 == 0) {
    return 0;
  }
  FUN_5f684fa0(param_1,LVar1);
  return 0;
}


