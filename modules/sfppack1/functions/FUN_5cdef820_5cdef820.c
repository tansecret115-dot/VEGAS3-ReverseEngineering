/* Module: sfppack1.dll
   Function: FUN_5cdef820
   Address: 5cdef820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdef820(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_5ce23b84;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_5ce23c88;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


