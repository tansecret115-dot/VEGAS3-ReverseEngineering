/* Module: qt4plug.dll
   Function: FUN_5f5230c0
   Address: 5f5230c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f5230c0(void *this,BOOL param_1)

{
  HWND hWnd;
  BYTE *pBVar1;
  WPARAM WVar2;
  uint *puVar3;
  int lParam;
  uchar local_88 [132];
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e6);
  SendMessageA(hWnd,0x14b,0,0);
  EnableWindow(hWnd,param_1);
  lParam = 0;
  puVar3 = &DAT_5f596bb8;
  do {
    pBVar1 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,*puVar3);
    FUN_5f52c900(local_88,pBVar1);
    WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)local_88);
    lParam = lParam + 1;
    SendMessageA(hWnd,0x151,WVar2,lParam);
    puVar3 = puVar3 + 4;
  } while ((int)puVar3 < 0x5f596c38);
  WVar2 = FUN_5f5222c0(*(double *)((int)this + 0x50));
  if (WVar2 != 0xffffffff) {
    SendMessageA(hWnd,0x14e,WVar2,0);
    return;
  }
  FUN_5f52e2c0(hWnd,"%.6f");
  return;
}


