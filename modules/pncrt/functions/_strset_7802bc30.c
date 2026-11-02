/* Module: pncrt.dll
   Function: _strset
   Address: 7802bc30
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _strset(char *_Str,int _Val)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
                    /* 0x2bc30  467  _strset */
  iVar2 = -1;
  pcVar3 = _Str;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = _Str;
  for (iVar2 = -(iVar2 + 2); iVar2 != 0; iVar2 = iVar2 + -1) {
    *pcVar3 = (char)_Val;
    pcVar3 = pcVar3 + 1;
  }
  return _Str;
}


