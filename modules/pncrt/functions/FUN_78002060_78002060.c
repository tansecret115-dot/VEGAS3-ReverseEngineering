/* Module: pncrt.dll
   Function: FUN_78002060
   Address: 78002060
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_78002060(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *DAT_78041aac;
  if (cVar1 == '\0') {
    return 0;
  }
  if (('/' < cVar1) && (cVar1 < ':')) {
    DAT_78041aac = DAT_78041aac + 1;
    return cVar1 + -0x2f;
  }
  iVar2 = 0;
  while (cVar1 != '@') {
    if (cVar1 == '\0') {
      return 0;
    }
    if ((cVar1 < 'A') || ('P' < cVar1)) goto LAB_780020c2;
    DAT_78041aac = DAT_78041aac + 1;
    iVar2 = iVar2 * 0x10 + -0x41 + (int)cVar1;
    cVar1 = *DAT_78041aac;
  }
  cVar1 = *DAT_78041aac;
  DAT_78041aac = DAT_78041aac + 1;
  if (cVar1 != '@') {
LAB_780020c2:
    iVar2 = -1;
  }
  return iVar2;
}


