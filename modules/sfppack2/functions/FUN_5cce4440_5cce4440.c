/* Module: sfppack2.dll
   Function: FUN_5cce4440
   Address: 5cce4440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce4440(int *param_1,uint param_2,HWND param_3,HDC param_4,LPRECT param_5)

{
  DWORD color;
  HWND hWnd;
  HBRUSH hbr;
  HGLOBAL pvVar1;
  undefined4 *pMem;
  COLORREF CVar2;
  int iVar3;
  int unaff_ESI;
  UINT Msg;
  HDC wParam;
  uint local_18;
  int local_14;
  RECT local_10;
  
  color = GetSysColor(5);
  SetBkColor(param_4,color);
  Msg = 0x138;
  wParam = param_4;
  hWnd = GetParent(param_3);
  hbr = (HBRUSH)SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)param_3);
  FillRect(param_4,param_5,hbr);
  SetBkColor(param_4,0);
  local_10.left = param_5->left;
  local_10.top = param_5->top;
  local_10.right = local_10.left + 1;
  local_10.bottom = param_5->bottom;
  ExtTextOutA(param_4,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  InflateRect(param_5,-1,0);
  pvVar1 = GlobalAlloc(0x42,0xfa4);
  pMem = GlobalLock(pvVar1);
  if (pMem != (undefined4 *)0x0) {
    FUN_5cce4120(param_1,pMem,1000);
    CVar2 = FUN_5cd2caa0(0x8a);
    SetBkColor(param_4,CVar2);
    local_18 = 1;
    do {
      local_14 = pMem[local_18];
      FUN_5cce43a0(param_4,&param_5->left,local_18,local_14,1000);
      local_18 = local_18 + 1;
    } while (local_18 < 0x3e9);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    if (param_2 < 4) {
      CVar2 = FUN_5cd2caa0(0x8d);
      SetBkColor(param_4,CVar2);
      (**(code **)(*param_1 + 0xc4))(param_1,&local_18,param_2);
      FUN_5cce3ee0(unaff_ESI);
      (**(code **)(*param_1 + 200))(param_1,&stack0xffffffe0,local_10.bottom);
      iVar3 = MulDiv(local_14,0x800,0xfa);
      FUN_5cce4250(param_4,&param_5->left,local_18,iVar3,1000);
    }
  }
  SetBkColor(param_4,0);
  local_10.left = param_5->left;
  local_10.right = param_5->right;
  local_10.top = (param_5->bottom - param_5->top) / 2;
  local_10.bottom = local_10.top + 1;
  ExtTextOutA(param_4,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  return 1;
}


