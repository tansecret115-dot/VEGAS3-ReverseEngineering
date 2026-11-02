/* Module: sfxpfx1.dll
   Function: FUN_5c983770
   Address: 5c983770
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_5c983770(LPSTR param_1,LPCSTR param_2,int param_3)

{
  lstrcpynA(param_1,param_2,param_3);
  param_1[param_3 + -1] = '\0';
  return param_1;
}


