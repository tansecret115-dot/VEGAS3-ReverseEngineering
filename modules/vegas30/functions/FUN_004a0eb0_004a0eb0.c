/* Module: vegas30.exe
   Function: FUN_004a0eb0
   Address: 004a0eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a0eb0(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_005b83b0(*(undefined4 *)(param_1 + 0xbc8),1);
  pcVar2 = (char *)FUN_005bad20(*(undefined4 *)(param_1 + 0xbc8));
  iVar4 = 0;
  if (*pcVar2 == '\0') goto LAB_004a0f10;
  iVar4 = *(int *)(pcVar2 + 8);
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
        if (*pcVar2 == '\0') {
LAB_004a0f10:
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(pcVar2 + 0xc);
        }
        if (iVar4 == iVar3) {
          FUN_005b84d0(*(undefined4 *)(param_1 + 0xbc8),1);
          DAT_0064767c = DAT_0064767c | 0x200;
          return;
        }
        FUN_005f0fb0();
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


