/* Module: stl2plg.dll
   Function: FUN_00420970
   Address: 00420970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420970(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004759d0;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


