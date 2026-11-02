/* Module: sftrkfx1.dll
   Function: caseD_205
   Address: 5cbb0360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 switchD_5cbaff39::caseD_205(void)

{
  HWND hWnd;
  LONG unaff_EBX;
  LONG unaff_EBP;
  int unaff_ESI;
  HWND unaff_EDI;
  WPARAM WStack00000014;
  undefined4 uStack00000018;
  int iStack0000001c;
  UINT Msg;
  WPARAM wParam;
  undefined1 *lParam;
  
  iStack0000001c = FUN_5cbafc90(unaff_ESI,unaff_EBP,unaff_EBX);
  if (-1 < iStack0000001c) {
    WStack00000014 = GetDlgCtrlID(unaff_EDI);
    lParam = &stack0x00000010;
    uStack00000018 = 0x1000;
    Msg = 0x4e;
    wParam = WStack00000014;
    hWnd = GetParent(unaff_EDI);
    SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  }
  return 0;
}


