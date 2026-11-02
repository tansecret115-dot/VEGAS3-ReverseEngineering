/* Module: vidcap30.exe
   Function: FUN_00447380
   Address: 00447380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00447380(int param_1,undefined4 param_2)

{
  HWND pHVar1;
  int iVar2;
  int X;
  HDWP hWinPosInfo;
  int iVar3;
  
  iVar3 = (int)(short)((uint)param_2 >> 0x10);
  hWinPosInfo = BeginDeferWindowPos(3);
  FUN_0040a2d0(param_1,DAT_005bb9d0,*(undefined4 *)(param_1 + 0x194),param_1 + 0x198,param_1 + 0x1c8
               ,param_1 + 0x1b8,(int *)(param_1 + 0x1a8),0);
  pHVar1 = *(HWND *)(param_1 + 0x194);
  if (pHVar1 != (HWND)0x0) {
    iVar2 = *(int *)(param_1 + 0x1ac);
    X = *(int *)(param_1 + 0x1a8);
    if (hWinPosInfo == (HDWP)0x0) {
      MoveWindow(pHVar1,X,iVar2,*(int *)(param_1 + 0x1b0) - X,*(int *)(param_1 + 0x1b4) - iVar2,1);
    }
    else {
      hWinPosInfo = DeferWindowPos(hWinPosInfo,pHVar1,(HWND)0x0,X,iVar2,
                                   *(int *)(param_1 + 0x1b0) - X,*(int *)(param_1 + 0x1b4) - iVar2,4
                                  );
    }
  }
  pHVar1 = *(HWND *)(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (pHVar1 != (HWND)0x0) {
    if (hWinPosInfo == (HDWP)0x0) {
      MoveWindow(pHVar1,0,iVar2,*(int *)(param_1 + 0x1a0),iVar3 - iVar2,1);
      goto LAB_00447460;
    }
    hWinPosInfo = DeferWindowPos(hWinPosInfo,pHVar1,(HWND)0x0,0,iVar2,*(int *)(param_1 + 0x1a0),
                                 iVar3 - iVar2,0x44);
  }
  if (hWinPosInfo != (HDWP)0x0) {
    EndDeferWindowPos(hWinPosInfo);
  }
LAB_00447460:
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
  return;
}


