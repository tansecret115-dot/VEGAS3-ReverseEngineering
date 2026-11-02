/* Module: vidcap30.exe
   Function: FUN_0045b610
   Address: 0045b610
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0045b610(undefined4 param_1,WPARAM param_2,LPARAM param_3,LPARAM param_4,LPARAM param_5,
                 int param_6,WPARAM param_7,int param_8)

{
  bool bVar1;
  HWND hWnd;
  LPARAM lParam;
  uint uVar2;
  HWND hWnd_00;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar1 = false;
  hWnd = (HWND)_SfCreateToolbarEmpty_16(DAT_005ba2a0,param_1,0x5000094c,param_2);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x454,0,9);
    SendMessageA(hWnd,0x430,0,param_3);
    SendMessageA(hWnd,0x434,0,param_4);
    SendMessageA(hWnd,0x436,0,param_5);
    if (0 < (int)param_7) {
      param_2 = param_7;
      piVar3 = (int *)(param_6 + 0x10);
      do {
        if (*piVar3 != 0) {
          lParam = _SfGetString_8(DAT_005ba2a0,*piVar3);
          SendMessageA(hWnd,0x41c,0,lParam);
          *piVar3 = iVar4;
          iVar4 = iVar4 + 1;
          bVar1 = true;
        }
        piVar3 = piVar3 + 5;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      if (bVar1) {
        uVar2 = GetWindowLongA(hWnd,-0x10);
        SetWindowLongA(hWnd,-0x10,uVar2 | 0x1000);
      }
    }
    SendMessageA(hWnd,0x414,param_7,param_6);
    hWnd_00 = (HWND)SendMessageA(hWnd,0x423,0,0);
    uVar2 = GetWindowLongA(hWnd_00,-0x10);
    SetWindowLongA(hWnd_00,-0x10,uVar2 | 1);
    if (param_8 != 0) {
      _SfGetToolbarSize_8(hWnd,param_8);
    }
  }
  return hWnd;
}


