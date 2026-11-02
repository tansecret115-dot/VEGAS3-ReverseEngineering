/* Module: vfplugs.dll
   Function: FUN_00401280
   Address: 00401280
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR FUN_00401280(LPWSTR param_1,LPCSTR param_2,int param_3,UINT param_4)

{
  *param_1 = L'\0';
  MultiByteToWideChar(param_4,0,param_2,-1,param_1,param_3);
  return param_1;
}


