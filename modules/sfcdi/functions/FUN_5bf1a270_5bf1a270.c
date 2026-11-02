/* Module: sfcdi.dll
   Function: FUN_5bf1a270
   Address: 5bf1a270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1a270(HWND param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uchar *_Dest;
  LPSTR lpString;
  HWND wParam;
  SIZE_T dwBytes;
  LPARAM lParam;
  
  GetWindowLongA(param_1,8);
  if (param_2 == 0x110) {
    FUN_5bf2fd50(param_1,(HWND)0x0,(int *)0x0,0x8001);
    SetWindowLongA(param_1,8,(LONG)param_4);
    if ((LPCSTR)param_4[2] != (LPCSTR)0x0) {
      SetWindowTextA(param_1,(LPCSTR)param_4[2]);
    }
    if ((LPCSTR)param_4[3] != (LPCSTR)0x0) {
      SetDlgItemTextA(param_1,0x431,(LPCSTR)param_4[3]);
    }
    if ((LPCSTR)param_4[4] != (LPCSTR)0x0) {
      SetDlgItemTextA(param_1,0x46d,(LPCSTR)param_4[4]);
    }
    dwBytes = 0;
    uVar1 = 0;
    if (*param_4 != 0) {
      do {
        iVar2 = lstrlenA(*(LPCSTR *)(param_4[1] + uVar1 * 4));
        dwBytes = dwBytes + 5 + iVar2;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *param_4);
    }
    pvVar3 = GlobalAlloc(0x42,dwBytes);
    _Dest = GlobalLock(pvVar3);
    if (_Dest == (uchar *)0x0) {
      lpString = FUN_5bf283e0(DAT_5bf65fc4,0x947);
      SetDlgItemTextA(param_1,0x470,lpString);
    }
    else {
      *_Dest = '\0';
      uVar1 = 0;
      if (*param_4 != 0) {
        do {
          _mbscat(_Dest,*(uchar **)(param_4[1] + uVar1 * 4));
          if (uVar1 != *param_4 - 1) {
            _mbscat(_Dest,"\r\n");
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < *param_4);
      }
      SetDlgItemTextA(param_1,0x470,(LPCSTR)_Dest);
      pvVar3 = GlobalHandle(_Dest);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(_Dest);
      GlobalFree(pvVar3);
    }
    lParam = 1;
    wParam = GetDlgItem(param_1,2);
    PostMessageA(param_1,0x28,(WPARAM)wParam,lParam);
    return 1;
  }
  if (((param_2 == 0x111) && (uVar1 = param_3 & 0xffff, uVar1 != 0)) && (uVar1 < 3)) {
    EndDialog(param_1,uVar1);
    return 1;
  }
  return 0;
}


