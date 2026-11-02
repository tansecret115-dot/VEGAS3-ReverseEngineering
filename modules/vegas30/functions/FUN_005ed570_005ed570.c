/* Module: vegas30.exe
   Function: FUN_005ed570
   Address: 005ed570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005ed570(char *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*param_1 == '\0') goto LAB_005ed5af;
  iVar3 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar3 + 0x18) & 2) != 2) {
    bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
    iVar2 = *(int *)(iVar3 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 0x10);
    }
  }
LAB_005ed5a5:
  do {
    if (*param_1 == '\0') {
LAB_005ed5af:
      iVar2 = 0;
      iVar4 = iVar3;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar4 = iVar3;
    }
    if (iVar4 == iVar2) {
      return;
    }
    iVar3 = iVar4;
    if (*(int *)(iVar4 + 8) != 0) {
      if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x18) & 2) != 2)) {
        iVar3 = *(int *)(iVar4 + 0x14);
        if ((*(byte *)(iVar3 + 0x18) & 2) == 2) {
          do {
            iVar3 = *(int *)(iVar4 + 0xc);
            if (*(int *)(iVar3 + 0x10) == iVar4) break;
            iVar4 = iVar3;
          } while ((*(byte *)(iVar3 + 0x18) & 2) != 2);
        }
        else {
          bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
          iVar2 = *(int *)(iVar3 + 0x10);
          while ((bVar1 & 2) != 2) {
            bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar2 + 0x10);
          }
        }
      }
      goto LAB_005ed5a5;
    }
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x18) & 2) != 2)) {
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar2 = iVar4;
      if ((*(byte *)(iVar3 + 0x18) & 2) == 2) {
        do {
          iVar3 = *(int *)(iVar2 + 0xc);
          if (*(int *)(iVar3 + 0x10) == iVar2) break;
          iVar2 = iVar3;
        } while ((*(byte *)(iVar3 + 0x18) & 2) != 2);
      }
      else {
        bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
        iVar2 = *(int *)(iVar3 + 0x10);
        while ((bVar1 & 2) != 2) {
          bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar2 + 0x10);
        }
      }
    }
    iVar2 = FUN_005ec1d0(iVar4);
    if (iVar2 < 0) {
      return;
    }
  } while( true );
}


