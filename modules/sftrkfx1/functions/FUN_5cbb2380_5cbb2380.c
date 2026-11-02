/* Module: sftrkfx1.dll
   Function: FUN_5cbb2380
   Address: 5cbb2380
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND __fastcall FUN_5cbb2380(int param_1)

{
  uint uVar1;
  HFONT wParam;
  HWND pHVar2;
  HDC hdc;
  HFONT h;
  HGDIOBJ h_00;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  tagRECT *lpRect;
  tagSIZE local_d4;
  tagRECT local_cc;
  tagRECT local_bc;
  uint local_ac [3];
  CHAR local_a0 [32];
  uint local_80 [32];
  
  wParam = FUN_5cbdc9c0(100);
  GetWindowRect(*(HWND *)(param_1 + 0x14),&local_bc);
  lpRect = &local_cc;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x14),0xfcb);
  GetWindowRect(pHVar2,lpRect);
  pHVar2 = CreateWindowExA(4,"TrackEQ_TabControl_Class",(LPCSTR)0x0,0x50030040,
                           local_cc.left - local_bc.left,(local_cc.bottom - local_bc.top) + -2,
                           local_cc.right - local_cc.left,0,*(HWND *)(param_1 + 0x14),(HMENU)0xfca,
                           DAT_5cc16c98,&DAT_5cc0fe60);
  if (pHVar2 != (HWND)0x0) {
    puVar4 = local_ac;
    for (iVar3 = 0x2b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if (*(WPARAM *)(param_1 + 0x30) == 0) {
      SendMessageA(pHVar2,0x30,(WPARAM)wParam,0);
      uVar5 = 0;
      puVar4 = local_80;
      do {
        FUN_5cbbf190((uchar *)(puVar4 + -8),"%d");
        *puVar4 = uVar5;
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        local_ac[1] = uVar5;
      } while (uVar5 < 4);
    }
    else {
      SendMessageA(pHVar2,0x30,*(WPARAM *)(param_1 + 0x30),0);
      puVar4 = local_80;
      uVar5 = 0;
      do {
        uVar1 = uVar5 + 1;
        FUN_5cbbf190((uchar *)(puVar4 + -8),"%c");
        *puVar4 = uVar5;
        puVar4 = puVar4 + 10;
        uVar5 = uVar1;
        local_ac[1] = uVar1;
      } while (uVar1 < 4);
    }
    hdc = GetDC(pHVar2);
    h = *(HFONT *)(param_1 + 0x30);
    if (*(HFONT *)(param_1 + 0x30) == (HFONT)0x0) {
      h = wParam;
    }
    h_00 = SelectObject(hdc,h);
    GetTextExtentPoint32A(hdc,local_a0,1,&local_d4);
    SelectObject(hdc,h_00);
    SetWindowPos(pHVar2,(HWND)0x0,0,0,local_cc.right - local_cc.left,local_d4.cy + 6,0xe);
    ReleaseDC(pHVar2,hdc);
    local_ac[0] = 0xac;
    SendMessageA(pHVar2,0x608,0,(LPARAM)local_ac);
  }
  return pHVar2;
}


