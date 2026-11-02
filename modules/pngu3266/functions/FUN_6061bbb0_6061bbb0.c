/* Module: pngu3266.dll
   Function: FUN_6061bbb0
   Address: 6061bbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_6061bbb0(LPCSTR param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  LPCSTR pCVar4;
  LPCSTR pCVar5;
  
  iVar2 = FUN_6061baa0();
  if (iVar2 == 0) {
    pcVar3 = strrchr(param_1,(int)param_2);
    return pcVar3;
  }
  pCVar5 = (LPCSTR)0x0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    pCVar4 = FUN_6061bac0(param_1);
    if (((pCVar4 == (LPCSTR)0x0) || ((int)pCVar4 - (int)param_1 == 1)) && (*param_1 == param_2)) {
      pCVar5 = param_1;
    }
    param_1 = pCVar4;
    cVar1 = *pCVar4;
  }
  return pCVar5;
}


