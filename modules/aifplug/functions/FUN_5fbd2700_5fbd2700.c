/* Module: aifplug.dll
   Function: FUN_5fbd2700
   Address: 5fbd2700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd2700(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  BYTE *pBVar1;
  LPSTR lpMultiByteStr;
  uchar local_104 [260];
  
  *param_2 = L'\0';
  if (param_4 == 1) {
    lpMultiByteStr = FUN_5fbd9b50(DAT_5fc0963c,0x3f6);
    MultiByteToWideChar(0,1,lpMultiByteStr,-1,param_2,param_3);
    param_2[param_3 + -1] = L'\0';
    return 0;
  }
  if (param_4 != 2) {
    if (param_4 == 3) {
      pBVar1 = (BYTE *)FUN_5fbd9b50(DAT_5fc0963c,0x3f7);
      FUN_5fbe2c50(local_104,pBVar1);
      MultiByteToWideChar(0,1,(LPCSTR)local_104,-1,param_2,param_3);
      param_2[param_3 + -1] = L'\0';
    }
    return 1;
  }
  FUN_5fbe19c0(*(ushort **)(param_1 + 0x50),local_104);
  MultiByteToWideChar(0,1,(LPCSTR)local_104,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


