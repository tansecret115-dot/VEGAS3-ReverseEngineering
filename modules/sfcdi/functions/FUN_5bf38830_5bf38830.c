/* Module: sfcdi.dll
   Function: FUN_5bf38830
   Address: 5bf38830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf38830(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_5bf78f88;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


