/* Module: encn3260.dll
   Function: FUN_664d79b0
   Address: 664d79b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664d79b0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    iVar3 = isupper((int)cVar2);
    if (iVar3 != 0) {
      iVar3 = tolower((int)*param_1);
      *param_1 = (char)iVar3;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


