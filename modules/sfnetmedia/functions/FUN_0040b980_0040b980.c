/* Module: sfnetmedia.dll
   Function: FUN_0040b980
   Address: 0040b980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040b980(void *this,uint param_1,int param_2)

{
  HWND hWnd;
  WPARAM WVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  WPARAM wParam;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
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
    if (wParam == *(WPARAM *)((int)this + 0x78)) {
      return 0;
    }
    SendMessageA(hWnd,0x1013,wParam,0);
    local_18 = 3;
    local_1c = 0;
    SendMessageA(hWnd,0x102b,*(WPARAM *)((int)this + 0x78),(LPARAM)local_28);
    local_18 = 3;
    local_1c = 3;
    SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_28);
    WVar1 = **(int **)((int)this + 0x74) - 1;
    if ((int)WVar1 < (int)wParam) {
LAB_0040bb7e:
      wParam = WVar1;
    }
    break;
  default:
    goto switchD_0040b9c0_caseD_ffffff66;
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
    LVar2 = SendMessageA(hWnd,0x102c,wParam,3);
    if (wParam == *(WPARAM *)((int)this + 0x78)) {
      return 0;
    }
    if (((byte)LVar2 & 2) != 2) {
      return 0;
    }
    SendMessageA(hWnd,0x1013,wParam,0);
    WVar1 = **(int **)((int)this + 0x74) - 1;
    if ((int)WVar1 < (int)wParam) goto LAB_0040bb7e;
    break;
  case 0xfffffff4:
    uVar3 = FUN_0040b610(hWnd,param_2);
    return uVar3;
  case 0xfffffffc:
    wParam = SendMessageA(hWnd,0x1042,0,0);
    if ((int)wParam < 0) {
      return 0;
    }
    if (wParam == *(WPARAM *)((int)this + 0x78)) {
      return 0;
    }
    SendMessageA(hWnd,0x1013,wParam,0);
    local_18 = 3;
    local_1c = 0;
    SendMessageA(hWnd,0x102b,*(WPARAM *)((int)this + 0x78),(LPARAM)local_28);
    local_18 = 3;
    local_1c = 3;
    SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_28);
    WVar1 = **(int **)((int)this + 0x74) - 1;
    if ((int)WVar1 < (int)wParam) goto LAB_0040bb7e;
    break;
  case 0xfffffffe:
    wParam = *(WPARAM *)(param_2 + 0xc);
    if ((int)wParam < 0) {
      return 0;
    }
    if (wParam == *(WPARAM *)((int)this + 0x78)) {
      return 0;
    }
    SendMessageA(hWnd,0x1013,wParam,0);
    WVar1 = **(int **)((int)this + 0x74) - 1;
    if ((int)WVar1 < (int)wParam) goto LAB_0040bb7e;
  }
  FUN_0040b580(this,wParam);
switchD_0040b9c0_caseD_ffffff66:
  return 0;
}


