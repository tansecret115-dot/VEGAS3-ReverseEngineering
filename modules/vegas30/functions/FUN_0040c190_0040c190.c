/* Module: vegas30.exe
   Function: FUN_0040c190
   Address: 0040c190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040c190(int param_1,int param_2)

{
  int iVar1;
  int y;
  HDWP hWinPosInfo;
  int iVar2;
  tagRECT local_10;
  
  if (param_2 != 1) {
    FUN_0040c2c0(param_1);
    iVar1 = *(int *)(param_1 + 8);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      hWinPosInfo = BeginDeferWindowPos(4);
      if (*(HWND *)(param_1 + 0xc0) != (HWND)0x0) {
        hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0xc0),(HWND)0x0,0,
                                     *(int *)(param_1 + 100),iVar1 + -0xf,*(int *)(param_1 + 0x60),
                                     0x14);
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        y = *(int *)(param_1 + 0x58);
        iVar2 = *(int *)(param_1 + 100) + -1;
        if (iVar2 - y < 5) {
          iVar2 = y;
        }
        hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x30),(HWND)0x0,3,y,iVar1 + -5,
                                     iVar2 - y,0x14);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        local_10.left = *(int *)(param_1 + 0x20);
        local_10.top = *(int *)(param_1 + 0x24);
        local_10.right = *(int *)(param_1 + 0x28);
        local_10.bottom = *(int *)(param_1 + 0x2c);
        InflateRect(&local_10,-3,-1);
        local_10.bottom = local_10.bottom + -4;
        hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x18),(HWND)0x0,local_10.left,
                                     local_10.top,local_10.right - local_10.left,
                                     local_10.bottom - local_10.top,0x14);
      }
      EndDeferWindowPos(hWinPosInfo);
      if (*(HWND *)(param_1 + 0xb4) != (HWND)0x0) {
        SetWindowPos(*(HWND *)(param_1 + 0xb4),(HWND)0x0,0,0,*(int *)(param_1 + 8),
                     *(int *)(param_1 + 100),0x44);
      }
    }
  }
  return;
}


