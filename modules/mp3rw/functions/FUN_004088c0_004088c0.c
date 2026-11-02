/* Module: mp3rw.dll
   Function: FUN_004088c0
   Address: 004088c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004088c0(undefined4 param_1,HWND param_2)

{
  HWND hWnd;
  BYTE *pBVar1;
  uchar local_c8 [200];
  
  hWnd = GetDlgItem(param_2,8000);
  if (hWnd != (HWND)0x0) {
    pBVar1 = FUN_0041f9f0(DAT_004a811c,0x2718);
    FUN_00420fe0(local_c8,pBVar1);
    SetWindowTextA(hWnd,(LPCSTR)local_c8);
  }
  return;
}


