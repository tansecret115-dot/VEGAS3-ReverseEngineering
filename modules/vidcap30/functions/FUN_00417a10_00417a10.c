/* Module: vidcap30.exe
   Function: FUN_00417a10
   Address: 00417a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417a10(undefined4 param_1,LPSTR param_2,LPCSTR param_3,int param_4)

{
  char cVar1;
  int iVar2;
  LPSTR pCVar3;
  CHAR *pCVar4;
  int iVar5;
  
  SfPrintF(param_3,&DAT_00587af0,param_1);
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    param_3 = CharNextA(param_3);
    cVar1 = *param_3;
  }
  if (DAT_005ba994 == 0) {
    param_2 = (LPSTR)_SfGetFileNamePtrA_4(param_2);
  }
  iVar2 = lstrlenA(param_2);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      if (*param_2 == '&') {
        *param_3 = '&';
        param_3 = CharNextA(param_3);
      }
      pCVar3 = CharNextA(param_2);
      for (pCVar4 = param_2; pCVar4 != pCVar3; pCVar4 = pCVar4 + 1) {
        *param_3 = *pCVar4;
        param_3 = param_3 + 1;
      }
      param_2 = CharNextA(param_2);
    } while ((iVar5 + -1 < param_4) && (iVar5 = iVar5 + 1, iVar5 < iVar2));
  }
  *param_3 = '\0';
  return iVar5;
}


