/* Module: qt4plug.dll
   Function: FUN_5f51d490
   Address: 5f51d490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51d490(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  BYTE *pBVar1;
  uchar *lpMultiByteStr;
  uchar local_100 [256];
  
  if (param_4 == 1) {
    lpMultiByteStr = (uchar *)(param_1 + 0x80);
  }
  else {
    if (param_4 != 2) {
      return 1;
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      return 1;
    }
    pBVar1 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x1b3);
    FUN_5f52c900(local_100,pBVar1);
    lpMultiByteStr = local_100;
  }
  MultiByteToWideChar(0,1,(LPCSTR)lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


