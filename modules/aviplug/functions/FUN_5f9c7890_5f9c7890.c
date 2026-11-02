/* Module: aviplug.dll
   Function: FUN_5f9c7890
   Address: 5f9c7890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9c7890(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_5fa186b0;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


