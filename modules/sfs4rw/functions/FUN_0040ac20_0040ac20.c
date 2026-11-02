/* Module: sfs4rw.dll
   Function: FUN_0040ac20
   Address: 0040ac20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040ac20(int param_1,HWND param_2)

{
  HWND hWnd;
  BYTE *pBVar1;
  uchar local_c8 [200];
  
  hWnd = GetDlgItem(param_2,0xe71);
  if (hWnd != (HWND)0x0) {
    if ((*(uint *)(param_1 + 0x1d4) & 0x800) == 0) {
      pBVar1 = FUN_0041f970(DAT_004a811c,0x275f);
    }
    else {
      pBVar1 = FUN_0041f970(DAT_004a811c,0x2760);
    }
    FUN_00420f60(local_c8,pBVar1);
    SetWindowTextA(hWnd,(LPCSTR)local_c8);
  }
  return;
}


