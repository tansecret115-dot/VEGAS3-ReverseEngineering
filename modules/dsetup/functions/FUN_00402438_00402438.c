/* Module: dsetup.dll
   Function: FUN_00402438
   Address: 00402438
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402438(undefined4 param_1,undefined4 param_2,LPWSTR param_3,int param_4)

{
  int iVar1;
  LPCSTR lpMultiByteStr;
  undefined4 local_8;
  
  if ((((DAT_0040aa60 != 0) || (iVar1 = FUN_00401c7b((LPCSTR)0x0,&local_8), iVar1 != 0)) &&
      (lpMultiByteStr = _malloc(param_4 + 2), lpMultiByteStr != (LPCSTR)0x0)) &&
     ((DAT_0040aa60 != 0 || (iVar1 = FUN_00401c7b((LPCSTR)0x0,&local_8), iVar1 != 0)))) {
    (*DAT_0040aa88)(param_2,lpMultiByteStr,param_4);
    iVar1 = MultiByteToWideChar(0,0,lpMultiByteStr,-1,param_3,0);
    if ((iVar1 <= param_4) &&
       (iVar1 = MultiByteToWideChar(0,0,lpMultiByteStr,-1,param_3,param_4), iVar1 != 0)) {
      return 1;
    }
    FUN_0040310c(lpMultiByteStr);
  }
  return 0;
}


