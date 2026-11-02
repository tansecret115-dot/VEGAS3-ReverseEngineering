/* Module: wmfplug2.dll
   Function: FUN_004046f0
   Address: 004046f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004046f0(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  BYTE *pBVar1;
  uchar *lpMultiByteStr;
  uint uVar2;
  uchar local_100 [256];
  
  if (param_4 == 1) {
    lpMultiByteStr = (uchar *)(param_1 + 0x6c);
  }
  else if (param_4 == 2) {
    if (*(short *)(param_1 + 0x52) == 1) {
      uVar2 = 0x1ba;
    }
    else {
      uVar2 = 0x1bb;
    }
    FUN_0041ff60(DAT_00489e30,uVar2);
    pBVar1 = (BYTE *)FUN_0041ff60(DAT_00489e30,0x1b9);
    FUN_00425a40(local_100,pBVar1);
    lpMultiByteStr = local_100;
  }
  else {
    if (param_4 != 3) {
      return 1;
    }
    pBVar1 = (BYTE *)FUN_0041ff60(DAT_00489e30,0x46);
    FUN_00425a40(local_100,pBVar1);
    lpMultiByteStr = local_100;
  }
  MultiByteToWideChar(0,1,(LPCSTR)lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


