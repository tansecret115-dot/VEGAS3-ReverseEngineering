/* Module: sfs4rw.dll
   Function: FUN_00406e00
   Address: 00406e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406e00(int param_1,HWND param_2)

{
  HWND pHVar1;
  BYTE *pBVar2;
  uchar local_100 [256];
  
  pHVar1 = GetDlgItem(param_2,0xe75);
  if (pHVar1 != (HWND)0x0) {
    pBVar2 = FUN_0041f970(DAT_004a811c,(*(int *)(param_1 + 0x254) != 0) + 0x2769);
    FUN_00420f60(local_100,pBVar2);
    SetWindowTextA(pHVar1,(LPCSTR)local_100);
  }
  pHVar1 = GetDlgItem(param_2,0xe77);
  if (pHVar1 != (HWND)0x0) {
    if ((0 < *(int *)(param_1 + 0x1dc)) && ((*(byte *)(param_1 + 0x1d8) & 4) != 0)) {
      pBVar2 = FUN_0041f970(DAT_004a811c,0x276b);
      FUN_00420f60(local_100,pBVar2);
      SetWindowTextA(pHVar1,(LPCSTR)local_100);
      return;
    }
    ShowWindow(pHVar1,0);
  }
  return;
}


