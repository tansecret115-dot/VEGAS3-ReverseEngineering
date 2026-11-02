/* Module: vegas30.exe
   Function: FUN_005ed0e0
   Address: 005ed0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005ed0e0(char *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if ((*param_1 != '\0') && (iVar2 = *(int *)(param_1 + 8), (*(byte *)(iVar2 + 0x18) & 2) != 2)) {
    bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
    iVar4 = *(int *)(iVar2 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar2 = iVar4;
      iVar4 = *(int *)(iVar4 + 0x10);
    }
  }
  do {
    while( true ) {
      do {
        if (*param_1 == '\0') {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0xc);
        }
        if (iVar2 == iVar4) {
          return 0x8004e00a;
        }
        if (*(int *)(*(int *)(iVar2 + 4) + 0x164) == param_2) {
          *param_3 = *(undefined4 *)(iVar2 + 4);
          return 0;
        }
      } while ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x18) & 2) == 2));
      iVar4 = *(int *)(iVar2 + 0x14);
      iVar3 = iVar2;
      if ((*(byte *)(iVar4 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar2 = iVar4;
      iVar4 = *(int *)(iVar4 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
        iVar2 = iVar4;
        iVar4 = *(int *)(iVar4 + 0x10);
      }
    }
    do {
      iVar2 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar2 + 0x10) == iVar3) break;
      iVar3 = iVar2;
    } while ((*(byte *)(iVar2 + 0x18) & 2) != 2);
  } while( true );
}


