/* Module: pncrt.dll
   Function: FUN_78014260
   Address: 78014260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78014260(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = -1;
  pcVar3 = DAT_780424f0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  DAT_780424e0 = (uint)(iVar2 == -5);
  EnumSystemLocalesA((LOCALE_ENUMPROCA)&LAB_780142a0,1);
  if ((DAT_780424f4 & 4) == 0) {
    DAT_780424f4 = 0;
  }
  return;
}


