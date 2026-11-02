/* Module: mcplug.dll
   Function: FUN_0041e000
   Address: 0041e000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e000(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0048a298;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


