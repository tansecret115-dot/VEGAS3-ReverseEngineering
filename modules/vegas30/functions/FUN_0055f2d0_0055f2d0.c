/* Module: vegas30.exe
   Function: FUN_0055f2d0
   Address: 0055f2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055f2d0(HWND param_1)

{
  LONG Y;
  HDC hdc;
  HWND hWnd;
  HWND hWnd_00;
  int iVar1;
  WPARAM WVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  LPARAM lParam;
  tagPOINT local_70;
  tagRECT local_68;
  undefined4 *local_58 [4];
  undefined4 local_48;
  WPARAM local_44;
  tagTEXTMETRICA local_38;
  
  GetClientRect(param_1,&local_68);
  Y = local_68.bottom;
  GetWindowRect(param_1,&local_68);
  SetWindowPos(param_1,(HWND)0x0,0,0,local_68.right - local_68.left,
               (local_68.bottom - local_68.top) + 200,0x46);
  GetClientRect(param_1,&local_68);
  hdc = GetDC(param_1);
  GetTextMetricsA(hdc,&local_38);
  local_70.y = local_38.tmDescent + local_38.tmHeight;
  LPtoDP(hdc,&local_70,1);
  iVar1 = local_70.y + 2;
  ReleaseDC(param_1,hdc);
  hWnd = CreateWindowExA(0x200,"SysListView32","",0x4001804d,1,Y,local_68.right + -2,
                         (local_68.bottom - iVar1) - Y,param_1,(HMENU)&DAT_00000550,DAT_006471fc,
                         (LPVOID)0x0);
  hWnd_00 = CreateWindowExA(0x20000,"static","",0x4000000c,1,local_68.bottom - local_70.y,
                            local_68.right + -2,local_70.y,param_1,(HMENU)&DAT_00000551,DAT_006471fc
                            ,(LPVOID)0x0);
  WVar2 = 0;
  ppuVar3 = local_58;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar3 = (undefined4 *)0x0;
    ppuVar3 = ppuVar3 + 1;
  }
  local_58[0] = (undefined4 *)0xf;
  if (DAT_0064552c != 0) {
    puVar4 = &DAT_006454d4;
    do {
      local_58[1] = (undefined4 *)puVar4[1];
      local_58[2] = (undefined4 *)*puVar4;
      local_58[3] = puVar4 + -3;
      local_48 = 10;
      local_44 = WVar2;
      SendMessageA(hWnd,0x101b,WVar2,(LPARAM)local_58);
      WVar2 = WVar2 + 1;
      puVar4 = puVar4 + 5;
    } while (WVar2 < DAT_0064552c);
  }
  SendMessageA(hWnd,0x1003,1,DAT_00659528);
  lParam = 0;
  WVar2 = _SfGetUIFont_4(100);
  SendMessageA(hWnd_00,0x30,WVar2,lParam);
  ShowWindow(hWnd,5);
  ShowWindow(hWnd_00,5);
  return 1;
}


