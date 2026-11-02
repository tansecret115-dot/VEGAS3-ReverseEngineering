/* Module: sctplug.dll
   Function: FUN_00418420
   Address: 00418420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418420(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0043f2d8;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


