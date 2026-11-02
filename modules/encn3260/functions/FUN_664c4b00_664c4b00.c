/* Module: encn3260.dll
   Function: FUN_664c4b00
   Address: 664c4b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664c4b00(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_664f28d2;
  iVar2 = 10;
  do {
    *puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 0xe);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


