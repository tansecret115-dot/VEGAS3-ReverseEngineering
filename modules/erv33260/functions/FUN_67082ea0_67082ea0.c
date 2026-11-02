/* Module: erv33260.dll
   Function: FUN_67082ea0
   Address: 67082ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67082ea0(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar3 = 0;
  pbVar4 = &DAT_67090a80;
  do {
    pbVar1 = pbVar4 + 1;
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 2;
    (&DAT_6718d7d8)[(uint)bVar2 + (uint)*pbVar1 * 9] = bVar3;
    bVar3 = bVar3 + 1;
  } while (bVar3 < 0x51);
  return;
}


