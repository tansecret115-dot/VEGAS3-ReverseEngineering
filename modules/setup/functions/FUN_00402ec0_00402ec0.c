/* Module: Setup.exe
   Function: FUN_00402ec0
   Address: 00402ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402ec0(LPCSTR param_1)

{
  char cVar1;
  
  if (param_1 != (LPCSTR)0x0) {
    while( true ) {
      cVar1 = *param_1;
      while ((cVar1 != '\0' && (cVar1 != '/'))) {
        param_1 = CharNextA(param_1);
        cVar1 = *param_1;
      }
      if (*param_1 == '\0') break;
      *param_1 = '-';
    }
  }
  return;
}


