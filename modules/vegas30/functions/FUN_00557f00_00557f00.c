/* Module: vegas30.exe
   Function: FUN_00557f00
   Address: 00557f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00557f00(HWND param_1,int param_2)

{
  HWND hWnd;
  LPARAM lParam;
  WPARAM WVar1;
  LRESULT LVar2;
  int iVar3;
  LPARAM *pLVar4;
  WPARAM wParam;
  LPARAM local_58 [22];
  
  local_58[1] = 1;
  local_58[2] = 0x5277;
  local_58[3] = 2;
  local_58[4] = 0x5278;
  local_58[5] = 3;
  local_58[6] = 0x5279;
  local_58[7] = 4;
  local_58[8] = 0x5280;
  local_58[9] = 0xf;
  local_58[10] = 0x5281;
  local_58[0xb] = 0x10;
  local_58[0xc] = 0x527f;
  local_58[0xd] = 10;
  local_58[0xe] = 0x527e;
  local_58[0xf] = 9;
  local_58[0x10] = 0x527b;
  local_58[0x11] = 6;
  local_58[0x12] = 0x527d;
  local_58[0x13] = 8;
  local_58[0x14] = 0x527c;
  local_58[0x15] = 7;
  hWnd = GetDlgItem(param_1,0x50b);
  pLVar4 = local_58 + 1;
  iVar3 = 0xb;
  do {
    lParam = _SfGetString_8(DAT_00647204,pLVar4[-1]);
    WVar1 = SendMessageA(hWnd,0x143,0,lParam);
    SendMessageA(hWnd,0x151,WVar1,*pLVar4);
    pLVar4 = pLVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  WVar1 = 0;
  param_1 = (HWND)0x0;
  do {
    LVar2 = SendMessageA(hWnd,0x150,WVar1,0);
    wParam = WVar1;
    if (LVar2 == *(int *)(param_2 + 0x24)) break;
    WVar1 = WVar1 + 1;
    wParam = (WPARAM)param_1;
  } while (WVar1 < 0xb);
  SendMessageA(hWnd,0x14e,wParam,0);
  return;
}


