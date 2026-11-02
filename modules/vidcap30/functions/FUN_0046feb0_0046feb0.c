/* Module: vidcap30.exe
   Function: FUN_0046feb0
   Address: 0046feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046feb0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x18) & 2) != 2)) {
    iVar2 = *(int *)(iVar2 + 0x14);
    if ((*(byte *)(iVar2 + 0x18) & 2) == 2) {
      while( true ) {
        iVar2 = *param_1;
        iVar3 = *(int *)(iVar2 + 0xc);
        *param_1 = iVar3;
        if (*(int *)(iVar3 + 0x10) == iVar2) break;
        if ((*(byte *)(iVar3 + 0x18) & 2) == 2) {
          return;
        }
      }
    }
    else {
      *param_1 = iVar2;
      bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
      while ((bVar1 & 2) != 2) {
        iVar2 = *(int *)(*param_1 + 0x10);
        *param_1 = iVar2;
        bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
      }
    }
  }
  return;
}


