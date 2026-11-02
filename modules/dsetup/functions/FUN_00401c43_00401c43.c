/* Module: dsetup.dll
   Function: FUN_00401c43
   Address: 00401c43
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_00401c43(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  for (pcVar3 = param_1 + (~uVar2 - 1); pcVar3 != param_1; pcVar3 = pcVar3 + -1) {
    if (*pcVar3 == '.') {
      return pcVar3 + 1;
    }
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return param_1 + (~uVar2 - 1);
}


