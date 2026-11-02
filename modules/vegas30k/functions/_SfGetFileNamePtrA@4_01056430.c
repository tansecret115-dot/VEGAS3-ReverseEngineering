/* Module: vegas30k.dll
   Function: _SfGetFileNamePtrA@4
   Address: 01056430
   Source: Ghidra pseudocode (Stage 10 batch) */


char * _SfGetFileNamePtrA_4(LPCSTR param_1)

{
  char cVar1;
  char *pcVar2;
  
                    /* 0x56430  949  _SfGetFileNamePtrA@4 */
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    if ((cVar1 == ':') || (cVar1 == '\\')) {
      pcVar2 = param_1 + 1;
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  return pcVar2;
}


