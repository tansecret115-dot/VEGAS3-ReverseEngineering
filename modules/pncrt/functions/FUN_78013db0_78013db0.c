/* Module: pncrt.dll
   Function: FUN_78013db0
   Address: 78013db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78013db0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = -1;
  pcVar3 = DAT_780424ec;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  DAT_780424e8 = (uint)(iVar2 == -5);
  iVar2 = -1;
  pcVar3 = DAT_780424f0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  DAT_780424e0 = (uint)(iVar2 == -5);
  DAT_780424dc = 0;
  if (DAT_780424e8 == 0) {
    DAT_780424e4 = FUN_780146c0(DAT_780424ec);
  }
  else {
    DAT_780424e4 = 2;
  }
  EnumSystemLocalesA((LOCALE_ENUMPROCA)&LAB_78013e40,1);
  if ((((DAT_780424f4 & 0x100) == 0) || ((DAT_780424f4 & 0x200) == 0)) || ((DAT_780424f4 & 7) == 0))
  {
    DAT_780424f4 = 0;
  }
  return;
}


