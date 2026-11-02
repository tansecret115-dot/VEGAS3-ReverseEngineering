/* Module: vegas30k.dll
   Function: FUN_01151e20
   Address: 01151e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01151e20(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_011e72d8;
  do {
    if (param_1 < *puVar1) break;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_011e72fc);
  return iVar2 + 1;
}


