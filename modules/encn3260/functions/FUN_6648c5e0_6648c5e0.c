/* Module: encn3260.dll
   Function: FUN_6648c5e0
   Address: 6648c5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_6648c5e0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  bool bVar7;
  
  iVar4 = 0;
  ppuVar6 = &PTR_DAT_664e2848;
  do {
    pbVar5 = *ppuVar6;
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_6648c616:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_6648c61b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_6648c616;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_6648c61b:
    if (iVar3 == 0) {
      return (&PTR_s_Continue_664e284c)[iVar4 * 2];
    }
    ppuVar6 = ppuVar6 + 2;
    iVar4 = iVar4 + 1;
    if (0x664e29a7 < (int)ppuVar6) {
      return &DAT_664f05c4;
    }
  } while( true );
}


