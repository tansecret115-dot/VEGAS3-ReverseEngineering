/* Module: g2plug.dll
   Function: FUN_5f80c5b0
   Address: 5f80c5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80c5b0(HWND param_1,int param_2,uint param_3,int param_4)

{
  int dwNewLong;
  LONG LVar1;
  UINT UVar2;
  HWND hWnd;
  uint uVar3;
  WPARAM WVar4;
  LPARAM lParam;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0xffffff31:
    case 0xffffff32:
      if (*(int *)(LVar1 + 0x13c) == 0) {
        FUN_5f826380(DAT_5f87746c,param_1,0x40,0xefb5);
        SetWindowLongA(param_1,0,0x1ba);
        return 1;
      }
      *(undefined4 *)(LVar1 + 0x13c) = 0;
      UVar2 = IsDlgButtonChecked(param_1,0x839);
      uVar3 = FUN_5f80c880(*(uint *)(LVar1 + 0x13c),0x839,UVar2);
      *(uint *)(LVar1 + 0x13c) = uVar3;
      UVar2 = IsDlgButtonChecked(param_1,0x83a);
      uVar3 = FUN_5f80c880(*(uint *)(LVar1 + 0x13c),0x83a,UVar2);
      *(uint *)(LVar1 + 0x13c) = uVar3;
      UVar2 = IsDlgButtonChecked(param_1,0x83b);
      uVar3 = FUN_5f80c880(*(uint *)(LVar1 + 0x13c),0x83b,UVar2);
      *(uint *)(LVar1 + 0x13c) = uVar3;
      UVar2 = IsDlgButtonChecked(param_1,0x83c);
      uVar3 = FUN_5f80c880(*(uint *)(LVar1 + 0x13c),0x83c,UVar2);
      *(uint *)(LVar1 + 0x13c) = uVar3;
      UVar2 = IsDlgButtonChecked(param_1,0x83d);
      uVar3 = FUN_5f80c880(*(uint *)(LVar1 + 0x13c),0x83d,UVar2);
      *(uint *)(LVar1 + 0x13c) = uVar3;
      UVar2 = IsDlgButtonChecked(param_1,0x83e);
      uVar3 = FUN_5f80c880(*(uint *)(LVar1 + 0x13c),0x83e,UVar2);
      *(uint *)(LVar1 + 0x13c) = uVar3;
      UVar2 = IsDlgButtonChecked(param_1,0x83f);
      uVar3 = FUN_5f80c880(*(uint *)(LVar1 + 0x13c),0x83f,UVar2);
      *(uint *)(LVar1 + 0x13c) = uVar3;
      UVar2 = IsDlgButtonChecked(param_1,0x835);
      *(UINT *)(LVar1 + 0x158) = UVar2;
      UVar2 = IsDlgButtonChecked(param_1,0x7f9);
      *(UINT *)(LVar1 + 0x15c) = UVar2;
      UVar2 = IsDlgButtonChecked(param_1,0x7fa);
      *(UINT *)(LVar1 + 0x160) = UVar2;
      return 0;
    case 0xffffff33:
      FUN_5f8111c0(1,3);
      break;
    case 0xffffff38:
      CheckDlgButton(param_1,0x835,*(UINT *)(LVar1 + 0x158));
      CheckDlgButton(param_1,0x7f9,*(UINT *)(LVar1 + 0x15c));
      CheckDlgButton(param_1,0x7fa,*(UINT *)(LVar1 + 0x160));
      FUN_5f80c910(param_1,LVar1 + 4);
      lParam = 3;
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
    if (((param_2 == 0x111) && (uVar3 = param_3 & 0xffff, 0x838 < uVar3)) && (uVar3 < 0x840)) {
      if (*(int *)(LVar1 + 0x150) == 0) {
        uVar3 = FUN_5f80c880(0,uVar3,1);
        *(uint *)(LVar1 + 0x13c) = uVar3;
        return 0;
      }
      UVar2 = IsDlgButtonChecked(param_1,uVar3);
      uVar3 = FUN_5f80c880(*(uint *)(LVar1 + 0x13c),uVar3,UVar2);
      *(uint *)(LVar1 + 0x13c) = uVar3;
      return 0;
    }
  }
  return 0;
}


