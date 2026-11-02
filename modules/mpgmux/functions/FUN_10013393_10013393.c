/* Module: mpgmux.dll
   Function: FUN_10013393
   Address: 10013393
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10013393(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1001b420;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1001b2f8 = 0;
  _DAT_1001b30c = 0;
  DAT_1001b524 = 0;
  DAT_1001b300 = 0;
  DAT_1001b304 = 0;
  DAT_1001b308 = 0;
  return;
}


