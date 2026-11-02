/* Module: vegas30.exe
   Function: FUN_005e3280
   Address: 005e3280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e3280(HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  int iVar1;
  HWND hWnd_00;
  uint uVar2;
  UINT Msg;
  LPARAM lParam;
  CHAR local_200 [256];
  undefined1 local_100 [256];
  
  uVar2 = 0;
  hWnd = GetDlgItem(param_1,0x45b);
  if ((hWnd != (HWND)0x0) && (iVar1 = GetWindowTextA(hWnd,local_200,0x100), iVar1 != 0)) {
    uVar2 = _SfTextToLongToken_8(local_200,0);
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    else if (DAT_0064868c < uVar2) {
      uVar2 = DAT_0064868c;
    }
  }
  if (uVar2 != *(uint *)(param_2 + 0x350)) {
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    else if (DAT_0064868c < uVar2) {
      uVar2 = DAT_0064868c;
    }
    *(uint *)(param_2 + 0x350) = uVar2;
    if (*(int *)(param_2 + 0xd58) == 0) {
      if (*(int *)(param_2 + 0xd30) == 0) {
        lParam = 0;
        Msg = 0x468;
        hWnd_00 = GetParent(param_1);
        SendMessageA(hWnd_00,Msg,(WPARAM)param_1,lParam);
      }
      *(undefined4 *)(param_2 + 0xd4c) = 1;
    }
  }
  if ((param_3 == 0x200) && (SfPrintF(local_100,&DAT_00619b24,uVar2), hWnd != (HWND)0x0)) {
    SfSetWindowText(hWnd,local_100);
  }
  return 1;
}


