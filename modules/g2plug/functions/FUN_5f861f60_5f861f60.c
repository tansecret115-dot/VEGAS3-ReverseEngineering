/* Module: g2plug.dll
   Function: FUN_5f861f60
   Address: 5f861f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f861f60(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_5f89a238;
  for (iVar1 = 0xa03; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


