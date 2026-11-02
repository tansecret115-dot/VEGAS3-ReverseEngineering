/* Module: mcplugrw.dll
   Function: FUN_00407f90
   Address: 00407f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407f90(int param_1,HWND param_2)

{
  HWND hWnd;
  BYTE *pBVar1;
  LPCSTR lpString;
  uchar local_104 [260];
  
  hWnd = GetDlgItem(param_2,0x1f4a);
  if (hWnd != (HWND)0x0) {
    if ((*(uint *)(param_1 + 0x1d4) & 0x800) != 0) {
      pBVar1 = FUN_0041f9f0(DAT_004a811c,0x2770);
      FUN_00420fe0(local_104,pBVar1);
      SetWindowTextA(hWnd,(LPCSTR)local_104);
      return;
    }
    lpString = FUN_0041f9f0(DAT_004a811c,0x276e);
    SetWindowTextA(hWnd,lpString);
  }
  return;
}


