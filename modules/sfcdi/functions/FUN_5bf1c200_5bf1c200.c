/* Module: sfcdi.dll
   Function: FUN_5bf1c200
   Address: 5bf1c200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1c200(HWND param_1,int param_2)

{
  int iVar1;
  uchar *_Source;
  uchar local_50 [80];
  
  SetDlgItemTextA(param_1,0x48f,"");
  SetDlgItemTextA(param_1,0x490,"");
  SetDlgItemTextA(param_1,0x491,"");
  SetDlgItemTextA(param_1,0x492,"");
  iVar1 = FUN_5bf1c1d0(param_2);
  if (iVar1 == 0) {
    _Source = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x929);
    _mbscpy(local_50,_Source);
  }
  else if (*(int *)(iVar1 + 0x1ac) < 1) {
    FUN_5bf25750(local_50,"%s");
  }
  else {
    FUN_5bf25750(local_50,(BYTE *)"%c: %s");
  }
  SetDlgItemTextA(param_1,0x48f,(LPCSTR)local_50);
  UpdateWindow(param_1);
  return;
}


