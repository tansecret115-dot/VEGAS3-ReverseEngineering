/* Module: vegas30.exe
   Function: FUN_005556e0
   Address: 005556e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005556e0(HWND param_1,int param_2)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  HWND pHVar3;
  undefined8 uVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  CHAR local_28 [40];
  
  pHVar3 = param_1;
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  hWnd = GetDlgItem(param_1,0x4cf);
  LVar2 = SendMessageA(hWnd,Msg,wParam,lParam);
  if ((LVar2 != -1) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + LVar2 * 4), *(int *)(iVar1 + 0x78) != 0
     )) {
    local_28[0] = '\0';
    pHVar3 = GetDlgItem(pHVar3,0x6627);
    GetWindowTextA(pHVar3,local_28,0x28);
    uVar4 = _SfTextToNanoTimeToken2_40
                      (local_28,&DAT_0064b110,*(undefined4 *)(iVar1 + 0x80),
                       *(undefined4 *)(iVar1 + 0x84),0,0,0,0x40000000,6,&param_1);
    *(undefined8 *)(iVar1 + 0x80) = uVar4;
    _SfNanoTimeToTextEx_20
              (local_28,&DAT_0064b110,*(undefined4 *)(iVar1 + 0x80),(int)((ulonglong)uVar4 >> 0x20),
               2);
    SfSetWindowText(pHVar3,&DAT_0060fa70,local_28);
    *(undefined4 *)(iVar1 + 0x78) = 0;
  }
  return;
}


