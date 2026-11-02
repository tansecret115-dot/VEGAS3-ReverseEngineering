/* Module: sftrkfx1.dll
   Function: FUN_5cbb10d0
   Address: 5cbb10d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbb10d0(int param_1,undefined8 param_2)

{
  DWORD DVar1;
  HDC pHVar2;
  HBITMAP pHVar3;
  HGDIOBJ h;
  COLORREF CVar4;
  uint *puVar5;
  RECT local_20;
  RECT local_10;
  
  DVar1 = GetSysColor(0xf);
  *(DWORD *)(param_1 + 0x2c) = DVar1;
  pHVar2 = GetDC((HWND)0x0);
  pHVar3 = CreateCompatibleBitmap(pHVar2,(int)param_2,param_2._4_4_);
  *(HBITMAP *)(param_1 + 0x28) = pHVar3;
  ReleaseDC((HWND)0x0,pHVar2);
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  pHVar2 = CreateCompatibleDC((HDC)0x0);
  SetBkMode(pHVar2,1);
  h = SelectObject(pHVar2,*(HGDIOBJ *)(param_1 + 0x28));
  SetBkColor(pHVar2,*(COLORREF *)(param_1 + 0x2c));
  local_10.left = 0;
  local_10.top = 0;
  local_10._8_8_ = param_2;
  ExtTextOutA(pHVar2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  SetTextColor(pHVar2,0xff0000);
  local_20.top = 0;
  local_20.bottom = param_2._4_4_;
  local_20.left = (int)param_2;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_20._8_8_ = param_2;
    CVar4 = GetSysColor(2);
    if (CVar4 == 0xffffff) {
      CVar4 = FUN_5cbdda20(0x8a);
    }
    if ((DAT_5cc114b0 & 1) == 0) {
      DAT_5cc114b0 = DAT_5cc114b0 | 1;
      DAT_5cc114bc = CVar4;
    }
    local_20.right = local_20.left;
    local_20.left = ftol();
    FUN_5cbb1260(pHVar2,&local_20,DAT_5cc114bc);
  }
  else {
    puVar5 = &DAT_5cc045c4;
    do {
      local_20.right = local_20.left;
      local_20.left = ftol();
      FUN_5cbb1290(pHVar2,&local_20.left,puVar5[-2],*puVar5);
      puVar5 = puVar5 + 2;
    } while (puVar5 < &DAT_5cc045d4);
  }
  SelectObject(pHVar2,h);
  DeleteDC(pHVar2);
  return 1;
}


