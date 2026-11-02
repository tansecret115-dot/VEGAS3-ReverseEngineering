/* Module: vidcap30.exe
   Function: FUN_00404c90
   Address: 00404c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404c90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int y;
  int iVar3;
  HDWP hWinPosInfo;
  int y_00;
  BOOL BVar4;
  int x;
  int iVar5;
  
  if (param_2 != 1) {
    FUN_00404e00(param_1);
    iVar2 = *(int *)(param_1 + 8);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      hWinPosInfo = BeginDeferWindowPos(4);
      x = *(int *)(param_1 + 0x24) + 3;
      y = *(int *)(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x2c) + -2;
      iVar3 = *(int *)(param_1 + 0x5c);
      y_00 = iVar3 + 3;
      iVar1 = *(int *)(param_1 + 0x68) + -1;
      if (*(HWND *)(param_1 + 0x9c) != (HWND)0x0) {
        hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x9c),(HWND)0x0,0,
                                     *(int *)(param_1 + 0x68),iVar2 + -0xf,*(int *)(param_1 + 100),
                                     0x14);
      }
      if (*(HWND *)(param_1 + 0x1c) != (HWND)0x0) {
        BVar4 = IsWindowVisible(*(HWND *)(param_1 + 0x1c));
        if (BVar4 != 0) {
          hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x1c),(HWND)0x0,x,y_00,
                                       iVar5 - x,iVar1 - y_00,0x14);
        }
      }
      if (*(HWND *)(param_1 + 0x34) != (HWND)0x0) {
        BVar4 = IsWindowVisible(*(HWND *)(param_1 + 0x34));
        if (BVar4 != 0) {
          hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x34),(HWND)0x0,x,y_00,
                                       iVar5 - x,iVar1 - y_00,0x14);
        }
      }
      if (*(HWND *)(param_1 + 0x18) != (HWND)0x0) {
        hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x18),(HWND)0x0,x,y,iVar5 - x,
                                     (iVar3 + -3) - y,0x14);
      }
      EndDeferWindowPos(hWinPosInfo);
      if (*(HWND *)(param_1 + 0x90) != (HWND)0x0) {
        SetWindowPos(*(HWND *)(param_1 + 0x90),(HWND)0x0,0,0,*(int *)(param_1 + 8),
                     *(int *)(param_1 + 0x68),0x44);
      }
      FUN_00411120(1);
    }
  }
  return;
}


