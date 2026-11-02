/* Module: InstMsi-x86w.exe
   Function: FUN_010040b0
   Address: 010040b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010040b0(LPCSTR param_1)

{
  LPCSTR lpsz;
  int iVar1;
  
  if (*param_1 != '\0') {
    lpsz = param_1 + 1;
    iVar1 = 0;
    if ((param_1[1] == ':') && (param_1[2] == '\\')) {
      lpsz = param_1 + 3;
    }
    else if ((*param_1 == '\\') && (param_1[1] == '\\')) {
      lpsz = param_1 + 2;
      iVar1 = 2;
    }
    for (; *lpsz != '\0'; lpsz = CharNextA(lpsz)) {
      if ((*lpsz == '\\') && (lpsz[-1] != ':')) {
        if (iVar1 == 0) {
          *lpsz = '\0';
          CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
          *lpsz = '\\';
        }
        else {
          iVar1 = iVar1 + -1;
        }
      }
    }
  }
  return;
}


