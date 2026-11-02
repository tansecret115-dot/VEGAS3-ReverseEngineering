/* Module: vidcap30.exe
   Function: FUN_004a0530
   Address: 004a0530
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR FUN_004a0530(LPCSTR param_1,int param_2)

{
  char cVar1;
  
  if (param_2 < 1) {
    return param_1;
  }
  do {
    cVar1 = *param_1;
    while ((cVar1 != '\0' && (cVar1 != '\\'))) {
      param_1 = CharNextA(param_1);
      cVar1 = *param_1;
    }
    if (*param_1 == '\\') {
      param_1 = CharNextA(param_1);
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return param_1;
}


