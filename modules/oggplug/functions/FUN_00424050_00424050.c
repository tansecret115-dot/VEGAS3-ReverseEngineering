/* Module: oggplug.dll
   Function: FUN_00424050
   Address: 00424050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424050(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00513b78;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


