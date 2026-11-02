/* Module: mp3plug.dll
   Function: FUN_5f6d8e40
   Address: 5f6d8e40
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5f6d8e40(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (in_EAX != (char *)0x0) {
    iVar2 = 0;
    cVar1 = *in_EAX;
    pcVar4 = in_EAX;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = *pcVar4;
    }
    pcVar3 = (char *)FUN_5f6d9760(iVar2 + 1);
    pcVar4 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      do {
        cVar1 = *in_EAX;
        in_EAX = in_EAX + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    return pcVar3;
  }
  return (char *)0x0;
}


