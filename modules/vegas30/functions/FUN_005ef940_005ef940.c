/* Module: vegas30.exe
   Function: FUN_005ef940
   Address: 005ef940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ef940(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  if (DAT_0064a474 != 0) {
    pcVar3 = (char *)FUN_005bad20(param_1);
    if (pcVar3 != (char *)0x0) {
      iVar5 = 0;
      if ((*pcVar3 != '\0') && (iVar5 = *(int *)(pcVar3 + 8), (*(byte *)(iVar5 + 0x18) & 2) != 2)) {
        bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
        iVar4 = *(int *)(iVar5 + 0x10);
        while ((bVar1 & 2) != 2) {
          bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
          iVar5 = iVar4;
          iVar4 = *(int *)(iVar4 + 0x10);
        }
      }
      do {
        if (*pcVar3 == '\0') {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(pcVar3 + 0xc);
        }
        if (iVar5 == iVar4) {
          return 0;
        }
        FUN_005ed450(iVar5);
        FUN_005eed00(param_1,*(undefined4 *)(iVar5 + 4));
        iVar4 = iVar5;
        if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x18) & 2) != 2)) {
          iVar4 = *(int *)(iVar5 + 0x14);
          iVar6 = iVar5;
          if ((*(byte *)(iVar4 + 0x18) & 2) == 2) {
            do {
              iVar4 = *(int *)(iVar6 + 0xc);
              if (*(int *)(iVar4 + 0x10) == iVar6) break;
              iVar6 = iVar4;
            } while ((*(byte *)(iVar4 + 0x18) & 2) != 2);
          }
          else {
            bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
            iVar6 = *(int *)(iVar4 + 0x10);
            while ((bVar1 & 2) != 2) {
              bVar1 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
              iVar4 = iVar6;
              iVar6 = *(int *)(iVar6 + 0x10);
            }
          }
        }
        FUN_005b83b0(param_1,1);
        FUN_005ed4a0(iVar5,0,0);
        FUN_005b84d0(param_1,1);
        iVar5 = iVar4;
      } while( true );
    }
    uVar2 = 0x80004005;
  }
  return uVar2;
}


