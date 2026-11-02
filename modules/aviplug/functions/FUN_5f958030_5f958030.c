/* Module: aviplug.dll
   Function: FUN_5f958030
   Address: 5f958030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f958030(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x28);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


