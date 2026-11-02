/* Module: pncrt.dll
   Function: FUN_7801bc20
   Address: 7801bc20
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR __cdecl FUN_7801bc20(LPCWSTR param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPCWSTR pWVar1;
  int iVar2;
  LPWSTR pWVar3;
  
  pWVar1 = param_1;
  iVar2 = FUN_7801cbd0(&param_1,param_2,param_3,&param_1,&param_3);
  if (iVar2 == -1) {
    return (LPWSTR)0xffffffff;
  }
  pWVar3 = FUN_7801c930(2,pWVar1,param_1,param_3);
  free(param_1);
  free(param_3);
  return pWVar3;
}


