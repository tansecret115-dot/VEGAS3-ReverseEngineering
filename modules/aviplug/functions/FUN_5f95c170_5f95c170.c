/* Module: aviplug.dll
   Function: FUN_5f95c170
   Address: 5f95c170
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f95c170(undefined4 param_1,int param_2,byte *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_3 != (byte *)0x0) {
    if ((*(short *)param_3 == 3) || (*(short *)param_3 == 1)) {
      iVar3 = 0x10;
    }
    else {
      iVar3 = *(ushort *)(param_3 + 0x10) + 0x12;
    }
    pbVar4 = *(byte **)(param_2 + 0x10);
    sVar1 = *(short *)pbVar4;
    if ((sVar1 == 3) || (sVar1 == 1)) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = *(ushort *)(pbVar4 + 0x10) + 0x12;
    }
    if (iVar3 == iVar2) {
      if ((sVar1 == 3) || (sVar1 == 1)) {
        iVar3 = 0x10;
      }
      else {
        iVar3 = *(ushort *)(pbVar4 + 0x10) + 0x12;
      }
      bVar5 = false;
      iVar2 = 0;
      bVar6 = true;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *param_3 < *pbVar4;
        bVar6 = *param_3 == *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if (!bVar6) {
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      }
      DAT_5f9f41a4 = (uint)(iVar2 == 0);
    }
  }
  return DAT_5f9f41a4 == 0;
}


