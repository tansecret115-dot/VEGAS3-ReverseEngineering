/* Module: sfs4rw.dll
   Function: FUN_00406d10
   Address: 00406d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406d10(HWND param_1,int param_2,int param_3,int param_4)

{
  HWND hWnd;
  BYTE *pBVar1;
  uchar local_104 [260];
  
  hWnd = GetDlgItem(param_1,0x1f44);
  if (hWnd == (HWND)0x0) {
    return;
  }
  if (param_3 == 0) {
    if (0 < param_2) {
      pBVar1 = FUN_0041f970(DAT_004a811c,(param_4 != 0) + 0x271b);
      FUN_00420f60(local_104,pBVar1);
      goto LAB_00406ddc;
    }
    pBVar1 = FUN_0041f970(DAT_004a811c,(param_4 != 0) + 0x2722);
  }
  else {
    pBVar1 = FUN_0041f970(DAT_004a811c,(-(uint)(param_4 != 0) & 2) + 0x2766);
  }
  FUN_00420f60(local_104,pBVar1);
LAB_00406ddc:
  SetWindowTextA(hWnd,(LPCSTR)local_104);
  return;
}


