/* Module: vegas30.exe
   Function: FUN_005f8ed0
   Address: 005f8ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_005f8ed0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_1 == (char *)0x0) {
    param_1 = DAT_0065e17c;
  }
  cVar2 = *param_1;
  while ((cVar2 != '\0' &&
         ((((cVar2 == ' ' || (cVar2 == ',')) || (cVar2 == '\t')) ||
          ((cVar2 == '\n' || (cVar2 == '\r'))))))) {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  bVar4 = *param_1 == '\"';
  if (bVar4) {
    param_1 = param_1 + 1;
  }
  if (*param_1 != '\0') {
    DAT_0065e17c = param_1 + 1;
    bVar3 = false;
    cVar2 = *DAT_0065e17c;
    while (cVar2 != '\0') {
      if (bVar4) {
        if (cVar2 == '\"') {
          *DAT_0065e17c = '\0';
          DAT_0065e17c = DAT_0065e17c + 1;
          bVar3 = true;
          break;
        }
      }
      else if (((cVar2 == ' ') || (cVar2 == ',')) ||
              ((cVar2 == '\t' || ((cVar2 == '\n' || (cVar2 == '\r')))))) {
        *DAT_0065e17c = '\0';
        DAT_0065e17c = DAT_0065e17c + 1;
        return param_1;
      }
      DAT_0065e17c = DAT_0065e17c + 1;
      cVar2 = *DAT_0065e17c;
    }
    if (!bVar4) {
      return param_1;
    }
    if (bVar3) {
      return param_1;
    }
  }
  DAT_0065e17c = (char *)0x0;
  return (char *)0x0;
}


