/* Module: sfnetmedia.dll
   Function: FUN_0040e150
   Address: 0040e150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040e150(void *this,uchar *param_1,uchar *param_2)

{
  bool bVar1;
  HGLOBAL pvVar2;
  uchar *_Dest;
  HWND hWnd;
  LRESULT LVar3;
  int iVar4;
  undefined4 *puVar5;
  LPSTR pCVar6;
  undefined3 extraout_var;
  uchar *puVar7;
  uchar *puVar8;
  WPARAM wParam;
  int iVar9;
  WPARAM *pWVar10;
  uint uVar11;
  WPARAM local_50 [5];
  uchar *local_3c;
  uchar *local_30;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  pWVar10 = local_50;
  for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pWVar10 = 0;
    pWVar10 = pWVar10 + 1;
  }
  pvVar2 = GlobalAlloc(0x40,0xdc0);
  _Dest = GlobalLock(pvVar2);
  puVar8 = _Dest;
  for (iVar9 = 0x370; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar8[0] = '\0';
    puVar8[1] = '\0';
    puVar8[2] = '\0';
    puVar8[3] = '\0';
    puVar8 = puVar8 + 4;
  }
  _mbscpy(_Dest + 0x823,param_1);
  _mbscpy(_Dest,param_2);
  *(undefined4 *)(_Dest + 0xdb8) = *(undefined4 *)((int)this + 0xa0);
  _mbscpy(_Dest + 0xd38,*(uchar **)(*(int *)((int)this + 0x70) + 8));
  *(undefined4 *)(_Dest + 0xd9c) = *(undefined4 *)((int)this + 0xac);
  FUN_00413f20(_Dest + 0x823,(LPSECURITY_ATTRIBUTES)0x0);
  puVar8 = _Dest + 0xa2b;
  FUN_0040df90(_Dest + 0x927,puVar8,param_1,param_2);
  *(undefined4 *)(_Dest + 0xdbc) = *(undefined4 *)((int)this + 0xb4);
  hWnd = GetDlgItem(*(HWND *)((int)this + 4),600);
  iVar9 = SendMessageA(hWnd,0x1004,0,0);
  local_50[0] = 1;
  local_50[2] = 0;
  do {
    do {
      do {
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) {
          bVar1 = FUN_00413a10((LPCSTR)puVar8);
          if (CONCAT31(extraout_var,bVar1) != 0) {
            uVar11 = 0x6d;
            puVar5 = (undefined4 *)FUN_004012d0();
            puVar7 = (uchar *)FUN_00418380(puVar5,uVar11);
            iVar9 = FUN_00415bc0(*(HWND *)((int)this + 4),0x24,puVar7);
            if (iVar9 == 7) {
              pvVar2 = GlobalHandle(_Dest);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(_Dest);
              GlobalFree(pvVar2);
              return;
            }
            remove((char *)puVar8);
          }
          local_50[4] = 0xffffffff;
          local_50[3] = 0;
          local_50[0] = 0xd;
          local_50[2] = 0;
          local_50[1] = 0x7fff;
          local_3c = puVar8;
          local_30 = _Dest;
          wParam = SendMessageA(hWnd,0x1007,0,(LPARAM)local_50);
          local_50[0] = 9;
          local_50[1] = wParam;
          if ((*(int *)((int)this + 0xa0) == 0) &&
             (iVar9 = FUN_0040e0a0(this,(int)_Dest), -1 < iVar9)) {
            uVar11 = 0x74;
          }
          else {
            uVar11 = 0x75;
          }
          puVar5 = (undefined4 *)FUN_004012d0();
          local_3c = (uchar *)FUN_00418380(puVar5,uVar11);
          local_50[2] = 2;
          SendMessageA(hWnd,0x1006,0,(LPARAM)local_50);
          local_3c = "0";
          local_50[2] = 1;
          SendMessageA(hWnd,0x1006,0,(LPARAM)local_50);
          local_18 = 0xf000;
          local_1c = 0x2000;
          SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_28);
          FUN_0040cdd0((int)this);
          SendMessageA(hWnd,0x1013,wParam,0);
          SendMessageA(hWnd,0x102a,wParam,0);
          SendMessageA(hWnd,0x1015,0,wParam);
          return;
        }
        local_50[1] = iVar9;
        LVar3 = SendMessageA(hWnd,0x1005,0,(LPARAM)local_50);
      } while ((LVar3 == 0) || (iVar4 = lstrcmpA((LPCSTR)local_3c,(LPCSTR)puVar8), iVar4 != 0));
      local_50[2] = 2;
      LVar3 = SendMessageA(hWnd,0x1005,0,(LPARAM)local_50);
    } while (LVar3 == 0);
    uVar11 = 0x75;
    puVar5 = (undefined4 *)FUN_004012d0();
    pCVar6 = FUN_00418380(puVar5,uVar11);
    iVar4 = lstrcmpA((LPCSTR)local_3c,pCVar6);
    if (iVar4 == 0) break;
    uVar11 = 0x74;
    puVar5 = (undefined4 *)FUN_004012d0();
    pCVar6 = FUN_00418380(puVar5,uVar11);
    iVar4 = lstrcmpA((LPCSTR)local_3c,pCVar6);
  } while (iVar4 != 0);
  uVar11 = 0x80;
  puVar5 = (undefined4 *)FUN_004012d0();
  puVar8 = (uchar *)FUN_00418380(puVar5,uVar11);
  FUN_00415bc0(*(HWND *)((int)this + 4),0x40,puVar8);
  return;
}


