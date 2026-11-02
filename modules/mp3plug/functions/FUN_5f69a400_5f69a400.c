/* Module: mp3plug.dll
   Function: FUN_5f69a400
   Address: 5f69a400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_5f69a400(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar3 = 0;
  pbVar5 = &DAT_5f73d040;
  pbVar4 = param_1;
  pbVar6 = pbVar5;
LAB_5f69a413:
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < *pbVar4;
    if (bVar1 == *pbVar4) {
      if (bVar1 != 0) {
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_5f69a437;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
        if (bVar1 != 0) goto LAB_5f69a413;
      }
      iVar2 = 0;
    }
    else {
LAB_5f69a437:
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar2 == 0) {
      return &DAT_5f73d040 + iVar3 * 0x14;
    }
    pbVar5 = pbVar6 + 0x14;
    iVar3 = iVar3 + 1;
    pbVar4 = param_1;
    pbVar6 = pbVar5;
    if ((byte *)0x5f73d607 < pbVar5) {
      return (undefined1 *)0x0;
    }
  } while( true );
}


