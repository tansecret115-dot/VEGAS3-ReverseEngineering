/* Module: mpgvout.001
   Function: FUN_10001f04
   Address: 10001f04
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001f04(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _DAT_1003f890 = &DAT_1003f000;
  puVar2 = &DAT_10033000;
  puVar3 = &DAT_1003f000;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_1003f8a0 = &DAT_1003f810;
  puVar2 = &DAT_10033200;
  puVar3 = &DAT_1003f810;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_1003f8b0 = &DAT_1003f860;
  puVar2 = &DAT_10033240;
  puVar3 = &DAT_1003f860;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


