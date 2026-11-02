/* Module: rmme3260.dll
   Function: FUN_66250920
   Address: 66250920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66250920(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  char *pcVar4;
  LPCSTR pCVar5;
  
  pcVar4 = (char *)*param_1;
  pCVar5 = (LPCSTR)0x0;
  cVar1 = *pcVar4;
  while (cVar1 != '\0') {
    iVar3 = FUN_66250900(cVar1);
    if ((iVar3 == 0) || (bVar2 = FUN_66265570(pcVar4,*pcVar4), CONCAT31(extraout_var,bVar2) == 0)) {
      pCVar5 = (LPCSTR)0x0;
    }
    else if (pCVar5 == (LPCSTR)0x0) {
      pCVar5 = pcVar4;
    }
    pcVar4 = FUN_66265540(pcVar4);
    cVar1 = *pcVar4;
  }
  if (pCVar5 != (LPCSTR)0x0) {
    *pCVar5 = '\0';
    *(int *)(*param_1 + -8) = (int)pCVar5 - *param_1;
  }
  return;
}


