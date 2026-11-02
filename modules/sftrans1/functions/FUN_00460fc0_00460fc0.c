/* Module: sftrans1.dll
   Function: FUN_00460fc0
   Address: 00460fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00460fc0(int param_1)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  HDWP hWinPosInfo;
  uint uVar3;
  int iVar4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x58e);
  LVar2 = SendMessageA(hWnd,0x147,0,0);
  if (-1 < LVar2) {
    hWinPosInfo = BeginDeferWindowPos(*(int *)(param_1 + 0x94));
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x94)) {
      do {
        if ((iVar4 != LVar2) || (uVar3 = 0x40, *(int *)(*(int *)(param_1 + 0x90) + iVar4 * 4) == 0))
        {
          uVar3 = 0x80;
        }
        if ((hWinPosInfo != (HDWP)0x0) &&
           (iVar1 = *(int *)(*(int *)(param_1 + 0x90) + iVar4 * 4), iVar1 != 0)) {
          hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(*(int *)(iVar1 + 4) + 4),(HWND)0x0,0,0,
                                       0,0,uVar3 | 7);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x94));
    }
    if (hWinPosInfo != (HDWP)0x0) {
      EndDeferWindowPos(hWinPosInfo);
    }
  }
  return;
}


