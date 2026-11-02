/* Module: sfs4rw.dll
   Function: FUN_0040acb0
   Address: 0040acb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040acb0(undefined4 param_1,HWND param_2)

{
  HWND hWnd;
  BYTE *pBVar1;
  uchar local_104 [260];
  
  hWnd = GetDlgItem(param_2,0xe74);
  if (hWnd != (HWND)0x0) {
    pBVar1 = FUN_0041f970(DAT_004a811c,0x2765);
    FUN_00420f60(local_104,pBVar1);
    SetWindowTextA(hWnd,(LPCSTR)local_104);
  }
  return;
}


