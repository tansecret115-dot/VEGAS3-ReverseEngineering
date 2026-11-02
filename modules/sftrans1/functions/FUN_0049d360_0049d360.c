/* Module: sftrans1.dll
   Function: FUN_0049d360
   Address: 0049d360
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_0049d360(LPSTR param_1,LPCSTR param_2,int param_3)

{
  lstrcpynA(param_1,param_2,param_3);
  param_1[param_3 + -1] = '\0';
  return param_1;
}


