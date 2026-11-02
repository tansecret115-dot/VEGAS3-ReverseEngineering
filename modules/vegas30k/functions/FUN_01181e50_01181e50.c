/* Module: vegas30k.dll
   Function: FUN_01181e50
   Address: 01181e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01181e50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_01208978;
  for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


