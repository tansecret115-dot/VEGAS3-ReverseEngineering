/* Module: vegas30.exe
   Function: FUN_00598c00
   Address: 00598c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00598c00(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = (char *)FUN_005ec620();
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  iVar3 = 0;
  if (*pcVar2 == '\0') goto LAB_00598c51;
  iVar3 = *(int *)(pcVar2 + 8);
  if ((*(byte *)(iVar3 + 0x18) & 2) != 2) {
    bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
    iVar5 = *(int *)(iVar3 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
      iVar3 = iVar5;
      iVar5 = *(int *)(iVar5 + 0x10);
    }
  }
  do {
    while( true ) {
      do {
        if (*pcVar2 == '\0') {
LAB_00598c51:
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(pcVar2 + 0xc);
        }
        if (iVar3 == iVar5) {
          return 0;
        }
        if ((*(byte *)(*(int *)(iVar3 + 4) + 0x134) & 8) != 0) {
          return 1;
        }
      } while ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x18) & 2) == 2));
      iVar5 = *(int *)(iVar3 + 0x14);
      iVar4 = iVar3;
      if ((*(byte *)(iVar5 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
      iVar3 = iVar5;
      iVar5 = *(int *)(iVar5 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
        iVar3 = iVar5;
        iVar5 = *(int *)(iVar5 + 0x10);
      }
    }
    do {
      iVar3 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar3 + 0x10) == iVar4) break;
      iVar4 = iVar3;
    } while ((*(byte *)(iVar3 + 0x18) & 2) != 2);
  } while( true );
}


