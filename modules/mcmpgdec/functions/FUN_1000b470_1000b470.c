/* Module: mcmpgdec.dll
   Function: FUN_1000b470
   Address: 1000b470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b470(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _DAT_10036550 = &DAT_10035cc0;
  puVar2 = &DAT_1003190c;
  puVar3 = &DAT_10035cc0;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_10036560 = &DAT_100364d0;
  puVar2 = &DAT_10031b0c;
  puVar3 = &DAT_100364d0;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_10036570 = &DAT_10036520;
  puVar2 = &DAT_10031b4c;
  puVar3 = &DAT_10036520;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


