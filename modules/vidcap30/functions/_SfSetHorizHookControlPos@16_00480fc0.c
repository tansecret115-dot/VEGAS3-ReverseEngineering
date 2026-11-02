/* Module: vidcap30.exe
   Function: _SfSetHorizHookControlPos@16
   Address: 00480fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfSetHorizHookControlPos_16(HWND param_1,HWND param_2,int param_3,int param_4)

{
  HWND pHVar1;
  int cy;
  int cx;
  HWND hWndInsertAfter;
  tagRECT *ptVar2;
  UINT uFlags;
  tagRECT local_20;
  tagRECT local_10;
  
                    /* 0x80fc0  612  _SfSetHorizHookControlPos@16 */
  if (param_2 == (HWND)0x0) {
    param_2 = GetParent(param_1);
  }
  ptVar2 = &local_10;
  pHVar1 = GetDlgItem(param_2,param_4);
  GetWindowRect(pHVar1,ptVar2);
  ptVar2 = &local_20;
  pHVar1 = GetDlgItem(param_1,param_3);
  GetWindowRect(pHVar1,ptVar2);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_10,2);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_20,2);
  uFlags = 0;
  cy = local_20.bottom - local_20.top;
  cx = local_10.right - local_10.left;
  hWndInsertAfter = (HWND)0x0;
  pHVar1 = GetDlgItem(param_1,param_3);
  SetWindowPos(pHVar1,hWndInsertAfter,local_10.left,local_20.top,cx,cy,uFlags);
  return;
}


