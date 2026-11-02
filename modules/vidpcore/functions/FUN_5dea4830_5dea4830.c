/* Module: vidpcore.dll
   Function: FUN_5dea4830
   Address: 5dea4830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5dea4830(undefined1 *param_1,HWND param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  HINSTANCE hInstance;
  int *_Memory;
  HDC pHVar2;
  BOOL BVar3;
  HWND hWnd;
  int iVar4;
  HDC hdc;
  HBITMAP h;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  tagWNDCLASSA *ptVar8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  byte *local_9c;
  int local_90;
  tagRECT local_8c;
  HINSTANCE local_7c;
  HGDIOBJ local_78;
  void *local_74;
  tagWNDCLASSA local_70;
  tagMSG local_48;
  BITMAPINFO local_2c;
  
  if ((param_1 != (undefined1 *)0x0) && (param_2 != (HWND)0x0)) {
    hInstance = (HINSTANCE)GetWindowLongA(param_2,-6);
    local_7c = hInstance;
    _Memory = calloc(1,0x34);
    if (_Memory != (int *)0x0) {
      piVar7 = _Memory;
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      pHVar2 = GetDC((HWND)0x0);
      iVar6 = GetClipBox(pHVar2,&local_8c);
      ReleaseDC((HWND)0x0,pHVar2);
      if ((iVar6 != 1) && (iVar6 != 0)) {
        ptVar8 = &local_70;
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          ptVar8->style = 0;
          ptVar8 = (tagWNDCLASSA *)&ptVar8->lpfnWndProc;
        }
        local_70.style = 3;
        local_70.lpfnWndProc = (WNDPROC)&LAB_5dea4460;
        local_70.cbClsExtra = 0;
        local_70.cbWndExtra = 4;
        local_70.hIcon = (HICON)0x0;
        local_70.lpszMenuName = (LPCSTR)0x0;
        local_70.hInstance = hInstance;
        local_70.hbrBackground = GetStockObject(0);
        local_70.hCursor = (HCURSOR)FUN_5deb7930(0,0x7f00);
        local_70.lpszClassName = s_GetColorFromScreen_5df3e070;
        BVar3 = GetClassInfoA(hInstance,s_GetColorFromScreen_5df3e070,&local_70);
        if ((BVar3 != 0) || (sVar1 = FUN_5deb8ff0(&local_70), sVar1 != 0)) {
          hWnd = CreateWindowExA(0xc,s_GetColorFromScreen_5df3e070,"",0x80000000,local_8c.left,
                                 local_8c.top,local_8c.right - local_8c.left,
                                 local_8c.bottom - local_8c.top,param_2,(HMENU)0x0,hInstance,
                                 (LPVOID)0x0);
          *(HWND *)(param_4 + 0x2ec) = hWnd;
          SetWindowLongA(hWnd,0,(LONG)_Memory);
          ShowWindow(hWnd,5);
          SetCapture(hWnd);
          SetFocus(hWnd);
          _Memory[10] = 0;
          GetWindowLongA(hWnd,-6);
          iVar6 = _Memory[10];
          while (iVar6 == 0) {
            GetMessageA(&local_48,hWnd,0,0);
            TranslateMessage(&local_48);
            DispatchMessageA(&local_48);
            iVar6 = _Memory[10];
          }
          if (_Memory[9] == 0) {
            pHVar2 = GetDC((HWND)0x0);
            iVar6 = _Memory[2] - *_Memory;
            if (iVar6 < 1) {
              local_b0 = 1;
            }
            else {
              local_b0 = local_8c.right - local_8c.left;
              if (iVar6 <= local_8c.right - local_8c.left) {
                local_b0 = iVar6;
              }
            }
            iVar4 = _Memory[3] - _Memory[1];
            iVar6 = 1;
            if ((0 < iVar4) &&
               (iVar6 = local_8c.bottom - local_8c.top, iVar4 <= local_8c.bottom - local_8c.top)) {
              iVar6 = iVar4;
            }
            FUN_5deca500(&local_2c,0x1c,local_b0,iVar6,0,0,0);
            hdc = CreateCompatibleDC(pHVar2);
            h = CreateDIBSection(hdc,&local_2c,0,&local_74,(HANDLE)0x0,0);
            local_78 = SelectObject(hdc,h);
            if (h == (HBITMAP)0x0) {
              DeleteDC(hdc);
              return 0;
            }
            BitBlt(hdc,0,0,local_b0,iVar6,pHVar2,*_Memory,_Memory[1],0xcc0020);
            local_a8 = 0;
            local_a0 = 0;
            local_a4 = 0;
            if (0 < local_b0) {
              local_ac = local_b0;
              local_9c = (byte *)((int)local_74 + 1);
              do {
                pbVar5 = local_9c;
                local_90 = iVar6;
                if (0 < iVar6) {
                  do {
                    local_a8 = local_a8 + (uint)pbVar5[1];
                    local_a0 = local_a0 + (uint)*pbVar5;
                    local_a4 = local_a4 + (uint)pbVar5[-1];
                    local_90 = local_90 + -1;
                    pbVar5 = pbVar5 + 4;
                  } while (local_90 != 0);
                }
                local_9c = local_9c + iVar6 * 4;
                local_ac = local_ac + -1;
              } while (local_ac != 0);
            }
            ReleaseDC((HWND)0x0,pHVar2);
            SelectObject(hdc,local_78);
            DeleteDC(hdc);
            DeleteObject(h);
            iVar6 = iVar6 * local_b0;
            param_1[2] = (char)(local_a8 / iVar6);
            param_1[1] = (char)(local_a0 / iVar6);
            *param_1 = (char)(local_a4 / iVar6);
            ReleaseCapture();
            SendMessageA(hWnd,0xb,_Memory[0xc],0);
            DestroyWindow(hWnd);
            free(_Memory);
            UnregisterClassA(s_GetColorFromScreen_5df3e070,local_7c);
            *(undefined4 *)(param_4 + 0x2ec) = 0;
            return 1;
          }
          ReleaseCapture();
          SendMessageA(hWnd,0xb,_Memory[0xc],0);
          DestroyWindow(hWnd);
          free(_Memory);
          UnregisterClassA(s_GetColorFromScreen_5df3e070,hInstance);
        }
      }
    }
  }
  return 0;
}


