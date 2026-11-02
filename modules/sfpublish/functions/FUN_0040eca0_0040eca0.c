/* Module: sfpublish.dll
   Function: FUN_0040eca0
   Address: 0040eca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040eca0(void *this,uint param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 uVar2;
  WPARAM wParam;
  WPARAM WVar3;
  UINT Msg;
  undefined1 *lParam;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  int iVar4;
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 4),param_1 & 0xffff);
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xffffff65:
    if ((*(short *)(param_2 + 0xc) != 0x20) && (*(short *)(param_2 + 0xc) != 0xd)) {
      return 0;
    }
    wParam = SendMessageA(hWnd,0x1042,0,0);
    if ((int)wParam < 0) {
      return 0;
    }
    if (wParam == **(WPARAM **)((int)this + 0x60)) {
      return 0;
    }
    SendMessageA(hWnd,0x1013,wParam,0);
    local_18 = 3;
    local_1c = 0;
    SendMessageA(hWnd,0x102b,**(WPARAM **)((int)this + 0x60),(LPARAM)local_28);
    local_18 = 3;
    local_1c = 3;
    SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_28);
    WVar3 = **(int **)((int)this + 0x5c) - 1;
    if ((int)WVar3 < (int)wParam) goto LAB_0040ee93;
    goto LAB_0040ee95;
  default:
    goto switchD_0040ece0_caseD_ffffff66;
  case 0xffffff8e:
    if ((int)*(WPARAM *)(param_2 + 0xc) < 0) {
      return 0;
    }
    SendMessageA(hWnd,0x102a,*(WPARAM *)(param_2 + 0xc),0);
    return 0;
  case 0xffffff9b:
    wParam = *(WPARAM *)(param_2 + 0xc);
    if ((int)wParam < 0) {
      return 0;
    }
    LVar1 = SendMessageA(hWnd,0x102c,wParam,3);
    if (wParam == **(WPARAM **)((int)this + 0x60)) {
      return 0;
    }
    if (((byte)LVar1 & 2) != 2) {
      return 0;
    }
    lParam = (undefined1 *)0x0;
    Msg = 0x1013;
    break;
  case 0xfffffff4:
    uVar2 = FUN_0040e930(hWnd,param_2);
    return uVar2;
  case 0xfffffffc:
    wParam = SendMessageA(hWnd,0x1042,0,0);
    if ((int)wParam < 0) {
      return 0;
    }
    if (wParam == **(WPARAM **)((int)this + 0x60)) {
      return 0;
    }
    SendMessageA(hWnd,0x1013,wParam,0);
    local_18 = 3;
    local_1c = 0;
    SendMessageA(hWnd,0x102b,**(WPARAM **)((int)this + 0x60),(LPARAM)local_28);
    lParam = local_28;
    local_18 = 3;
    local_1c = 3;
    Msg = 0x102b;
    break;
  case 0xfffffffe:
    wParam = *(WPARAM *)(param_2 + 0xc);
    if ((int)wParam < 0) {
      return 0;
    }
    if (wParam == **(WPARAM **)((int)this + 0x60)) {
      return 0;
    }
    SendMessageA(hWnd,0x1013,wParam,0);
    iVar4 = **(int **)((int)this + 0x5c);
    goto LAB_0040ee03;
  }
  SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  iVar4 = **(int **)((int)this + 0x5c);
LAB_0040ee03:
  WVar3 = iVar4 - 1;
  if ((int)WVar3 < (int)wParam) {
LAB_0040ee93:
    wParam = WVar3;
  }
LAB_0040ee95:
  FUN_0040e7b0(this,wParam);
switchD_0040ece0_caseD_ffffff66:
  return 0;
}


