/* Module: Setup.exe
   Function: _SfGetFileNamePtrA@4
   Address: 00411af0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * _SfGetFileNamePtrA_4(LPCSTR param_1)

{
  char cVar1;
  LPCSTR pCVar2;
  
                    /* 0x11af0  146  _SfGetFileNamePtrA@4 */
  cVar1 = *param_1;
  pCVar2 = param_1;
  while (cVar1 != '\0') {
    if ((cVar1 == ':') || (cVar1 == '\\')) {
      pCVar2 = param_1 + 1;
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  return pCVar2;
}


