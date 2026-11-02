/* Module: vegas30.exe
   Function: FUN_004dc0b0
   Address: 004dc0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dc0b0(undefined4 param_1,int param_2)

{
  int iVar1;
  HWND hWnd;
  int *piVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  LPARAM lParam;
  int iVar5;
  LRESULT LVar6;
  
  if ((((DAT_0064762c != 0) && (piVar2 = (int *)FUN_005b8760(DAT_0064b138), piVar2 != (int *)0x0))
      && (iVar1 = *(int *)(DAT_0064762c + 0x70), iVar1 != 0)) &&
     ((hWnd = *(HWND *)(iVar1 + 0xf1c), hWnd != (HWND)0x0 && (iVar5 = *piVar2, iVar5 != 0)))) {
    WVar3 = SendMessageA(hWnd,0x147,0,0);
    if (-1 < (int)WVar3) {
      if ((WVar3 != 0) && (DAT_006495dc != 0)) {
        LVar4 = SendMessageA(hWnd,0x150,WVar3,0);
        FUN_004dc360(param_1,LVar4,0);
      }
      if (param_2 == 0) {
        if (WVar3 != 0) {
          SendMessageA(hWnd,0x14e,0,0);
          FUN_004de320(iVar1,0,0,0,0,0);
        }
        SendMessageA(hWnd,0x14b,0,0);
        SendMessageA(hWnd,0x141,0x104,0);
        lParam = _SfGetString_8(DAT_00647204,0x4ff0);
        WVar3 = SendMessageA(hWnd,0x14a,0,lParam);
        SendMessageA(hWnd,0x151,WVar3,0);
        SendMessageA(hWnd,0x14e,0,0);
        while (iVar5 = iVar5 + -1, -1 < iVar5) {
          _SfList_DeleteList_16(piVar2,iVar5,1,0);
        }
      }
      else {
        if (WVar3 == 0) {
          return;
        }
        LVar4 = SendMessageA(hWnd,0x150,WVar3,0);
        iVar5 = _SfList_FindSpecificItemRange_16(piVar2,0,0xffffffff,LVar4);
        if (iVar5 < 0) {
          return;
        }
        SendMessageA(hWnd,0x14e,WVar3 - 1,0);
        FUN_004dc2b0(iVar1,hWnd,WVar3 - 1);
        SendMessageA(hWnd,0x151,WVar3,0);
        SendMessageA(hWnd,0x144,WVar3,0);
        _SfList_DeleteList_16(piVar2,iVar5,1,0);
        LVar4 = SendMessageA(hWnd,0x146,0,0);
        LVar6 = SendMessageA(hWnd,0x147,0,0);
        if ((1 < LVar4) && (LVar6 == 0)) {
          SendMessageA(hWnd,0x14e,1,0);
          FUN_004dc2b0(iVar1,hWnd,1);
        }
      }
      FUN_004de230(iVar1,iVar1 + 0x80);
    }
  }
  return;
}


