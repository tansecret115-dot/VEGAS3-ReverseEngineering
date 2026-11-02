/* Module: vegas30k.dll
   Function: FUN_01115f70
   Address: 01115f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01115f70(undefined4 *param_1,HDC param_2,RECT *param_3,uint param_4)

{
  DWORD DVar1;
  HWND hWnd;
  HBRUSH hbr;
  int iVar2;
  int iVar3;
  UINT Msg;
  HDC wParam;
  HWND hWnd_00;
  tagRECT local_20;
  RECT local_10;
  
  hWnd_00 = (HWND)*param_1;
  DVar1 = GetSysColor(5);
  SetBkColor(param_2,DVar1);
  Msg = 0x138;
  wParam = param_2;
  hWnd = GetParent(hWnd_00);
  hbr = (HBRUSH)SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)hWnd_00);
  if (param_1[7] == 0) {
    FillRect(param_2,param_3,hbr);
  }
  local_20.top = param_3->top;
  local_20.left = param_3->left;
  local_20.right = param_3->right;
  local_20.bottom = param_3->bottom;
  if ((3 < (param_4 & 0xf)) && ((param_4 & 0xf) < 10)) {
    DVar1 = GetSysColor(6);
    SetBkColor(param_2,DVar1);
    iVar3 = local_20.right - local_20.left;
    local_10.left = local_20.left;
    local_10.right = local_20.left + iVar3;
    iVar2 = local_20.bottom - local_20.top;
    local_10.top = local_20.top;
    local_10.bottom = local_20.top + 1;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.top = local_20.bottom + -1;
    local_10.left = local_20.left;
    local_10.right = local_20.left + iVar3;
    local_10.bottom = local_20.bottom;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.left = local_20.left;
    local_10.right = local_20.left + 1;
    local_10.top = local_20.top;
    local_10.bottom = local_20.top + iVar2;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.left = local_20.right + -1;
    local_10.top = local_20.top;
    local_10.bottom = local_20.top + iVar2;
    local_10.right = local_20.right;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    InflateRect(&local_20,-1,-1);
  }
  FUN_011159c0(param_1,param_2,&local_20,param_4);
  return;
}


