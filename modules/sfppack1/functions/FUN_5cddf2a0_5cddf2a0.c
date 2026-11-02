/* Module: sfppack1.dll
   Function: FUN_5cddf2a0
   Address: 5cddf2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cddf2a0(HWND param_1,uint param_2,HINSTANCE param_3,int *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  HCURSOR hCursor;
  WPARAM wParam;
  HWND hWnd;
  undefined3 extraout_var;
  uint uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  UINT Msg;
  HWND *lParam;
  HWND local_c;
  WPARAM local_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)GetWindowLongA(param_1,4);
  if (param_2 < 0x32) {
    if (param_2 == 0x31) {
      uVar4 = FUN_5cddef20(param_1);
      return uVar4;
    }
    switch(param_2) {
    case 1:
      iVar3 = FUN_5cddf1e0(param_1);
      return (iVar3 != 0) - 1;
    case 2:
      FUN_5cddf230(param_1);
      break;
    case 0xc:
      FUN_5cddee40(param_1,(char *)param_4);
      break;
    case 0xf:
      FUN_5cdded20(param_1,(HDC)0x0);
      break;
    case 0x14:
      return 0;
    case 0x20:
      uVar4 = GetWindowLongA((HWND)*puVar2,-0x10);
      if ((uVar4 & 0x10) != 0) {
        hCursor = (HCURSOR)FUN_5cdf5870(4);
        SetCursor(hCursor);
        return 1;
      }
      break;
    case 0x30:
      FUN_5cddeea0(param_1,param_3);
    }
  }
  else if (param_2 < 0x60b) {
    if (param_2 == 0x60a) {
      bVar1 = FUN_5cddef90(param_1,param_3,(LPCSTR)param_4);
      return CONCAT31(extraout_var,bVar1);
    }
    if (param_2 == 0x84) {
      uVar4 = GetWindowLongA((HWND)*puVar2,-0x10);
      return (-(uint)((uVar4 & 0x40) != 0) & 2) - 1;
    }
    if (param_2 == 0x87) {
      return 0x100;
    }
    if ((param_2 == 0x201) && (uVar4 = GetWindowLongA((HWND)*puVar2,-0x10), (uVar4 & 0x10) != 0)) {
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
      bVar1 = FUN_5cddef40(param_1,param_4);
      return CONCAT31(extraout_var_01,bVar1);
    }
    if (param_2 == 0x60c) {
      bVar1 = FUN_5cddeff0(param_1,param_4);
      return CONCAT31(extraout_var_00,bVar1);
    }
    if (param_2 == 0x60d) {
      puVar2[9] = param_3;
      puVar2[10] = param_4;
      return 1;
    }
  }
  uVar4 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return uVar4;
}


