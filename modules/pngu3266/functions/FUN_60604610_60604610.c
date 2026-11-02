/* Module: pngu3266.dll
   Function: FUN_60604610
   Address: 60604610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_60604610(int param_1,WPARAM param_2,int *param_3)

{
  uint uVar1;
  POINT pt;
  HWND hWnd;
  BOOL BVar2;
  HWND local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  tagPOINT local_c;
  
  if (-1 < param_1) {
    uVar1 = param_3[1];
    if ((0x1ff < uVar1) &&
       (((uVar1 < 0x203 ||
         ((0x203 < uVar1 && ((uVar1 < 0x206 || ((0x206 < uVar1 && (uVar1 < 0x209)))))))) &&
        (DAT_60649ddc != (HWND)0x0)))) {
      local_20 = param_3[2];
      local_1c = param_3[3];
      local_14 = param_3[5];
      local_10 = param_3[6];
      local_18 = param_3[4];
      local_c.x = (LONG)*(ushort *)(param_3 + 3);
      local_c.y = local_1c >> 0x10;
      local_28 = (HWND)*param_3;
      pt.y = local_c.y;
      pt.x = local_c.x;
      local_24 = uVar1;
      hWnd = ChildWindowFromPointEx(local_28,pt,5);
      if (((hWnd == (HWND)0x0) || (hWnd == (HWND)*param_3)) ||
         (BVar2 = IsWindowEnabled(hWnd), BVar2 != 0)) {
        DAT_60649de8 = (HWND)0x0;
      }
      else {
        MapWindowPoints((HWND)*param_3,hWnd,&local_c,1);
        local_1c = CONCAT22((undefined2)local_c.y,(undefined2)local_c.x);
        DAT_60649de8 = hWnd;
        local_28 = hWnd;
      }
      if (DAT_60649ddc != (HWND)0x0) {
        SendMessageA(DAT_60649ddc,0x407,0,(LPARAM)&local_28);
      }
    }
    CallNextHookEx(DAT_60649dd8,param_1,param_2,(LPARAM)param_3);
    return;
  }
  CallNextHookEx(DAT_60649dd8,param_1,param_2,(LPARAM)param_3);
  return;
}


