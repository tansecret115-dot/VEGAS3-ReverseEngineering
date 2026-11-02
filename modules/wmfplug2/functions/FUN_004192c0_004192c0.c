/* Module: wmfplug2.dll
   Function: FUN_004192c0
   Address: 004192c0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_004192c0(int *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  FUN_00419310(param_1);
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\0') {
    return (char *)0x0;
  }
  while( true ) {
    cVar2 = *(char *)*param_1;
    if (((cVar2 == ' ') || (cVar2 == '\t')) || (cVar2 == '\n')) break;
    if ((cVar2 == '\r') || (pcVar1 = (char *)*param_1 + 1, *param_1 = (int)pcVar1, *pcVar1 == '\0'))
    break;
  }
  if (*(char *)*param_1 != '\0') {
    *(char *)*param_1 = '\0';
    *param_1 = *param_1 + 1;
  }
  return pcVar3;
}


