/* Module: vegas30.exe
   Function: FUN_0054f3a0
   Address: 0054f3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054f3a0(int param_1,int param_2,uint param_3)

{
  HDWP hWinPosInfo;
  HDC hdc;
  HGDIOBJ h;
  int c;
  int y;
  tagSIZE *lpsz;
  tagSIZE local_28;
  undefined1 local_20 [4];
  int local_1c;
  int local_14;
  undefined1 local_10 [12];
  int local_4;
  
  hWinPosInfo = BeginDeferWindowPos(4);
  if (hWinPosInfo != (HDWP)0x0) {
    y = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_00412930(param_1,*(int *)(param_1 + 0x90),local_10,0,0,local_20,0,0,0);
      hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x90),(HWND)0x0,0,local_1c,
                                   param_2,local_14 - local_1c,0x14);
      param_3 = ((int)(param_3 - local_4) < 1) - 1 & param_3 - local_4;
      y = local_4;
    }
    hdc = GetDC(*(HWND *)(param_1 + 0x8c));
    h = (HGDIOBJ)_SfGetUIFont_4(100);
    SelectObject(hdc,h);
    lpsz = &local_28;
    c = lstrlenA("Vegas.MediaPoolStatus");
    GetTextExtentPointA(hdc,"Vegas.MediaPoolStatus",c,lpsz);
    ReleaseDC(*(HWND *)(param_1 + 0x8c),hdc);
    param_3 = param_3 + local_28.cy * -2;
    param_3 = ((int)param_3 < 1) - 1 & param_3;
    if (*(HWND *)(param_1 + 0x9c) != (HWND)0x0) {
      hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x9c),(HWND)0x0,0,y,param_2,
                                   param_3,0x14);
    }
    if (*(HWND *)(param_1 + 0x98) != (HWND)0x0) {
      hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x98),(HWND)0x0,0,y,param_2,
                                   param_3,0x14);
    }
    if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
      hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0xa0),(HWND)0x0,0,param_3 + y,
                                   param_2,local_28.cy * 2,0x14);
    }
    if (hWinPosInfo != (HDWP)0x0) {
      EndDeferWindowPos(hWinPosInfo);
    }
  }
  return 0;
}


