/* Module: pncrt.dll
   Function: FUN_78014360
   Address: 78014360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78014360(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  byte local_8 [8];
  
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
LAB_7801440c:
    iVar3 = (*DAT_780424fc)(DAT_780424f8,0x1004,local_8,8);
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    pbVar4 = &DAT_78037724;
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_780143aa:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_780143af;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_780143aa;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_780143af:
    if (iVar3 == 0) goto LAB_7801440c;
    pbVar4 = &DAT_78037720;
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_780143e2:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_780143e7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_780143e2;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_780143e7:
    if (iVar3 != 0) goto LAB_78014433;
    iVar3 = (*DAT_780424fc)(DAT_780424f8,0xb,local_8,8);
    if (iVar3 == 0) {
      return;
    }
  }
  param_1 = local_8;
LAB_78014433:
  atol((char *)param_1);
  return;
}


