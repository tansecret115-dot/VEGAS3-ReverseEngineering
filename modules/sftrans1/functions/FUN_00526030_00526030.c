/* Module: sftrans1.dll
   Function: FUN_00526030
   Address: 00526030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00526030(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0061e7f0;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


