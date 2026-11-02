/* Module: wmfdist2.exe
   Function: FUN_0100428b
   Address: 0100428b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100428b(LPCSTR param_1)

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


