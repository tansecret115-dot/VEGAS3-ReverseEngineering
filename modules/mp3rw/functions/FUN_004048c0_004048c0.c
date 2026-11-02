/* Module: mp3rw.dll
   Function: FUN_004048c0
   Address: 004048c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004048c0(HWND param_1,int param_2)

{
  ushort uVar1;
  BITMAPINFO *lpbmi;
  HDC hdc;
  HWND hWnd;
  DWORD DVar2;
  BYTE *lpBits;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  if (*(int *)(param_2 + 0x1ec) != 0) {
    hdc = BeginPaint(param_1,&local_40);
    hWnd = GetDlgItem(param_1,0x1f59);
    GetClientRect(hWnd,&local_50);
    lpbmi = *(BITMAPINFO **)(param_2 + 0x1ec);
    if (lpbmi == (BITMAPINFO *)0x0) {
      lpBits = (BYTE *)0x0;
    }
    else {
      DVar2 = (lpbmi->bmiHeader).biClrUsed;
      if (DVar2 == 0) {
        uVar1 = (lpbmi->bmiHeader).biBitCount;
        if (uVar1 < 9) {
          DVar2 = 1 << ((byte)uVar1 & 0x1f);
        }
      }
      lpBits = &lpbmi->bmiColors[DVar2 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
    }
    StretchDIBits(hdc,local_50.left,local_50.top,*(int *)(param_2 + 500),*(int *)(param_2 + 0x1f8),0
                  ,0,*(int *)(param_2 + 500),*(int *)(param_2 + 0x1f8),lpBits,lpbmi,0,0xcc0020);
    EndPaint(param_1,&local_40);
  }
  return;
}


