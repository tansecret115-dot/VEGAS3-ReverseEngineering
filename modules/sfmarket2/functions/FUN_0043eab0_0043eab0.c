/* Module: sfmarket2.dll
   Function: FUN_0043eab0
   Address: 0043eab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043eab0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004ad2d8;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


