/* Module: wmfplug2.dll
   Function: FUN_00427900
   Address: 00427900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427900(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0048c1f0;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


