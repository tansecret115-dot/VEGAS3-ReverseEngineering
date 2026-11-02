/* Module: pncrt.dll
   Function: FUN_7801b1c0
   Address: 7801b1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR __cdecl FUN_7801b1c0(LPCSTR param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  LPSTR pCVar3;
  
  pCVar1 = param_1;
  iVar2 = FUN_7801c680(&param_1,param_2,param_3,&param_1,&param_3);
  if (iVar2 == -1) {
    return (LPSTR)0xffffffff;
  }
  pCVar3 = FUN_7801c3f0(2,pCVar1,param_1,param_3);
  free(param_1);
  free(param_3);
  return pCVar3;
}


