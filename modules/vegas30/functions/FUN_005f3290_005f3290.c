/* Module: vegas30.exe
   Function: FUN_005f3290
   Address: 005f3290
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_005f3290(LPSTR param_1,LPCSTR param_2,int param_3)

{
  lstrcpynA(param_1,param_2,param_3);
  param_1[param_3 + -1] = '\0';
  return param_1;
}


