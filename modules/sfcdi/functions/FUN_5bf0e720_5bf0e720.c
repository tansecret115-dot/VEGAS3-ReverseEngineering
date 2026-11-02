/* Module: sfcdi.dll
   Function: FUN_5bf0e720
   Address: 5bf0e720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0e720(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_2 + 9);
  while (((bVar1 = *pbVar2, 0x2f < bVar1 && (bVar1 < 0x3a)) || ((0x40 < bVar1 && (bVar1 < 0x5b)))))
  {
    pbVar2 = pbVar2 + 1;
    if (0xb < (int)(pbVar2 + (-9 - param_2))) {
      return 0;
    }
  }
  return 1;
}


