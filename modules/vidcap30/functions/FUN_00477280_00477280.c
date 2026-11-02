/* Module: vidcap30.exe
   Function: FUN_00477280
   Address: 00477280
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_00477280(LPSTR param_1,LPCSTR param_2,int param_3)

{
  lstrcpynA(param_1,param_2,param_3);
  param_1[param_3 + -1] = '\0';
  return param_1;
}


