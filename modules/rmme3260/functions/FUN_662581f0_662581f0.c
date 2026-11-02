/* Module: rmme3260.dll
   Function: FUN_662581f0
   Address: 662581f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662581f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_6627f0da;
  iVar2 = 10;
  do {
    *puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 0xe);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


