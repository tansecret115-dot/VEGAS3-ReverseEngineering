/* Module: vidcap30.exe
   Function: _SfDownload_WinMain@16
   Address: 005218d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDownload_WinMain_16(void)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPSTR lpString1;
  LPSTR pCVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LPCSTR lpWindowName;
  uint uVar8;
  int in_stack_00000010;
  DWORD dwStyle;
  HWND pHVar9;
  HMENU hMenu;
  HINSTANCE hInstance;
  undefined4 uVar10;
  uchar *local_54;
  uchar *local_50;
  LPCSTR local_4c;
  tagMSG local_44;
  WNDCLASSA local_28;
  
                    /* 0x1218d0  360  _SfDownload_WinMain@16 */
  local_28.cbClsExtra = 8;
  local_28.cbWndExtra = 8;
  local_28.style = 0;
  local_28.lpfnWndProc = (WNDPROC)&LAB_00521330;
  local_28.hInstance = DAT_005c16d0;
  local_28.hIcon = (HICON)0x0;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.hbrBackground = (HBRUSH)0x10;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.lpszClassName = "SfKrn_Download3";
  RegisterClassA(&local_28);
  iVar1 = _SfGetUIFontSize_4(100);
  iVar1 = *(int *)(iVar1 + 4);
  pvVar2 = GlobalAlloc(0x42,0x4318);
  lpString1 = GlobalLock(pvVar2);
  local_4c = (LPCSTR)0x0;
  local_54 = (uchar *)0x0;
  local_50 = (uchar *)0x0;
  pCVar3 = GetCommandLineA();
  uVar4 = lstrlenA(pCVar3);
  uVar8 = 0;
  if (uVar4 == 0) {
LAB_00521b31:
    uVar10 = 0x106f;
  }
  else {
    do {
      if (pCVar3[uVar8] == '|') {
        if (local_4c == (LPCSTR)0x0) {
          local_4c = pCVar3 + uVar8 + 1;
        }
        else if (local_54 == (uchar *)0x0) {
          local_54 = (uchar *)(pCVar3 + uVar8 + 1);
          pCVar3[uVar8] = '\0';
        }
        else if (local_50 == (uchar *)0x0) {
          local_50 = (uchar *)(pCVar3 + uVar8 + 1);
          pCVar3[uVar8] = '\0';
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
    if (local_54 == (uchar *)0x0) goto LAB_00521b31;
    _mbscpy((uchar *)(lpString1 + 0x3000),local_54);
    if (local_50 == (uchar *)0x0) {
      uVar10 = 0x1070;
    }
    else {
      _mbscpy((uchar *)(lpString1 + 0x330c),local_50);
      if (local_4c != (LPCSTR)0x0) {
        lstrcpynA(lpString1,local_4c,0x1000);
        lpString1[0xfff] = '\0';
        MultiByteToWideChar(0,1,lpString1,-1,(LPWSTR)(lpString1 + 0x1000),0x1000);
        lpString1[0x2ffe] = '\0';
        lpString1[0x2fff] = '\0';
        hMenu = (HMENU)0x0;
        pHVar9 = (HWND)0x0;
        hInstance = DAT_005c16d0;
        pCVar3 = lpString1;
        iVar5 = GetSystemMetrics(8);
        iVar6 = GetSystemMetrics(0x14);
        iVar7 = GetSystemMetrics(4);
        iVar1 = (iVar1 * 5) / 3 + iVar6 + iVar5 * 2 + iVar7 + iVar1 * 3 + 0x54;
        iVar7 = 0x1c2;
        iVar6 = -0x80000000;
        iVar5 = -0x80000000;
        dwStyle = 0x80ca0000;
        lpWindowName = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x106e);
        pHVar9 = CreateWindowExA(1,"SfKrn_Download3",lpWindowName,dwStyle,iVar5,iVar6,iVar7,iVar1,
                                 pHVar9,hMenu,hInstance,pCVar3);
        if (pHVar9 == (HWND)0x0) {
          return 0;
        }
        ShowWindow(pHVar9,in_stack_00000010);
        UpdateWindow(pHVar9);
        PostMessageA(pHVar9,0x400,0,0);
        iVar1 = GetMessageA(&local_44,(HWND)0x0,0,0);
        while (iVar1 != 0) {
          TranslateMessage(&local_44);
          DispatchMessageA(&local_44);
          iVar1 = GetMessageA(&local_44,(HWND)0x0,0,0);
        }
        goto LAB_00521b56;
      }
      uVar10 = 0x1071;
    }
  }
  uVar10 = _SfGetString2_8(DAT_005c16d8,uVar10);
  SfMsgBox(0,0,uVar10,pCVar3);
  local_44.wParam = 0xffffffff;
LAB_00521b56:
  UnregisterClassA("SfKrn_Download3",DAT_005c16d0);
  pvVar2 = GlobalHandle(lpString1);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(lpString1);
  GlobalFree(pvVar2);
  return local_44.wParam;
}


