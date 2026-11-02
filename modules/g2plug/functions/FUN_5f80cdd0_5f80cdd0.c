/* Module: g2plug.dll
   Function: FUN_5f80cdd0
   Address: 5f80cdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80cdd0(HWND param_1,int param_2,short param_3,int param_4)

{
  int dwNewLong;
  LONG LVar1;
  UINT UVar2;
  uint lParam;
  HWND hWnd;
  LRESULT LVar3;
  WPARAM WVar4;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0xffffff30:
    case 0xffffff31:
    case 0xffffff32:
      UVar2 = IsDlgButtonChecked(param_1,0x3e9);
      if (UVar2 != 0) {
        WVar4 = SendDlgItemMessageA(param_1,1000,0x147,0,0);
        LVar3 = SendDlgItemMessageA(param_1,1000,0x150,WVar4,0);
        *(LRESULT *)(LVar1 + 0x148) = LVar3;
        return 0;
      }
      *(undefined4 *)(LVar1 + 0x148) = 0;
      return 0;
    case 0xffffff33:
      FUN_5f8111c0(1,2);
      break;
    case 0xffffff38:
      FUN_5f80cf60(param_1,*(int *)(LVar1 + 0x148));
      lParam = (-(uint)(*(int *)(LVar1 + 0x684) != 0) & 0xfffffffe) + 4 | 1;
      WVar4 = 0;
      UVar2 = 0x470;
      hWnd = GetParent(param_1);
      PostMessageA(hWnd,UVar2,WVar4,lParam);
      return 0;
    }
  }
  else {
    if (param_2 == 0x110) {
      dwNewLong = *(int *)(param_4 + 0x1c);
      SetWindowLongA(param_1,8,dwNewLong);
      WVar4 = *(WPARAM *)(dwNewLong + 0x688);
      if (WVar4 != 0) {
        FUN_5f80c130(param_1,WVar4);
      }
      return 1;
    }
    if ((param_2 == 0x111) && (param_3 == 0x3e9)) {
      UVar2 = IsDlgButtonChecked(param_1,0x3e9);
      FUN_5f80cf40(param_1,(uint)(UVar2 != 0));
      return 0;
    }
  }
  return 0;
}


