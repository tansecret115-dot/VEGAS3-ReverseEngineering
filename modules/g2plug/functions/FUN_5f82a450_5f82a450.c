/* Module: g2plug.dll
   Function: FUN_5f82a450
   Address: 5f82a450
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_5f82a450(LPSTR param_1,LPCSTR param_2,int param_3)

{
  lstrcpynA(param_1,param_2,param_3);
  param_1[param_3 + -1] = '\0';
  return param_1;
}


