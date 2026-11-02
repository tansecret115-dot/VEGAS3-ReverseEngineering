/* Module: dsetup.dll
   Function: FUN_00405715
   Address: 00405715
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405715(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0040af20;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_0040adf0 = 0;
  _DAT_0040ae0c = 0;
  DAT_0040b024 = 0;
  DAT_0040ae00 = 0;
  DAT_0040ae04 = 0;
  DAT_0040ae08 = 0;
  return;
}


