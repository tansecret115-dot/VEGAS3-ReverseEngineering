/* Module: extmondrv.dll
   Function: FUN_004279d0
   Address: 004279d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004279d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0045e068;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


