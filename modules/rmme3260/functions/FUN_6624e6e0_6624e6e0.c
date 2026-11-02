/* Module: rmme3260.dll
   Function: FUN_6624e6e0
   Address: 6624e6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624e6e0(undefined4 *param_1,int param_2)

{
  HWND hWnd;
  HDC hDC;
  HBRUSH hbr;
  tagRECT local_14;
  
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) &&
     ((*(byte *)(param_1 + 0x112) & 0x40) != 0)) {
    if (param_1[0x110] == 0) {
      hWnd = (HWND)*param_1;
      hDC = GetDC(hWnd);
      hbr = CreateSolidBrush(param_1[0x10c]);
      GetClientRect(hWnd,&local_14);
      FillRect(hDC,&local_14,hbr);
      DeleteObject(hbr);
      ReleaseDC(hWnd,hDC);
      param_1[0x111] = 0;
    }
    return 0;
  }
  return 0x80004005;
}


