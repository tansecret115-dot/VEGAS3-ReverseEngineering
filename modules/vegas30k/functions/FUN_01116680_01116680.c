/* Module: vegas30k.dll
   Function: FUN_01116680
   Address: 01116680
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_01116680(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HCURSOR hCursor;
  uint uVar3;
  WPARAM wParam;
  HWND hWnd;
  LRESULT LVar4;
  UINT Msg;
  HWND *lParam;
  HWND local_c;
  WPARAM local_8;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,4);
  if (param_2 < 0x32) {
    if (param_2 == 0x31) {
      LVar4 = FUN_01116300(param_1);
      return LVar4;
    }
    switch(param_2) {
    case 1:
      iVar2 = FUN_011165c0(param_1,param_4);
      return (iVar2 != 0) - 1;
    case 2:
      FUN_01116610(param_1);
      break;
    case 0xc:
      FUN_01116220(param_1,param_4);
      break;
    case 0xf:
      FUN_01116100(param_1,0);
      break;
    case 0x14:
      return 0;
    case 0x20:
      uVar3 = GetWindowLongA((HWND)*puVar1,-0x10);
      if ((uVar3 & 0x10) != 0) {
        hCursor = (HCURSOR)_SfGetUICursor_4(4);
        SetCursor(hCursor);
        return 1;
      }
      break;
    case 0x30:
      FUN_01116280(param_1,param_3,param_4);
    }
  }
  else if (param_2 < 0x60b) {
    if (param_2 == 0x60a) {
      LVar4 = FUN_01116370(param_1,param_3,param_4);
      return LVar4;
    }
    if (param_2 == 0x84) {
      uVar3 = GetWindowLongA((HWND)*puVar1,-0x10);
      return (-(uint)((uVar3 & 0x40) != 0) & 2) - 1;
    }
    if (param_2 == 0x87) {
      return 0x100;
    }
    if ((param_2 == 0x201) && (uVar3 = GetWindowLongA((HWND)*puVar1,-0x10), (uVar3 & 0x10) != 0)) {
      local_c = param_1;
      local_8 = 0;
      local_4 = 0;
      wParam = GetDlgCtrlID(param_1);
      lParam = &local_c;
      local_4 = 0xffffff97;
      Msg = 0x4e;
      local_8 = wParam;
      hWnd = GetParent(param_1);
      SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
    }
  }
  else {
    if (param_2 == 0x60b) {
      LVar4 = FUN_01116320(param_1,param_4);
      return LVar4;
    }
    if (param_2 == 0x60c) {
      LVar4 = FUN_011163d0(param_1,param_4);
      return LVar4;
    }
    if (param_2 == 0x60d) {
      puVar1[9] = param_3;
      puVar1[10] = param_4;
      return 1;
    }
  }
  LVar4 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar4;
}


