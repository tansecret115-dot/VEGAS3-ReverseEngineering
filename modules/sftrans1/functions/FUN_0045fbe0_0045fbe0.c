/* Module: sftrans1.dll
   Function: FUN_0045fbe0
   Address: 0045fbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_0045fbe0(int param_1,int param_2,uint param_3,int param_4)

{
  HWND hWnd;
  HWND hWnd_00;
  UINT uFlags;
  tagRECT local_10;
  
  *(int *)(param_1 + 8) = param_2;
  hWnd = GetDlgItem(*(HWND *)(param_2 + 0x30),param_4);
  GetWindowRect(hWnd,&local_10);
  MapWindowPoints((HWND)0x0,*(HWND *)(param_2 + 0x30),(LPPOINT)&local_10,2);
  hWnd_00 = CreateDialogParamA(DAT_00577238,(LPCSTR)(param_3 & 0xffff),*(HWND *)(param_2 + 0x30),
                               (DLGPROC)&LAB_0045fd10,param_1);
  *(HWND *)(param_1 + 4) = hWnd_00;
  if (hWnd_00 != (HWND)0x0) {
    if (hWnd == (HWND)0x0) {
      uFlags = 0x44;
      hWnd = (HWND)0x0;
    }
    else {
      uFlags = 0x40;
    }
    SetWindowPos(hWnd_00,hWnd,local_10.left,local_10.top,local_10.right - local_10.left,
                 local_10.bottom - local_10.top,uFlags);
  }
  SetWindowLongA(*(HWND *)(param_1 + 4),-0xc,-1);
  return *(int *)(param_1 + 4) == 0;
}


