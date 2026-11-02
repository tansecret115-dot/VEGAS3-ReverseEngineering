/* Module: sfnetmedia.dll
   Function: FUN_0042ae90
   Address: 0042ae90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042ae90(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00444300;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


