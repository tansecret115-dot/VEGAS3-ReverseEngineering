/* Module: vegas30.exe
   Function: FUN_005ed1b0
   Address: 005ed1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005ed1b0(char *param_1,code *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = -0x7ffb1ff6;
  if ((*param_1 != '\0') && (iVar4 = *(int *)(param_1 + 8), (*(byte *)(iVar4 + 0x18) & 2) != 2)) {
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
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0xc);
        }
        if (iVar4 == iVar3) {
          return iVar2;
        }
        iVar2 = (*param_2)(*(undefined4 *)(iVar4 + 4),param_3);
        if (iVar2 != 1) {
          if (iVar2 == 0) {
            *param_4 = *(undefined4 *)(iVar4 + 4);
            return 0;
          }
          if (iVar2 < 0) {
            return iVar2;
          }
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


