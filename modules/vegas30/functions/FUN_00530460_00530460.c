/* Module: vegas30.exe
   Function: FUN_00530460
   Address: 00530460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00530460(HWND param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  GetWindowLongA(param_1,8);
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      _SfHelp_ContextPopupHelp_24(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_00644b18,0);
      return 1;
    }
    if (param_2 == 2) {
      lParam = 0;
      wParam = 0;
      Msg = 0x14b;
      hWnd = GetDlgItem(param_1,0x3eb);
      SendMessageA(hWnd,Msg,wParam,lParam);
      return 0;
    }
    if (param_2 == 0x4e) {
      uVar1 = FUN_00530030(param_1,param_4);
      return uVar1;
    }
  }
  else {
    if (param_2 == 0x110) {
      FUN_0052fb40(param_1,param_4);
      return 1;
    }
    if (param_2 == 0x111) {
      FUN_005300f0(param_1,param_3 & 0xffff,param_4,param_3 >> 0x10);
    }
  }
  return 0;
}


