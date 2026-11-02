/* Module: dsetup.dll
   Function: FUN_00401c14
   Address: 00401c14
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_00401c14(char *param_1)

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
  pcVar3 = param_1 + (~uVar2 - 1);
  while( true ) {
    if (pcVar3 == param_1) {
      return param_1;
    }
    if ((*pcVar3 == '\\') || (*pcVar3 == ':')) break;
    pcVar3 = pcVar3 + -1;
  }
  return pcVar3 + 1;
}


