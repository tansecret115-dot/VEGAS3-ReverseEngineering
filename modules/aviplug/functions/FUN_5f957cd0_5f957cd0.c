/* Module: aviplug.dll
   Function: FUN_5f957cd0
   Address: 5f957cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f957cd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5f967430(*(int *)(param_1 + 0x24));
  puVar2 = (undefined4 *)(param_1 + 0x80);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


