/* Module: vegas30.exe
   Function: FUN_005ec560
   Address: 005ec560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ec560(char *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar4 = 0;
  if (*param_1 == '\0') goto LAB_005ec5a9;
  iVar4 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar4 + 0x18) & 2) != 2) {
    bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
    iVar3 = *(int *)(iVar4 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 0x10);
    }
  }
  do {
    while( true ) {
      do {
        if (*param_1 == '\0') {
LAB_005ec5a9:
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0xc);
        }
        if ((iVar4 == iVar3) || (iVar2 = FUN_005ebfb0(*(undefined4 *)(iVar4 + 4)), iVar2 < 0)) {
          return iVar2;
        }
      } while ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x18) & 2) == 2));
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar5 = iVar4;
      if ((*(byte *)(iVar3 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar3 + 0x10);
      }
    }
    do {
      iVar4 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar4 + 0x10) == iVar5) break;
      iVar5 = iVar4;
    } while ((*(byte *)(iVar4 + 0x18) & 2) != 2);
  } while( true );
}


