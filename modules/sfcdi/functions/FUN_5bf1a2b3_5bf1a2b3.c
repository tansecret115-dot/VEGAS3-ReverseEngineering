/* Module: sfcdi.dll
   Function: FUN_5bf1a2b3
   Address: 5bf1a2b3
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5bf1a2b3(undefined4 param_1,HWND param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  HGLOBAL pvVar2;
  uchar *_Dest;
  LPSTR lpString;
  HWND wParam;
  SIZE_T dwBytes;
  HWND unaff_EBP;
  uint uVar3;
  LPARAM lParam;
  
  FUN_5bf2fd50(unaff_EBP,(HWND)0x0,(int *)0x0,0x8001);
  SetWindowLongA(unaff_EBP,8,(LONG)param_5);
  if ((LPCSTR)param_5[2] != (LPCSTR)0x0) {
    SetWindowTextA(unaff_EBP,(LPCSTR)param_5[2]);
  }
  if ((LPCSTR)param_5[3] != (LPCSTR)0x0) {
    SetDlgItemTextA(unaff_EBP,0x431,(LPCSTR)param_5[3]);
  }
  if ((LPCSTR)param_5[4] != (LPCSTR)0x0) {
    SetDlgItemTextA(unaff_EBP,0x46d,(LPCSTR)param_5[4]);
  }
  dwBytes = 0;
  uVar3 = 0;
  if (*param_5 != 0) {
    do {
      iVar1 = lstrlenA(*(LPCSTR *)(param_5[1] + uVar3 * 4));
      dwBytes = dwBytes + 5 + iVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_5);
  }
  pvVar2 = GlobalAlloc(0x42,dwBytes);
  _Dest = GlobalLock(pvVar2);
  if (_Dest == (uchar *)0x0) {
    lpString = FUN_5bf283e0(DAT_5bf65fc4,0x947);
    SetDlgItemTextA(unaff_EBP,0x470,lpString);
  }
  else {
    *_Dest = '\0';
    uVar3 = 0;
    if (*param_5 != 0) {
      do {
        _mbscat(_Dest,*(uchar **)(param_5[1] + uVar3 * 4));
        if (uVar3 != *param_5 - 1) {
          _mbscat(_Dest,"\r\n");
        }
        uVar3 = uVar3 + 1;
        unaff_EBP = param_2;
      } while (uVar3 < *param_5);
    }
    SetDlgItemTextA(unaff_EBP,0x470,(LPCSTR)_Dest);
    pvVar2 = GlobalHandle(_Dest);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(_Dest);
    GlobalFree(pvVar2);
  }
  lParam = 1;
  wParam = GetDlgItem(unaff_EBP,2);
  PostMessageA(unaff_EBP,0x28,(WPARAM)wParam,lParam);
  return 1;
}


