/* Module: pncrt.dll
   Function: FUN_7800bf80
   Address: 7800bf80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7800bf80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &_mbctype;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_78042400 = 0;
  DAT_78042844 = 0;
  DAT_78042404 = 0;
  _DAT_78042408 = 0;
  _DAT_7804240c = 0;
  _DAT_78042410 = 0;
  return;
}


