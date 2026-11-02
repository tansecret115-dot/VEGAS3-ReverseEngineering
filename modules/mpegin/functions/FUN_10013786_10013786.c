/* Module: mpegin.dll
   Function: FUN_10013786
   Address: 10013786
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10013786(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1001c820;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1001c6f8 = 0;
  _DAT_1001c70c = 0;
  DAT_1001c924 = 0;
  DAT_1001c700 = 0;
  DAT_1001c704 = 0;
  DAT_1001c708 = 0;
  return;
}


