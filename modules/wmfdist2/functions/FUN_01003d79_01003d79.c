/* Module: wmfdist2.exe
   Function: FUN_01003d79
   Address: 01003d79
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01003d79(HWND param_1,HWND param_2)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  int iVar3;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  
  GetWindowRect(param_1,&local_30);
  iVar2 = local_30.right - local_30.left;
  iVar1 = local_30.bottom - local_30.top;
  GetWindowRect(param_2,&local_20);
  local_c = local_20.bottom - local_20.top;
  iVar3 = local_20.right - local_20.left;
  hdc = GetDC(param_1);
  local_8 = GetDeviceCaps(hdc,8);
  local_10 = GetDeviceCaps(hdc,10);
  ReleaseDC(param_1,hdc);
  iVar3 = (iVar3 - iVar2) / 2 + local_20.left;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (local_8 < iVar3 + iVar2) {
    iVar3 = local_8 - iVar2;
  }
  iVar2 = (local_c - iVar1) / 2 + local_20.top;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (local_10 < iVar2 + iVar1) {
    iVar2 = local_10 - iVar1;
  }
  SetWindowPos(param_1,(HWND)0x0,iVar3,iVar2,0,0,5);
  return;
}


