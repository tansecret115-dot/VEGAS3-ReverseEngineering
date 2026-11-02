/* Module: vegas30.exe
   Function: FUN_00429ef0
   Address: 00429ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429ef0(HWND param_1,undefined4 param_2)

{
  int iVar1;
  HWND hWnd;
  LPARAM lParam;
  WPARAM WVar2;
  int lParam_00;
  int local_108;
  undefined1 local_104 [260];
  
  hWnd = GetDlgItem(param_1,0x5e9);
  lParam_00 = 0;
  SendMessageA(hWnd,0x14b,0,0);
  lParam = _SfGetString_8(DAT_00647204,0x128);
  SendMessageA(hWnd,0x143,0,lParam);
  SendMessageA(hWnd,0x151,0,-1);
  if (DAT_0064b57c == (int *)0x0) {
    local_108 = 0;
  }
  else {
    local_108 = *DAT_0064b57c;
  }
  if (0 < local_108) {
    do {
      iVar1 = *(int *)(DAT_0064b57c[2] + lParam_00 * 4);
      if (*(int *)(iVar1 + 4) < 0) {
        SfPrintF(local_104,&DAT_0060fa70,iVar1 + 0x14c);
      }
      else {
        SfPrintF(local_104,"%s (%d,%d)",iVar1 + 0x14c,*(int *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8)
                );
      }
      if ((*(uint *)(iVar1 + 0x1a8) & 0x100000) != 0) {
        WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
        SendMessageA(hWnd,0x151,WVar2,lParam_00);
      }
      lParam_00 = lParam_00 + 1;
    } while (lParam_00 < local_108);
  }
  WVar2 = FUN_004298c0(hWnd,param_2);
  SendMessageA(hWnd,0x14e,WVar2,0);
  return;
}


