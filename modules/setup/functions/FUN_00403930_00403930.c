/* Module: Setup.exe
   Function: FUN_00403930
   Address: 00403930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403930(HWND param_1)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  int iVar3;
  int cx;
  int cy;
  UINT uFlags;
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_10);
  iVar2 = local_10.right - local_10.left;
  iVar3 = local_10.bottom - local_10.top;
  hWnd = GetParent(param_1);
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_10);
    SetWindowPos(param_1,(HWND)0x0,((local_10.right - local_10.left) - iVar2) / 2 + local_10.left,
                 ((local_10.bottom - local_10.top) - iVar3) / 2 + local_10.top,0,0,0x65);
    return;
  }
  uFlags = 0x65;
  cy = 0;
  cx = 0;
  iVar1 = GetSystemMetrics(0x11);
  iVar3 = (iVar1 - iVar3) / 2;
  iVar1 = GetSystemMetrics(0x10);
  SetWindowPos(param_1,(HWND)0x0,(iVar1 - iVar2) / 2,iVar3,cx,cy,uFlags);
  return;
}


