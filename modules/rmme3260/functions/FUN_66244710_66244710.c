/* Module: rmme3260.dll
   Function: FUN_66244710
   Address: 66244710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66244710(int param_1)

{
  HWND hWnd;
  HDC hDC;
  HBRUSH hbr;
  tagRECT local_14;
  
  if (((*(byte *)(param_1 + 0x26) & 2) != 0) && ((*(byte *)(param_1 + 0x487) & 0x40) != 0)) {
    hWnd = *(HWND *)(param_1 + 0x3f);
    hDC = GetDC(hWnd);
    hbr = CreateSolidBrush(0);
    GetClientRect(hWnd,&local_14);
    FillRect(hDC,&local_14,hbr);
    DeleteObject(hbr);
    ReleaseDC(hWnd,hDC);
  }
  return;
}


