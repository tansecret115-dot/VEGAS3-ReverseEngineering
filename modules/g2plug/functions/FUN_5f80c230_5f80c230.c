/* Module: g2plug.dll
   Function: FUN_5f80c230
   Address: 5f80c230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80c230(HWND param_1,int param_2,short param_3,int param_4)

{
  LONG LVar1;
  UINT UVar2;
  int iVar3;
  HWND hWnd;
  WPARAM WVar4;
  LPARAM lParam;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0xffffff31:
    case 0xffffff32:
      UVar2 = IsDlgButtonChecked(param_1,0x84a);
      *(uint *)(LVar1 + 0x150) = (uint)(UVar2 != 0);
      UVar2 = IsDlgButtonChecked(param_1,0x85d);
      if (UVar2 == 0) {
        UVar2 = IsDlgButtonChecked(param_1,0x85c);
        if (UVar2 == 0) {
          *(undefined4 *)(LVar1 + 0x140) = 6;
        }
        else {
          *(undefined4 *)(LVar1 + 0x140) = 5;
        }
      }
      else {
        *(undefined4 *)(LVar1 + 0x140) = 3;
      }
      UVar2 = IsDlgButtonChecked(param_1,0x883);
      *(UINT *)(LVar1 + 0x154) = UVar2;
      if (*(int *)(param_4 + 8) == -0xce) {
        if (*(int *)(LVar1 + 0x678) != 0) {
          SetWindowLongA(param_1,0,0x1ad);
          return 1;
        }
        SetWindowLongA(param_1,0,0x1c3);
        return 1;
      }
      break;
    case 0xffffff33:
      FUN_5f8111c0(1,0xe);
      break;
    case 0xffffff38:
      CheckRadioButton(param_1,0x84a,0x84b,(*(int *)(LVar1 + 0x150) != 1) + 0x84a);
      if (*(int *)(LVar1 + 0x140) == 3) {
        iVar3 = 0x85d;
      }
      else if (*(int *)(LVar1 + 0x140) == 5) {
        iVar3 = 0x85c;
      }
      else {
        iVar3 = 0x85b;
        *(undefined4 *)(LVar1 + 0x140) = 6;
      }
      CheckRadioButton(param_1,0x85b,0x85d,iVar3);
      FUN_5f80c570(param_1,(uint)(*(int *)(LVar1 + 0x140) == 6));
      CheckRadioButton(param_1,0x882,0x883,(*(int *)(LVar1 + 0x154) != 0) + 0x882);
      FUN_5f80c510(param_1,(uint)(*(int *)(LVar1 + 0x150) == 1));
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
      iVar3 = *(int *)(param_4 + 0x1c);
      SetWindowLongA(param_1,8,iVar3);
      WVar4 = *(WPARAM *)(iVar3 + 0x688);
      if (WVar4 != 0) {
        FUN_5f80c130(param_1,WVar4);
      }
      return 1;
    }
    if (param_2 == 0x111) {
      switch(param_3) {
      case 0x84a:
      case 0x84b:
        FUN_5f80c510(param_1,(uint)(param_3 == 0x84a));
        return 0;
      case 0x85b:
      case 0x85c:
      case 0x85d:
        FUN_5f80c570(param_1,(uint)(param_3 == 0x85b));
        if ((param_3 == 0x85b) && (UVar2 = IsDlgButtonChecked(param_1,0x84a), UVar2 == 0)) {
          FUN_5f80c510(param_1,0);
          return 0;
        }
        FUN_5f80c510(param_1,1);
        return 0;
      }
    }
  }
  return 0;
}


