/* Module: sfxpfx2.dll
   Function: FUN_5c8c6060
   Address: 5c8c6060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8c6060(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_5c8ec380;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


