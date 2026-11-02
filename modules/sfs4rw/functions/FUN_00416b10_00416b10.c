/* Module: sfs4rw.dll
   Function: FUN_00416b10
   Address: 00416b10
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_00416b10(LPSTR param_1,LPCSTR param_2,int param_3)

{
  lstrcpynA(param_1,param_2,param_3);
  param_1[param_3 + -1] = '\0';
  return param_1;
}


