/* Module: vegas30.exe
   Function: FUN_004db260
   Address: 004db260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004db260(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 local_4 [4];
  
  if (param_1 != 0) {
    pcVar2 = (char *)FUN_005bad20(param_1);
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
      FUN_004dafb0(param_1,*(int *)(iVar3 + 4),*(int *)(iVar3 + 4) + 0x170,0,0,0,0,local_4);
      FUN_00436e20();
    }
  }
  return;
}


