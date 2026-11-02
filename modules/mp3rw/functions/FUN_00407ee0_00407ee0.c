/* Module: mp3rw.dll
   Function: FUN_00407ee0
   Address: 00407ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407ee0(int param_1,HWND param_2,int param_3)

{
  HWND hWnd;
  BYTE *pBVar1;
  uchar local_c8 [200];
  
  hWnd = GetDlgItem(param_2,8000);
  if (hWnd != (HWND)0x0) {
    if ((*(uint *)(param_1 + 0x1d4) & 0x800) == 0) {
      if (param_3 == 0) {
        pBVar1 = FUN_0041f9f0(DAT_004a811c,0x2717);
      }
      else {
        pBVar1 = FUN_0041f9f0(DAT_004a811c,0x2767);
      }
    }
    else {
      pBVar1 = FUN_0041f9f0(DAT_004a811c,0x2719);
    }
    FUN_00420fe0(local_c8,pBVar1);
    SetWindowTextA(hWnd,(LPCSTR)local_c8);
  }
  return;
}


