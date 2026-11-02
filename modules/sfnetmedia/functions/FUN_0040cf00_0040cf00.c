/* Module: sfnetmedia.dll
   Function: FUN_0040cf00
   Address: 0040cf00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040cf00(void *this,int *param_1)

{
  HWND pHVar1;
  int nIDDlgItem;
  int iVar2;
  tagRECT *lpPoints;
  UINT cPoints;
  int local_1c;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  iVar2 = 99999;
  local_1c = 99999;
  local_14 = -99999;
  local_18 = -99999;
  nIDDlgItem = 0x259;
  do {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 4),nIDDlgItem);
    if (pHVar1 != (HWND)0x0) {
      GetWindowRect(pHVar1,&local_10);
      lpPoints = &local_10;
      cPoints = 2;
      pHVar1 = GetParent(pHVar1);
      MapWindowPoints((HWND)0x0,pHVar1,(LPPOINT)lpPoints,cPoints);
      if (local_10.left <= iVar2) {
        iVar2 = local_10.left;
      }
      if (local_10.top <= local_1c) {
        local_1c = local_10.top;
      }
      if (local_18 <= local_10.right) {
        local_18 = local_10.right;
      }
      if (local_14 <= local_10.bottom) {
        local_14 = local_10.bottom;
      }
    }
    nIDDlgItem = nIDDlgItem + 1;
  } while (nIDDlgItem < 0x262);
  *param_1 = iVar2;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}


