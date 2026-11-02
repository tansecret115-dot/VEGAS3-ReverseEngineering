/* Module: sfnetmedia.dll
   Function: FUN_0040ea70
   Address: 0040ea70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040ea70(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  uint cchWideChar;
  LPWSTR lpWideCharStr;
  HWND hWnd;
  WPARAM wParam;
  int iVar1;
  undefined4 *puVar2;
  HGLOBAL pvVar3;
  size_t sVar4;
  uint uVar5;
  int local_48;
  int local_44;
  undefined4 local_40 [2];
  int local_38;
  undefined4 local_28;
  WPARAM local_24;
  undefined4 local_20;
  LPSTR local_14;
  LPCVOID local_8;
  
  local_48 = param_3;
  hWnd = GetDlgItem(*(HWND *)((int)this + 4),600);
  SendMessageA(hWnd,0x1004,0,0);
  local_44 = 0;
  local_40[0] = 1;
  local_38 = param_3;
  wParam = SendMessageA(hWnd,0x100d,0xffffffff,(LPARAM)local_40);
  if (-1 < (int)wParam) {
    local_28 = 1;
    local_20 = 2;
    local_24 = wParam;
    iVar1 = lstrlenA((LPCSTR)(param_3 + 0xa2b));
    if ((iVar1 == 0) || (*(int *)(param_3 + 0xdb4) < 0)) {
      if (*(int *)(param_3 + 0xdb4) == -0x7fffbffc) {
        local_28 = 4;
        SendMessageA(hWnd,0x1005,0,(LPARAM)&local_28);
        if (local_8 != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(local_8);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(local_8);
          GlobalFree(pvVar3);
        }
        SendMessageA(hWnd,0x1008,wParam,0);
        local_48 = 0;
        InvalidateRect(hWnd,(RECT *)0x0,0);
        UpdateWindow(hWnd);
      }
      else if (*(int *)(param_3 + 0xdb4) < 0) {
        uVar5 = 0x77;
        puVar2 = (undefined4 *)FUN_004012d0();
        local_14 = FUN_00418380(puVar2,uVar5);
        SendMessageA(hWnd,0x1006,0,(LPARAM)&local_28);
        local_14 = "-";
        local_20 = 1;
        SendMessageA(hWnd,0x1006,0,(LPARAM)&local_28);
        *(undefined4 *)(param_3 + 0xda0) = 0;
        SendMessageA(hWnd,0x102a,wParam,0);
      }
    }
    else {
      uVar5 = 0x76;
      puVar2 = (undefined4 *)FUN_004012d0();
      local_14 = FUN_00418380(puVar2,uVar5);
      SendMessageA(hWnd,0x1006,0,(LPARAM)&local_28);
      local_14 = "100";
      local_20 = 1;
      SendMessageA(hWnd,0x1006,0,(LPARAM)&local_28);
      uVar5 = SendMessageA(hWnd,0x102c,wParam,0xf000);
      local_44 = (uVar5 >> 0xc) - 1;
      SendMessageA(hWnd,0x102a,wParam,0);
      PostMessageA(*(HWND *)((int)this + 4),0x111,0x25d,0);
    }
  }
  if ((((*(int *)((int)this + 0x54) != 0) && (*(int *)((int)this + 0x50) != 0)) && (local_48 != 0))
     && (local_44 != 0)) {
    iVar1 = lstrlenA((LPCSTR)(local_48 + 0xa2b));
    uVar5 = iVar1 + 1;
    if ((uVar5 != 0) && (cchWideChar = **(uint **)((int)this + 0x54), uVar5 <= cchWideChar)) {
      lpWideCharStr = *(LPWSTR *)((int)this + 0x58);
      MultiByteToWideChar(0,1,(LPCSTR)(local_48 + 0xa2b),-1,lpWideCharStr,cchWideChar);
      lpWideCharStr[cchWideChar - 1] = L'\0';
      sVar4 = wcslen(*(wchar_t **)((int)this + 0x58));
      *(undefined2 *)(*(int *)((int)this + 0x58) + 2 + sVar4 * 2) = 0;
      *(uint *)((int)this + 0x58) = *(int *)((int)this + 0x58) + uVar5 * 2;
      **(int **)((int)this + 0x54) = **(int **)((int)this + 0x54) - uVar5;
      return 0;
    }
    PostMessageA(*(HWND *)((int)this + 4),0x10,0,0);
  }
  return 0;
}


