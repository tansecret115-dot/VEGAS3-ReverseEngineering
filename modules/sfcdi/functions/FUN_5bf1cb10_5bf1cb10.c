/* Module: sfcdi.dll
   Function: FUN_5bf1cb10
   Address: 5bf1cb10
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_5bf1cb10(LPSTR param_1,LPCSTR param_2,int param_3)

{
  lstrcpynA(param_1,param_2,param_3 + 1);
  param_1[param_3] = '\0';
  return param_1 + param_3;
}


