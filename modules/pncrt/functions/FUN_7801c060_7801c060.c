/* Module: pncrt.dll
   Function: FUN_7801c060
   Address: 7801c060
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR __cdecl FUN_7801c060(int param_1,LPCWSTR param_2,undefined4 *param_3,undefined4 *param_4)

{
  LPCWSTR pWVar1;
  int iVar2;
  LPWSTR pWVar3;
  
  pWVar1 = param_2;
  iVar2 = FUN_7801cbd0(&param_2,param_3,param_4,&param_2,&param_4);
  if (iVar2 == -1) {
    return (LPWSTR)0xffffffff;
  }
  pWVar3 = FUN_7801c930(param_1,pWVar1,param_2,param_4);
  free(param_2);
  free(param_4);
  return pWVar3;
}


