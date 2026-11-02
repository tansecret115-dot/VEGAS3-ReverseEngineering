/* Module: vegas30.exe
   Function: FUN_00427a70
   Address: 00427a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427a70(int param_1,int param_2)

{
  int iVar1;
  UINT flags;
  RECT *lprcUpdate;
  tagRECT local_10;
  
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) {
    lprcUpdate = (RECT *)0x0;
    if (param_1 == 1) {
      InvalidateRect(*(HWND *)(iVar1 + 0xb8),(RECT *)0x0,0);
      lprcUpdate = (RECT *)(iVar1 + 0xa8);
    }
    else if (param_1 == 2) {
      InvalidateRect(*(HWND *)(iVar1 + 0xd0),(RECT *)0x0,0);
      lprcUpdate = (RECT *)(iVar1 + 0xc0);
    }
    else {
      InvalidateRect(*(HWND *)(iVar1 + 0xb8),(RECT *)0x0,0);
      InvalidateRect(*(HWND *)(iVar1 + 0xd0),(RECT *)0x0,0);
      InvalidateRect(*(HWND *)(iVar1 + 8),(RECT *)0x0,0);
      GetClientRect(*(HWND *)(iVar1 + 8),&local_10);
      FUN_00426140(iVar1,local_10.right - local_10.left,local_10.bottom - local_10.top,0,0);
    }
    flags = 5;
    if ((*(int *)(iVar1 + 0x88) == 0) || (param_2 != 0)) {
      flags = 0x105;
    }
    RedrawWindow(*(HWND *)(iVar1 + 0xd0),lprcUpdate,(HRGN)0x0,flags);
  }
  return;
}


