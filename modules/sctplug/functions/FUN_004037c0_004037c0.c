/* Module: sctplug.dll
   Function: FUN_004037c0
   Address: 004037c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004037c0(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  WPARAM wParam;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d3);
  LVar1 = SendMessageA(hWnd,0x146,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      pMem = (LPCVOID)SendMessageA(hWnd,0x150,wParam,0);
      if (pMem != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  SendMessageA(hWnd,0x14b,0,0);
  return;
}


