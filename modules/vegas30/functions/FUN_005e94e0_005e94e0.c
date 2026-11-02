/* Module: vegas30.exe
   Function: FUN_005e94e0
   Address: 005e94e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e94e0(undefined4 param_1,char *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_3;
  *param_3 = 0;
  iVar4 = 0;
  if ((*param_2 != '\0') && (iVar4 = *(int *)(param_2 + 8), (*(byte *)(iVar4 + 0x18) & 2) != 2)) {
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
        if (*param_2 == '\0') {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_2 + 0xc);
        }
        if (iVar4 == iVar3) {
          return;
        }
        param_3 = (int *)0x0;
        iVar3 = FUN_005e9350(param_1,*(undefined4 *)(iVar4 + 4),&param_3);
        if (iVar3 < 0) {
          return;
        }
        *piVar2 = *piVar2 + (int)param_3;
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


