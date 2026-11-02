/* Module: pncrt.dll
   Function: FUN_7801b760
   Address: 7801b760
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR __cdecl FUN_7801b760(int param_1,LPCSTR param_2,undefined4 *param_3,undefined4 *param_4)

{
  LPCSTR pCVar1;
  int iVar2;
  LPSTR pCVar3;
  
  pCVar1 = param_2;
  iVar2 = FUN_7801c680(&param_2,param_3,param_4,&param_2,&param_4);
  if (iVar2 == -1) {
    return (LPSTR)0xffffffff;
  }
  pCVar3 = FUN_7801c3f0(param_1,pCVar1,param_2,param_4);
  free(param_2);
  free(param_4);
  return pCVar3;
}


