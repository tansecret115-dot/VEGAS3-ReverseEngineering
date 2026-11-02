/* Module: atrc3260.dll
   Function: FUN_68003cf0
   Address: 68003cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_68003cf0(LPCSTR param_1,char param_2)

{
  int iVar1;
  char *pcVar2;
  LPCSTR pCVar3;
  
  iVar1 = FUN_68003ca0();
  if (iVar1 == 0) {
    pcVar2 = strchr(param_1,(int)param_2);
    return pcVar2;
  }
  if (param_1 != (LPCSTR)0x0) {
    while (*param_1 != '\0') {
      pCVar3 = FUN_68003cc0(param_1);
      if (((pCVar3 == (LPCSTR)0x0) || ((int)pCVar3 - (int)param_1 == 1)) && (*param_1 == param_2)) {
        return param_1;
      }
      param_1 = pCVar3;
      if (pCVar3 == (LPCSTR)0x0) {
        return (char *)0x0;
      }
    }
  }
  return (char *)0x0;
}


