/* Module: sfpaplug.dll
   Function: FUN_004073f0
   Address: 004073f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004073f0(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  BYTE *pBVar1;
  uchar *lpMultiByteStr;
  uchar local_104 [260];
  
  *param_2 = L'\0';
  FUN_004075e0(param_1);
  if (param_4 == 1) {
    lpMultiByteStr = (uchar *)FUN_004161c0(DAT_0045c04c,0x3fc);
  }
  else {
    if (param_4 != 2) {
      if (param_4 == 3) {
        pBVar1 = (BYTE *)FUN_004161c0(DAT_0045c04c,0x3fd);
        FUN_00419320(local_104,pBVar1);
        MultiByteToWideChar(0,1,(LPCSTR)local_104,-1,param_2,param_3);
        param_2[param_3 + -1] = L'\0';
      }
      return 1;
    }
    FUN_0042beb0(*(ushort **)(param_1 + 0x50),local_104);
    lpMultiByteStr = local_104;
  }
  MultiByteToWideChar(0,1,(LPCSTR)lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


