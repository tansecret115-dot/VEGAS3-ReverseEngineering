/* Module: sfs4rw.dll
   Function: FUN_00406760
   Address: 00406760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406760(HWND param_1,int param_2)

{
  char cVar1;
  int dwNewLong;
  LPCSTR lpString;
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041fea0(param_1,(HFONT)0x0);
  SetDlgItemTextA(param_1,0x1f45,&DAT_004a82d5);
  SetDlgItemTextA(param_1,0x1f41,(LPCSTR)(dwNewLong + 0x100));
  if (*(int *)(dwNewLong + 0x254) == 0) {
    cVar1 = *(char *)(dwNewLong + 0x10b);
    lpString = (LPCSTR)(dwNewLong + 0x10b);
  }
  else {
    cVar1 = *(char *)(dwNewLong + 0x13d);
    lpString = (LPCSTR)(dwNewLong + 0x13d);
  }
  if (cVar1 == '\0') {
    lpString = FUN_0041f970(DAT_004a811c,0x2714);
  }
  SetDlgItemTextA(param_1,0x1f42,lpString);
  return 1;
}


