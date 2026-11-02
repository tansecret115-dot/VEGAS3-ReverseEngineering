/* Module: oggplug.dll
   Function: FUN_00441010
   Address: 00441010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441010(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_005167a0 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_005163a0;
    do {
      uVar1 = FUN_00441050(iVar3);
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5167a0);
    DAT_005167a0 = 0;
  }
  return;
}


