/* Module: vegas30k.dll
   Function: DtGetCommonRootPath
   Address: 01017380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* char * __stdcall DtGetCommonRootPath(char *,char *) */

char * DtGetCommonRootPath(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
                    /* 0x17380  47  ?DtGetCommonRootPath@@YGPADPAD0@Z */
  cVar3 = *param_1;
  pcVar2 = param_1;
  pcVar4 = param_1;
  if (cVar3 == *param_2) {
    do {
      param_1 = pcVar4;
      if ((cVar3 != '\\') && (param_1 = pcVar2, cVar3 == '\0')) goto LAB_010173c0;
      cVar3 = pcVar4[1];
      pcVar1 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
      param_2 = param_2 + 1;
      pcVar2 = param_1;
    } while (cVar3 == *pcVar1);
  }
  if (((*pcVar4 == '\0') && (*param_2 == '\\')) || ((*param_2 == '\0' && (*pcVar4 == '\\')))) {
LAB_010173c0:
    param_1 = pcVar4;
  }
  return param_1;
}


