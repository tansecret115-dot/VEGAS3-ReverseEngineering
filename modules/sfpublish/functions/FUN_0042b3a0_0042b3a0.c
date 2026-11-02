/* Module: sfpublish.dll
   Function: FUN_0042b3a0
   Address: 0042b3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042b3a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00444200;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


