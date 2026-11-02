/* Module: vegas30k.dll
   Function: FUN_011553c0
   Address: 011553c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011553c0(int *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  HWND hWndParent;
  BOOL BVar6;
  int *piVar7;
  HDC hdc;
  HGDIOBJ pvVar8;
  int c;
  HINSTANCE hInstance;
  HWND pHVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  UINT Msg;
  WPARAM wParam;
  tagSIZE *psizl;
  LPVOID lpParam;
  int local_5c;
  tagPOINT local_54;
  tagPOINT local_4c;
  tagSIZE tStack_44;
  int local_3c;
  undefined4 uStack_2c;
  int iStack_28;
  HWND pHStack_24;
  HWND pHStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  GetCursorPos(&local_4c);
  ScreenToClient((HWND)*param_1,&local_4c);
  uVar4 = FUN_0114e7d0(param_1,local_4c.x,local_4c.y);
  uVar5 = FUN_0114e760(param_1,local_4c.x,local_4c.y);
  uVar12 = (param_1[0x59] & 0xffU) >> 7;
  if (((uVar4 == param_1[0xb]) && (uVar5 == param_1[0xc])) && (param_1[10] != 0)) {
    uVar12 = 0;
  }
  else {
    param_1[10] = 0;
  }
  if (((uint)param_1[0x17] <= uVar4) || (uVar4 == 0xffff)) {
    uVar12 = 0;
  }
  if ((uVar5 < (uint)param_1[0x18]) && (uVar5 != 0xffff)) {
    if (uVar12 != 0) {
      if ((param_1[1] != 0) && (param_1[1] != 2)) {
        uVar12 = 0;
      }
      pHVar9 = GetCapture();
      if (pHVar9 == (HWND)*param_1) {
        uVar12 = 0;
      }
      GetActiveWindow();
      pHVar9 = (HWND)*param_1;
      hWndParent = GetActiveWindow();
      BVar6 = IsChild(hWndParent,pHVar9);
      if (BVar6 == 0) {
        uVar12 = 0;
      }
      else if (uVar12 != 0) goto LAB_011554ac;
      param_1[0xc] = uVar5;
      param_1[0xb] = uVar4;
      param_1[10] = 1;
    }
  }
  else {
    uVar12 = 0;
  }
LAB_011554ac:
  local_5c = 0;
  if (uVar12 == 0) {
LAB_01155643:
    if ((HWND)param_1[8] != (HWND)0x0) {
      DestroyWindow((HWND)param_1[8]);
      param_1[8] = 0;
      return;
    }
  }
  else {
    local_54.x = uVar5 * 0x10;
    local_3c = param_1[0x1c] + 1;
    uVar3 = *(ushort *)(param_1[0x70] + 4 + local_54.x);
    uVar12 = 0;
    if (param_1[0x18] != 0) {
      psVar10 = (short *)(param_1[0x70] + 2);
      do {
        if ((uVar12 < (uint)param_1[0x19]) || ((uint)param_1[0x2e] <= uVar12)) {
          if (uVar12 == uVar5) break;
          local_3c = local_3c + *psVar10;
        }
        uVar12 = uVar12 + 1;
        psVar10 = psVar10 + 8;
      } while (uVar12 < (uint)param_1[0x18]);
    }
    iVar11 = param_1[0x32];
    iVar1 = param_1[0x5b];
    iVar2 = param_1[0x1d];
    piVar7 = (int *)(*(code *)param_1[0x81])(param_1 + 0x72,uVar4,uVar5,0);
    if ((*(byte *)((int)piVar7 + 0xe) & 1) != 0) {
      uVar3 = uVar3 ^ (byte)(*(byte *)(piVar7 + 3) ^ (byte)uVar3) & 3;
    }
    if ((uVar3 | 0x100) == 0) {
      if (((uVar3 & 0x2000) != 0) && (local_5c = piVar7[7], local_5c == 0)) {
        GetObjectA((HANDLE)piVar7[6],0x18,&uStack_2c);
        local_5c = iStack_28;
      }
    }
    else {
      local_5c = piVar7[7];
    }
    if (*piVar7 != 0) {
      hdc = GetDC((HWND)*param_1);
      if ((*(byte *)((int)piVar7 + 0xe) & 4) == 0) {
        pvVar8 = (HGDIOBJ)param_1[0x43];
      }
      else {
        pvVar8 = (HGDIOBJ)piVar7[5];
      }
      pvVar8 = SelectObject(hdc,pvVar8);
      psizl = &tStack_44;
      c = lstrlenA((LPCSTR)*piVar7);
      GetTextExtentPoint32A(hdc,(LPCSTR)*piVar7,c,psizl);
      tStack_44.cx = tStack_44.cx + 6 + local_5c;
      if (((uVar3 & 0x1000) != 0) && ((*(byte *)((int)piVar7 + 0xe) & 8) != 0)) {
        tStack_44.cx = tStack_44.cx + param_1[0x5b] * 2;
      }
      SelectObject(hdc,pvVar8);
      ReleaseDC((HWND)*param_1,hdc);
      if (tStack_44.cx <= *(short *)(param_1[0x70] + 2 + local_54.x)) goto LAB_01155643;
    }
    pHVar9 = (HWND)param_1[8];
    pHStack_24 = (HWND)*param_1;
    iStack_8 = *piVar7;
    uStack_2c = 0x2c;
    iStack_28 = 0x1a1;
    uStack_c = 0;
    uStack_4 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    pHStack_20 = pHStack_24;
    if (pHVar9 == (HWND)0x0) {
      lpParam = (LPVOID)0x0;
      hInstance = (HINSTANCE)GetWindowLongA(pHStack_24,-6);
      pHVar9 = CreateWindowExA(0,"tooltips_class32",(LPCSTR)0x0,0x80000000,0,0,0,0,(HWND)*param_1,
                               (HMENU)0x0,hInstance,lpParam);
      param_1[8] = (int)pHVar9;
      Msg = 0x404;
    }
    else {
      Msg = 0x409;
    }
    SendMessageA(pHVar9,Msg,0,(LPARAM)&uStack_2c);
    local_54.x = local_3c + local_5c;
    iVar11 = (iVar1 + (uVar4 - iVar11) * iVar1 + iVar2) - tStack_44.cy;
    local_54.y = iVar11 + -3;
    if ((param_1[0x59] & 0x1000U) != 0) {
      local_54.y = iVar11 + -4;
    }
    ClientToScreen((HWND)*param_1,&local_54);
    if ((*(byte *)((int)piVar7 + 0xe) & 4) == 0) {
      wParam = param_1[0x43];
      pHVar9 = (HWND)param_1[8];
    }
    else {
      wParam = piVar7[5];
      pHVar9 = (HWND)param_1[8];
    }
    SendMessageA(pHVar9,0x30,wParam,0);
    SendMessageA((HWND)param_1[8],0x412,0,local_54.y << 0x10 | local_54.x & 0xffffU);
    SendMessageA((HWND)param_1[8],0x411,1,(LPARAM)&uStack_2c);
    if (param_1[9] == 0) {
      param_1[9] = 1;
      SetTimer((HWND)*param_1,3,5000,(TIMERPROC)0x0);
    }
  }
  return;
}


