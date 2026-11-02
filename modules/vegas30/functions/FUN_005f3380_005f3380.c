/* Module: vegas30.exe
   Function: FUN_005f3380
   Address: 005f3380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f3380(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = (char *)FUN_005ec620();
  if (pcVar2 == (char *)0x0) {
    return 1;
  }
  iVar3 = 0;
  if ((*pcVar2 != '\0') && (iVar3 = *(int *)(pcVar2 + 8), (*(byte *)(iVar3 + 0x18) & 2) != 2)) {
    bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
    iVar4 = *(int *)(iVar3 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar4 + 0x10);
    }
  }
  while( true ) {
    if (*pcVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(pcVar2 + 0xc);
    }
    if (iVar3 == iVar4) break;
    if (*(int *)(*(int *)(iVar3 + 4) + 0x140) != 0) {
      return 0;
    }
    FUN_00436e20();
  }
  return 1;
}


