/* Module: vidcap30.exe
   Function: FUN_0046e5f0
   Address: 0046e5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0046e5f0(char *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*param_1 == '\0') goto LAB_0046e62f;
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
  do {
    while( true ) {
      do {
        if (*param_1 == '\0') {
LAB_0046e62f:
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0xc);
        }
        if (iVar3 == iVar2) {
          if (*(int *)(param_1 + 0x1c) != 0) {
            DAT_005ba50c = DAT_005ba50c | 0x100;
          }
          return 0;
        }
        FUN_00471030(0);
      } while ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x18) & 2) == 2));
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar4 = iVar3;
      if ((*(byte *)(iVar2 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar2 + 0x10);
      }
    }
    do {
      iVar3 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar3 + 0x10) == iVar4) break;
      iVar4 = iVar3;
    } while ((*(byte *)(iVar3 + 0x18) & 2) != 2);
  } while( true );
}


