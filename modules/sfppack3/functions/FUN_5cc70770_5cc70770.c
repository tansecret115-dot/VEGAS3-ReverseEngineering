/* Module: sfppack3.dll
   Function: FUN_5cc70770
   Address: 5cc70770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc70770(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_5cc9b288;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


