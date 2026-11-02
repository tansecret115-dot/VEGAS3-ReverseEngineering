/* Module: pncrt.dll
   Function: FUN_78013830
   Address: 78013830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78013830(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_78013846;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_78013846:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}


