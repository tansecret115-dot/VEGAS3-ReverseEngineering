/* Module: sfs4rw.dll
   Function: FUN_0040a280
   Address: 0040a280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040a280(HWND param_1,int param_2)

{
  HWND hWnd;
  LPCSTR lpString;
  
  hWnd = GetDlgItem(param_1,0x1f4b);
  if (hWnd != (HWND)0x0) {
    lpString = FUN_0041f970(DAT_004a811c,((*(uint *)(param_2 + 0x1d8) & 0x80) != 0) + 0x275d);
    SetWindowTextA(hWnd,lpString);
  }
  return;
}


